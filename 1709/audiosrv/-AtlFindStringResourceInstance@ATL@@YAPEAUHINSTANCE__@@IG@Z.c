/*
 * XREFs of ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180070428
 * Callers:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800142B0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180017E00 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x18005B46C (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 * Callees:
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x180076BA0 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1800DE0A0 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 */

HINSTANCE __fastcall ATL::AtlFindStringResourceInstance(ATL::CAtlBaseModule *a1)
{
  unsigned int v1; // esi
  HMODULE HInstanceAt; // rbx
  int v3; // edi
  HRSRC Resource; // rax
  ATL::CAtlBaseModule *v5; // rcx
  HINSTANCE v6; // rax

  v1 = (unsigned int)a1;
  HInstanceAt = ATL::CAtlBaseModule::GetHInstanceAt(a1, 0);
  v3 = 1;
  if ( !HInstanceAt )
    return 0LL;
  while ( 1 )
  {
    Resource = FindResourceExW(HInstanceAt, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((v1 >> 4) + 1), 0);
    if ( Resource )
    {
      if ( ATL::_AtlGetStringResourceImage(HInstanceAt, Resource, v1) )
        break;
    }
    v6 = ATL::CAtlBaseModule::GetHInstanceAt(v5, v3++);
    HInstanceAt = v6;
    if ( !v6 )
      return 0LL;
  }
  return HInstanceAt;
}
