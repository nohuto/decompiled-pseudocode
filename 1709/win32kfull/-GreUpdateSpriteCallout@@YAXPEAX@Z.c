/*
 * XREFs of ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C024DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0026830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 */

void __fastcall GreUpdateSpriteCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 28) = GreUpdateSpriteInternal(
                                  *(HDEV *)Parameter,
                                  *((HWND *)Parameter + 1),
                                  *((SFMLOGICALSURFACE **)Parameter + 2),
                                  *((HDC *)Parameter + 3),
                                  *((struct tagPOINT **)Parameter + 4),
                                  *((struct tagSIZE **)Parameter + 5),
                                  *((HDC *)Parameter + 6),
                                  *((struct _POINTL **)Parameter + 7),
                                  *((_DWORD *)Parameter + 16),
                                  *((struct _BLENDFUNCTION **)Parameter + 9),
                                  *((_DWORD *)Parameter + 20),
                                  *((struct tagRECT **)Parameter + 11),
                                  *((struct tagMINIWINDOWINFO **)Parameter + 12),
                                  *((_DWORD *)Parameter + 26),
                                  *((_DWORD *)Parameter + 27));
}
