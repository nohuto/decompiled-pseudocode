/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180017E00
 * Callers:
 *     ?Add@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_KPEBG@Z @ 0x1800310FC (-Add@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1_N@Z @ 0x1800A2DEC (--0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1_N@Z.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x1800B6E84 (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEn.c)
 *     ?OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z @ 0x1800E7790 (-OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@AudioDeviceMgr@@UEAAJPEBGK@Z @ 0x1800E7840 (-OnDeviceStateChanged@AudioDeviceMgr@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180070428 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180073538 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        __int64 *a1,
        char *a2)
{
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  unsigned __int16 v6; // dx
  __int64 v7; // rax
  HINSTANCE StringResourceInstance; // rax

  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *a1 = (__int64)NilString + 24;
  if ( !a2 )
  {
    LODWORD(v7) = 0;
LABEL_7:
    ATL::CSimpleStringT<unsigned short,0>::SetString(a1, a2, v7);
    return a1;
  }
  if ( (unsigned __int64)a2 >= 0x10000 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&a2[2 * v7] );
    goto LABEL_7;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, v6);
  if ( StringResourceInstance )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      a1,
      StringResourceInstance,
      (unsigned __int16)a2);
  return a1;
}
