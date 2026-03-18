/*
 * XREFs of IopWaitForSynchronousIo @ 0x1400EE730
 * Callers:
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, char a3)
{
  _BYTE *v3; // rsi
  int v4; // edi
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
