/*
 * XREFs of ??1?$CInterfaceArray@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ @ 0x18005BD6C
 * Callers:
 *     _CAudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::dtor$0 @ 0x180038916 (_CAudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--dtor$0.c)
 *     _CAudioSessionManagerProvider::RevokeSessions_::_1_::dtor$0 @ 0x18007C464 (_CAudioSessionManagerProvider--RevokeSessions_--_1_--dtor$0.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@CAXPEAV?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@_K@Z @ 0x1800309B8 (-CallDestructors@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL.c)
 */

void __fastcall ATL::CInterfaceArray<CAudioSessionManager,&_GUID const IID_IUnknown>::~CInterfaceArray<CAudioSessionManager,&_GUID const IID_IUnknown>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::CallDestructors(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    free(*(void **)a1);
  }
}
