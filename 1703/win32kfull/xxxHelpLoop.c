/*
 * XREFs of xxxHelpLoop @ 0x1C0218D34
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 * Callees:
 *     xxxInternalEnumWindow @ 0x1C001BFCC (xxxInternalEnumWindow.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     xxxRedrawTitle @ 0x1C003D3F0 (xxxRedrawTitle.c)
 *     zzzSetCursor @ 0x1C0041A08 (zzzSetCursor.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     GetWindowBorders @ 0x1C00C285C (GetWindowBorders.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     _GetParent @ 0x1C00D8A00 (_GetParent.c)
 *     xxxTranslateMessage @ 0x1C00F8AB8 (xxxTranslateMessage.c)
 *     xxxWindowHitTest @ 0x1C00FD404 (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxWaitMessageEx @ 0x1C01BD408 (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C02191CC (xxxSendHelpMessage.c)
 *     GetContextHelpId @ 0x1C023C05C (GetContextHelpId.c)
 *     IsHelpParent @ 0x1C023C0C8 (IsHelpParent.c)
 */

__int64 __fastcall xxxHelpLoop(__int64 a1)
{
  int WindowBorders; // eax
  int v3; // edx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 *v9; // r11
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 Parent; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int ContextHelpId; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+38h] [rbp-49h] BYREF
  __int64 v25; // [rsp+40h] [rbp-41h]
  _QWORD v26[6]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v27; // [rsp+80h] [rbp-1h] BYREF
  __int64 v28; // [rsp+88h] [rbp+7h]
  __int64 v29; // [rsp+90h] [rbp+Fh]
  _QWORD v30[3]; // [rsp+98h] [rbp+17h] BYREF
  _QWORD v31[3]; // [rsp+B0h] [rbp+2Fh] BYREF

  memset(v26, 0, sizeof(v26));
  xxxWindowEvent(0xCu, (__int64 *)a1, 0, 0, 0);
  zzzSetCursor(*(_QWORD *)&gasyscur[100]);
  xxxCapture(gptiCurrent, a1, 4);
  WindowBorders = GetWindowBorders(*(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 64));
  v3 = *(_DWORD *)(a1 + 136) - WindowBorders;
  LODWORD(v24) = *(_DWORD *)(a1 + 128) + WindowBorders;
  v4 = *(_DWORD *)(a1 + 132) + WindowBorders;
  LODWORD(v25) = v3;
  HIDWORD(v24) = v4;
  HIDWORD(v25) = *(_DWORD *)(a1 + 140) - WindowBorders;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 )
        goto LABEL_39;
      if ( (unsigned int)xxxInternalGetMessage((__int64)v26, 0LL, 0, 0, 2u, 0) )
        break;
      xxxWaitMessageEx(15615LL, 0, 0LL);
    }
    switch ( LODWORD(v26[1]) )
    {
      case 0xA1:
        goto LABEL_39;
      case 0x201:
        if ( !PtInRect(&v24, *(_QWORD *)((char *)&v26[4] + 4)) )
          goto LABEL_39;
        v6 = xxxWindowHitTest(a1);
        v7 = ValidateHwnd(v6);
        v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v30;
        v30[1] = v7;
        if ( v7 )
          ++*(_DWORD *)(v7 + 8);
        if ( (unsigned int)IsHelpParent(v7) )
        {
          v28 = 0LL;
          v29 = *(_QWORD *)((char *)&v26[4] + 4);
          v27 = v8;
          xxxInternalEnumWindow(v8, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v27, 1u);
          v8 = v28;
          v9 = (__int64 *)gptiCurrent;
        }
        v10 = 0LL;
        if ( v8 != a1 )
          v10 = v8;
        if ( !v10 && (!GetProp(a1, *(_WORD *)(gpsi + 1360LL), 1) || (v10 = a1) == 0) )
        {
          ThreadUnlock1(v12, v11);
          goto LABEL_39;
        }
        v13 = *v9;
        v24 = *(_QWORD *)(*v9 + 368);
        *(_QWORD *)(v13 + 368) = &v24;
        ++*(_DWORD *)(v10 + 8);
        v25 = v10;
        zzzSetCursor(*(_QWORD *)&gasyscur[4]);
        xxxReleaseCapture();
        xxxRedrawTitle((_QWORD *)a1, 0x1000u);
        SetOrClrWF(0, (_DWORD *)a1, 0x580u, 1);
        xxxInternalGetMessage((__int64)v26, 0LL, 0, 0, 1u, 1u);
        xxxWindowEvent(0x800Au, (__int64 *)a1, -2, 4, 0);
        xxxWindowEvent(0xDu, (__int64 *)a1, 0, 0, 0);
        if ( (*(_BYTE *)(v10 + 71) & 0xC0) != 0x40 || (v14 = *(unsigned __int16 *)(v10 + 208), v14 == 0xFFFF) )
          v14 = -1;
        if ( (*(_BYTE *)(v10 + 71) & 8) != 0 )
        {
          Parent = GetParent(v10);
          if ( !Parent )
          {
LABEL_35:
            ThreadUnlock1(v16, v15);
            return ThreadUnlock1(v19, v18);
          }
        }
        else
        {
          Parent = v10;
        }
        v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v31;
        v31[1] = Parent;
        ++*(_DWORD *)(Parent + 8);
        ContextHelpId = GetContextHelpId(v10);
        xxxSendHelpMessage(Parent, 1, v14, *(_QWORD *)v10, ContextHelpId);
        ThreadUnlock1(v23, v22);
        goto LABEL_35;
      case 0x204:
      case 0x207:
      case 0x20B:
        goto LABEL_39;
    }
    if ( LODWORD(v26[1]) != 512 )
      break;
    if ( PtInRect(&v24, *(_QWORD *)((char *)&v26[4] + 4)) )
      v5 = *(_QWORD *)&gasyscur[100];
    else
      v5 = *(_QWORD *)&gasyscur[4];
    zzzSetCursor(v5);
LABEL_16:
    xxxInternalGetMessage((__int64)v26, 0LL, 0, 0, 1u, 1u);
    xxxTranslateMessage((__int64)v26, 0);
    xxxDispatchMessage(v26);
  }
  if ( LODWORD(v26[1]) != 256 || v26[2] != 27LL )
    goto LABEL_16;
  xxxInternalGetMessage((__int64)v26, 0LL, 0, 0, 1u, 1u);
LABEL_39:
  xxxReleaseCapture();
  zzzSetCursor(*(_QWORD *)&gasyscur[4]);
  xxxRedrawTitle((_QWORD *)a1, 0x1000u);
  SetOrClrWF(0, (_DWORD *)a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, (__int64 *)a1, -2, 4, 0);
  return xxxWindowEvent(0xDu, (__int64 *)a1, 0, 0, 0);
}
