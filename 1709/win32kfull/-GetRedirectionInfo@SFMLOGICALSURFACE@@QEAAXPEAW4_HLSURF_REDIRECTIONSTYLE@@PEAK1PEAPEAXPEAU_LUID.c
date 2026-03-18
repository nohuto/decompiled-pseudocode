/*
 * XREFs of ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008EDF8
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0026830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     GreHintSpriteShape @ 0x1C00911BC (GreHintSpriteShape.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E6CC4 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C024DE70 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C024F930 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C0250440 (GreProtectSpriteContent.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::GetRedirectionInfo(
        SFMLOGICALSURFACE *this,
        enum _HLSURF_REDIRECTIONSTYLE *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5,
        struct _LUID *a6)
{
  __int64 v6; // rcx
  __int64 v10; // rax

  v6 = *((_QWORD *)this + 24);
  if ( !v6 )
  {
    *(_DWORD *)a2 = 0;
    *a3 = 0;
    *a4 = 0;
    if ( a5 )
      *a5 = 0LL;
LABEL_4:
    if ( a6 )
    {
      a6->LowPart = 0;
      a6->HighPart = 0;
    }
    return;
  }
  v10 = SURFOBJ_TO_SURFACE_NOT_NULL(v6);
  *a3 = *(_DWORD *)(v10 + 56);
  *a4 = *(_DWORD *)(v10 + 60);
  if ( (*(_DWORD *)(v10 + 116) & 1) == 0 )
  {
    if ( (*(_DWORD *)(v10 + 112) & 0x800) == 0 )
      return;
    *(_DWORD *)a2 = 1;
    if ( a5 )
      *a5 = *(void **)(v10 + 32);
    goto LABEL_4;
  }
  *(_DWORD *)a2 = 2;
  if ( a5 )
    *a5 = *(void **)(v10 + 496);
  if ( a6 )
    *a6 = *(struct _LUID *)(v10 + 504);
}
