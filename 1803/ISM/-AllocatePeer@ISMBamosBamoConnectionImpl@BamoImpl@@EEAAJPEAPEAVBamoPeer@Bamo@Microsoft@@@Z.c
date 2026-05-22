/*
 * XREFs of ?AllocatePeer@ISMBamosBamoConnectionImpl@BamoImpl@@EEAAJPEAPEAVBamoPeer@Bamo@Microsoft@@@Z @ 0x18001E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::ISMBamosBamoConnectionImpl::AllocatePeer(
        BamoImpl::ISMBamosBamoConnectionImpl *this,
        struct Microsoft::Bamo::BamoPeer **a2)
{
  BamoImpl::ISMBamosBamoConnectionImpl *v4; // rbx
  const char *v5; // r9
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::Bamo::BamoPeer *v9; // [rsp+40h] [rbp+8h] BYREF
  BamoImpl::ISMBamosBamoConnectionImpl *v10; // [rsp+50h] [rbp+18h]

  v9 = 0LL;
  v4 = 0LL;
  v10 = 0LL;
  if ( !*((_DWORD *)this + 35) )
  {
    v4 = this;
    v10 = this;
    if ( *((_DWORD *)this + 34) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v5);
      __debugbreak();
    }
    *((_DWORD *)v4 + 34) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 96));
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct Microsoft::Bamo::BamoPeer **))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         &v9);
  *a2 = v9;
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 96));
    *((_DWORD *)v4 + 34) = GetCurrentThreadId();
  }
  return v6;
}
