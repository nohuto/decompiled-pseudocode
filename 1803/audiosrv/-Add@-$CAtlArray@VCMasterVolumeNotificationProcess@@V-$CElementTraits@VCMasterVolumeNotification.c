/*
 * XREFs of ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18009881C
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800A5C2C (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x180009920 (-GrowBuffer@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotif.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
        _QWORD *a1,
        _DWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 result; // rax

  v2 = a1[1];
  if ( v2 >= a1[2]
    && !ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::GrowBuffer(
          (__int64)a1,
          v2 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  result = v2;
  *(_DWORD *)(*a1 + 4 * v2) = *a2;
  ++a1[1];
  return result;
}
