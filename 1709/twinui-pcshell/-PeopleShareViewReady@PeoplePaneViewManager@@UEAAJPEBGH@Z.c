/*
 * XREFs of ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1801121C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18008BCD0 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801134F8 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::PeopleShareViewReady(PeoplePaneViewManager *this, char *a2)
{
  PeoplePaneViewManager *v3; // r14
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rbp
  __int64 v6; // rbx
  __int64 i; // rsi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = (PeoplePaneViewManager *)((char *)this - 88);
  v4 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v5 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockShared(v5);
  v6 = *((_QWORD *)v3 + 18);
  for ( i = *((_QWORD *)v3 + 17); i != v6; i += 16LL )
  {
    v8 = *(_QWORD *)i;
    if ( *(_DWORD *)(*(_QWORD *)i + 60LL) == 1
      && !*(_QWORD *)(v8 + 48)
      && !(unsigned int)std::wstring::compare((char *)v8, a2) )
    {
      break;
    }
  }
  if ( i == v6 )
  {
    if ( v5 )
      ReleaseSRWLockShared(v5);
    goto LABEL_15;
  }
  std::shared_ptr<PeoplePaneViewInfo>::operator=(&v13, i);
  if ( v5 )
    ReleaseSRWLockShared(v5);
  v9 = PeoplePaneViewManager::HandleViewReady(v3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v4 = v14;
LABEL_15:
    v10 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1E6,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v9);
  v4 = v14;
LABEL_16:
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    {
      v11 = v14;
      (**(void (__fastcall ***)(__int64))v14)(v14);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return v10;
}
