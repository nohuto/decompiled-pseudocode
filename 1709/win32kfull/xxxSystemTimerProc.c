/*
 * XREFs of xxxSystemTimerProc @ 0x1C0083EC0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     _PostTransformableMessage @ 0x1C00CCAC8 (_PostTransformableMessage.c)
 *     GetMouseKeyFlags @ 0x1C00CF764 (GetMouseKeyFlags.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     zzzAnimateFade @ 0x1C013DECC (zzzAnimateFade.c)
 *     GetActiveTrackPwnd @ 0x1C01C0854 (GetActiveTrackPwnd.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01C52D0 (InvalidateWEFCOMPOSITEDDCEs.c)
 */

__int64 __fastcall xxxSystemTimerProc(ULONG_PTR a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // r8
  int v10; // r11d
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+50h] [rbp+18h]

  v3 = a3;
  if ( a3 > 0xFFFA )
    return FindTimer(a1, v3, 2, 1, 0LL);
  switch ( (_DWORD)a3 )
  {
    case 0xFFF5:
      return InvalidateWEFCOMPOSITEDDCEs();
    case 0xFFF6:
      return zzzAnimateFade();
    case 0xFFF7:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 432) + 184LL);
      if ( v12 && a1 == GetActiveTrackPwnd(v12, 0LL) )
      {
        *(_DWORD *)(*(_QWORD *)(v11 + 408) + 380LL) |= 0x200020u;
        SetWakeBit(v11, 2LL);
      }
      return FindTimer(a1, v3, 2, 1, 0LL);
    case 0xFFF8:
      return xxxFlashWindow(a1);
  }
  if ( (_DWORD)a3 != 65530 )
    return FindTimer(a1, v3, 2, 1, 0LL);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v6 + 432);
  result = *(unsigned int *)(v7 + 48);
  if ( (result & 0x40) != 0 )
  {
    result = *(_QWORD *)(v7 + 184);
    if ( *(_QWORD *)a1 == *(_QWORD *)result )
    {
      v13 = LogicalQmsgCursorPos(a1, 0LL);
      result = PtInRect((_DWORD *)(v7 + 196), v13);
      if ( (_DWORD)result )
      {
        v8 = *(_DWORD *)(v7 + 192);
        if ( v8 == 1 )
        {
          LODWORD(v9) = GetMouseKeyFlags(*(_QWORD *)(v6 + 408));
          if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
            LODWORD(v13) = *(_DWORD *)(a1 + 152) - v13 - 1;
          else
            LODWORD(v13) = v13 - *(_DWORD *)(a1 + 144);
          HIDWORD(v13) -= *(_DWORD *)(a1 + 148);
        }
        else
        {
          v9 = *(unsigned __int16 *)(v7 + 192);
          v10 = 672;
          if ( (unsigned __int64)(v9 - 65) > 4 )
          {
            if ( (unsigned __int64)(v9 - 60) <= 4 )
              LODWORD(v9) = (HIWORD(v8) != 0) + 6;
          }
          else
          {
            LODWORD(v9) = 5;
          }
        }
        PostTransformableMessage(a1, v10, v9, (unsigned __int16)v13 | (WORD2(v13) << 16), 0);
        *(_DWORD *)(v7 + 48) &= ~0x40u;
        return FindTimer(a1, v3, 2, 1, 0LL);
      }
    }
  }
  return result;
}
