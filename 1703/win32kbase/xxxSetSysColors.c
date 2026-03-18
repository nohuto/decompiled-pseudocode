/*
 * XREFs of xxxSetSysColors @ 0x1C0058C04
 * Callers:
 *     NtUserSetSysColors @ 0x1C0063820 (NtUserSetSysColors.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00701C0 (-ResetSystemColors@@YAXXZ.c)
 *     xxxODI_ColorInit @ 0x1C00737A0 (xxxODI_ColorInit.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     SetSysColor @ 0x1C0058E00 (SetSysColor.c)
 */

__int64 __fastcall xxxSetSysColors(__int64 a1, unsigned int a2, char *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v9; // rsi
  int v10; // eax
  unsigned int *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r9
  __int64 v20; // rcx

  v5 = a5;
  v6 = a2;
  v9 = a1;
  if ( (a5 & 1) != 0
    && (int)IsCheckWinstaAttributeAccessSupported() >= 0
    && !(unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    return 0LL;
  }
  if ( (int)GreGetDeviceCaps(*((_QWORD *)gpDispInfo + 6), 24) <= 16 )
    v5 = a5 | 8;
  v10 = 1146882;
  if ( (v5 & 4) == 0 )
    goto LABEL_12;
  if ( (_DWORD)v6 )
  {
    v11 = (unsigned int *)a4;
    v12 = v6;
    do
    {
      v13 = *(unsigned int *)((char *)v11 + a3 - a4);
      if ( (unsigned int)v13 <= 0x14 && _bittest(&v10, v13) )
      {
        SetSysColor(v13, *v11, v5);
        v10 = 1146882;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    v9 = a1;
LABEL_12:
    if ( (_DWORD)v6 )
    {
      do
      {
        v14 = *(unsigned int *)a3;
        a3 += 4;
        v15 = *(unsigned int *)a4;
        a4 += 4;
        if ( (unsigned int)v14 < 0x1F && ((v5 & 4) == 0 || (unsigned int)v14 > 0x14 || !_bittest(&v10, v14)) )
          SetSysColor(v14, v15, v5);
        v10 = 1146882;
        --v6;
      }
      while ( v6 );
    }
  }
  if ( (v5 & 1) != 0 )
  {
    if ( (int)IsRecolorDeskPatternSupported() >= 0 )
      RecolorDeskPattern();
    if ( (int)IsxxxSetWindowNCMetricsSupported() >= 0 )
      xxxSetWindowNCMetrics(v9, 0LL, 0LL, 0xFFFFFFFFLL);
    if ( (int)IsxxxSendNotifyMessageSupported() >= 0 )
      xxxSendNotifyMessage(-1LL, 21LL, 0LL);
    if ( (int)IsxxxInternalInvalidateSupported() >= 0 )
    {
      v17 = *((_QWORD *)gptiCurrent + 51);
      if ( v17 )
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL);
      else
        v18 = 0LL;
      xxxInternalInvalidate(v18, 1LL, 66693LL);
      if ( *((struct tagDESKTOP **)gptiCurrent + 51) != grpdeskRitInput )
      {
        v19 = (_QWORD *)*((_QWORD *)grpdeskRitInput + 1);
        if ( (*(_DWORD *)(*v19 + 52LL) & 1) == 0 )
        {
          v20 = v19[2];
          if ( v20 )
            xxxInternalInvalidate(v20, 1LL, 66693LL);
        }
      }
    }
  }
  return 1LL;
}
