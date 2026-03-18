/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F56B4
 * Callers:
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     zzzSetCursor @ 0x1C0041A08 (zzzSetCursor.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     _ClientToScreen @ 0x1C0239294 (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(struct tagWND *a1, int a2, unsigned __int64 a3, int a4, struct _MOVESIZEDATA *a5)
{
  __int64 v8; // rcx
  int NCHit; // r15d
  int v10; // esi
  _OWORD *v11; // r8
  int v12; // esi
  int v13; // esi
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // [rsp+20h] [rbp-20h] BYREF
  __int128 v23; // [rsp+28h] [rbp-18h] BYREF

  LODWORD(v22) = (__int16)a4;
  HIDWORD(v22) = SHIWORD(a4);
  ClientToScreen(a1, &v22);
  NCHit = FindNCHit(v8, (unsigned __int16)v22 | (WORD2(v22) << 16));
  v10 = a2 - 256;
  if ( !v10 )
  {
    if ( *((_DWORD *)a5 + 40) == 9 )
    {
      LODWORD(v21) = 0;
      if ( a1 )
        v21 = *(_QWORD *)a1;
      xxxSendMessage((int)a1, 32, v21, 0x2000000);
    }
    if ( a3 > 0x28 || (_DWORD)a3 != 13 && (_DWORD)a3 != 27 && (unsigned int)(a3 - 37) > 3 )
      return 1LL;
    goto LABEL_33;
  }
  v11 = 0LL;
  v12 = v10 - 256;
  if ( !v12 )
  {
    if ( a3 != 1 )
    {
      v23 = *((_OWORD *)a1 + 8);
      if ( PtInRect(&v23, v22) && (unsigned int)(NCHit - 10) <= 7 )
        xxxSendMessage((int)a1, 32, *(_QWORD *)a1, (unsigned __int16)NCHit | 0x2000000);
      else
        zzzSetCursor(*(_QWORD *)&gasyscur[76]);
      return 1LL;
    }
LABEL_11:
    v15 = *((_DWORD *)a5 + 40);
    if ( !v15 )
    {
      if ( (unsigned int)(NCHit - 10) <= 7 )
      {
        if ( a1 )
          v11 = *(_OWORD **)a1;
        xxxSendMessage((int)a1, 32, (int)v11, (unsigned __int16)NCHit | 0x2000000);
        *((_DWORD *)a5 + 45) &= ~1u;
        v16 = NCHit - 9;
        v17 = dword_1C02EE698[v16];
        v18 = dword_1C02EE6C8[v16];
        *((_DWORD *)a5 + 41) = v18;
        v19 = v17 + v18;
        *((_DWORD *)a5 + 42) = v17;
        *((_DWORD *)a5 + 40) = v19;
        v20 = dword_1C02EE6F8[v19];
        *((_DWORD *)a5 + 38) = *((_DWORD *)a5 + dword_1C02EE728[v19] + 26) - v22;
        *((_DWORD *)a5 + 39) = *((_DWORD *)a5 + v20 + 26) - HIDWORD(v22);
      }
      return 1LL;
    }
    if ( v15 != 9 || NCHit != 2 )
      return 1LL;
    if ( a1 )
      v11 = *(_OWORD **)a1;
    xxxSendMessage((int)a1, 32, (int)v11, 0x2000000);
    *((_DWORD *)a5 + 38) = *((_DWORD *)a5 + 26) - v22;
    *((_DWORD *)a5 + 39) = *((_DWORD *)a5 + 27) - HIDWORD(v22);
LABEL_33:
    *((_DWORD *)a5 + 45) &= ~1u;
    return 1LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !PtInRect((_DWORD *)a5 + 2, v22) )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( v13 != 1 )
    return 1LL;
LABEL_7:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, v11, 0);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
  {
    xxxDrawDragRectEx(a5);
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 45) &= ~1u;
  CCursorClip::ClearClip(gpCursorClip);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 45) |= 8u;
  return 0LL;
}
