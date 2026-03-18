/*
 * XREFs of DrawThumb2 @ 0x1C0082658
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0082784 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C020F778 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020FCAC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020FED8 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     DrawPushButton @ 0x1C007EAF4 (DrawPushButton.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C0082608 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F9DC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall DrawThumb2(__int64 a1, _DWORD *a2, HDC a3, HBRUSH a4, int a5, char a6)
{
  LONG v10; // edx
  LONG v11; // r8d
  struct tagRECT *p_top; // rax
  struct tagRECT *v13; // rdi
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
      p_top = (struct tagRECT *)&v20.top;
      if ( a5 )
        p_top = &v20;
      v13 = &v20;
      if ( a5 )
        v13 = (struct tagRECT *)&v20.top;
      p_top->left = v10;
      p_top->right = v11;
      if ( (a6 & 3) == 3 || (v14 = a2[9], a2[10] - v14 < a2[8]) )
      {
        v13->left = a2[9];
        v13->right = a2[10];
        DrawGroove(a3, a4, &v20, a5);
      }
      else
      {
        v15 = a2[13];
        if ( v14 < v15 )
        {
          v13->left = v14;
          v13->right = v15;
          DrawGroove(a3, a4, &v20, a5);
        }
        v16 = a2[12];
        v17 = a2[10];
        if ( v16 < v17 )
        {
          v13->right = v17;
          v13->left = v16;
          DrawGroove(a3, a4, &v20, a5);
        }
        v13->left = a2[13];
        v13->right = a2[12];
        DrawPushButton(a3, &v20, 0, 0);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 688LL);
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
