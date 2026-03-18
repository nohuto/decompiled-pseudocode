/*
 * XREFs of IopWaitForSynchronousIo @ 0x140022334
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, char a3)
{
  void *v3; // rbp
  int v4; // edi
  KPROCESSOR_MODE v8; // al
  NTSTATUS v9; // eax
  bool v11; // dl
  unsigned __int8 CurrentIrql; // al

  v3 = a2 + 38;
  v4 = a2[20] & 4;
  while ( 1 )
  {
    v8 = v4 ? a3 : 0;
    v9 = KeWaitForSingleObject(v3, Executive, v8, 1u, 0LL);
    if ( v9 != 257 && v9 != 192 )
      break;
    if ( !v4 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
    {
      v11 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !a2[39] )
        v11 = Irp->Cancel == 1;
      __writecr8(CurrentIrql);
      if ( !v11 )
        continue;
    }
    IopCancelAlertedRequest(v3, Irp);
    return a2[14];
  }
  return a2[14];
}
