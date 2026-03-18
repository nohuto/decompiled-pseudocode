/*
 * XREFs of xxxHelpLoop @ 0x1C0219F1C
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C005265C (xxxTranslateMessage.c)
 *     xxxRedrawTitle @ 0x1C0053FC0 (xxxRedrawTitle.c)
 *     xxxInternalEnumWindow @ 0x1C0054338 (xxxInternalEnumWindow.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     GetWindowBorders @ 0x1C007BB30 (GetWindowBorders.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _GetParent @ 0x1C00DFF54 (_GetParent.c)
 *     xxxWindowHitTest @ 0x1C01092D8 (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxWaitMessageEx @ 0x1C01C1328 (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C021A3C4 (xxxSendHelpMessage.c)
 *     GetContextHelpId @ 0x1C023D888 (GetContextHelpId.c)
 *     IsHelpParent @ 0x1C023D8F8 (IsHelpParent.c)
 */

void __fastcall xxxHelpLoop(ULONG_PTR a1)
{
  int WindowBorders; // eax
  int v3; // edx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // edi
  __int64 v25; // rcx
  __int64 Parent; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int ContextHelpId; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD v33[4]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v34[6]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v35; // [rsp+78h] [rbp-19h] BYREF
  __int64 v36; // [rsp+80h] [rbp-11h]
  __int64 v37; // [rsp+88h] [rbp-9h]
  _QWORD v38[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v39[3]; // [rsp+A8h] [rbp+17h] BYREF
  _QWORD v40[3]; // [rsp+C0h] [rbp+2Fh] BYREF

  memset(v34, 0, sizeof(v34));
  xxxWindowEvent(0xCu, (volatile signed __int32 *)a1, 0LL, 0LL, 0);
  zzzSetCursor(*(_QWORD *)&gasyscur[100]);
  xxxCapture(gptiCurrent, a1, 4);
  WindowBorders = GetWindowBorders(*(unsigned int *)(a1 + 68), *(unsigned int *)(a1 + 64));
  v3 = *(_DWORD *)(a1 + 136) - WindowBorders;
  v33[0] = *(_DWORD *)(a1 + 128) + WindowBorders;
  v4 = *(_DWORD *)(a1 + 132) + WindowBorders;
  v33[2] = v3;
  v33[1] = v4;
  v33[3] = *(_DWORD *)(a1 + 140) - WindowBorders;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) != a1 )
        goto LABEL_39;
      if ( (unsigned int)xxxInternalGetMessage((int)v34, 0, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    switch ( LODWORD(v34[1]) )
    {
      case 0xA1:
        goto LABEL_39;
      case 0x201:
        if ( !PtInRect(v33, *(_QWORD *)((char *)&v34[4] + 4)) )
          goto LABEL_39;
        v9 = xxxWindowHitTest(a1);
        v10 = ValidateHwnd(v9);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
        v38[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v38;
        v38[1] = v10;
        if ( v10 )
          _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
        if ( (unsigned int)IsHelpParent(v10) )
        {
          v36 = 0LL;
          v37 = *(_QWORD *)((char *)&v34[4] + 4);
          v35 = v10;
          xxxInternalEnumWindow(v10, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v35, 1u);
          v10 = v36;
        }
        v18 = 0LL;
        if ( v10 != a1 )
          v18 = v10;
        if ( !v18 && (!GetProp(a1, *(_WORD *)(gpsi + 1360LL), 1) || (v18 = a1) == 0) )
        {
          ThreadUnlock1(v19, v15);
          goto LABEL_39;
        }
        v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
        v39[0] = *(_QWORD *)(v20 + 392);
        *(_QWORD *)(v20 + 392) = v39;
        v39[1] = v18;
        _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
        zzzSetCursor(*(_QWORD *)&gasyscur[4]);
        xxxReleaseCapture();
        xxxRedrawTitle((_QWORD *)a1, 0x1000u);
        SetOrClrWF(0, (_DWORD *)a1, 0x580u, 1);
        xxxInternalGetMessage((int)v34, 0, 0, 0, 1, 1);
        xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 4294967294LL, 4LL, 0);
        xxxWindowEvent(0xDu, (volatile signed __int32 *)a1, 0LL, 0LL, 0);
        if ( (*(_BYTE *)(v18 + 71) & 0xC0) != 0x40 || (v24 = *(unsigned __int16 *)(v18 + 208), v24 == 0xFFFF) )
          v24 = -1;
        if ( (*(_BYTE *)(v18 + 71) & 8) != 0 )
        {
          Parent = GetParent(v18);
          if ( !Parent )
          {
LABEL_35:
            ThreadUnlock1(v25, v21);
            ThreadUnlock1(v28, v27);
            return;
          }
        }
        else
        {
          Parent = v18;
        }
        v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
        v40[0] = *(_QWORD *)(v29 + 392);
        *(_QWORD *)(v29 + 392) = v40;
        v40[1] = Parent;
        _InterlockedAdd((volatile signed __int32 *)(Parent + 8), 1u);
        ContextHelpId = GetContextHelpId(v18);
        xxxSendHelpMessage(Parent, 1, v24, *(_QWORD *)v18, ContextHelpId);
        ThreadUnlock1(v32, v31);
        goto LABEL_35;
      case 0x204:
      case 0x207:
      case 0x20B:
        goto LABEL_39;
    }
    if ( LODWORD(v34[1]) != 512 )
      break;
    if ( PtInRect(v33, *(_QWORD *)((char *)&v34[4] + 4)) )
      v5 = *(_QWORD *)&gasyscur[100];
    else
      v5 = *(_QWORD *)&gasyscur[4];
    zzzSetCursor(v5);
LABEL_16:
    xxxInternalGetMessage((int)v34, 0, 0, 0, 1, 1);
    xxxTranslateMessage((__int64)v34, 0);
    xxxDispatchMessage((__int64)v34, v6, v7, v8);
  }
  if ( LODWORD(v34[1]) != 256 || v34[2] != 27LL )
    goto LABEL_16;
  xxxInternalGetMessage((int)v34, 0, 0, 0, 1, 1);
LABEL_39:
  xxxReleaseCapture();
  zzzSetCursor(*(_QWORD *)&gasyscur[4]);
  xxxRedrawTitle((_QWORD *)a1, 0x1000u);
  SetOrClrWF(0, (_DWORD *)a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 4294967294LL, 4LL, 0);
  xxxWindowEvent(0xDu, (volatile signed __int32 *)a1, 0LL, 0LL, 0);
}
