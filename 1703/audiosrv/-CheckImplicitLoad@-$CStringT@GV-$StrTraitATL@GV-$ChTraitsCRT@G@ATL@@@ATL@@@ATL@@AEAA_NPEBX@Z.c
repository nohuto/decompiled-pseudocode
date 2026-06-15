/*
 * XREFs of ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x18007B940
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z @ 0x180089D2C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z.c)
 * Callees:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x18008A4BC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18008D7D4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

char __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
        __int64 a1,
        __int64 a2)
{
  char v2; // bl
  unsigned int v4; // edi
  HINSTANCE StringResourceInstance; // rax

  v2 = 0;
  if ( a2 && (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v4 = (unsigned __int16)a2;
    StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, a2);
    if ( StringResourceInstance )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        a1,
        StringResourceInstance,
        v4);
    return 1;
  }
  return v2;
}
