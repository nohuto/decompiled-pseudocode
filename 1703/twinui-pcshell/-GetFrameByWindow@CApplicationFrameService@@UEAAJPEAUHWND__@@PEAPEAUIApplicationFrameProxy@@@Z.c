/*
 * XREFs of ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18004C030
 * Callers:
 *     ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18004C460 (-OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18004C570 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DF80 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIAp.c)
 */

__int64 __fastcall CApplicationFrameService::GetFrameByWindow(
        CApplicationFrameService *this,
        HWND a2,
        struct IApplicationFrameProxy **a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r9
  signed int Interface; // edi
  __int64 v8; // r8
  HWND v9; // r10
  __int64 v10; // rdx
  bool i; // zf
  signed __int32 v12; // eax
  unsigned __int64 v13; // rdx
  HWND v14; // r10
  __int64 v15; // r8
  bool j; // zf
  signed __int32 v17; // eax

  *a3 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  Interface = -2147023728;
  do
  {
    if ( v4 >= *((_QWORD *)this + 12) )
      break;
    v8 = *((_QWORD *)this + 11);
    v9 = *(HWND *)(*(_QWORD *)(v8 + 8 * v4) + 48LL);
    Interface = a2 != v9 ? 0x80070490 : 0;
    if ( v9 == a2 )
    {
      v10 = *(_QWORD *)(v8 + 8 * v4);
      for ( i = v10 == 0; !i; i = v12 == _InterlockedCompareExchange(
                                           (volatile signed __int32 *)(v10 + 36),
                                           v12 + 1,
                                           v12) )
      {
        v12 = *(_DWORD *)(v10 + 36);
        if ( v12 == 0x7FFFFFFF )
          break;
      }
      v3 = *(_QWORD *)(v8 + 8 * v4);
    }
    ++v4;
  }
  while ( v9 != a2 );
  v13 = 0LL;
  if ( Interface >= 0 )
    goto LABEL_20;
  do
  {
    if ( v13 >= *((_QWORD *)this + 8) )
      break;
    v4 = *((_QWORD *)this + 7);
    v14 = *(HWND *)(*(_QWORD *)(v4 + 8 * v13) + 48LL);
    Interface = a2 != v14 ? 0x80070490 : 0;
    if ( v14 == a2 )
    {
      v15 = *(_QWORD *)(v4 + 8 * v13);
      for ( j = v15 == 0; !j; j = v17 == _InterlockedCompareExchange(
                                           (volatile signed __int32 *)(v15 + 36),
                                           v17 + 1,
                                           v17) )
      {
        v17 = *(_DWORD *)(v15 + 36);
        if ( v17 == 0x7FFFFFFF )
          break;
      }
      v3 = *(_QWORD *)(v4 + 8 * v13);
    }
    ++v13;
  }
  while ( v14 != a2 );
  if ( Interface >= 0 )
LABEL_20:
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  v3,
                  &GUID_7342f6ea_5b75_4f66_8b08_e40f686d2b41,
                  a3,
                  v4);
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  return (unsigned int)Interface;
}
