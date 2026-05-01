/*
 * XREFs of ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800EA098
 * Callers:
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1800E9140 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1800E9200 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800EA350 (-FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1800EA6E4 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::HandleViewReady(RTL_SRWLOCK *this, int a2, __int64 ***a3)
{
  HWND v6; // rbx
  int PendingViewByHwnd; // eax
  struct IApplicationView *v8; // rbx
  __int64 **v9; // rdi
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 *v12; // r8
  int v13; // eax
  unsigned int v14; // edi
  PSRWLOCK v15; // rcx
  PSRWLOCK v16; // rcx
  __int64 **v17; // rax
  __int64 *v18; // r8
  _QWORD *Ptr; // rsi
  _QWORD *i; // r14
  struct IApplicationView *v21; // rdi
  PSRWLOCK *v22; // rsi
  PSRWLOCK *v23; // rdi
  PSRWLOCK v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v31; // [rsp+70h] [rbp+40h] BYREF
  PSRWLOCK v32; // [rsp+78h] [rbp+48h] BYREF

  wil::srwlock::lock_exclusive(this + 12, &SRWLock);
  *((_BYTE *)*a3 + 56) = 1;
  *((_DWORD *)*a3 + 10) = a2;
  v6 = (HWND)~a2;
  (*a3)[6] = (__int64 *)v6;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v31 = 0LL;
  PendingViewByHwnd = PeoplePaneViewManager::FindPendingViewByHwnd((PeoplePaneViewManager *)this, v6, &v31);
  v8 = v31;
  if ( PendingViewByHwnd < 0 )
  {
LABEL_43:
    v14 = 0;
    goto LABEL_44;
  }
  wil::srwlock::lock_exclusive(this + 16, &v32);
  v9 = *a3;
  if ( (*a3)[4] != (__int64 *)v8 )
  {
    if ( v8 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = v9[4];
    v9[4] = (__int64 *)v8;
    if ( v10 )
      (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  }
  v11 = *a3;
  if ( (unsigned __int64)(*a3)[3] < 8 )
    v12 = (__int64 *)*a3;
  else
    v12 = *v11;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v12, *((unsigned int *)v11 + 10));
  SRWLock = 0LL;
  v13 = (*(__int64 (__fastcall **)(PVOID, PSRWLOCK *))(*(_QWORD *)this[20].Ptr + 72LL))(this[20].Ptr, &SRWLock);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v16 = SRWLock;
    if ( SRWLock == (PSRWLOCK)v8 )
    {
      v17 = *a3;
      if ( (unsigned __int64)(*a3)[3] < 8 )
        v18 = (__int64 *)*a3;
      else
        v18 = *v17;
      PeoplePaneViewManager::NotifyListeners(this, 2LL, v18, *((unsigned int *)v17 + 10));
      v16 = SRWLock;
    }
    if ( v16 )
    {
      SRWLock = 0LL;
      (*((void (__fastcall **)(PSRWLOCK))v16->Ptr + 2))(v16);
    }
    if ( v32 )
      ReleaseSRWLockExclusive(v32);
    Ptr = this[18].Ptr;
    for ( i = this[17].Ptr; i != Ptr; ++i )
    {
      v21 = (struct IApplicationView *)*i;
      if ( *i )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(*i);
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      if ( v21 == v8 )
        break;
    }
    if ( i == this[18].Ptr )
    {
      v14 = -2147024809;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2B0,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)0x80070057LL);
      goto LABEL_44;
    }
    v22 = (PSRWLOCK *)this[18].Ptr;
    v23 = (PSRWLOCK *)(i + 1);
    if ( i + 1 != v22 )
    {
      do
      {
        v24 = 0LL;
        if ( &SRWLock != v23 )
        {
          v24 = *v23;
          *v23 = 0LL;
        }
        v25 = (__int64)*(v23 - 1);
        *(v23 - 1) = v24;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        ++v23;
      }
      while ( v23 != v22 );
    }
    v26 = this[18].Ptr;
    v27 = *(v26 - 1);
    if ( v27 )
    {
      *(v26 - 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    this[18].Ptr = (char *)this[18].Ptr - 8;
    goto LABEL_43;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2A9,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v13);
  v15 = SRWLock;
  if ( SRWLock )
  {
    SRWLock = 0LL;
    (*((void (__fastcall **)(PSRWLOCK))v15->Ptr + 2))(v15);
  }
  if ( v32 )
    ReleaseSRWLockExclusive(v32);
LABEL_44:
  if ( v8 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v8 + 16LL))(v8);
  return v14;
}
