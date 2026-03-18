/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1405B8358
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1401321E0 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140249930 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x140743784 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140743A40 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x140743BF4 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x140743E60 (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x1407784BC (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140131930 (RtlpValidateContextFlags.c)
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
