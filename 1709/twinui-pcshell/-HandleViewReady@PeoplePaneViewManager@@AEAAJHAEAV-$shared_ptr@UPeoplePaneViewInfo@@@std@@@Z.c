/*
 * XREFs of ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801134F8
 * Callers:
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x180112100 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1801121C0 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1801137F8 (-FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::HandleViewReady(RTL_SRWLOCK *this, int a2, __int64 ***a3)
{
  RTL_SRWLOCK *v6; // rdi
  HWND v7; // rbx
  __int64 *v8; // rcx
  int PendingViewByHwnd; // eax
  struct IApplicationView *v10; // rbx
  __int64 **v11; // rsi
  __int64 *v12; // rcx
  int v13; // eax
  __int64 **v14; // rax
  __int64 *v15; // r8
  int v16; // eax
  unsigned int v17; // esi
  struct IApplicationView *v18; // rcx
  struct IApplicationView *v19; // rcx
  __int64 **v20; // rax
  __int64 *v21; // r8
  struct IApplicationView **Ptr; // rsi
  struct IApplicationView **i; // r14
  struct IApplicationView *v24; // rdi
  struct IApplicationView **v25; // rsi
  struct IApplicationView **j; // rdi
  struct IApplicationView *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IApplicationView *v33; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v34; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v35; // [rsp+78h] [rbp+48h]

  v6 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  *((_BYTE *)*a3 + 56) = 1;
  *((_DWORD *)*a3 + 10) = a2;
  v7 = (HWND)~a2;
  (*a3)[6] = (__int64 *)v7;
  v8 = (*a3)[9];
  if ( v8 )
  {
    (*a3)[9] = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v34 = 0LL;
  PendingViewByHwnd = PeoplePaneViewManager::FindPendingViewByHwnd((PeoplePaneViewManager *)this, v7, &v34);
  v10 = v34;
  if ( PendingViewByHwnd < 0 )
  {
LABEL_45:
    v17 = 0;
    goto LABEL_46;
  }
  AcquireSRWLockExclusive(this + 20);
  v35 = this + 20;
  v11 = *a3;
  if ( (*a3)[4] != (__int64 *)v10 )
  {
    if ( v10 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = v11[4];
    v11[4] = (__int64 *)v10;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *))(*(*a3)[4] + 32))((*a3)[4]);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x37A,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13);
  v14 = *a3;
  v15 = (__int64 *)*a3;
  if ( (unsigned __int64)(*a3)[3] >= 8 )
    v15 = *v14;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v15, *((unsigned int *)v14 + 10));
  v33 = 0LL;
  v16 = (*(__int64 (__fastcall **)(PVOID, struct IApplicationView **))(*(_QWORD *)this[42].Ptr + 72LL))(
          this[42].Ptr,
          &v33);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v19 = v33;
    if ( v33 == v10 )
    {
      v20 = *a3;
      v21 = (__int64 *)*a3;
      if ( (unsigned __int64)(*a3)[3] >= 8 )
        v21 = *v20;
      PeoplePaneViewManager::NotifyListeners(this, 2LL, v21, *((unsigned int *)v20 + 10));
      v19 = v33;
    }
    if ( v19 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( this != (RTL_SRWLOCK *)-160LL )
      ReleaseSRWLockExclusive(this + 20);
    Ptr = (struct IApplicationView **)this[22].Ptr;
    for ( i = (struct IApplicationView **)this[21].Ptr; i != Ptr; ++i )
    {
      v24 = *i;
      if ( *i )
      {
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v24 + 8LL))(*i);
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      if ( v24 == v10 )
        break;
    }
    v25 = (struct IApplicationView **)this[22].Ptr;
    if ( i == v25 )
    {
      v17 = -2147024809;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x389,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)0x80070057LL);
      goto LABEL_46;
    }
    for ( j = i + 1; j != v25; ++j )
    {
      v27 = 0LL;
      if ( &v33 != j )
      {
        v27 = *j;
        *j = 0LL;
      }
      v28 = (__int64)*(j - 1);
      *(j - 1) = v27;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = this[22].Ptr;
    v30 = *(v29 - 1);
    if ( v30 )
    {
      *(v29 - 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    this[22].Ptr = (char *)this[22].Ptr - 8;
    goto LABEL_45;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x382,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v16);
  v18 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( this != (RTL_SRWLOCK *)-160LL )
    ReleaseSRWLockExclusive(this + 20);
LABEL_46:
  if ( v10 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 16LL))(v10);
  return v17;
}
