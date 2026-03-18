/*
 * XREFs of ?RemovePrincipal@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18016914C
 * Callers:
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180168CA0 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152DC4 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoConnectionImpl::RemovePrincipal(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 35) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x28B,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      a4);
    __debugbreak();
  }
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v9,
    this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(
         *((_QWORD *)this + 5),
         *((unsigned int *)this + 7),
         a2,
         0LL,
         &v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x298,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = v9;
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
}
