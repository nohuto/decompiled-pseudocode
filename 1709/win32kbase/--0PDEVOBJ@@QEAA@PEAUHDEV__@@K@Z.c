/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00EE574
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x1C0024AA0 (GreDeleteSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C0024B58 (GreCreateSemaphoreInternal.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C003E0A0 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0046DB8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C006BBCC (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0070438 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  HDEV v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  HDEV v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebp
  void *v16; // rcx
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm1
  _OWORD *v22; // rdx
  _OWORD *v23; // rax
  __int64 v24; // r8
  __int128 v25; // xmm1
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int64 v28; // rdx
  __int128 v29; // xmm1
  __int64 v30; // rdx
  HDEV v31; // rcx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int64 SemaphoreInternal; // rax
  PDEV *v35; // rdx
  signed __int32 v36; // ett
  signed __int32 v37; // ett
  _QWORD *v38; // rax
  int v39; // r8d
  __int64 v40; // rcx
  _QWORD *v41; // rax
  struct _ERESOURCE *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  _BYTE v48[80]; // [rsp+20h] [rbp-68h] BYREF
  char *v49; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v49 = a2;
  if ( a2 && (*((_DWORD *)a2 + 8) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v48, (struct PDEVOBJ *)&v49);
    if ( gdwDirectDrawContext + 3580 > gdwDirectDrawContext )
      *(_QWORD *)this = PDEV::Allocate(gdwDirectDrawContext + 3580LL, 0);
    if ( !*(_QWORD *)this )
      goto LABEL_51;
    v4 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 1808LL) = *((_QWORD *)a2 + 226);
    v5 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 16LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 1800LL) = 1348756854;
    v6 = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *((_QWORD *)a2 + 218);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *((_QWORD *)a2 + 219);
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *((_QWORD *)a2 + 220);
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 221);
    *(_QWORD *)(*(_QWORD *)this + 1776LL) = *((_QWORD *)a2 + 222);
    *(_QWORD *)(*(_QWORD *)this + 1784LL) = *((_QWORD *)a2 + 223);
    *(_QWORD *)(*(_QWORD *)this + 1792LL) = *((_QWORD *)a2 + 224);
    *(_QWORD *)(*(_QWORD *)this + 1816LL) = *((_QWORD *)a2 + 227);
    *(_QWORD *)(*(_QWORD *)this + 1824LL) = *((_QWORD *)a2 + 228);
    *(_QWORD *)(*(_QWORD *)this + 1832LL) = *((_QWORD *)a2 + 229);
    v7 = (HDEV)(a2 + 1840);
    v8 = (_OWORD *)(*(_QWORD *)this + 1840LL);
    do
    {
      *v8 = *(_OWORD *)v7;
      v8[1] = *((_OWORD *)v7 + 1);
      v8[2] = *((_OWORD *)v7 + 2);
      v8[3] = *((_OWORD *)v7 + 3);
      v8[4] = *((_OWORD *)v7 + 4);
      v8[5] = *((_OWORD *)v7 + 5);
      v8[6] = *((_OWORD *)v7 + 6);
      v8 += 8;
      v9 = *((_OWORD *)v7 + 7);
      v7 += 32;
      *(v8 - 1) = v9;
      --v5;
    }
    while ( v5 );
    *v8 = *(_OWORD *)v7;
    v8[1] = *((_OWORD *)v7 + 1);
    v8[2] = *((_OWORD *)v7 + 2);
    *((_QWORD *)v8 + 6) = *((_QWORD *)v7 + 6);
    v10 = (HDEV)(a2 + 2152);
    v11 = (_OWORD *)(*(_QWORD *)this + 2152LL);
    do
    {
      *v11 = *(_OWORD *)v10;
      v11[1] = *((_OWORD *)v10 + 1);
      v11[2] = *((_OWORD *)v10 + 2);
      v11[3] = *((_OWORD *)v10 + 3);
      v11[4] = *((_OWORD *)v10 + 4);
      v11[5] = *((_OWORD *)v10 + 5);
      v11[6] = *((_OWORD *)v10 + 6);
      v11 += 8;
      v12 = *((_OWORD *)v10 + 7);
      v10 += 32;
      *(v11 - 1) = v12;
      --v4;
    }
    while ( v4 );
    *v11 = *(_OWORD *)v10;
    v11[1] = *((_OWORD *)v10 + 1);
    v11[2] = *((_OWORD *)v10 + 2);
    v11[3] = *((_OWORD *)v10 + 3);
    v13 = *(_QWORD *)this;
    *(_OWORD *)(v13 + 2472) = *(_OWORD *)(a2 + 2472);
    *(_OWORD *)(v13 + 2488) = *(_OWORD *)(a2 + 2488);
    *(_OWORD *)(v13 + 2504) = *(_OWORD *)(a2 + 2504);
    *(_OWORD *)(v13 + 2520) = *(_OWORD *)(a2 + 2520);
    *(_OWORD *)(v13 + 2536) = *(_OWORD *)(a2 + 2536);
    *(_OWORD *)(v13 + 2552) = *(_OWORD *)(a2 + 2552);
    *(_QWORD *)(*(_QWORD *)this + 2576LL) = *((_QWORD *)a2 + 322);
    *(_QWORD *)(*(_QWORD *)this + 2584LL) = *((_QWORD *)a2 + 323);
    *(_QWORD *)(*(_QWORD *)this + 2592LL) = *((_QWORD *)a2 + 324);
    *(_QWORD *)(*(_QWORD *)this + 2600LL) = *((_QWORD *)a2 + 325);
    *(_DWORD *)(*(_QWORD *)this + 2660LL) = *((_DWORD *)a2 + 665);
    *(_QWORD *)(*(_QWORD *)this + 2664LL) = *((_QWORD *)a2 + 333);
    *(_QWORD *)(*(_QWORD *)this + 2672LL) = *((_QWORD *)a2 + 334);
    *(_QWORD *)(*(_QWORD *)this + 2688LL) = *((_QWORD *)a2 + 336);
    *(_QWORD *)(*(_QWORD *)this + 2696LL) = *((_QWORD *)a2 + 337);
    *(_QWORD *)(*(_QWORD *)this + 2680LL) = *((_QWORD *)a2 + 335);
    *(_DWORD *)(*(_QWORD *)this + 3544LL) = *((_DWORD *)a2 + 886);
    v14 = *((_QWORD *)a2 + 326);
    if ( v14 )
    {
      v15 = *(unsigned __int16 *)(v14 + 68) + *(unsigned __int16 *)(v14 + 70);
      *(_QWORD *)(*(_QWORD *)this + 2608LL) = PALLOCMEM2(v15, 1986356295LL, 0);
      v16 = *(void **)(*(_QWORD *)this + 2608LL);
      if ( !v16 )
        goto LABEL_40;
      memmove(v16, *((const void **)a2 + 326), v15);
    }
    v17 = 1464LL;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = *((_DWORD *)a2 + 9);
    *(_QWORD *)(*(_QWORD *)this + 56LL) = *((_QWORD *)a2 + 7);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 1448LL) = *((_QWORD *)a2 + 181);
    *(_QWORD *)(*(_QWORD *)this + 1456LL) = *((_QWORD *)a2 + 182);
    *(_QWORD *)(*(_QWORD *)this + 2568LL) = *((_QWORD *)a2 + 321);
    do
    {
      *(_QWORD *)(v17 + *(_QWORD *)this) = *(_QWORD *)&a2[v17];
      v17 += 8LL;
    }
    while ( v17 < 1512 );
    *(_QWORD *)(*(_QWORD *)this + 1512LL) = *((_QWORD *)a2 + 189);
    if ( *((_QWORD *)a2 + 213) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
      v18 = *(_OWORD **)(*(_QWORD *)this + 1704LL);
      if ( !v18 )
        goto LABEL_40;
      v19 = (_OWORD *)*((_QWORD *)a2 + 213);
      v20 = 12LL;
      do
      {
        *v18 = *v19;
        v18[1] = v19[1];
        v18[2] = v19[2];
        v18[3] = v19[3];
        v18[4] = v19[4];
        v18[5] = v19[5];
        v18[6] = v19[6];
        v18 += 8;
        v21 = v19[7];
        v19 += 8;
        *(v18 - 1) = v21;
        --v20;
      }
      while ( v20 );
    }
    if ( *((_QWORD *)a2 + 214) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1712LL) = PALLOCMEM2(0x600uLL, 1634167111LL, 0);
      v22 = *(_OWORD **)(*(_QWORD *)this + 1712LL);
      if ( !v22 )
        goto LABEL_40;
      v23 = (_OWORD *)*((_QWORD *)a2 + 214);
      v24 = 12LL;
      do
      {
        *v22 = *v23;
        v22[1] = v23[1];
        v22[2] = v23[2];
        v22[3] = v23[3];
        v22[4] = v23[4];
        v22[5] = v23[5];
        v22[6] = v23[6];
        v22 += 8;
        v25 = v23[7];
        v23 += 8;
        *(v22 - 1) = v25;
        --v24;
      }
      while ( v24 );
    }
    if ( *((_QWORD *)a2 + 215) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1720LL) = PALLOCMEM2(0x600uLL, 1735354695LL, 0);
      v26 = *(_OWORD **)(*(_QWORD *)this + 1720LL);
      if ( !v26 )
        goto LABEL_40;
      v27 = (_OWORD *)*((_QWORD *)a2 + 215);
      v28 = 12LL;
      do
      {
        *v26 = *v27;
        v26[1] = v27[1];
        v26[2] = v27[2];
        v26[3] = v27[3];
        v26[4] = v27[4];
        v26[5] = v27[5];
        v26[6] = v27[6];
        v26 += 8;
        v29 = v27[7];
        v27 += 8;
        *(v26 - 1) = v29;
        --v28;
      }
      while ( v28 );
    }
    v30 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1736LL) = *((_QWORD *)a2 + 217);
    *(_QWORD *)(*(_QWORD *)this + 2616LL) = *((_QWORD *)a2 + 327);
    *(_DWORD *)(*(_QWORD *)this + 2624LL) = *((_DWORD *)a2 + 656);
    *(_DWORD *)(*(_QWORD *)this + 2628LL) = *((_DWORD *)a2 + 657);
    v31 = (HDEV)(a2 + 2704);
    v32 = (_OWORD *)(*(_QWORD *)this + 2704LL);
    do
    {
      *v32 = *(_OWORD *)v31;
      v32[1] = *((_OWORD *)v31 + 1);
      v32[2] = *((_OWORD *)v31 + 2);
      v32[3] = *((_OWORD *)v31 + 3);
      v32[4] = *((_OWORD *)v31 + 4);
      v32[5] = *((_OWORD *)v31 + 5);
      v32[6] = *((_OWORD *)v31 + 6);
      v32 += 8;
      v33 = *((_OWORD *)v31 + 7);
      v31 += 32;
      *(v32 - 1) = v33;
      --v30;
    }
    while ( v30 );
    *v32 = *(_OWORD *)v31;
    v32[1] = *((_OWORD *)v31 + 1);
    v32[2] = *((_OWORD *)v31 + 2);
    v32[3] = *((_OWORD *)v31 + 3);
    if ( *((_DWORD *)a2 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)this + 2816LL) = *((_QWORD *)a2 + 162);
      *(_QWORD *)(*(_QWORD *)this + 2824LL) = *((_QWORD *)a2 + 163);
      *(_QWORD *)(*(_QWORD *)this + 2848LL) = *((_QWORD *)a2 + 165);
      *(_QWORD *)(*(_QWORD *)this + 2856LL) = *((_QWORD *)a2 + 166);
      *(_QWORD *)(*(_QWORD *)this + 2864LL) = *((_QWORD *)a2 + 167);
      *(_QWORD *)(*(_QWORD *)this + 2888LL) = *((_QWORD *)a2 + 168);
      *(_QWORD *)(*(_QWORD *)this + 2952LL) = *((_QWORD *)a2 + 169);
      *(_QWORD *)(*(_QWORD *)this + 3296LL) = *((_QWORD *)a2 + 170);
      *(_QWORD *)(*(_QWORD *)this + 3272LL) = *((_QWORD *)a2 + 171);
      *(_QWORD *)(*(_QWORD *)this + 3264LL) = *((_QWORD *)a2 + 172);
      *(_QWORD *)(*(_QWORD *)this + 3248LL) = *((_QWORD *)a2 + 173);
      *(_QWORD *)(*(_QWORD *)this + 3256LL) = *((_QWORD *)a2 + 175);
      *(_QWORD *)(*(_QWORD *)this + 3024LL) = *((_QWORD *)a2 + 174);
      *(_QWORD *)(*(_QWORD *)this + 3424LL) = *((_QWORD *)a2 + 176);
    }
    PDEV::InitializeClientReferenceCount(*(PDEV **)this);
    *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = *((_DWORD *)a2 + 8) & 0x60001;
    SemaphoreInternal = GreCreateSemaphoreInternal();
    *(_QWORD *)(*(_QWORD *)this + 40LL) = SemaphoreInternal;
    if ( SemaphoreInternal )
    {
      v35 = *(PDEV **)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 32LL));
      do
        v36 = *((_DWORD *)v35 + 8);
      while ( v36 != _InterlockedCompareExchange((volatile signed __int32 *)v35 + 8, v36 & 0xFFFFFFBF, v36) );
      *(_QWORD *)(*(_QWORD *)this + 48LL) = GreCreateSemaphoreInternal();
      if ( *(_QWORD *)(*(_QWORD *)this + 48LL) )
      {
        _m_prefetchw((const void *)(v6 + 32));
        do
          v37 = *(_DWORD *)(v6 + 32);
        while ( v37 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), v37 | 0x80000, v37) );
        v38 = (_QWORD *)(*(_QWORD *)this + 2640LL);
        v38[1] = v38;
        *v38 = v38;
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        **(_QWORD **)this = gppdevList;
        gppdevList = *(PDEV **)this;
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v39);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion(v40);
        }
        v41 = (_QWORD *)(*(_QWORD *)this + 3552LL);
        v41[1] = v41;
        *v41 = v41;
LABEL_51:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v48);
        return this;
      }
    }
LABEL_40:
    v42 = *(struct _ERESOURCE **)(*(_QWORD *)this + 40LL);
    if ( v42 )
      GreDeleteSemaphore(v42);
    v43 = *(_QWORD *)(*(_QWORD *)this + 2608LL);
    if ( v43 )
      Win32FreePool(v43);
    v44 = *(_QWORD *)(*(_QWORD *)this + 1704LL);
    if ( v44 )
    {
      Win32FreePool(v44);
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = 0LL;
    }
    v45 = *(_QWORD *)(*(_QWORD *)this + 1712LL);
    if ( v45 )
    {
      Win32FreePool(v45);
      *(_QWORD *)(*(_QWORD *)this + 1712LL) = 0LL;
    }
    v46 = *(_QWORD *)(*(_QWORD *)this + 1720LL);
    if ( v46 )
    {
      Win32FreePool(v46);
      *(_QWORD *)(*(_QWORD *)this + 1720LL) = 0LL;
    }
    PDEV::Free(*(struct PDEV **)this, 0);
    *(_QWORD *)this = 0LL;
    goto LABEL_51;
  }
  return this;
}
