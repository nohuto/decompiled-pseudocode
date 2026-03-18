/*
 * XREFs of UpdateCursorImageForMonitorDpi @ 0x1C00BC228
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01B6C7C (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     GreSetPointer @ 0x1C00471C8 (GreSetPointer.c)
 *     FixupCursorForMonitor @ 0x1C0049D7C (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00B9818 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

void __fastcall UpdateCursorImageForMonitorDpi(unsigned __int16 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // cx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int *CurrentCursorFrame; // r9
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r8

  v2 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v2 )
  {
    v3 = *(_WORD *)(*(_QWORD *)(v2 + 40) + 128LL);
    v4 = 48;
    if ( v3 >= 0x90u )
    {
      if ( v3 >= 0xC0u )
      {
        if ( v3 >= 0x120u )
          v5 = v3 < 0x180u ? 96 : 128;
        else
          v5 = 64;
      }
      else
      {
        v5 = 48;
      }
    }
    else
    {
      v5 = 32;
    }
    if ( a1 >= 0x90u )
    {
      if ( a1 >= 0xC0u )
      {
        if ( a1 >= 0x120u )
          v4 = a1 < 0x180u ? 96 : 128;
        else
          v4 = 64;
      }
    }
    else
    {
      v4 = 32;
    }
    if ( v5 != v4 )
    {
      if ( !gpqForeground
        || *(int *)(gpqForeground + 336LL) >= 0
        || ((v6 = *(_QWORD *)(gpqForeground + 72LL)) == 0
          ? (v7 = *(_QWORD *)(gpqForeground + 56LL))
          : (v7 = *(_QWORD *)(v6 + 16)),
            !(unsigned int)HasHidTable(v7)
         || ((v8 = *(_QWORD *)(gpqForeground + 72LL)) == 0
           ? (v9 = *(_QWORD *)(gpqForeground + 56LL))
           : (v9 = *(_QWORD *)(v8 + 16)),
             (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 376) + 776LL) + 100LL) & 0x100) == 0)) )
      {
        if ( gpqCursor
          && *(int *)(gpqCursor + 336LL) >= 0
          && *(_QWORD *)(gpqCursor + 328LL)
          && *(_DWORD *)(gpsi + 1956LL)
          && gpcurPhysCurrent )
        {
          gpcurPhysCurrent = FixupCursorForMonitor(gpcurPhysCurrent);
          CurrentCursorFrame = (unsigned int *)GetCurrentCursorFrame((struct tagCURSOR *)gpcurPhysCurrent);
          gpcurPhysCurrent = (__int64)CurrentCursorFrame;
          v11 = CurrentCursorFrame[20];
          v12 = v11 & 8;
          if ( !gbDisableAlpha
            && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == -2147475456
            && (v11 & 0x200) != 0 )
          {
            v12 |= 0x10u;
          }
          if ( gbForceSoftwareCursor == 1 )
            v12 |= 0x20u;
          EtwTraceCursorSize(CurrentCursorFrame[19], CurrentCursorFrame[35], CurrentCursorFrame[36]);
          v13 = (unsigned int)gMouseTrails;
          if ( gProtocolType )
            v13 = 0LL;
          GreSetPointer((struct _CURSINFO *)(gpcurPhysCurrent + 80), v12, v13, 50LL);
        }
      }
    }
  }
}
