/*
 * XREFs of ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x180157F70
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180157804 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAllUpViewHost::v_DismissView(XamlAllUpViewHost *this)
{
  __int64 v2; // rcx
  RTL_SRWLOCK **v3; // rbx
  RTL_SRWLOCK **v4; // r14
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rcx
  __int64 *v7; // rsi
  __int64 *i; // rbx
  __int64 v9; // rcx
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK **v11; // [rsp+68h] [rbp+10h]
  RTL_SRWLOCK *v12; // [rsp+70h] [rbp+18h]

  v2 = *((_QWORD *)this + 23);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v3 = (RTL_SRWLOCK **)*((_QWORD *)this + 35);
  v4 = (RTL_SRWLOCK **)*((_QWORD *)this + 34);
  if ( v4 != v3 )
  {
    v11 = &v10;
    do
    {
      v5 = *v4;
      v10 = v5;
      if ( v5 )
      {
        (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
        v5 = v10;
      }
      AcquireSRWLockExclusive(v5 + 22);
      v12 = v5 + 22;
      MonitorFrame::DestroyInternal((MonitorFrame *)v5);
      if ( v5 != (RTL_SRWLOCK *)-176LL )
        ReleaseSRWLockExclusive(v5 + 22);
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
  v7 = (__int64 *)*((_QWORD *)this + 35);
  for ( i = (__int64 *)*((_QWORD *)this + 34); i != v7; ++i )
  {
    v9 = *i;
    if ( *i )
    {
      *i = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  *((_QWORD *)this + 35) = *((_QWORD *)this + 34);
}
