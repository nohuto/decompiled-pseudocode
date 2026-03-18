/*
 * XREFs of UpdateCursorImageForMonitorDpi @ 0x1C0053368
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01BBFD8 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0047434 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C0089620 (FixupCursorForMonitor.c)
 *     GreSetPointer @ 0x1C0089688 (GreSetPointer.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 */

__int64 __fastcall UpdateCursorImageForMonitorDpi(unsigned __int16 a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // cx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int *CurrentCursorFrame; // r9
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r8d

  result = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( result )
  {
    v3 = *(_WORD *)(*(_QWORD *)(result + 40) + 64LL);
    result = 48LL;
    if ( v3 >= 0x90u )
    {
      if ( v3 >= 0xC0u )
      {
        if ( v3 >= 0x120u )
          v4 = v3 < 0x180u ? 96 : 128;
        else
          v4 = 64;
      }
      else
      {
        v4 = 48;
      }
    }
    else
    {
      v4 = 32;
    }
    if ( a1 >= 0x90u )
    {
      if ( a1 >= 0xC0u )
      {
        if ( a1 >= 0x120u )
          result = a1 < 0x180u ? 96 : 128;
        else
          result = 64LL;
      }
    }
    else
    {
      result = 32LL;
    }
    if ( v4 != (_DWORD)result )
    {
      if ( !gpqForeground
        || *(int *)(gpqForeground + 376LL) >= 0
        || ((v5 = *(_QWORD *)(gpqForeground + 104LL)) == 0
          ? (v6 = *(_QWORD *)(gpqForeground + 88LL))
          : (v6 = *(_QWORD *)(v5 + 16)),
            !(unsigned int)HasHidTable(v6)
         || ((v7 = *(_QWORD *)(gpqForeground + 104LL)) == 0
           ? (v8 = *(_QWORD *)(gpqForeground + 88LL))
           : (v8 = *(_QWORD *)(v7 + 16)),
             result = *(_QWORD *)(v8 + 400),
             (*(_DWORD *)(*(_QWORD *)(result + 784) + 100LL) & 0x100) == 0)) )
      {
        result = gpqCursor;
        if ( gpqCursor )
        {
          if ( *(int *)(gpqCursor + 376LL) >= 0 )
          {
            if ( *(_QWORD *)(gpqCursor + 368LL) )
            {
              result = gpsi;
              if ( *(_DWORD *)(gpsi + 1956LL) )
              {
                if ( gpcurPhysCurrent )
                {
                  gpcurPhysCurrent = FixupCursorForMonitor(gpcurPhysCurrent);
                  CurrentCursorFrame = (unsigned int *)GetCurrentCursorFrame((struct tagCURSOR *)gpcurPhysCurrent);
                  gpcurPhysCurrent = (__int64)CurrentCursorFrame;
                  v10 = CurrentCursorFrame[20];
                  v11 = v10 & 8;
                  if ( !gbDisableAlpha
                    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == -2147475456
                    && (v10 & 0x200) != 0 )
                  {
                    v11 |= 0x10u;
                  }
                  if ( gbForceSoftwareCursor == 1 )
                    v11 |= 0x20u;
                  EtwTraceCursorSize(CurrentCursorFrame[19], CurrentCursorFrame[35], CurrentCursorFrame[36]);
                  v12 = gMouseTrails;
                  if ( gProtocolType )
                    v12 = 0;
                  return GreSetPointer((struct _CURSINFO *)(gpcurPhysCurrent + 80), v11, v12, 0x32u);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
