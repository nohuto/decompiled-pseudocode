/*
 * XREFs of FinalUserInit @ 0x1C00DC870
 * Callers:
 *     xxxInitWindowStation @ 0x1C00DC7B8 (xxxInitWindowStation.c)
 * Callees:
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     MNSetupAnimationDC @ 0x1C00DCA98 (MNSetupAnimationDC.c)
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0108B7C (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 */

__int64 __fastcall FinalUserInit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v15; // rcx
  struct tagPROCESSINFO *v16; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo(a1, a2, a3);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensionsInternal(
                                             *(HDC *)(gpDispInfo + 56LL),
                                             (struct tagTEXTMETRICW *)(SessionDpiServerInfo + 40),
                                             (int *)(SessionDpiServerInfo + 36),
                                             gbGreTextReady);
  v7 = Get96DpiServerInfo(v5, v4, v6);
  v8 = GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), *(_QWORD *)(v7 + 24));
  *(_DWORD *)(v7 + 32) = GetCharDimensionsInternal(
                           *(HDC *)(gpDispInfo + 56LL),
                           (struct tagTEXTMETRICW *)(v7 + 40),
                           (int *)(v7 + 36),
                           gbGreTextReady);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), v8);
  *(_QWORD *)(gpDispInfo + 64LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
  v9 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( !v9 )
    return 0LL;
  GreSelectFont(v9, *(_QWORD *)(SessionDpiServerInfo + 24));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 64LL), 0LL, 0LL, 1LL);
  *(_DWORD *)(gpDispInfo + 80LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 84LL) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 80LL),
                                     *(unsigned int *)(gpDispInfo + 84LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v10 = *(_QWORD *)(gpDispInfo + 72LL);
  if ( !v10 )
    return 0LL;
  GreSetBitmapOwner(v10, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(gpDispInfo + 72LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 64LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(gpsi + 4928LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 64LL), 2);
  GreSetBkColor(*(HDC *)(gpDispInfo + 64LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState[0]);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 328); i; i = *(_QWORD *)(CurrentProcessWin32Process + 328) )
  {
    v15 = *(unsigned int *)(i + 100);
    if ( (v15 & 0x4000) != 0 )
      break;
    v16 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v15);
    DestroyClass(v16);
  }
  return 1LL;
}
