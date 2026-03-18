/*
 * XREFs of ?OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Free@BamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x1801537E0 (-Free@BamoConnection@Bamo@Microsoft@@AEAAXXZ.c)
 *     ?OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153BEC (-OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoConnectionImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 i; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  Microsoft::BamoImpl::BamoImplObject *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 34) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1AB,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      a4);
    __debugbreak();
  }
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = *((_QWORD *)this + 9); i; i = *((_QWORD *)this + 9) )
    {
      v6 = *((_QWORD *)this + 5);
      LOBYTE(a4) = 1;
      *((_QWORD *)this + 9) = *(_QWORD *)(i + 56);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const char *))(*(_QWORD *)v6 + 72LL))(
             v6,
             *(unsigned int *)(i + 36),
             0LL,
             a4);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1D8,
          (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
          (const char *)(unsigned int)v7,
          (int)Microsoft::BamoImpl::BamoConnectionImpl::FreeProxyAtShutdown);
        JUMPOUT(0x18015436DLL);
      }
      Microsoft::BamoImpl::BamoPeerImpl::OnDisconnected((Microsoft::BamoImpl::BamoPeerImpl *)i, 1, v8, v9);
      (**(void (__fastcall ***)(__int64))i)(i);
    }
    v10 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v13 )
      Microsoft::BamoImpl::BamoImplObject::Release(v13);
  }
  else
  {
    Microsoft::Bamo::BamoConnection::Free(*((Microsoft::Bamo::BamoConnection **)this + 2));
  }
}
