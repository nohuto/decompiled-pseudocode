/*
 * XREFs of RtlpSanitizeContextFlags @ 0x140426438
 * Callers:
 *     KiContinuePreviousModeUser @ 0x140008A84 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140135720 (KiRaiseException.c)
 *     KeCopyContextFromUch @ 0x1406AE268 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1406AE52C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1406AE6E0 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1406AE94C (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x1406DDE04 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1400FCB40 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(int *a1)
{
  __int64 result; // rax
  unsigned int *v2; // r10
  char v3; // r11

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result >= 0 && (*v2 & 0x100000) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( v3 )
    {
      *v2 = *v2 & 0xD800001F | 0x100000;
      return 0LL;
    }
  }
  return result;
}
