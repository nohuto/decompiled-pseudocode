/*
 * XREFs of ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C007E2C8
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C007DEFC (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 */

__int64 __fastcall GetFrameControlMetrics(unsigned int a1, unsigned int a2, int a3)
{
  int v5; // ebx
  int v7; // ebp
  __int16 v8; // di
  __int64 v9; // rax
  __int64 v10; // r13
  int DpiDependentMetric; // ebp
  unsigned int v12; // edi
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v16; // edi
  __int64 v17; // rcx
  bool v18; // zf
  _DWORD *SessionDpiMetrics; // rax
  int v20; // r14d
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // edx

  v5 = 0;
  v7 = 0;
  v8 = *((_WORD *)&unk_1C02E23F0 + 2 * a1 + 1);
  v9 = gpsi + 8484LL;
  if ( !a3 )
    v9 = gpsi + 6996LL;
  v10 = v9 + 16LL * a1;
  switch ( *((_WORD *)&unk_1C02E23F0 + 2 * a1) )
  {
    case 1:
      if ( (v8 & 0x80u) != 0 )
      {
        DpiDependentMetric = GetDpiDependentMetric(23LL, *(unsigned __int16 *)(gpsi + 9974LL));
        v12 = *(unsigned __int16 *)(gpsi + 9974LL);
        v13 = 24LL;
      }
      else
      {
        if ( (v8 & 0x40) != 0 )
        {
          DpiDependentMetric = GetDpiDependentMetric(25LL, *(unsigned __int16 *)(gpsi + 9974LL));
          v20 = GetDpiDependentMetric(26LL, *(unsigned __int16 *)(gpsi + 9974LL));
          if ( (unsigned int)GetDpiDependentMetric(12LL, *(unsigned __int16 *)(gpsi + 9974LL)) == DpiDependentMetric
            && (unsigned int)GetDpiDependentMetric(13LL, *(unsigned __int16 *)(gpsi + 9974LL)) == v20 )
          {
            v7 = 0;
            v5 = a1 - 18;
            goto LABEL_15;
          }
          v14 = v20;
LABEL_14:
          v7 = DpiDependentMetric - 2;
          v5 = v14 - 4;
          goto LABEL_15;
        }
        DpiDependentMetric = GetDpiDependentMetric(12LL, *(unsigned __int16 *)(gpsi + 9974LL));
        v12 = *(unsigned __int16 *)(gpsi + 9974LL);
        v13 = 13LL;
      }
      v14 = GetDpiDependentMetric(v13, v12);
      goto LABEL_14;
    case 2:
      goto LABEL_28;
    case 3:
      if ( (v8 & 8) != 0 )
      {
        v21 = *(unsigned __int16 *)(gpsi + 9974LL);
        v22 = 0LL;
      }
      else
      {
        if ( (v8 & 2) == 0 )
        {
          v7 = GetDpiDependentMetric(0LL, *(unsigned __int16 *)(gpsi + 9974LL));
          v16 = *(unsigned __int16 *)(gpsi + 9974LL);
          v17 = 10LL;
          goto LABEL_21;
        }
        v21 = *(unsigned __int16 *)(gpsi + 9974LL);
        v22 = 11LL;
      }
      v7 = GetDpiDependentMetric(v22, v21);
      v16 = *(unsigned __int16 *)(gpsi + 9974LL);
      v17 = 1LL;
      goto LABEL_21;
  }
  if ( *((_WORD *)&unk_1C02E23F0 + 2 * a1) != 4 )
  {
    if ( *((_WORD *)&unk_1C02E23F0 + 2 * a1) != 5 )
    {
      if ( *((unsigned __int16 *)&unk_1C02E23F0 + 2 * a1) != 0xFFFF )
        goto LABEL_15;
      v18 = (v8 & 1) == 0;
      v16 = 96;
      if ( v18 )
      {
        if ( !a3 )
          v16 = *(unsigned __int16 *)(gpsi + 9974LL);
        v5 = GetDpiDependentMetric(13LL, v16);
        v7 = v5;
        goto LABEL_15;
      }
      v23 = 96;
      if ( !a3 )
        v23 = *(unsigned __int16 *)(gpsi + 9974LL);
      v7 = 4 * GetDpiDependentMetric(12LL, v23);
      if ( !a3 )
        v16 = *(unsigned __int16 *)(gpsi + 9974LL);
      v17 = 13LL;
LABEL_21:
      v5 = GetDpiDependentMetric(v17, v16);
      goto LABEL_15;
    }
LABEL_28:
    if ( a3 )
      SessionDpiMetrics = (_DWORD *)Get96DpiMetrics();
    else
      SessionDpiMetrics = (_DWORD *)GetSessionDpiMetrics();
    if ( (v8 & 0x18) != 0 )
      v5 = SessionDpiMetrics[7];
    else
      v5 = ((SessionDpiMetrics[5] + SessionDpiMetrics[3] + 1) & 0xFFFE) - 1;
    goto LABEL_9;
  }
  if ( (v8 & 0x408) != 8 )
  {
    v5 = (*(unsigned __int16 *)(gpsi + 9974LL) >> 3) + 1;
LABEL_9:
    v7 = v5;
    goto LABEL_15;
  }
  v5 = a1 - 8;
LABEL_15:
  *(_DWORD *)(v10 + 8) = v7;
  if ( v7 > (int)a2 )
    a2 = v7;
  *(_DWORD *)(v10 + 12) = v5;
  return a2;
}
