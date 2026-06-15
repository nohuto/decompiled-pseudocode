/*
 * XREFs of ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180094EB4
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18001E4F0 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x1800956C0 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x18008CE04 (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v5; // rcx

  v2 = a1[1];
  if ( v2 >= a1[2]
    && !ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
          (__int64)a1,
          v2 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v5 = (_QWORD *)(*a1 + 8 * v2);
  if ( v5 )
  {
    *v5 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  ++a1[1];
  return v2;
}
