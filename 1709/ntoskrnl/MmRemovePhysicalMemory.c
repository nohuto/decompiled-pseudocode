/*
 * XREFs of MmRemovePhysicalMemory @ 0x1406E04A0
 * Callers:
 *     <none>
 * Callees:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x140118318 (MiFreeContiguousPages.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  struct _KPRCB *v3; // rdx
  unsigned __int64 v4; // rbx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  struct _KPRCB *v7; // [rsp+70h] [rbp+8h] BYREF

  v3 = (struct _KPRCB *)((unsigned __int64)StartAddress->QuadPart >> 12);
  v7 = v3;
  v4 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  if ( v3 >= (struct _KPRCB *)((char *)v3 + v4) )
    return -1073741585;
  result = MiFindContiguousPages(
             (__int64)&MiSystemPartition,
             (unsigned __int64)v3,
             (unsigned __int64)v3 + v4 - 1,
             0LL,
             v4,
             1u,
             0x80000000,
             0x80000000,
             202375168,
             0LL,
             (__int64 *)&v7);
  if ( result >= 0 )
  {
    v6 = MiRemovePhysicalMemory(v7, v4, 16);
    if ( v6 < 0 )
      MiFreeContiguousPages((__int64)&MiSystemPartition, (unsigned __int64)v7, v4);
    else
      NumberOfBytes->QuadPart = v4 << 12;
    return v6;
  }
  return result;
}
