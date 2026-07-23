/*
 * XREFs of TpBindFileToDirect @ 0x18000AB4C
 * Callers:
 *     TpAllocIoCompletion @ 0x18000A960 (TpAllocIoCompletion.c)
 *     RtlpTpIoLookup @ 0x1800900AC (RtlpTpIoLookup.c)
 *     RtlpTpIoAlloc @ 0x1800901F4 (RtlpTpIoAlloc.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     ZwSetInformationFile @ 0x1800A05A0 (ZwSetInformationFile.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpBindFileToDirect(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  NTSTATUS result; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK v7; // [rsp+40h] [rbp-18h] BYREF

  if ( a1 && a2 && a3 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    v4 = *(_QWORD *)(a3 + 64);
    v6[1] = a2;
    v6[0] = v4;
    result = ZwSetInformationFile(a1, &v7, v6, 0x10u, FileCompletionInformation);
    if ( result >= 0 )
    {
      TpAdjustBindingCount(a3, 1LL);
      return 0;
    }
  }
  else
  {
    TppRaiseInvalidParameter(a1, a2);
    return -1073741811;
  }
  return result;
}
