/*
 * XREFs of xxxEndScroll @ 0x1C0210910
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C010FB34 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C0211A90 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0211C00 (xxxTrackThumb.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01B5C04 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C020DDE4 (zzzShowCaret.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C020F778 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020FCAC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

__int64 __fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 (__fastcall *v7)(struct tagWND *); // rax
  struct tagSBCALC *v8; // rdx
  struct tagSBWND *v9; // rax
  int v10; // eax
  struct tagWND *v11; // rdx
  volatile signed __int32 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  struct tagWND *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // [rsp+50h] [rbp+8h]

  result = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(result + 688);
  if ( !v5 )
    return result;
  result = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(struct tagWND **)(result + 104) != a1 )
    return result;
  if ( !*(_QWORD *)(v5 + 48) )
    return result;
  v6 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = 0;
  xxxReleaseCapture();
  result = *((_QWORD *)a1 + 2);
  if ( v5 != *(_QWORD *)(result + 688) )
    return result;
  v7 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v7 != (char *)xxxTrackThumb )
  {
    if ( v7 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      v10 = *(__int16 *)(gptiCurrent + 732LL);
      if ( (*((_BYTE *)a1 + 66) & 0x40) != 0 )
        LODWORD(v18) = *((_DWORD *)a1 + 34) - v10;
      else
        LODWORD(v18) = v10 - *((_DWORD *)a1 + 32);
      HIDWORD(v18) = *(__int16 *)(gptiCurrent + 736LL) - *((_DWORD *)a1 + 33);
      if ( PtInRect((_DWORD *)(v5 + 32), v18) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v8 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v8
    || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v8, 4LL, *(unsigned int *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = *((_QWORD *)a1 + 2),
        v5 == *(_QWORD *)(result + 688)) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v9 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v9 )
        DrawCtlThumb(v9);
    }
    else
    {
      xxxDrawThumb(a1, v8, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = *((_QWORD *)a1 + 2);
    if ( v5 == *(_QWORD *)(result + 688) )
    {
      v11 = *(struct tagWND **)(v5 + 24);
      if ( !v11
        || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v11, 8LL, 0LL, (*(_DWORD *)v5 >> 1) & 1),
            result = *((_QWORD *)a1 + 2),
            v5 == *(_QWORD *)(result + 688)) )
      {
        SetOrClrWF(0, a1, 0x610u, 1);
        SetOrClrWF(0, a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v12 = *(volatile signed __int32 **)(gpqForeground + 112LL);
          if ( v12 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
              xxxWindowEvent(0x80000005, v12, 0LL, 3LL, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v13 = 4294967292LL;
        else
          v13 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, (volatile signed __int32 *)a1, v13, 0LL, 0);
        result = *((_QWORD *)a1 + 2);
        if ( v5 == *(_QWORD *)(result + 688) )
        {
          v15 = *(struct tagWND **)(v5 + 16);
          if ( !v15 || (zzzShowCaret(v15, v14), result = *((_QWORD *)a1 + 2), v5 == *(_QWORD *)(result + 688)) )
          {
            *(_QWORD *)(v5 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return Win32FreePool(v5, v16, v17);
          }
        }
      }
    }
  }
  return result;
}
