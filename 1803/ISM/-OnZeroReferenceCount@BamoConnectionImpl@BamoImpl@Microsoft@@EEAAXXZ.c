/*
 * XREFs of ?OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18001AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18001B528 (-OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoConnectionImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 i; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 34) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1AB,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      a4);
    __debugbreak();
  }
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = *((_QWORD *)this + 9); i; i = *((_QWORD *)this + 9) )
    {
      v7 = *((_QWORD *)this + 5);
      LOBYTE(a4) = 1;
      *((_QWORD *)this + 9) = *(_QWORD *)(i + 56);
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const char *, __int64 (__fastcall *)(void *, unsigned int, unsigned int, const void *), _QWORD))(*(_QWORD *)v7 + 72LL))(
             v7,
             *(unsigned int *)(i + 36),
             0LL,
             a4,
             Microsoft::BamoImpl::BamoConnectionImpl::FreeProxyAtShutdown,
             0LL);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1D8,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          (const char *)(unsigned int)v8);
        JUMPOUT(0x18001AC66LL);
      }
      Microsoft::BamoImpl::BamoPeerImpl::OnDisconnected((Microsoft::BamoImpl::BamoPeerImpl *)i, 1);
      (**(void (__fastcall ***)(__int64))i)(i);
    }
    v9 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = (volatile signed __int32 *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v12 )
    {
      v13 = _InterlockedDecrement(v12 + 2);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
          a4);
        __debugbreak();
      }
      if ( !v13 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
    if ( v5 )
      (**v5)(v5, 1LL);
  }
}
