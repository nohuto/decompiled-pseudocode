/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@UEAAJXZ @ 0x18007CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005D3A8 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::RemoteDisconnect(HANDLE *this)
{
  DWORD v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  int v6; // eax
  unsigned int v7; // edi
  DWORD v8; // edi
  HANDLE v9; // rcx
  DWORD v10; // eax
  __int64 v11; // rdx
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = WaitForSingleObjectEx(this[64], 0x3E8u, 0);
  if ( v2 == 258 )
  {
    v11 = 1962LL;
  }
  else
  {
    if ( v2 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, (void *)0x93C, v3, v4);
      __debugbreak();
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids, this[7]);
    }
    if ( g_SpatialAudioResourceManager )
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *, _QWORD))(*(_QWORD *)g_SpatialAudioResourceManager
                                                                           + 32LL))(
        g_SpatialAudioResourceManager,
        (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 1) >> 64));
    if ( !this[7] )
      return 0LL;
    v6 = (*((__int64 (__fastcall **)(HANDLE *))*this + 22))(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x7BA,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    v8 = 1;
    v9 = this[8];
    Handles[0] = this[63];
    if ( (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)v9 + 176LL))(v9) )
    {
      Handles[1] = (HANDLE)(*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)this[8] + 176LL))(this[8]);
      v8 = 2;
    }
    v10 = WaitForMultipleObjects(v8, Handles, 0, 0x3E8u);
    if ( v10 != -1 && v10 != 258 )
      return 0LL;
    v11 = 1997LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
