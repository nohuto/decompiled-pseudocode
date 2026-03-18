/*
 * XREFs of xxxSendInput @ 0x1C009CEF0
 * Callers:
 *     NtUserSendInput @ 0x1C009CDE0 (NtUserSendInput.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01B3AAC (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01B3BF8 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     EditionSynthesizeMouseWheel @ 0x1C01BAD80 (EditionSynthesizeMouseWheel.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C022329C (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0223364 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C004C7C8 (DwmSyncFlushWindowChanges.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C004FBB4 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C004FED0 (xxxInternalKeyEventDirect.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C010F654 (xxxWaitForDITMouseInjectionFlush.c)
 */

__int64 __fastcall xxxSendInput(unsigned int a1, __int64 a2)
{
  int v3; // ebp
  BOOL v4; // r12d
  unsigned int v5; // esi
  unsigned __int16 v6; // r14
  unsigned int *v7; // rdi
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rdx
  unsigned __int8 v12; // cl
  int v13; // eax
  void *v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax

  v3 = 0;
  v4 = glDitMouseHandling == 0;
  v5 = 0;
  v6 = *(_WORD *)(gptiCurrent + 608LL);
  if ( !a1 )
    return v5;
  v7 = (unsigned int *)(a2 + 24);
  do
  {
    v8 = *(v7 - 6);
    if ( v8 )
    {
      v9 = (unsigned int)(v8 - 1);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == 1 && v6 >= 0x501u )
        {
          UserSetLastError(120LL, 1LL);
          return v5;
        }
      }
      else
      {
        v9 = gpsi;
        if ( (*gpsi & 0x2000) != 0 )
          goto LABEL_13;
        if ( v3 )
          xxxWaitForDITMouseInjectionFlush(gpsi, 1LL);
        v10 = *(v7 - 3);
        v3 = 0;
        if ( (v10 & 4) == 0 || *((_WORD *)v7 - 8) || (v10 & 0xFFFFFFF9) != 0 )
        {
          v11 = *((unsigned __int8 *)v7 - 14);
          v12 = *((_BYTE *)v7 - 16);
        }
        else
        {
          v11 = *((unsigned __int16 *)v7 - 7);
          v12 = -25;
        }
        v13 = xxxInternalKeyEventDirect(v12, v11, v10, *(v7 - 2), *(_QWORD *)v7);
LABEL_11:
        if ( !v13 && v6 >= 0x501u )
          return v5;
      }
      v7 += 10;
      goto LABEL_13;
    }
    v9 = gpsi;
    if ( (*gpsi & 0x2000) == 0 )
    {
      if ( (*(v7 - 1) & 0x19FE) != 0 )
      {
        v15 = (void *)ReferenceDwmApiPort(gpsi);
        if ( v15 )
        {
          LeaveCrit();
          DwmSyncFlushWindowChanges(v15);
          EnterCrit(0LL, 1LL);
        }
      }
      v16 = UpconvertTime(*v7);
      v17 = MilliSecsToQpcCount(v16);
      if ( !v4 )
        v3 = 1;
      v13 = xxxMouseEventDirect(*(v7 - 4), *(v7 - 3), *(v7 - 2), *(v7 - 1), v16, v17, *((_QWORD *)v7 + 1), v4);
      goto LABEL_11;
    }
LABEL_13:
    ++v5;
  }
  while ( v5 < a1 );
  if ( v3 )
    xxxWaitForDITMouseInjectionFlush(v9, 1LL);
  return v5;
}
