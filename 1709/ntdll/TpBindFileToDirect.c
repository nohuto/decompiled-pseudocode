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

__int64 __fastcall TpBindFileToDirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF

  if ( a1 && a2 && a3 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    v4 = *(_QWORD *)(a3 + 64);
    v6[1] = a2;
    v6[0] = v4;
    result = ZwSetInformationFile(a1, &v7, v6, 16LL, 30);
    if ( (int)result >= 0 )
    {
      TpAdjustBindingCount(a3, 1LL);
      return 0LL;
    }
  }
  else
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  return result;
}
