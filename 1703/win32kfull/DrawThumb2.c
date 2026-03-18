/*
 * XREFs of DrawThumb2 @ 0x1C00D66F0
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00D6088 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C020DF64 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020E480 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020E6AC (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     DrawPushButton @ 0x1C002898C (DrawPushButton.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C00D681C (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020E1C8 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall DrawThumb2(__int64 a1, _DWORD *a2, HDC a3, HBRUSH a4, int a5, char a6)
{
  LONG v10; // edx
  LONG v11; // r8d
  struct tagRECT *p_top; // rdi
  struct tagRECT *v13; // rax
  LONG v14; // ecx
  LONG v15; // eax
  LONG v16; // eax
  LONG v17; // ecx
  __int64 v18; // rdi
  _DWORD *v19; // rcx
  struct tagRECT v20; // [rsp+30h] [rbp-48h] BYREF

  if ( a2[4] < a2[5] )
  {
    v10 = a2[6];
    v11 = a2[7];
    if ( v10 < v11 )
    {
      p_top = &v20;
      if ( a5 )
      {
        v13 = &v20;
        p_top = (struct tagRECT *)&v20.top;
      }
      else
      {
        v13 = (struct tagRECT *)&v20.top;
      }
      v13->left = v10;
      v13->right = v11;
      if ( (a6 & 3) == 3 || (v14 = a2[9], a2[10] - v14 < a2[8]) )
      {
        p_top->left = a2[9];
        p_top->right = a2[10];
        DrawGroove(a3, a4, &v20, a5);
      }
      else
      {
        v15 = a2[13];
        if ( v14 < v15 )
        {
          p_top->left = v14;
          p_top->right = v15;
          DrawGroove(a3, a4, &v20, a5);
        }
        v16 = a2[12];
        v17 = a2[10];
        if ( v16 < v17 )
        {
          p_top->right = v17;
          p_top->left = v16;
          DrawGroove(a3, a4, &v20, a5);
        }
        p_top->left = a2[13];
        p_top->right = a2[12];
        DrawPushButton(a3, &v20, 0, 0);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 632LL);
        if ( v18
          && (unsigned int)(*(_DWORD *)(v18 + 56) - 2) <= 1
          && a1 == *(_QWORD *)(v18 + 8)
          && ((*(_DWORD *)v18 >> 1) & 1) == a5 )
        {
          if ( (*(_DWORD *)v18 & 8) != 0 )
          {
            RecalcTrackRect((struct tagSBTRACK *)v18);
            *(_DWORD *)v18 &= ~8u;
          }
          v19 = (_DWORD *)(v18 + 36);
          if ( !a5 )
            v19 = (_DWORD *)(v18 + 32);
          if ( *(_DWORD *)(v18 + 56) == 2 )
            v19[2] = a2[13];
          else
            *v19 = a2[12];
          if ( *v19 < v19[2] )
            NtGdiPatBlt(
              a3,
              *(_DWORD *)(v18 + 32),
              *(_DWORD *)(v18 + 36),
              *(_DWORD *)(v18 + 40) - *(_DWORD *)(v18 + 32),
              *(_DWORD *)(v18 + 44) - *(_DWORD *)(v18 + 36),
              5570569);
        }
      }
    }
  }
}
