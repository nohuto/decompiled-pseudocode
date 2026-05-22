/*
 * XREFs of ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18000D890
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  char v4; // al
  __int64 v5; // rbx
  const char *v6; // r9
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2[3] + 24LL);
    v4 = *((_BYTE *)this + 29);
    if ( v4 )
      goto LABEL_6;
    if ( *(_QWORD *)(v3 + 40) )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 64LL))(v2, *((unsigned int *)this + 6));
      v4 = *((_BYTE *)this + 29);
    }
    if ( v4 )
    {
LABEL_6:
      v5 = 0LL;
      if ( !*(_DWORD *)(v3 + 140) )
      {
        v5 = v3;
        if ( *(_DWORD *)(v3 + 136) != GetCurrentThreadId() )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x574,
            (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
            v6);
          JUMPOUT(0x18000D990LL);
        }
        *(_DWORD *)(v3 + 136) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 96));
      }
      v7 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 48LL))(this);
      if ( v7 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
      if ( v5 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
        *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
      }
    }
  }
}
