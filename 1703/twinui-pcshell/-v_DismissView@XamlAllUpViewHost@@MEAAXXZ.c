/*
 * XREFs of ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x18012CB70
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18012C720 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAllUpViewHost::v_DismissView(XamlAllUpViewHost *this)
{
  __int64 v2; // rcx
  RTL_SRWLOCK **v3; // rbx
  RTL_SRWLOCK **v4; // rsi
  RTL_SRWLOCK *v5; // r14
  RTL_SRWLOCK *v6; // rcx
  __int64 *v7; // rsi
  __int64 *i; // rbx
  __int64 v9; // rcx
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK **v12; // [rsp+60h] [rbp+18h]

  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  v3 = (RTL_SRWLOCK **)*((_QWORD *)this + 30);
  v4 = (RTL_SRWLOCK **)*((_QWORD *)this + 29);
  if ( v4 != v3 )
  {
    v12 = &v10;
    do
    {
      v5 = *v4;
      v10 = v5;
      if ( v5 )
      {
        (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
        v5 = v10;
      }
      wil::srwlock::lock_exclusive(v5 + 16, &SRWLock);
      MonitorFrame::DestroyInternal((MonitorFrame *)v5);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      v6 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 2))(v6);
      }
      ++v4;
    }
    while ( v4 != v3 );
  }
  v7 = (__int64 *)*((_QWORD *)this + 30);
  for ( i = (__int64 *)*((_QWORD *)this + 29); i != v7; ++i )
  {
    v9 = *i;
    if ( *i )
    {
      *i = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  *((_QWORD *)this + 30) = *((_QWORD *)this + 29);
}
