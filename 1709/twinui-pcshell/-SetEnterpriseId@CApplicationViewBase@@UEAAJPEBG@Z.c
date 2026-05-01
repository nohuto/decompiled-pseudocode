/*
 * XREFs of ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180085270
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef__&___ptr64_::Run @ 0x180081850 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef__-___ptr64.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__&___ptr64_::Run @ 0x1800840A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__-___ptr64.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007D3E0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetEnterpriseId(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v5; // rbx
  __int64 Ptr; // rdx
  const WCHAR *v7; // rcx
  const WCHAR *v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *ViewManager; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v16; // [rsp+88h] [rbp+20h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v16 = v4;
  if ( LOBYTE(this[4].Ptr) )
  {
    v5 = this + 5;
    Ptr = (__int64)this[6].Ptr;
    if ( Ptr == -1 )
    {
      if ( v5->Ptr )
      {
        Ptr = -1LL;
        do
          ++Ptr;
        while ( *((_WORD *)v5->Ptr + Ptr) );
      }
      else
      {
        LODWORD(Ptr) = 0;
      }
    }
    v7 = &word_18021F3A8;
    v8 = &word_18021F3A8;
    if ( a2 )
      v8 = a2;
    if ( v5->Ptr )
      v7 = (const WCHAR *)v5->Ptr;
    if ( CompareStringOrdinal(v7, Ptr, v8, -(a2 != 0LL), 0) != 2 )
    {
      v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             (__int64)&this[5],
             (__int64)a2,
             0xFFFFFFFFFFFFFFFFuLL);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xE9,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_21;
      }
      ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v15);
      CApplicationViewManager::RaiseApplicationViewChanged(
        *ViewManager + 144,
        (struct IObjectArray *)&this[-2],
        0x12u,
        0LL);
      v12 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 228), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 80) + 64LL))(v12 + 80, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
    }
    LOBYTE(this[4].Ptr) = 0;
  }
  v10 = 0;
LABEL_21:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v10;
}
