/*
 * XREFs of ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x18007C1A8
 * Callers:
 *     ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18007BB50 (-HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicatio.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18007BC20 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  BOOL v8; // r15d
  int v9; // eax
  unsigned __int64 v10; // rdi
  _QWORD *Ptr; // rax
  __int64 v12; // rcx
  char *v13; // r8
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+38h]
  struct IApplicationView *v15; // [rsp+90h] [rbp+48h]

  v4 = this + 24;
  AcquireSRWLockExclusive(this + 24);
  v15 = a2;
  v5 = 0LL;
  v6 = 0LL;
  if ( this[26].Ptr )
  {
    while ( 1 )
    {
      v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[25].Ptr + v6);
      v14 = v7;
      if ( v7 )
      {
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[1])(v7);
        v7 = v14;
      }
      v8 = SHIsSameObject(v7, (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v15) == 0;
      if ( v14 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v14)[2])(v14);
      if ( !v8 )
        break;
      if ( (PVOID)++v6 >= this[26].Ptr )
        goto LABEL_10;
    }
    v5 = v6;
    v9 = 0;
  }
  else
  {
LABEL_10:
    v9 = -2147319765;
  }
  v10 = -1LL;
  if ( v9 >= 0 )
    v10 = v5;
  if ( v10 != -1LL && (PVOID)v10 < this[26].Ptr )
  {
    Ptr = this[25].Ptr;
    v12 = Ptr[v10];
    if ( v12 )
    {
      Ptr[v10] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (char *)this[26].Ptr;
    if ( (char *)v10 != v13 - 1 )
      memmove((char *)this[25].Ptr + 8 * v10, (char *)this[25].Ptr + 8 * v10 + 8, 8LL * (_QWORD)&v13[-v10] - 8);
    --this[26].Ptr;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
