/*
 * XREFs of PWInsertAfter @ 0x1C0057E40
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C00573A4 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0057CAC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
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
