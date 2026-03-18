/*
 * XREFs of ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068410
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00682F4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall IsStillWindowC(unsigned __int64 a1)
{
  return a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL || HMValidateHandleNoSecure(a1, 1) != 0;
}
