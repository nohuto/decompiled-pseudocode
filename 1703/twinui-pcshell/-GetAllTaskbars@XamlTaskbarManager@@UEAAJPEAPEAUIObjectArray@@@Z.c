/*
 * XREFs of ?GetAllTaskbars@XamlTaskbarManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180121020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B20 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlTaskbarManager::GetAllTaskbars(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  __int64 *v4; // rax
  const struct _GUID *v5; // rcx
  int Instance; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  _QWORD *Ptr; // rbx
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 33, &SRWLock);
  v15 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v15);
  Instance = CEnumerableObjectCollection::CreateInstance(v5, (void **)v4);
  v7 = Instance;
  if ( Instance >= 0 )
  {
    Ptr = this[10].Ptr;
    v10 = Ptr;
    while ( 1 )
    {
      Ptr = (_QWORD *)*Ptr;
      if ( Ptr == v10 )
        break;
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, Ptr[3]);
      v7 = Instance;
      if ( Instance < 0 )
      {
        v8 = 200LL;
        goto LABEL_8;
      }
    }
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v15)(
            v15,
            &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
            a2);
    v7 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v11);
  }
  else
  {
    v8 = 197LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
      (const char *)(unsigned int)Instance);
  }
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}
