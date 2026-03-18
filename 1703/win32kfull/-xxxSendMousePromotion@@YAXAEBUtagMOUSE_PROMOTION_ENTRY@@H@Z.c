/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01D57B4
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01D5280 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1, int a2)
{
  int v4; // r9d
  int v5; // eax
  int v6; // r9d
  int v7; // eax
  __int64 v8; // r14
  LARGE_INTEGER PerformanceCounter; // r15
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  int v15; // edi
  BOOL v16; // ecx
  unsigned int v17; // edx
  int v18; // r9d
  bool v19; // dl
  BOOL v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  __int64 v25; // [rsp+90h] [rbp+17h] BYREF
  __int64 v26; // [rsp+98h] [rbp+1Fh]
  __int64 v27; // [rsp+A0h] [rbp+27h]

  v26 = 0LL;
  v27 = 0LL;
  v25 = 262142LL;
  v4 = *(_DWORD *)(gpsi + 2192LL);
  if ( v4 )
    v5 = 0xFFFF * (*((_DWORD *)a1 + 2) - *(_DWORD *)(gpsi + 2184LL)) / v4 + 1;
  else
    v5 = *((_DWORD *)a1 + 2);
  HIDWORD(v26) = v5;
  v6 = *(_DWORD *)(gpsi + 2196LL);
  if ( v6 )
    v7 = 0xFFFF * (*((_DWORD *)a1 + 3) - *(_DWORD *)(gpsi + 2188LL)) / v6 + 1;
  else
    v7 = *((_DWORD *)a1 + 3);
  LODWORD(v27) = v7;
  v8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = ((_DWORD)v8 << 8) - (*((_DWORD *)a1 + 6) << 8);
  v11 = *((_DWORD *)a1 + 4);
  if ( v11 == 3 )
  {
    WORD1(v25) |= 0x40u;
    v12 = v10 | *((unsigned __int16 *)a1 + 20);
  }
  else
  {
    if ( v11 != 2 )
      goto LABEL_12;
    v13 = *((unsigned __int16 *)a1 + 20);
    WORD1(v25) |= 0x10u;
    v12 = v10 | v13 | 0x80;
  }
  HIDWORD(v27) = v12;
LABEL_12:
  v14 = *((_DWORD *)a1 + 11);
  v15 = 0;
  v16 = (v14 & 1) != 0;
  if ( *(_DWORD *)(gpsi + 1972LL) )
    v16 = (*((_DWORD *)a1 + 11) & 1) == 0;
  v17 = *((_DWORD *)a1 + 5);
  if ( (v17 & 0x40000) != 0 )
  {
    WORD2(v25) |= v16 ? 2 : 8;
    v15 = (v17 >> 15) & 1;
  }
  else if ( (v17 & 0x10000) != 0 )
  {
    WORD2(v25) |= v16 ? 1 : 4;
  }
  v18 = *((_DWORD *)a1 + 2);
  v19 = *(_DWORD *)gptCursorAsync != v18 || *(_DWORD *)&gptCursorAsync[2] != *((_DWORD *)a1 + 3);
  v20 = (v14 & 2) == 0 || gbEnforceUIPI && (v14 & 4) != 0;
  if ( (gdwMitConfig & 1) != 0 )
  {
    if ( v19 )
    {
      v21 = 8246;
      LODWORD(v27) = *((_DWORD *)a1 + 3);
      HIDWORD(v26) = v18;
    }
    else
    {
      HIDWORD(v26) = 0;
      v21 = 56;
      LODWORD(v27) = 0;
    }
    v22 = v21 | 0x101;
    if ( !a2 )
      v22 = v21;
    v23 = v22 | 0x1000;
    if ( !v15 )
      v23 = v22;
    v24 = v23 | 0x40;
    if ( !v20 )
      v24 = v23;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
      0LL,
      &v25,
      v8,
      (LARGE_INTEGER)PerformanceCounter.QuadPart,
      v24);
  }
  else
  {
    if ( v19 )
    {
      *((_DWORD *)&gaptMouse + 6 * gptInd) = (unsigned __int16)v18 | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL) - 1) << 16);
      *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = *((unsigned __int16 *)a1 + 6) | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL) - 1) << 16);
      *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = v8;
      *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = HIDWORD(v27);
      gptInd = (gptInd + 1) & 0x3F;
      xxxMoveEventAbsolute(
        *((_DWORD *)a1 + 2),
        *((_DWORD *)a1 + 3),
        HIDWORD(v27),
        0LL,
        (__int64)&v25,
        v8,
        PerformanceCounter.QuadPart,
        1,
        0,
        1);
    }
    QueueMouseEvent(
      SWORD2(v25),
      0,
      HIDWORD(v27),
      *((_QWORD *)a1 + 1),
      v8,
      PerformanceCounter.QuadPart,
      0LL,
      (__int64)&v25,
      0LL,
      1,
      a2,
      1,
      v15,
      v20,
      0,
      0,
      0LL,
      0LL);
  }
}
