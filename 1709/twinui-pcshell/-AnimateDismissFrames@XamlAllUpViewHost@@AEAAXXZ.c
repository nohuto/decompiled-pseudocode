/*
 * XREFs of ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x18015AD84
 * Callers:
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x180159230 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x180157104 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18015CB30 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlAllUpViewHost::AnimateDismissFrames(XamlAllUpViewHost *this)
{
  RTL_SRWLOCK **v2; // rbx
  RTL_SRWLOCK **v3; // r14
  RTL_SRWLOCK *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // r9
  __int64 v6; // rsi
  int v7; // eax
  RTL_SRWLOCK *v8; // rcx
  XamlAllUpViewHost *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  XamlAllUpViewHost *v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h]
  XamlAllUpViewHost *v13; // [rsp+38h] [rbp-28h]
  RTL_SRWLOCK **v14; // [rsp+40h] [rbp-20h]
  RTL_SRWLOCK **v15; // [rsp+48h] [rbp-18h]
  RTL_SRWLOCK **v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]
  RTL_SRWLOCK *v18; // [rsp+A0h] [rbp+40h] BYREF
  XamlAllUpViewHost *v19; // [rsp+A8h] [rbp+48h]

  v12 = -2LL;
  if ( *((_QWORD *)this + 37) < (unsigned __int64)((__int64)(*((_QWORD *)this + 35) - *((_QWORD *)this + 34)) >> 3) )
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(this);
  v13 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 37);
  v19 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 37);
  v14 = (RTL_SRWLOCK **)*((_QWORD *)this + 35);
  v2 = v14;
  v15 = (RTL_SRWLOCK **)*((_QWORD *)this + 34);
  v3 = v15;
  if ( v15 != v14 )
  {
    v16 = &v18;
    do
    {
      v4 = *v3;
      v18 = v4;
      if ( v4 )
      {
        (*((void (__fastcall **)(RTL_SRWLOCK *))v4->Ptr + 1))(v4);
        v4 = v18;
      }
      v5 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)v19 + 23);
      v6 = 0LL;
      v10 = 0LL;
      if ( v5 )
      {
        v7 = (**v5)(v5, &_uuidof__AUIMonitorFrameDismissAnimationCallback__, &v10);
        if ( v7 < 0 )
          __abi_WinRTraiseException(v7);
        v4 = v18;
        v6 = v10;
      }
      v17 = v6;
      MonitorFrame::DismissAnimated(v4, v6);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v8 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 2))(v8);
      }
      ++v3;
    }
    while ( v3 != v2 );
  }
  v9 = v19;
  v11 = v19;
  v19 = 0LL;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 37, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(XamlAllUpViewHost *, __int64))(*(_QWORD *)v11 + 80LL))(v11, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)this + 37) )
  {
    (*(void (__fastcall **)(XamlAllUpViewHost *, __int64))(*(_QWORD *)this + 80LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
