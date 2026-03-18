/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003D9DC
 * Callers:
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C003E6DC (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00BD590 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BD910 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     GreCreateHalftonePalette @ 0x1C0292144 (GreCreateHalftonePalette.c)
 * Callees:
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C009BD5C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C01061A0 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C0117E8C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  __int16 v6; // r9
  int v7; // ecx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 ThreadWin32Thread; // rdi
  __int64 v11; // r8
  int *v12; // rdx
  int v13; // ett
  __int64 v14; // rbx
  unsigned int v15; // edi
  signed __int32 v17; // ett
  __int64 v18; // rdi
  _QWORD *v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+30h] [rbp-D0h]
  int Src; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v22; // [rsp+44h] [rbp-BCh]
  __int16 v23; // [rsp+46h] [rbp-BAh]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int128 v25; // [rsp+50h] [rbp-B0h]
  _WORD *v26; // [rsp+60h] [rbp-A0h]
  _WORD *v27; // [rsp+68h] [rbp-98h]
  __int16 v28; // [rsp+70h] [rbp-90h]
  __int16 v29; // [rsp+72h] [rbp-8Eh]
  __int16 v30; // [rsp+74h] [rbp-8Ch]
  __int16 v31; // [rsp+76h] [rbp-8Ah]
  __int128 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int16 v34; // [rsp+90h] [rbp-70h]
  __int16 v35; // [rsp+92h] [rbp-6Eh]
  __int16 v36; // [rsp+94h] [rbp-6Ch]
  char v37; // [rsp+96h] [rbp-6Ah]
  char v38; // [rsp+97h] [rbp-69h]
  int v39; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v40; // [rsp+A4h] [rbp-5Ch]
  __int16 v41; // [rsp+A6h] [rbp-5Ah]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  _WORD v45[8]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v46[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)this;
  v20 = 0;
  v19 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v19,
                        *(_DWORD *)(v2 + 2392),
                        (struct _GDIINFO *)(v2 + 2152)) )
  {
LABEL_36:
    v15 = 0;
    goto LABEL_15;
  }
  v5 = *(_QWORD *)this;
  Src = 1213491459;
  v38 = 0;
  v22 = *(_WORD *)(v5 + 2396);
  v37 = *(_BYTE *)(v5 + 2399);
  if ( *(_DWORD *)(v5 + 2388) > 0x12u )
  {
    v6 = 17;
    v23 = 17;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v5 + 2388);
    v23 = v6;
  }
  v7 = *(_DWORD *)(v5 + 2344) + *(_DWORD *)(v5 + 2352) + *(_DWORD *)(v5 + 2348);
  v25 = 0LL;
  v24 = 0LL;
  v34 = *(_WORD *)(v5 + 2344);
  v35 = *(_WORD *)(v5 + 2348);
  v36 = *(_WORD *)(v5 + 2352);
  v28 = v7 / 3;
  if ( v6 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 2424) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v5 + 2428) - 4) <= 0xFC
      && *(_QWORD *)(v5 + 2432)
      && *(_QWORD *)(v5 + 2440)
      && *(_QWORD *)(v5 + 2448) )
    {
      v39 = 32;
      v40 = *(_WORD *)(v5 + 2424);
      v41 = *(_WORD *)(v5 + 2428);
      v42 = *(_QWORD *)(v5 + 2432);
      v43 = *(_QWORD *)(v5 + 2440);
      v44 = *(_QWORD *)(v5 + 2448);
      *(_QWORD *)&v25 = &v39;
    }
    else
    {
      v23 = 17;
    }
  }
  v46[0] = *(_WORD *)(v5 + 2260);
  v46[1] = *(_WORD *)(v5 + 2264);
  v46[2] = *(_WORD *)(v5 + 2268);
  v46[3] = *(_WORD *)(v5 + 2272);
  v46[4] = *(_WORD *)(v5 + 2276);
  v46[5] = *(_WORD *)(v5 + 2280);
  v46[6] = *(_WORD *)(v5 + 2284);
  v46[7] = *(_WORD *)(v5 + 2288);
  v46[8] = *(_WORD *)(v5 + 2292);
  v46[9] = *(_WORD *)(v5 + 2296);
  v46[10] = *(_WORD *)(v5 + 2300);
  v46[11] = *(_WORD *)(v5 + 2304);
  v46[12] = *(_WORD *)(v5 + 2308);
  v46[13] = *(_WORD *)(v5 + 2312);
  v46[14] = *(_WORD *)(v5 + 2316);
  v46[15] = *(_WORD *)(v5 + 2320);
  v46[16] = *(_WORD *)(v5 + 2324);
  v46[17] = *(_WORD *)(v5 + 2328);
  v46[18] = *(_WORD *)(v5 + 2332);
  v46[19] = *(_WORD *)(v5 + 2336);
  v46[20] = *(_WORD *)(v5 + 2340);
  v26 = v46;
  v45[0] = *(_WORD *)(v5 + 2356);
  v45[1] = *(_WORD *)(v5 + 2360);
  v45[2] = *(_WORD *)(v5 + 2364);
  v45[3] = *(_WORD *)(v5 + 2368);
  v45[4] = *(_WORD *)(v5 + 2372);
  v45[5] = *(_WORD *)(v5 + 2376);
  v27 = v45;
  v29 = *(_WORD *)(v5 + 2192);
  v30 = *(_WORD *)(v5 + 2196);
  v31 = *(_WORD *)(v5 + 2380);
  if ( a2 )
  {
    v8 = *(_OWORD *)&a2->caSize;
    v9 = *(_QWORD *)&a2->caContrast;
  }
  else
  {
    v8 = DefaultCA;
    v9 = 0LL;
  }
  v33 = v9;
  v32 = v8;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src) <= 0 )
  {
    EngSetLastError(8u);
    v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v18 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v18 + 104) || *(_DWORD *)(v18 + 108)) )
      *(_QWORD *)(v18 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1520LL) = 0LL;
    goto LABEL_36;
  }
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 296) = gcModeChanges;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1520LL) = 0LL;
  }
  v12 = (int *)(*(_QWORD *)this + 32LL);
  _m_prefetchw(v12);
  do
    v13 = *v12;
  while ( v13 != _InterlockedCompareExchange(v12, *v12 & 0xFFFFFDFF, *v12) );
  v14 = *(_QWORD *)this;
  v15 = 1;
  if ( (*(_DWORD *)(v14 + 32) & 1) == 0 && (unsigned int)XEPALOBJ::bEqualEntries(&v19, *(_QWORD *)(v14 + 1824)) )
  {
    _m_prefetchw((const void *)(v14 + 32));
    do
      v17 = *(_DWORD *)(v14 + 32);
    while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 32), v17 | 0x200, v17) );
  }
  LOBYTE(v11) = 8;
  MEMORY[0] = *v19;
  HmgSetOwner(*v19, 0LL, v11);
  v20 = 1;
LABEL_15:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v19);
  return v15;
}
