/*
 * XREFs of ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C002AD60
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C002A968 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFrameControlMetrics(unsigned int a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  int v4; // ebp
  int v5; // r10d
  __int16 v6; // bx
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // r9d
  int v11; // r10d
  int v12; // r9d
  _DWORD *SessionSystemDpiMetrics; // rax
  int v14; // eax
  int v15; // edx
  int v16; // r10d
  int v17; // edx
  __int64 v18; // [rsp+20h] [rbp-8h]

  v3 = 0;
  v4 = a2;
  v5 = 0;
  v6 = *((_WORD *)&unk_1C02E5510 + 2 * a1 + 1);
  v7 = gpsi + 7188LL;
  if ( !(_DWORD)a3 )
    v7 = gpsi + 5700LL;
  v8 = v7 + 16LL * a1;
  switch ( *((_WORD *)&unk_1C02E5510 + 2 * a1) )
  {
    case 1:
      if ( (v6 & 0x80u) != 0 )
      {
        if ( (_DWORD)a3 )
          v11 = *(_DWORD *)(gpsi + 2476LL);
        else
          v11 = *(_DWORD *)(gpsi + 2088LL);
        if ( (_DWORD)a3 )
          v12 = *(_DWORD *)(gpsi + 2480LL);
        else
          v12 = *(_DWORD *)(gpsi + 2092LL);
      }
      else if ( (v6 & 0x40) != 0 )
      {
        if ( (_DWORD)a3 )
          v11 = *(_DWORD *)(gpsi + 2484LL);
        else
          v11 = *(_DWORD *)(gpsi + 2096LL);
        if ( (_DWORD)a3 )
          v14 = *(_DWORD *)(gpsi + 2488LL);
        else
          v14 = *(_DWORD *)(gpsi + 2100LL);
        if ( (_DWORD)a3 )
          v15 = *(_DWORD *)(gpsi + 2388LL);
        else
          v15 = *(_DWORD *)(gpsi + 2000LL);
        if ( v15 == v11 )
        {
          v17 = (_DWORD)a3 ? *(_DWORD *)(gpsi + 2392LL) : *(_DWORD *)(gpsi + 2004LL);
          if ( v17 == v14 )
          {
            v5 = 0;
            v3 = a1 - 18;
            goto LABEL_12;
          }
        }
        v12 = v14;
      }
      else
      {
        if ( (_DWORD)a3 )
          v11 = *(_DWORD *)(gpsi + 2388LL);
        else
          v11 = *(_DWORD *)(gpsi + 2000LL);
        if ( (_DWORD)a3 )
          v12 = *(_DWORD *)(gpsi + 2392LL);
        else
          v12 = *(_DWORD *)(gpsi + 2004LL);
      }
      v5 = v11 - 2;
      v3 = v12 - 4;
      goto LABEL_12;
    case 2:
      goto LABEL_33;
    case 3:
      if ( (v6 & 8) != 0 )
      {
        if ( (_DWORD)a3 )
          v5 = *(_DWORD *)(gpsi + 2276LL);
        else
          v5 = *(_DWORD *)(gpsi + 1888LL);
      }
      else
      {
        if ( (v6 & 2) == 0 )
        {
          if ( (_DWORD)a3 )
            v5 = *(_DWORD *)(gpsi + 2276LL);
          else
            v5 = *(_DWORD *)(gpsi + 1888LL);
          if ( (_DWORD)a3 )
            v3 = *(_DWORD *)(gpsi + 2348LL);
          else
            v3 = *(_DWORD *)(gpsi + 1960LL);
          goto LABEL_12;
        }
        if ( (_DWORD)a3 )
          v5 = *(_DWORD *)(gpsi + 2352LL);
        else
          v5 = *(_DWORD *)(gpsi + 1964LL);
      }
      if ( (_DWORD)a3 )
        v3 = *(_DWORD *)(gpsi + 2280LL);
      else
        v3 = *(_DWORD *)(gpsi + 1892LL);
      goto LABEL_12;
  }
  if ( *((_WORD *)&unk_1C02E5510 + 2 * a1) != 4 )
  {
    if ( *((_WORD *)&unk_1C02E5510 + 2 * a1) != 5 )
    {
      if ( *((unsigned __int16 *)&unk_1C02E5510 + 2 * a1) == 0xFFFF )
      {
        if ( (v6 & 1) != 0 )
        {
          if ( (_DWORD)a3 )
            v16 = *(_DWORD *)(gpsi + 2388LL);
          else
            v16 = *(_DWORD *)(gpsi + 2000LL);
          v5 = 4 * v16;
          if ( (_DWORD)a3 )
            v3 = *(_DWORD *)(gpsi + 2392LL);
          else
            v3 = *(_DWORD *)(gpsi + 2004LL);
          goto LABEL_12;
        }
        if ( (_DWORD)a3 )
          v3 = *(_DWORD *)(gpsi + 2392LL);
        else
          v3 = *(_DWORD *)(gpsi + 2004LL);
        goto LABEL_11;
      }
      goto LABEL_12;
    }
LABEL_33:
    if ( (_DWORD)a3 )
      SessionSystemDpiMetrics = (_DWORD *)Get96DpiMetrics();
    else
      SessionSystemDpiMetrics = (_DWORD *)GetSessionSystemDpiMetrics(gpsi, a2, a3, 0LL, v18);
    if ( (v6 & 0x18) != 0 )
      v3 = SessionSystemDpiMetrics[7];
    else
      v3 = ((SessionSystemDpiMetrics[5] + SessionSystemDpiMetrics[3] + 1) & 0xFFFE) - 1;
    goto LABEL_11;
  }
  if ( (v6 & 0x408) != 8 )
  {
    if ( (_DWORD)a3 )
      v9 = 12;
    else
      v9 = *(unsigned __int16 *)(gpsi + 8678LL) >> 3;
    v3 = v9 + 1;
LABEL_11:
    v5 = v3;
    goto LABEL_12;
  }
  v3 = a1 - 8;
LABEL_12:
  *(_DWORD *)(v8 + 8) = v5;
  if ( v5 > v4 )
    v4 = v5;
  *(_DWORD *)(v8 + 12) = v3;
  return (unsigned int)v4;
}
