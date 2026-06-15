/*
 * XREFs of ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x18006C504
 * Callers:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x18006C61C (-AddInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$CCo.c)
 *     ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18006C7D0 (-AddInterface@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotif.c)
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180079440 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GrowBuffer@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18006CE88 (-GrowBuffer@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotif.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
  _DWORD *v3; // rax

  v1 = a1[1];
  if ( v1 >= a1[2]
    && !(unsigned __int8)ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::GrowBuffer(
                           a1,
                           v1 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v3 = (_DWORD *)(*a1 + 4 * v1);
  if ( v3 )
    *v3 = 1;
  ++a1[1];
  return v1;
}
