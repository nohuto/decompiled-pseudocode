/*
 * XREFs of ?Add@?$CAtlArray@PEAXV?$CElementTraits@PEAX@ATL@@@ATL@@QEAA_KPEAX@Z @ 0x18008A06C
 * Callers:
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x18008B200 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x18008CE04 (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<void *,ATL::CElementTraits<void *>>::Add(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v5; // rax

  v2 = a1[1];
  if ( v2 >= a1[2]
    && !(unsigned __int8)ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
                           a1,
                           v2 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v5 = (_QWORD *)(*a1 + 8 * v2);
  if ( v5 )
    *v5 = a2;
  ++a1[1];
  return v2;
}
