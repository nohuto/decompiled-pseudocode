/*
 * XREFs of UpdateWindowMonitor @ 0x1C0064FC0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E6868 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     UpdateTopLevelWindowDPITransform @ 0x1C005D5D8 (UpdateTopLevelWindowDPITransform.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0065344 (ShouldUseLogPixelsForWindowMetrics.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UpdateWindowSpriteDPI @ 0x1C009103C (UpdateWindowSpriteDPI.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C8A5C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, _QWORD *a2)
{
  int v4; // edx
  int v5; // eax
  __int64 DesktopWindow; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  struct tagSHADOW *Shadow; // rax
  int v15; // ebx
  char v16; // [rsp+48h] [rbp+10h] BYREF

  do
  {
    if ( !a2 )
      break;
    ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    v4 = *((_DWORD *)a1 + 76);
    *((_QWORD *)a1 + 45) = *a2;
    if ( (v4 & 0x8000000) != 0 || *(_WORD *)(a2[5] + 64LL) != *((_WORD *)a1 + 186) )
      v5 = 0x8000000;
    else
      v5 = 0;
    *((_DWORD *)a1 + 76) = v5 | v4 & 0xF7FFFFFF;
    if ( *((_QWORD *)a1 + 13) )
    {
      DesktopWindow = GetDesktopWindow(a1);
      if ( v7 == DesktopWindow && (*((_DWORD *)a1 + 92) & 0xF) == 2 && (*((_BYTE *)a1 + 71) & 0x20) != 0 )
        SetDeferredDpiStateForWindowAndChildren(a1, 1LL);
    }
    *((_WORD *)a1 + 186) = *(_WORD *)(a2[5] + 64LL);
    v8 = ShouldUseLogPixelsForWindowMetrics(a1);
    v9 = *((_QWORD *)a1 + 13);
    *((_DWORD *)a1 + 76) ^= (*((_DWORD *)a1 + 76) ^ (v8 << 28)) & 0x10000000;
    if ( !v9 )
      break;
    v10 = GetDesktopWindow(a1);
    if ( v12 != v10 )
      break;
    if ( (v11 & 0x8000000) != 0 )
    {
      if ( (unsigned int)IsPWNDEligibleForGDIScaling(a1) )
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
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
          }
        }
      }
    }
    UpdateWindowSpriteDPI(a1, a2);
    UpdateTopLevelWindowDPITransform((__int64)a1, (__int64)a2, v13);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 102LL) & 2) == 0 )
      break;
    Shadow = FindShadow(a1);
    a1 = Shadow ? (struct tagWND *)*((_QWORD *)Shadow + 1) : 0LL;
  }
  while ( a1 );
}
