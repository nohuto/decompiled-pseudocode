/*
 * XREFs of ??1?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA@XZ @ 0x18002EA20
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 *     ??1?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ @ 0x180087BC0 (--1-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x180087C10 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x180087DF8 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ??1CAudioSessionManager@@UEAA@XZ @ 0x180092A60 (--1CAudioSessionManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::~CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
