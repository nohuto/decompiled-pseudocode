/*
 * XREFs of RtlpSanitizeContextFlags @ 0x14049D764
 * Callers:
 *     KiRaiseException @ 0x14000D500 (KiRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x1400DAA74 (KiContinuePreviousModeUser.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x1406D96B8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1406D997C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1406D9B30 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1406D9D9C (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x1407142BC (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14006A610 (RtlpValidateContextFlags.c)
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
