/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C000AD54
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C000A9D0 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C000B440 (bSetDevDragWidth.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  INT v5; // r14d
  INT *SessionSystemDpiServerInfo; // r15
  _DWORD *v7; // rbp
  INT v8; // ebx
  INT v9; // edx
  INT v10; // ebx
  INT v11; // edx
  int v12; // edi
  INT v13; // edx
  int v14; // edi
  INT v15; // ebx
  INT *v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // ecx
  int v20; // edi
  int v21; // r10d
  int v22; // r11d
  int v23; // ebx
  int v24; // r8d
  __int64 i; // rdx

  SetDpiDepSysMet(2LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(3LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(20LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(21LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(9LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(10LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(30LL, *((unsigned int *)a1 + 4));
  SetDpiDepSysMet(31LL, *((unsigned int *)a1 + 5));
  SetDpiDepSysMet(4LL, (unsigned int)(*(_DWORD *)(gpsi + 2004LL) + 1));
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(92LL, *((unsigned int *)a1 + 125));
  v2 = *(_DWORD *)(gpsi + 1924LL) / 2;
  if ( *(_DWORD *)(gpsi + 2000LL) - 2 < v2 )
    v2 = *(_DWORD *)(gpsi + 2000LL) - 2;
  SetDpiDepSysMet(49LL, v2 & 0xFFFFFFFE);
  v3 = *(_DWORD *)(gpsi + 1928LL) / 2;
  if ( *(_DWORD *)(gpsi + 2004LL) - 2 < v3 )
    v3 = *(_DWORD *)(gpsi + 2004LL) - 2;
  SetDpiDepSysMet(50LL, v3 & 0xFFFFFFFE);
  v4 = *(_DWORD *)(gpsi + 2080LL);
  if ( *(_DWORD *)(gpsi + 2076LL) < (signed int)v4 )
    v4 = *(_DWORD *)(gpsi + 2076LL);
  SetDpiDepSysMet(49LL, v4);
  SetDpiDepSysMet(50LL, v4);
  SetDpiDepSysMet(52LL, *((unsigned int *)a1 + 29));
  SetDpiDepSysMet(53LL, *((unsigned int *)a1 + 30));
  SetDpiDepSysMet(51LL, (unsigned int)(*(_DWORD *)(gpsi + 2092LL) + 1));
  SetDpiDepSysMet(54LL, *((unsigned int *)a1 + 54));
  SetDpiDepSysMet(55LL, *((unsigned int *)a1 + 55));
  SetDpiDepSysMet(15LL, (unsigned int)(*(_DWORD *)(gpsi + 2100LL) + 1));
  v5 = *((_DWORD *)a1 + 1);
  SessionSystemDpiServerInfo = (INT *)GetSessionSystemDpiServerInfo();
  *SessionSystemDpiServerInfo = v5;
  SetDpiDepSysMet(32LL, (unsigned int)(v5 + 3));
  SetDpiDepSysMet(33LL, (unsigned int)(v5 + 3));
  v7 = (_DWORD *)Get96DpiMetrics();
  v8 = EngMulDiv(*(_DWORD *)(gpsi + 2004LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  if ( v8 <= *(_DWORD *)(Get96DpiServerInfo() + 20) + 2 )
    v9 = *(_DWORD *)(Get96DpiServerInfo() + 20) + 2;
  else
    v9 = EngMulDiv(*(_DWORD *)(gpsi + 2004LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2392LL) = v9;
  v10 = 8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2000LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) <= 8 )
    v11 = 8;
  else
    v11 = EngMulDiv(*(_DWORD *)(gpsi + 2000LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2388LL) = v11;
  v12 = v7[11] + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2092LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > v12 )
    v12 = EngMulDiv(*(_DWORD *)(gpsi + 2092LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2480LL) = v12;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2088LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) <= 8 )
    v13 = 8;
  else
    v13 = EngMulDiv(*(_DWORD *)(gpsi + 2088LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2476LL) = v13;
  v14 = v7[5] + 2 + v7[3];
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2100LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > v14 )
    v14 = EngMulDiv(*(_DWORD *)(gpsi + 2100LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2488LL) = v14;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2096LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > 8 )
    v10 = EngMulDiv(*(_DWORD *)(gpsi + 2096LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2484LL) = v10;
  *(_DWORD *)(gpsi + 2328LL) = *(_DWORD *)(gpsi + 2488LL) + 1;
  *(_DWORD *)(gpsi + 2284LL) = *(_DWORD *)(gpsi + 2392LL) + 1;
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 2480LL) + 1;
  *(_DWORD *)(gpsi + 2636LL) = EngMulDiv(*(_DWORD *)(gpsi + 2248LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2352LL) = EngMulDiv(*(_DWORD *)(gpsi + 1964LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2308LL) = EngMulDiv(*(_DWORD *)(gpsi + 1920LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2276LL) = EngMulDiv(*(_DWORD *)(gpsi + 1888LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2280LL) = EngMulDiv(*(_DWORD *)(gpsi + 1892LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2348LL) = EngMulDiv(*(_DWORD *)(gpsi + 1960LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2304LL) = EngMulDiv(*(_DWORD *)(gpsi + 1916LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  v15 = EngMulDiv(v5, 96, *(unsigned __int16 *)(gpsi + 8678LL));
  v16 = (INT *)Get96DpiServerInfo();
  v17 = 2396LL;
  *v16 = v15;
  v18 = v15 + 3;
  do
  {
    *(_DWORD *)(v17 + gpsi) = v18;
    v17 += 4LL;
  }
  while ( v17 < 2404 );
  v19 = *(_DWORD *)(gpsi + 2248LL);
  v20 = *(_DWORD *)(gpsi + 2636LL);
  v21 = v19 + *(_DWORD *)(gpsi + 2008LL);
  v22 = *(_DWORD *)(gpsi + 2396LL);
  v23 = *(_DWORD *)(gpsi + 2400LL);
  v24 = 2 * (v19 + *(_DWORD *)(gpsi + 2012LL));
  *(_DWORD *)(gpsi + 2016LL) = *(_DWORD *)(gpsi + 2004LL)
                             + 3 * *(_DWORD *)(gpsi + 2000LL)
                             + 2 * (v21 + 2 * (SessionSystemDpiServerInfo[4] + 1));
  *(_DWORD *)(gpsi + 2020LL) = v24 + *(_DWORD *)(gpsi + 1896LL);
  *(_DWORD *)(gpsi + 2116LL) = *(_DWORD *)(gpsi + 2192LL) + 4 + 2 * v21;
  *(_DWORD *)(gpsi + 2120LL) = v24 + *(_DWORD *)(gpsi + 2196LL) + 4;
  *(_DWORD *)(gpsi + 2504LL) = *(_DWORD *)(gpsi + 2580LL) + 2 * (v22 + v20 + 2);
  *(_DWORD *)(gpsi + 2508LL) = *(_DWORD *)(gpsi + 2584LL) + 2 * (v23 + v20 + 2);
  for ( i = 1992LL; i < 2000; i += 4LL )
    *(_DWORD *)(gpsi + i) = *(_DWORD *)(gpsi + i + 24);
  *(_DWORD *)(gpsi + 2112LL) = *(_DWORD *)(gpsi + 2004LL) + 6;
  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 32LL), (unsigned int)(*((_DWORD *)a1 + 1) + 3));
  SetDesktopMetrics();
}
