/*
 * XREFs of FinalUserInit @ 0x1C000EC20
 * Callers:
 *     xxxInitWindowStation @ 0x1C000F9C0 (xxxInitWindowStation.c)
 * Callees:
 *     MNSetupAnimationDC @ 0x1C000F958 (MNSetupAnimationDC.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C013DCC8 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionSystemDpiServerInfo; // rsi
  __int64 v1; // rdi
  HDC v2; // rcx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  struct tagPROCESSINFO *v7; // rax

  SessionSystemDpiServerInfo = GetSessionSystemDpiServerInfo();
  *(_DWORD *)(SessionSystemDpiServerInfo + 56) = GetCharDimensionsInternal(
                                                   *(HDC *)(gpDispInfo + 56LL),
                                                   (struct tagTEXTMETRICW *)(SessionSystemDpiServerInfo + 64),
                                                   (int *)(SessionSystemDpiServerInfo + 60),
                                                   gbGreTextReady);
  v1 = Get96DpiServerInfo();
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  *(_DWORD *)(v1 + 56) = GetCharDimensionsInternal(
                           *(HDC *)(gpDispInfo + 56LL),
                           (struct tagTEXTMETRICW *)(v1 + 64),
                           (int *)(v1 + 60),
                           gbGreTextReady);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  *(_QWORD *)(gpDispInfo + 64LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
  v2 = *(HDC *)(gpDispInfo + 64LL);
  if ( !v2 )
    return 0LL;
  GreSelectFontInternal(v2);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 64LL), 0LL, 0LL, 1LL);
  *(_DWORD *)(gpDispInfo + 80LL) = 40 * *(_DWORD *)(SessionSystemDpiServerInfo + 56);
  *(_DWORD *)(gpDispInfo + 84LL) = *(_DWORD *)(SessionSystemDpiServerInfo + 60) + 2;
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 80LL),
                                     *(unsigned int *)(gpDispInfo + 84LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v4 = *(_QWORD *)(gpDispInfo + 72LL);
  if ( !v4 )
    return 0LL;
  GreSetBitmapOwner(v4, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(gpDispInfo + 72LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 64LL));
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(gpsi + 5336LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 64LL));
  GreSetBkColor(*(HDC *)(gpDispInfo + 64LL));
  MNSetupAnimationDC(gMenuState[0]);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320);
        i && (*(_DWORD *)(i + 92) & 0x4000) == 0;
        i = *(_QWORD *)(CurrentProcessWin32Process + 320) )
  {
    v7 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process();
    DestroyClass(v7);
  }
  return 1LL;
}
