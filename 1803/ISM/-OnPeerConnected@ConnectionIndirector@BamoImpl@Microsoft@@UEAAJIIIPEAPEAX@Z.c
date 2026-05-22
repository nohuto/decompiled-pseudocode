/*
 * XREFs of ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x18001B150
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18001AC68 (-OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // edi
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = *((_QWORD *)this + 1);
  v10 = 0LL;
  if ( *(_DWORD *)(v9 + 136) != GetCurrentThreadId() )
  {
    v10 = v9;
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
  }
  v11 = Microsoft::BamoImpl::BamoConnectionImpl::OnPeerConnected(
          *((Microsoft::BamoImpl::BamoConnectionImpl **)this + 1),
          a2,
          a3,
          a4,
          a5);
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v12);
      JUMPOUT(0x18001B228LL);
    }
    *(_DWORD *)(v10 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
  }
  return v11;
}
