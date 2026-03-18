/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DC988
 * Callers:
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     FindNCHit @ 0x1C0111248 (FindNCHit.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     _ClientToScreen @ 0x1C023A9FC (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        struct _MOVESIZEDATA *a5)
{
  __int64 v8; // rcx
  int NCHit; // r14d
  unsigned int v10; // esi
  _OWORD *v11; // r8
  unsigned int v12; // esi
  unsigned int v13; // esi
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  __int128 v22; // [rsp+28h] [rbp-18h] BYREF

  v21 = 0LL;
  if ( a2 != 256 && (a2 <= 0x1FF || a2 > 0x202) )
    return 1LL;
  LODWORD(v21) = (__int16)a4;
  HIDWORD(v21) = SHIWORD(a4);
  ClientToScreen(a1, &v21);
  NCHit = FindNCHit(v8, (unsigned __int16)v21 | (WORD2(v21) << 16));
  v10 = a2 - 256;
  if ( !v10 )
  {
    if ( *((_DWORD *)a5 + 44) == 9 )
      xxxSendMessage((ULONG_PTR)a1);
    if ( a3 > 0x28 || (_DWORD)a3 != 13 && (_DWORD)a3 != 27 && (unsigned int)(a3 - 37) > 3 )
      return 1LL;
    goto LABEL_30;
  }
  v11 = 0LL;
  v12 = v10 - 256;
  if ( !v12 )
  {
    if ( a3 != 1 )
    {
      v22 = *((_OWORD *)a1 + 8);
      if ( PtInRect(&v22, v21) && (unsigned int)(NCHit - 10) <= 7 )
        xxxSendMessage((ULONG_PTR)a1);
      else
        zzzSetCursor(*(_QWORD *)&gasyscur[76]);
      return 1LL;
    }
LABEL_14:
    v15 = *((_DWORD *)a5 + 44);
    if ( !v15 )
    {
      if ( (unsigned int)(NCHit - 10) <= 7 )
      {
        xxxSendMessage((ULONG_PTR)a1);
        *((_DWORD *)a5 + 49) &= ~1u;
        v16 = NCHit - 9;
        v17 = dword_1C02EAE08[v16];
        v18 = dword_1C02EAE38[v16];
        *((_DWORD *)a5 + 45) = v18;
        v19 = v17 + v18;
        *((_DWORD *)a5 + 46) = v17;
        *((_DWORD *)a5 + 44) = v19;
        v20 = dword_1C02EAE68[v19];
        *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + dword_1C02EAE98[v19] + 30) - v21;
        *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + v20 + 30) - HIDWORD(v21);
      }
      return 1LL;
    }
    if ( v15 != 9 || NCHit != 2 )
      return 1LL;
    xxxSendMessage((ULONG_PTR)a1);
    *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + 30) - v21;
    *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + 31) - HIDWORD(v21);
LABEL_30:
    *((_DWORD *)a5 + 49) &= ~1u;
    return 1LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !PtInRect((_DWORD *)a5 + 6, v21) )
      goto LABEL_10;
    goto LABEL_14;
  }
  if ( v13 != 1 )
    return 1LL;
LABEL_10:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, v11, 0);
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x10) != 0 )
  {
    xxxDrawDragRectEx(a5);
    *(_DWORD *)(gptiCurrent + 464LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 49) &= ~1u;
  CCursorClip::ClearClip(gpCursorClip);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 49) |= 8u;
  return 0LL;
}
