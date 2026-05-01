/*
 * XREFs of ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18004E530
 * Callers:
 *     ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18004E990 (-OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18004EAA0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050630 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180050630.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameService::GetFrameByWindow(
        CApplicationFrameService *this,
        struct IApplicationFrameProxy **a2,
        struct IApplicationFrameProxy **a3)
{
  struct IApplicationFrameProxy *v3; // rbx
  HWND v4; // r9
  struct IApplicationFrameProxy **v5; // r11
  signed int Interface; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  struct IApplicationFrameProxy *v11; // rax
  struct IApplicationFrameProxy *v13; // [rsp+38h] [rbp+10h]

  *a3 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v4 = 0LL;
  v5 = a3;
  Interface = -2147023728;
  do
  {
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 14) )
      break;
    v8 = *((_QWORD *)this + 13);
    a3 = *(struct IApplicationFrameProxy ***)(*(_QWORD *)(v8 + 8LL * (_QWORD)v4) + 64LL);
    Interface = a2 != a3 ? 0x80070490 : 0;
    if ( a3 == a2 )
    {
      v9 = *(_QWORD *)(v8 + 8LL * (_QWORD)v4);
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 52));
      v3 = *(struct IApplicationFrameProxy **)(v8 + 8LL * (_QWORD)v4);
      v13 = v3;
    }
    v4 = (HWND)((char *)v4 + 1);
  }
  while ( a3 != a2 );
  v10 = 0LL;
  if ( Interface >= 0 )
    goto LABEL_16;
  do
  {
    if ( v10 >= *((_QWORD *)this + 10) )
      break;
    a3 = (struct IApplicationFrameProxy **)*((_QWORD *)this + 9);
    v4 = (HWND)*((_QWORD *)a3[v10] + 8);
    Interface = a2 != (struct IApplicationFrameProxy **)v4 ? 0x80070490 : 0;
    if ( v4 == (HWND)a2 )
    {
      v11 = a3[v10];
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)v11 + 13);
      v3 = a3[v10];
      v13 = v3;
    }
    ++v10;
  }
  while ( v4 != (HWND)a2 );
  if ( Interface >= 0 )
LABEL_16:
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::QueryInterface(
                  v3,
                  &GUID_7342f6ea_5b75_4f66_8b08_e40f686d2b41,
                  v5,
                  v4);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct IApplicationFrameProxy *, __int64, struct IApplicationFrameProxy **, HWND))(*(_QWORD *)v13 + 256LL))(
        v13,
        1LL,
        a3,
        v4);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)Interface;
}
