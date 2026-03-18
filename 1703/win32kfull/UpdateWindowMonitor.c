/*
 * XREFs of UpdateWindowMonitor @ 0x1C005F450
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C009DD70 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01BF2E0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0021428 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateWindowSpriteDPI @ 0x1C0022F88 (UpdateWindowSpriteDPI.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C005F568 (ShouldUseLogPixelsForWindowMetrics.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00F25C0 (UpdateTopLevelWindowDPITransform.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall UpdateWindowMonitor(struct tagWND *a1, _QWORD *a2)
{
  bool v4; // zf
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 DesktopWindow; // rax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagSHADOW *Shadow; // rax
  int v15; // ebx
  char v16; // [rsp+48h] [rbp+10h] BYREF

  do
  {
    if ( !a2 )
      break;
    ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    v4 = (*((_DWORD *)a1 + 76) & 0x8000000) == 0;
    *((_QWORD *)a1 + 45) = *a2;
    if ( v4 && *(_WORD *)(a2[5] + 128LL) == *((_WORD *)a1 + 186) )
      v5 = 0;
    else
      v5 = 0x8000000;
    v6 = v5 | *((_DWORD *)a1 + 76) & 0xF7FFFFFF;
    *((_DWORD *)a1 + 76) = v6;
    *((_WORD *)a1 + 186) = *(_WORD *)(a2[5] + 128LL);
    v7 = ShouldUseLogPixelsForWindowMetrics(a1);
    v8 = *((_QWORD *)a1 + 13);
    v9 = v6 ^ (v6 ^ (v7 << 28)) & 0x10000000;
    *((_DWORD *)a1 + 76) = v9;
    if ( !v8 )
      break;
    DesktopWindow = GetDesktopWindow(a1, v9);
    if ( v13 != DesktopWindow )
      break;
    if ( (v11 & 0x8000000) != 0 )
    {
      if ( (unsigned int)IsPWNDEligibleForGDIScaling(v12) )
      {
        if ( (*((_BYTE *)a1 + 67) & 0x20) != 0 && (*((_BYTE *)a1 + 66) & 0x20) == 0 )
        {
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
          v15 = RecreateRedirectionBitmap(a1, 0, 0LL);
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
          if ( v15 >= 0 )
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
            xxxInternalInvalidate(a1, (HRGN)1, 0x85u);
            if ( !v16 )
            {
              --gdwInAtomicOperation;
              UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v16);
            }
          }
        }
      }
    }
    UpdateWindowSpriteDPI((__int64)a1, (__int64)a2);
    UpdateTopLevelWindowDPITransform(a1, a2);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 94LL) & 2) == 0 )
      break;
    Shadow = FindShadow(a1);
    a1 = Shadow ? (struct tagWND *)*((_QWORD *)Shadow + 1) : 0LL;
  }
  while ( a1 );
}
