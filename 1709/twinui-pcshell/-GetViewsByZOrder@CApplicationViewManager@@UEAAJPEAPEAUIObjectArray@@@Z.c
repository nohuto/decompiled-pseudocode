/*
 * XREFs of ?GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180074E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x1800759F0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViewsByZOrder(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  __int64 *v4; // rax
  const struct _GUID *v5; // rcx
  int Instance; // eax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  LPARAM lParam[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char *v13; // [rsp+78h] [rbp+38h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IObjectArray **); // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v15; // [rsp+88h] [rbp+48h]

  *a2 = 0LL;
  v14 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v14);
  Instance = CEnumerableObjectCollection::CreateInstance(v5, (void **)v4);
  v7 = Instance;
  if ( Instance >= 0 )
  {
    v15 = this + 47;
    AcquireSRWLockShared(this + 47);
    LODWORD(v13) = 0;
    lParam[0] = (LPARAM)&v13;
    lParam[1] = (LPARAM)&this[-18];
    lParam[2] = (LPARAM)&v14;
    EnumWindows(EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_3410a86568d10ea920f7ee8e3deba990_>, (LPARAM)lParam);
    v7 = (unsigned int)v13;
    if ( (int)v13 >= 0 )
    {
      CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
      v8 = (**v14)(v14, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, a2);
      v7 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC5,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v8);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xBF,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
    }
    if ( this != (RTL_SRWLOCK *)-376LL )
      ReleaseSRWLockShared(this + 47);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x9F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
  }
  v9 = (__int64)v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
