/*
 * XREFs of ?GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18007B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18007DDE8 (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViewForHwnd(
        ApplicationViewManagerVisibilityDebouncer *this,
        HWND a2,
        struct IApplicationView **a3)
{
  int v6; // ebp
  RTL_SRWLOCK *v7; // rbx
  struct IApplicationView **v8; // rdi
  struct IApplicationView **v9; // rsi

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19));
  if ( v6 >= 0 )
    return (unsigned int)v6;
  v7 = (RTL_SRWLOCK *)((char *)this + 176);
  AcquireSRWLockShared((PSRWLOCK)this + 22);
  v8 = (struct IApplicationView **)*((_QWORD *)this + 23);
  v9 = &v8[*((_QWORD *)this + 24)];
  while ( 1 )
  {
    if ( v8 == v9 )
    {
      if ( v7 )
        ReleaseSRWLockShared(v7);
      return (unsigned int)v6;
    }
    if ( IsEqualByHwnd(a2, *v8) )
      break;
    ++v8;
  }
  if ( *v8 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*v8 + 8LL))(*v8);
  *a3 = *v8;
  if ( v7 )
    ReleaseSRWLockShared(v7);
  return 0LL;
}
