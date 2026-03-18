/*
 * XREFs of IopWaitForSynchronousIo @ 0x140061054
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, char a3)
{
  _BYTE *v3; // rdi
  int v4; // esi
  NTSTATUS v9; // eax
  bool v10; // cl
  unsigned __int8 CurrentIrql; // al

  v3 = a2 + 38;
  v4 = a2[20] & 4;
  while ( (*v3 & 0x7F) != 0 || !a2[39] )
  {
    v9 = KeWaitForSingleObject(v3, Executive, v4 != 0 ? a3 : 0, 1u, 0LL);
    if ( v9 != 257 && v9 != 192 )
      break;
    if ( !v4 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
    {
      v10 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !a2[39] )
        v10 = Irp->Cancel == 1;
      __writecr8(CurrentIrql);
      if ( !v10 )
        continue;
    }
    IopCancelAlertedRequest(v3, Irp);
    return a2[14];
  }
  return a2[14];
}
