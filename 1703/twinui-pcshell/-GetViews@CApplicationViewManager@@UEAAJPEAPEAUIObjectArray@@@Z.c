/*
 * XREFs of ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1800720C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B20 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x180072DC0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViews(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  __int64 *v4; // rax
  const struct _GUID *v5; // rcx
  int Instance; // eax
  unsigned int v7; // edi
  __int64 v8; // rbp
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+18h]

  *a2 = 0LL;
  v14 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
  Instance = CEnumerableObjectCollection::CreateInstance(v5, (void **)v4);
  v7 = Instance;
  if ( Instance >= 0 )
  {
    v15 = this + 45;
    AcquireSRWLockShared(this + 45);
    v8 = 0LL;
    if ( this[47].Ptr )
    {
      while ( 1 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, *((_QWORD *)this[46].Ptr + v8));
        v7 = v9;
        if ( v9 < 0 )
          break;
        if ( (PVOID)++v8 >= this[47].Ptr )
          goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8F,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
      if ( this != (RTL_SRWLOCK *)-360LL )
        ReleaseSRWLockShared(this + 45);
    }
    else
    {
LABEL_9:
      if ( this != (RTL_SRWLOCK *)-360LL )
        ReleaseSRWLockShared(this + 45);
      CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
      v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v14)(
              v14,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a2);
      v7 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x88,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v7;
}
