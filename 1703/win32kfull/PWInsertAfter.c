/*
 * XREFs of PWInsertAfter @ 0x1C001FF60
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C001F4A0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001FDE4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall PWInsertAfter(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL )
    return a1;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( !result || *(char *)(result + 59) < 0 || !*(_QWORD *)(result + 104) )
    return 0LL;
  return result;
}
