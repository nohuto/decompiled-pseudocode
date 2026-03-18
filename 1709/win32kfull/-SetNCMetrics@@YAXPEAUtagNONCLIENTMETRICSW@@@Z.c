/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C0045E70
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C0083240 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C0045E2C (bSetDevDragWidth.c)
 *     UpdateDesktopThresholds @ 0x1C0049C80 (UpdateDesktopThresholds.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // ebx
  INT v5; // r13d
  __int64 SessionDpiServerInfo; // r14
  _DWORD *v7; // rsi
  __int64 v8; // r15
  int v9; // ebx
  INT v10; // ebx
  INT v11; // edx
  int v12; // edi
  INT v13; // edx
  int v14; // edi
  INT v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // ecx
  int v20; // r8d
  int v21; // edi
  int v22; // esi
  int v23; // ebx

  SetDpiDepSysMet(0LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(1LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(10LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(11LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(3LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(4LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(12LL, *((unsigned int *)a1 + 4));
  SetDpiDepSysMet(13LL, *((unsigned int *)a1 + 5));
  SetDpiDepSysMet(2LL, (unsigned int)(*(_DWORD *)(gpsi + 2320LL) + 1));
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(29LL, *((unsigned int *)a1 + 125));
  v2 = *(_DWORD *)(gpsi + 2316LL) - 2;
  if ( v2 >= *(_DWORD *)(gpsi + 2288LL) / 2 )
    v2 = *(_DWORD *)(gpsi + 2288LL) / 2;
  SetDpiDepSysMet(20LL, v2 & 0xFFFFFFFE);
  v3 = *(_DWORD *)(gpsi + 2320LL) - 2;
  if ( v3 >= *(_DWORD *)(gpsi + 2292LL) / 2 )
    v3 = *(_DWORD *)(gpsi + 2292LL) / 2;
  SetDpiDepSysMet(21LL, v3 & 0xFFFFFFFE);
  v4 = *(_DWORD *)(gpsi + 2352LL);
  if ( *(_DWORD *)(gpsi + 2348LL) < (signed int)v4 )
    v4 = *(_DWORD *)(gpsi + 2348LL);
  SetDpiDepSysMet(20LL, v4);
  SetDpiDepSysMet(21LL, v4);
  SetDpiDepSysMet(23LL, *((unsigned int *)a1 + 29));
  SetDpiDepSysMet(24LL, *((unsigned int *)a1 + 30));
  SetDpiDepSysMet(22LL, (unsigned int)(*(_DWORD *)(gpsi + 2364LL) + 1));
  SetDpiDepSysMet(25LL, *((unsigned int *)a1 + 54));
  SetDpiDepSysMet(26LL, *((unsigned int *)a1 + 55));
  SetDpiDepSysMet(9LL, (unsigned int)(*(_DWORD *)(gpsi + 2372LL) + 1));
  v5 = *((_DWORD *)a1 + 1);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 4) = v5;
  SetDpiDepSysMet(14LL, (unsigned int)(v5 + 3));
  SetDpiDepSysMet(15LL, (unsigned int)(v5 + 3));
  v7 = (_DWORD *)Get96DpiMetrics();
  v8 = Get96DpiServerInfo();
  v9 = *(_DWORD *)(v8 + 20) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2320LL), 96, *(unsigned __int16 *)(gpsi + 9974LL)) > v9 )
    v9 = EngMulDiv(*(_DWORD *)(gpsi + 2320LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2440LL) = v9;
  v10 = 8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2316LL), 96, *(unsigned __int16 *)(gpsi + 9974LL)) <= 8 )
    v11 = 8;
  else
    v11 = EngMulDiv(*(_DWORD *)(gpsi + 2316LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2436LL) = v11;
  v12 = v7[11] + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2364LL), 96, *(unsigned __int16 *)(gpsi + 9974LL)) > v12 )
    v12 = EngMulDiv(*(_DWORD *)(gpsi + 2364LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2484LL) = v12;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2360LL), 96, *(unsigned __int16 *)(gpsi + 9974LL)) <= 8 )
    v13 = 8;
  else
    v13 = EngMulDiv(*(_DWORD *)(gpsi + 2360LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2480LL) = v13;
  v14 = v7[5] + 2 + v7[3];
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2372LL), 96, *(unsigned __int16 *)(gpsi + 9974LL)) > v14 )
    v14 = EngMulDiv(*(_DWORD *)(gpsi + 2372LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2492LL) = v14;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2368LL), 96, *(unsigned __int16 *)(gpsi + 9974LL)) > 8 )
    v10 = EngMulDiv(*(_DWORD *)(gpsi + 2368LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2488LL) = v10;
  *(_DWORD *)(gpsi + 2424LL) = *(_DWORD *)(gpsi + 2492LL) + 1;
  *(_DWORD *)(gpsi + 2396LL) = *(_DWORD *)(gpsi + 2440LL) + 1;
  *(_DWORD *)(gpsi + 2476LL) = *(_DWORD *)(gpsi + 2484LL) + 1;
  *(_DWORD *)(gpsi + 2504LL) = EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2432LL) = EngMulDiv(*(_DWORD *)(gpsi + 2312LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2404LL) = EngMulDiv(*(_DWORD *)(gpsi + 2284LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2388LL) = EngMulDiv(*(_DWORD *)(gpsi + 2268LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2392LL) = EngMulDiv(*(_DWORD *)(gpsi + 2272LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2428LL) = EngMulDiv(*(_DWORD *)(gpsi + 2308LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  *(_DWORD *)(gpsi + 2400LL) = EngMulDiv(*(_DWORD *)(gpsi + 2280LL), 96, *(unsigned __int16 *)(gpsi + 9974LL));
  v15 = EngMulDiv(v5, 96, *(unsigned __int16 *)(gpsi + 9974LL));
  v16 = Get96DpiServerInfo();
  v17 = 2444LL;
  *(_DWORD *)(v16 + 4) = v15;
  v18 = v15 + 3;
  do
  {
    *(_DWORD *)(v17 + gpsi) = v18;
    v17 += 4LL;
  }
  while ( v17 < 2452 );
  v19 = *(_DWORD *)(gpsi + 2504LL);
  v20 = *(_DWORD *)(gpsi + 2384LL);
  v21 = v19 + *(_DWORD *)(gpsi + 2444LL);
  v22 = v19 + *(_DWORD *)(gpsi + 2448LL);
  v23 = v20 + *(_DWORD *)(gpsi + 2328LL);
  SetDpiDepSysMet(
    16LL,
    (unsigned int)(*(_DWORD *)(gpsi + 2320LL)
                 + 3 * *(_DWORD *)(gpsi + 2316LL)
                 + 2 * (v20 + 2 + *(_DWORD *)(gpsi + 2324LL) + 2 * *(_DWORD *)(SessionDpiServerInfo + 16))));
  SetDpiDepSysMet(17LL, (unsigned int)(*(_DWORD *)(gpsi + 2276LL) + 2 * v23));
  *(_DWORD *)(gpsi + 2452LL) = *(_DWORD *)(gpsi + 2440LL)
                             + 3 * *(_DWORD *)(gpsi + 2436LL)
                             + 2 * (v21 + 2 + 2 * *(_DWORD *)(v8 + 16));
  *(_DWORD *)(gpsi + 2456LL) = *(_DWORD *)(gpsi + 2396LL) + 2 * v22;
  *(_DWORD *)(gpsi + 2112LL) = *(_DWORD *)(gpsi + 2320LL) + 6;
  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 32LL), *((_DWORD *)a1 + 1) + 3);
  UpdateDesktopThresholds();
}
