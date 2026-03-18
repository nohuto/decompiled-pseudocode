/*
 * XREFs of DwmAsyncDirtySprite @ 0x1C009D6FC
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C009D63C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CD98 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncDirtySprite(PVOID Object, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // ebx
  _BYTE v10[64]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(&v10[2], 0, 0x3EuLL);
    *(_DWORD *)v10 = 4194328;
    *(_WORD *)&v10[4] = 0x8000;
    *(_QWORD *)&v10[56] = a5;
    *(_DWORD *)&v10[40] = 1073741828;
    *(_QWORD *)&v10[48] = a2;
    *(_DWORD *)&v10[44] = a4;
    EtwUpdateEvent(a2, 1073741828LL);
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
