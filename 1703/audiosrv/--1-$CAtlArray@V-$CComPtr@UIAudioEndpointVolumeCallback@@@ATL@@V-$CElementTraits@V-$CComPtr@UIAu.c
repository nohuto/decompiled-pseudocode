/*
 * XREFs of ??1?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x18007C590
 * Callers:
 *     _CAudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::dtor$0 @ 0x18005AB8B (_CAudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--dtor$0.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18007BC98 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     _CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::ForEachEntry_::_1_::dtor$0 @ 0x18007BDB4 (_CLockedList_ATL--CComPtr_IAudioEndpointVolumeCallback__1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ??1?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ @ 0x180087BC0 (--1-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x180087DF8 (--1CVolumeStrip@@MEAA@XZ.c)
 *     _CAudioSessionManagerProvider::RevokeSessions_::_1_::dtor$0 @ 0x180095800 (_CAudioSessionManagerProvider--RevokeSessions_--_1_--dtor$0.c)
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$3 @ 0x1800B262F (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$3.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x180088288 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 */

void __fastcall ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::~CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
      v2,
      *(_QWORD *)(a1 + 8));
    free(*(void **)a1);
  }
}
