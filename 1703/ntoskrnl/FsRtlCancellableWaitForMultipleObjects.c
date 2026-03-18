/*
 * XREFs of FsRtlCancellableWaitForMultipleObjects @ 0x1404AE9B0
 * Callers:
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x1404AE970 (FsRtlCancellableWaitForSingleObject.c)
 *     FsRtlQueryInformationFile @ 0x140685B40 (FsRtlQueryInformationFile.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x14006B3C0 (KeQueryTimeIncrement.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForMultipleObjects(
        ULONG Count,
        PVOID ObjectArray[],
        WAIT_TYPE WaitType,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray,
        PIRP Irp)
{
  LONGLONG QuadPart; // rbx
  __int64 v11; // rbx
  NTSTATUS result; // eax
  __int64 v13; // rdi

  QuadPart = 0LL;
  if ( Timeout )
  {
    QuadPart = Timeout->QuadPart;
    if ( Timeout->QuadPart < 0 )
    {
      v11 = MEMORY[0xFFFFF78000000320];
      QuadPart = v11 - Timeout->QuadPart / KeQueryTimeIncrement();
    }
  }
  while ( 1 )
  {
    result = Count == 1
           ? KeWaitForSingleObject(*ObjectArray, Executive, 0, 1u, Timeout)
           : KeWaitForMultipleObjects(Count, ObjectArray, WaitType, Executive, 0, 1u, Timeout, WaitBlockArray);
    if ( result != 257 )
      break;
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      return -1073741749;
    if ( Irp && Irp->Cancel )
      return -1073741536;
    if ( Timeout )
    {
      if ( Timeout->QuadPart >= 0 )
      {
        if ( MEMORY[0xFFFFF78000000014] >= QuadPart )
          return 258;
      }
      else
      {
        v13 = MEMORY[0xFFFFF78000000320];
        if ( MEMORY[0xFFFFF78000000320] >= QuadPart )
          return 258;
        Timeout->QuadPart = -((QuadPart - v13) * KeQueryTimeIncrement());
      }
    }
  }
  return result;
}
