/*
 * XREFs of ?SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180054E40
 * Callers:
 *     ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180054270 (-Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800600C0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180067A9C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall MPCClickerProcessor::SendInputDetectedIfController(MPCClickerProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  int v5; // eax
  __int16 v6; // [rsp+20h] [rbp-B58h]
  __int16 v7; // [rsp+28h] [rbp-B50h]
  _BYTE v8[2848]; // [rsp+40h] [rbp-B38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B78h] [rbp+0h]

  memset(v8, 0, sizeof(v8));
  v7 = *((_WORD *)a2 + 34);
  v6 = *((_WORD *)a2 + 33);
  v4 = MPCInputInfoHelper::PopulateAugmentedInput(
         1LL,
         *(unsigned int *)a2,
         *((unsigned int *)a2 + 15),
         *((unsigned __int16 *)a2 + 32),
         v6,
         v7,
         v8);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xEB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180054F16LL);
  }
  v5 = MPCInputProviderBase::OnInputReport(this, (struct InputInfo *)v8);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v5);
}
