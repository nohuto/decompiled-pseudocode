/*
 * XREFs of xxxSendInput @ 0x1C003B1F0
 * Callers:
 *     NtUserSendInput @ 0x1C003B0E0 (NtUserSendInput.c)
 *     EditionSynthesizeMouseWheel @ 0x1C01A0270 (EditionSynthesizeMouseWheel.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01B06C4 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01B0810 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0221E10 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0221ECC (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxInternalKeyEventDirect @ 0x1C003B7CC (xxxInternalKeyEventDirect.c)
 *     DwmSyncFlushWindowChanges @ 0x1C00E98A4 (DwmSyncFlushWindowChanges.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00EB950 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C01033A4 (xxxWaitForDITMouseInjectionFlush.c)
 */

__int64 __fastcall xxxSendInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  BOOL v6; // r12d
  unsigned int v7; // esi
  __int64 v8; // r8
  unsigned __int16 v9; // r14
  unsigned int *v10; // rdi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // edx
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax

  v5 = 0;
  v6 = glDitMouseHandling == 0;
  v7 = 0;
  v8 = gptiCurrent;
  v9 = *(_WORD *)(gptiCurrent + 552LL);
  if ( !a1 )
    return v7;
  v10 = (unsigned int *)(a2 + 24);
  v11 = 1LL;
  do
  {
    v12 = *(v10 - 6);
    if ( v12 )
    {
      v13 = (unsigned int)(v12 - 1);
      if ( (_DWORD)v13 )
      {
        if ( (_DWORD)v13 == 1 && v9 >= 0x501u )
        {
          UserSetLastError(120LL);
          return v7;
        }
        goto LABEL_27;
      }
      v13 = gpsi;
      if ( (*gpsi & 0x2000) != 0 )
        goto LABEL_28;
      if ( v5 )
        xxxWaitForDITMouseInjectionFlush(gpsi, 1LL);
      v14 = *(v10 - 3);
      v5 = 0;
      if ( (v14 & 4) == 0 || *((_WORD *)v10 - 8) || (v14 & 0xFFFFFFF9) != 0 )
      {
        v15 = *((unsigned __int8 *)v10 - 14);
        LOBYTE(v13) = *((_BYTE *)v10 - 16);
      }
      else
      {
        v15 = *((unsigned __int16 *)v10 - 7);
        LOBYTE(v13) = -25;
      }
      v16 = xxxInternalKeyEventDirect(v13, v15, v14, *(v10 - 2), *(_QWORD *)v10);
    }
    else
    {
      v13 = gpsi;
      if ( (*gpsi & 0x2000) != 0 )
        goto LABEL_28;
      if ( (*(v10 - 1) & 0x19FE) != 0 )
      {
        v17 = ReferenceDwmApiPort(gpsi, 1LL, v8, a4);
        if ( v17 )
        {
          LeaveCrit();
          DwmSyncFlushWindowChanges(v17);
          EnterCrit(0LL, 1LL);
        }
      }
      v18 = UpconvertTime(*v10, v11);
      v19 = MilliSecsToQpcCount(v18);
      if ( !v6 )
        v5 = 1;
      v16 = xxxMouseEventDirect(*(v10 - 4), *(v10 - 3), *(v10 - 2), *(v10 - 1), v18, v19, *((_QWORD *)v10 + 1), v6);
    }
    if ( !v16 && v9 >= 0x501u )
      return v7;
    v11 = 1LL;
LABEL_27:
    v10 += 10;
LABEL_28:
    ++v7;
  }
  while ( v7 < a1 );
  if ( v5 )
    xxxWaitForDITMouseInjectionFlush(v13, 1LL);
  return v7;
}
