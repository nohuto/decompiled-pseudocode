/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0032934
 * Callers:
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0031E6C (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00AC7FC (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ACB80 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     GreCreateHalftonePalette @ 0x1C0295A94 (GreCreateHalftonePalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C0096470 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00ED180 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C010EE7C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 ThreadWin32Thread; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  unsigned int v16; // edi
  int *v18; // rdx
  int v19; // ett
  __int64 v20; // rbx
  signed __int32 v21; // ett
  _QWORD *v22; // [rsp+28h] [rbp-D8h] BYREF
  int v23; // [rsp+30h] [rbp-D0h]
  int Src; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+44h] [rbp-BCh]
  __int16 v26; // [rsp+46h] [rbp-BAh]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int128 v28; // [rsp+50h] [rbp-B0h]
  _WORD *v29; // [rsp+60h] [rbp-A0h]
  _WORD *v30; // [rsp+68h] [rbp-98h]
  __int16 v31; // [rsp+70h] [rbp-90h]
  __int16 v32; // [rsp+72h] [rbp-8Eh]
  __int16 v33; // [rsp+74h] [rbp-8Ch]
  __int16 v34; // [rsp+76h] [rbp-8Ah]
  __int128 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int16 v37; // [rsp+90h] [rbp-70h]
  __int16 v38; // [rsp+92h] [rbp-6Eh]
  __int16 v39; // [rsp+94h] [rbp-6Ch]
  char v40; // [rsp+96h] [rbp-6Ah]
  char v41; // [rsp+97h] [rbp-69h]
  int v42; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v43; // [rsp+A4h] [rbp-5Ch]
  __int16 v44; // [rsp+A6h] [rbp-5Ah]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  _WORD v48[8]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v49[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)this;
  v23 = 0;
  v22 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v22,
                        *(_DWORD *)(v2 + 2392),
                        (struct _GDIINFO *)(v2 + 2152)) )
  {
LABEL_22:
    v16 = 0;
    goto LABEL_23;
  }
  v5 = *(_QWORD *)this;
  Src = 1213491459;
  v41 = 0;
  v25 = *(_WORD *)(v5 + 2396);
  v40 = *(_BYTE *)(v5 + 2399);
  if ( *(_DWORD *)(v5 + 2388) > 0x12u )
  {
    v6 = 17LL;
    v26 = 17;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v5 + 2388);
    v26 = *(unsigned __int8 *)(v5 + 2388);
  }
  v7 = *(_DWORD *)(v5 + 2344) + *(_DWORD *)(v5 + 2352) + *(_DWORD *)(v5 + 2348);
  v28 = 0LL;
  v27 = 0LL;
  v37 = *(_WORD *)(v5 + 2344);
  v38 = *(_WORD *)(v5 + 2348);
  v39 = *(_WORD *)(v5 + 2352);
  v31 = v7 / 3;
  if ( (_WORD)v6 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 2424) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v5 + 2428) - 4) <= 0xFC
      && *(_QWORD *)(v5 + 2432)
      && *(_QWORD *)(v5 + 2440)
      && *(_QWORD *)(v5 + 2448) )
    {
      v42 = 32;
      v43 = *(_WORD *)(v5 + 2424);
      v44 = *(_WORD *)(v5 + 2428);
      v45 = *(_QWORD *)(v5 + 2432);
      v46 = *(_QWORD *)(v5 + 2440);
      v47 = *(_QWORD *)(v5 + 2448);
      *(_QWORD *)&v28 = &v42;
    }
    else
    {
      v26 = 17;
    }
  }
  v49[0] = *(_WORD *)(v5 + 2260);
  v49[1] = *(_WORD *)(v5 + 2264);
  v49[2] = *(_WORD *)(v5 + 2268);
  v49[3] = *(_WORD *)(v5 + 2272);
  v49[4] = *(_WORD *)(v5 + 2276);
  v49[5] = *(_WORD *)(v5 + 2280);
  v49[6] = *(_WORD *)(v5 + 2284);
  v49[7] = *(_WORD *)(v5 + 2288);
  v49[8] = *(_WORD *)(v5 + 2292);
  v49[9] = *(_WORD *)(v5 + 2296);
  v49[10] = *(_WORD *)(v5 + 2300);
  v49[11] = *(_WORD *)(v5 + 2304);
  v49[12] = *(_WORD *)(v5 + 2308);
  v49[13] = *(_WORD *)(v5 + 2312);
  v49[14] = *(_WORD *)(v5 + 2316);
  v49[15] = *(_WORD *)(v5 + 2320);
  v49[16] = *(_WORD *)(v5 + 2324);
  v49[17] = *(_WORD *)(v5 + 2328);
  v49[18] = *(_WORD *)(v5 + 2332);
  v49[19] = *(_WORD *)(v5 + 2336);
  v49[20] = *(_WORD *)(v5 + 2340);
  v29 = v49;
  v48[0] = *(_WORD *)(v5 + 2356);
  v48[1] = *(_WORD *)(v5 + 2360);
  v48[2] = *(_WORD *)(v5 + 2364);
  v48[3] = *(_WORD *)(v5 + 2368);
  v48[4] = *(_WORD *)(v5 + 2372);
  v48[5] = *(_WORD *)(v5 + 2376);
  v30 = v48;
  v32 = *(_WORD *)(v5 + 2192);
  v33 = *(_WORD *)(v5 + 2196);
  v34 = *(_WORD *)(v5 + 2380);
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
  v36 = v9;
  v35 = v8;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), (unsigned int)(v7 / 3), v5, v6);
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src) <= 0 )
  {
    EngSetLastError(8u);
    v15 = W32GetThreadWin32Thread(KeGetCurrentThread(), v12, v13, v14);
    if ( v15 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v15 + 104) || *(_DWORD *)(v15 + 108)) )
      *(_QWORD *)(v15 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1520LL) = 0LL;
    goto LABEL_22;
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
  v18 = (int *)(*(_QWORD *)this + 32LL);
  _m_prefetchw(v18);
  do
    v19 = *v18;
  while ( v19 != _InterlockedCompareExchange(v18, *v18 & 0xFFFFFDFF, *v18) );
  v20 = *(_QWORD *)this;
  v16 = 1;
  if ( (*(_DWORD *)(v20 + 32) & 1) == 0 && (unsigned int)XEPALOBJ::bEqualEntries(&v22, *(_QWORD *)(v20 + 1824)) )
  {
    _m_prefetchw((const void *)(v20 + 32));
    do
      v21 = *(_DWORD *)(v20 + 32);
    while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 32), v21 | 0x200, v21) );
  }
  LOBYTE(v11) = 8;
  MEMORY[0] = *v22;
  HmgSetOwner(*v22, 0LL, v11);
  v23 = 1;
LABEL_23:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v22);
  return v16;
}
