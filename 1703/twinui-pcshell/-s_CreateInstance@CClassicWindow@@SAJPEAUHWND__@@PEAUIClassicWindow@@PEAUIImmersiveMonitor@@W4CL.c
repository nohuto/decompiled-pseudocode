/*
 * XREFs of ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180033A10
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180034A10 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x1800353C0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIClassicWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037EB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIClassicWindow@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIClassicWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037F20 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIClassicWindow@@VNil@Details@WRL@Microsoft@@@De.c)
 *     ??$Make@VCClassicWindow@@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindow@@@12@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Z @ 0x180038310 (--$Make@VCClassicWindow@@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CL.c)
 */

__int64 __fastcall CClassicWindow::s_CreateInstance(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  unsigned int Interface; // edi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v8 = a1;
  v5 = a5;
  *a5 = 0LL;
  Microsoft::WRL::Details::Make<CClassicWindow,HWND__ * &,IClassicWindow * &,IImmersiveMonitor * &,enum CLASSIC_WINDOW_STATE &>(
    (unsigned int)&a5,
    (unsigned int)&v8,
    (unsigned int)&v9,
    (unsigned int)&v10,
    (__int64)&v11);
  Interface = a5 == 0LL ? 0x8007000E : 0;
  if ( a5 )
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IClassicWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  a5,
                  &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
                  v5);
  if ( a5 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IClassicWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(a5);
  return Interface;
}
