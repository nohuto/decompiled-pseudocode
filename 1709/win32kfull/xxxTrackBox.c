/*
 * XREFs of xxxTrackBox @ 0x1C0211A90
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020FAD0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F9DC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0210910 (xxxEndScroll.c)
 */

void __fastcall xxxTrackBox(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  BOOL v8; // eax
  BOOL v9; // ebp
  int v10; // r8d
  int v11; // edi
  int v12; // edi
  __int64 v13; // rax
  struct tagWND *v14; // rdx
  unsigned __int64 v15; // [rsp+40h] [rbp+8h]

  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL);
  if ( v7 && (!a2 || BYTE1(a2) == 2) )
  {
    if ( (*(_DWORD *)v7 & 8) != 0 )
    {
      RecalcTrackRect((struct tagSBTRACK *)v7);
      *(_DWORD *)v7 &= ~8u;
    }
    LODWORD(v15) = (__int16)a4;
    HIDWORD(v15) = SHIWORD(a4);
    v8 = PtInRect((_DWORD *)(v7 + 32), v15);
    v9 = v8;
    if ( v8 == (*(_DWORD *)v7 & 1)
      || (zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v7, v8, *(_DWORD *)(v7 + 56)),
          v7 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL)) )
    {
      v10 = *(_DWORD *)(gpsi + 4972LL) >> 3;
      v11 = a2 - 512;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            xxxEndScroll(a1, 0);
LABEL_17:
          if ( v7 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL) )
            *(_DWORD *)v7 ^= (v9 ^ (unsigned __int8)*(_DWORD *)v7) & 1;
          return;
        }
        *(_QWORD *)(v7 + 64) = 0LL;
        v10 = *(_DWORD *)(gpsi + 4972LL);
      }
      if ( v9 )
      {
        if ( v9 != (*(_DWORD *)v7 & 1) )
        {
          v13 = SetSystemTimer((__int64)a1, 65534, v10, (int)xxxContScroll, 0);
          v14 = *(struct tagWND **)(v7 + 24);
          *(_QWORD *)(v7 + 64) = v13;
          if ( v14 )
            xxxDoScroll(*(struct tagWND **)(v7 + 16), v14, *(unsigned int *)(v7 + 56), 0LL, (*(_DWORD *)v7 >> 1) & 1);
        }
      }
      goto LABEL_17;
    }
  }
}
