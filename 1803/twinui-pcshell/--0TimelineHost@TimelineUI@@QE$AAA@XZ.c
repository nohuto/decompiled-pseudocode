/*
 * XREFs of ??0TimelineHost@TimelineUI@@QE$AAA@XZ @ 0x180206708
 * Callers:
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18009BC5C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180208BD0 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TimelineUI::TimelineHost::TimelineHost(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+30h] [rbp-10h]
  int v12; // [rsp+34h] [rbp-Ch]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, __int64, __int64 *); // [rsp+68h] [rbp+28h]
  __int64 v15; // [rsp+70h] [rbp+30h]

  v10 = 53LL;
  v11 = 192;
  v12 = 1174405120;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"TimelineUI.TimelineHost",
                                (struct Platform::Guid *)&v10,
                                (void **)&v13,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v13);
  v14 = v5;
  v6 = __abi_winrt_cast_to(1, v5, (__int64)&_uuidof__AVTimelineHost_TimelineUI__);
  v15 = v6;
  v7 = __abi_winrt_ptr_ctor(v6);
  v15 = v7;
  __abi_winrt_ptr_dtor(v6);
  __abi_winrt_ptr_dtor((__int64)v5);
  v8 = __abi_winrt_ptr_ctor(v7);
  __abi_winrt_ptr_dtor(v7);
  __abi_winrt_ptr_dtor(v13);
  return v8;
}
