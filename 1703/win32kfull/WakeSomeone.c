/*
 * XREFs of WakeSomeone @ 0x1C004C0C0
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00026B0 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     EditionWakeThreadForInput @ 0x1C004A430 (EditionWakeThreadForInput.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00CB4B0 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0131B18 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C4D00 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0049220 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     IsProcessedByInputService @ 0x1C00B7FB4 (IsProcessedByInputService.c)
 *     IsMouseInPointerActive @ 0x1C00CCE6C (IsMouseInPointerActive.c)
 *     CancelForegroundActivate @ 0x1C0104458 (CancelForegroundActivate.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C010B570 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 */

void __fastcall WakeSomeone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  int v5; // r12d
  int v7; // ebx
  __int64 v8; // rdi
  unsigned int v10; // esi
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v8 = a2;
  v10 = 1;
  if ( (unsigned int)a3 <= 0x207 )
  {
    if ( (unsigned int)a3 >= 0x206 )
      goto LABEL_54;
    if ( (unsigned int)a3 > 0x106 )
    {
      if ( (_DWORD)a3 == 512 )
      {
        if ( !a2 )
        {
          v11 = *(_QWORD *)(a1 + 72);
          if ( v11 )
            v8 = *(_QWORD *)(v11 + 16);
          else
            v8 = *(_QWORD *)(a1 + 56);
        }
        if ( a4 && (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(a4 + 120)) )
          v12 = IsMouseInPointerActive(v8, a4);
        else
          v12 = 0;
        v10 = v12 != 0 ? 4098 : 2;
        goto LABEL_11;
      }
      if ( (_DWORD)a3 != 513 )
      {
        if ( (_DWORD)a3 != 283 )
        {
          if ( (_DWORD)a3 == 514 )
            goto LABEL_56;
          if ( (unsigned int)a3 <= 0x202 )
            goto LABEL_55;
          if ( (unsigned int)a3 > 0x204 )
            goto LABEL_56;
          goto LABEL_54;
        }
        goto LABEL_87;
      }
LABEL_54:
      v5 = 1;
      goto LABEL_55;
    }
    if ( (_DWORD)a3 == 262 )
      goto LABEL_39;
    if ( (unsigned int)a3 < 0xFE )
    {
LABEL_55:
      CancelForegroundActivate();
      goto LABEL_56;
    }
    if ( (unsigned int)a3 > 0xFF )
    {
      switch ( (_DWORD)a3 )
      {
        case 0x101:
          goto LABEL_29;
        case 0x100:
        case 0x104:
          if ( !a4
            || (unsigned __int64)(*(_QWORD *)(a4 + 32) - 16LL) > 2
            || ((unsigned __int8)(1 << (2 * (*(_BYTE *)(a4 + 32) & 3))) & *(_BYTE *)(((unsigned __int64)*(unsigned __int8 *)(a4 + 32) >> 2)
                                                                                   + a1
                                                                                   + 192)) == 0 )
          {
            v5 = 1;
          }
          break;
        case 0x105:
          goto LABEL_29;
        case 0x102:
          break;
        default:
          goto LABEL_55;
      }
LABEL_39:
      CancelForegroundActivate();
      goto LABEL_29;
    }
LABEL_41:
    if ( !v8 )
    {
      v15 = *(_QWORD *)(a4 + 16);
      if ( !v15 || (v16 = ValidateHwnd(v15)) == 0 || (v8 = *(_QWORD *)(v16 + 16)) == 0 )
      {
        v18 = *(_QWORD *)(a1 + 88);
        if ( v18 )
          v8 = *(_QWORD *)(v18 + 16);
        else
          v8 = *(_QWORD *)(a1 + 64);
      }
    }
    v10 = v4;
    if ( !v4 )
      v10 = 1024;
    goto LABEL_11;
  }
  if ( (unsigned int)a3 > 0x20E )
  {
    if ( (_DWORD)a3 != 568 )
    {
      if ( (_DWORD)a3 != 576 )
      {
        if ( (unsigned int)a3 <= 0x244
          || (unsigned int)a3 > 0x247
          && ((unsigned int)a3 <= 0x248 || (unsigned int)a3 > 0x24A && (unsigned int)(a3 - 593) > 2) )
        {
          goto LABEL_55;
        }
        v4 = 4096;
      }
LABEL_87:
      if ( !W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4) )
        return;
      if ( !v4 )
        v4 = 2048;
      goto LABEL_41;
    }
    v4 = 4096;
    goto LABEL_41;
  }
  if ( (_DWORD)a3 == 526 )
    goto LABEL_29;
  if ( (_DWORD)a3 != 520 )
  {
    if ( (_DWORD)a3 == 521 )
      goto LABEL_54;
    if ( (_DWORD)a3 == 522 )
    {
LABEL_29:
      if ( ((v7 - 522) & 0xFFFFFFFB) != 0 || (*(_DWORD *)(a1 + 340) & 0x2000000) == 0 )
      {
        v14 = *(_QWORD *)(a1 + 88);
        if ( !v14 )
        {
          v8 = *(_QWORD *)(a1 + 64);
          goto LABEL_32;
        }
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 72);
        if ( !v14 )
        {
          v8 = *(_QWORD *)(a1 + 56);
          goto LABEL_32;
        }
      }
      v8 = *(_QWORD *)(v14 + 16);
LABEL_32:
      if ( ((v7 - 522) & 0xFFFFFFFB) == 0 )
      {
        v10 = 4;
        if ( (unsigned int)ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4) )
          v10 = 4100;
      }
      goto LABEL_11;
    }
    if ( (_DWORD)a3 != 524 )
      goto LABEL_54;
  }
LABEL_56:
  v17 = *(_QWORD *)(a1 + 72);
  if ( v17 && (unsigned int)(v7 - 512) <= 0xE )
    v8 = *(_QWORD *)(v17 + 16);
  else
    v8 = *(_QWORD *)(a1 + 56);
  v10 = (unsigned int)ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4) != 0
      ? 4100
      : 4;
LABEL_11:
  if ( v8 )
  {
    if ( a4
      && *(_QWORD *)(a4 + 104)
      && ((unsigned int)IsProcessedByInputService(a4) || (*(_DWORD *)(a4 + 100) & 0x40000) != 0) )
    {
      v8 = v13;
    }
    if ( v10 )
      SetWakeBit(v8, v10);
    *(_DWORD *)(v8 + 1096) |= 0x20000000u;
    if ( a4 )
      *(_QWORD *)(a4 + 104) = v8;
    if ( v5 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v8, 0);
      *(_DWORD *)(v8 + 1096) |= 0x80000000;
    }
  }
}
