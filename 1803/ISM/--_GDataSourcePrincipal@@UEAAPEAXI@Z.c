/*
 * XREFs of ??_GDataSourcePrincipal@@UEAAPEAXI@Z @ 0x18002FD90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

DataSourcePrincipal *__fastcall DataSourcePrincipal::`scalar deleting destructor'(
        DataSourcePrincipal *this,
        char a2,
        __int64 a3,
        const char *a4)
{
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = _InterlockedDecrement(v6 + 2);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x18002FE0ALL);
    }
    if ( !v7 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
