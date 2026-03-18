/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D1E4C
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01D28B0 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     _GetPointerDeviceType @ 0x1C01CA9E0 (_GetPointerDeviceType.c)
 *     ?GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01D1988 (-GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01D2374 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01D24D8 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01D26EC (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     QueryInertiaInfo @ 0x1C020D930 (QueryInertiaInfo.c)
 */

_QWORD *__fastcall Edgy::_GetArcData(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  unsigned int v7; // r11d
  int v8; // esi
  const struct tagPOINTER_INFO *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // r12d
  unsigned int i; // ebp
  const struct tagPOINTER_INFO *PointerInfo; // rax
  unsigned int v15; // r10d
  const struct tagPOINTER_INFO *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  int v19; // r13d
  BOOL v20; // r12d
  int PointerDeviceType; // eax
  void *v22; // rdx
  int v23; // ebp
  int IsLegacyDevice; // eax
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  const struct Edgy::tagARC_DATA *v31; // r8
  int v32; // r8d
  int v33; // r15d
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  __int64 InertiaInfo; // rax
  __int64 v41; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  float v43; // xmm1_4
  float v44; // xmm1_4
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v56; // [rsp+30h] [rbp-88h]
  __int128 v57; // [rsp+38h] [rbp-80h]
  char v58[104]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v59; // [rsp+C0h] [rbp+8h]
  unsigned int v60; // [rsp+C8h] [rbp+10h]
  unsigned int v61; // [rsp+D0h] [rbp+18h]
  unsigned int DisambiguationArcData; // [rsp+D8h] [rbp+20h]

  memset(a1, 0, 0x38uLL);
  v7 = 0;
  *a1 = a3;
  v8 = 1;
  v60 = 0;
  v9 = 0LL;
  v59 = 0;
  v10 = gdwMitConfig;
  v11 = 0LL;
  if ( (gdwMitConfig & 4) != 0 )
    v12 = *(_DWORD *)(a3 + 48);
  else
    v12 = *(_DWORD *)(a3 + 40);
  for ( i = 0; i < v12; ++i )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a3, i);
      v11 = v59;
      v7 = 0;
      v15 = v60;
    }
    else
    {
      PointerInfo = Edgy::GetPointerInfo((Edgy *)a3, (const struct tagPOINTERINPUTFRAME *)i);
    }
    v16 = PointerInfo;
    if ( PointerInfo )
    {
      v17 = *((_DWORD *)PointerInfo + 3);
      v60 = v15 + 1;
      if ( (v17 & 4) != 0 )
      {
        v11 = (unsigned int)(v11 + 1);
        v59 = v11;
        if ( (v17 & 0x2000) != 0 )
        {
          v9 = v16;
          a1[5] = *((_QWORD *)v16 + 7);
          *((_DWORD *)a1 + 12) = *((_DWORD *)v16 + 16);
        }
      }
      v18 = *(_QWORD *)(a2 + 176);
      if ( (unsigned int)(*(_DWORD *)v16 - 2) > 1 )
        v8 = v7;
      if ( v18 && *((_QWORD *)v16 + 2) != v18 )
        v8 = v7;
    }
  }
  v19 = v7;
  v61 = v7;
  v20 = v7;
  if ( *(_DWORD *)(a2 + 16) == v7 && v8 && v9 && (_DWORD)v11 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v9 + 2), v10, v6, v11);
    v7 = 0;
    v23 = PointerDeviceType;
    if ( ((PointerDeviceType - 1) & 0xFFFFFFFD) != 0 )
      v8 = 0;
    if ( v8 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)v9 + 2), v22);
      v25 = (__int64 *)Edgy::_HitTestEdgyRegion(v58, a2, *((_QWORD *)v9 + 2), *((_QWORD *)v9 + 7), v23, IsLegacyDevice);
      v7 = 0;
      v26 = *v25;
      v57 = *(_OWORD *)v25;
      if ( *v25 )
      {
        v19 = 1;
        *((_DWORD *)a1 + 6) = v25[2];
        a1[2] = v26;
        v27 = *(_QWORD *)(v26 + 8);
        a1[4] = *((_QWORD *)&v57 + 1);
        v61 = *(_DWORD *)(*((_QWORD *)&v57 + 1) + 4LL);
        v28 = ValidateHwnd(v27);
        v7 = 0;
        v20 = !v28 || *(char *)(v28 + 59) < 0 || *(char *)(v28 + 60) < 0;
      }
      else
      {
        v19 = 0;
      }
    }
  }
  DisambiguationArcData = v7;
  if ( v8 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v29 = *(_QWORD *)(a2 + 184);
    if ( v29
      && (v30 = ValidateHwnd(*(_QWORD *)(v29 + 8)), v7 = 0, v30)
      && *(char *)(v30 + 59) >= 0
      && *(char *)(v30 + 60) >= 0 )
    {
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v31);
      v7 = 0;
    }
    else
    {
      v20 = 1;
    }
    a1[2] = *(_QWORD *)(a2 + 184);
    a1[4] = *(_QWORD *)(a2 + 208);
    *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 216);
  }
  v32 = *(_DWORD *)(a2 + 16);
  v33 = v7;
  if ( !v32
    && (unsigned int)(*((_DWORD *)a1 + 12) - *(_DWORD *)(a2 + 248)) < *(_DWORD *)(a2 + 252)
    && v9
    && *(_QWORD *)(a2 + 240) == *((_QWORD *)v9 + 2) )
  {
    v34 = *((_DWORD *)a1 + 10);
    v35 = *(_DWORD *)(a2 + 256);
    v36 = v34 <= v35 ? v35 - v34 : v34 - v35;
    v37 = *((_DWORD *)a1 + 11);
    v38 = *(_DWORD *)(a2 + 260);
    v39 = v37 <= v38 ? v38 - v37 : v37 - v38;
    if ( v36 < *(_DWORD *)(a2 + 264) && v39 < *(_DWORD *)(a2 + 268) )
      v33 = 1;
  }
  v56 = v7;
  if ( !v32 )
  {
    if ( v19 )
    {
      if ( (unsigned int)(*(_DWORD *)v9 - 2) <= 1 )
      {
        InertiaInfo = QueryInertiaInfo(&gInertiaInfo, *((_QWORD *)v9 + 6), (unsigned int)(*(_DWORD *)v9 - 1));
        v7 = 0;
        v41 = InertiaInfo;
        if ( InertiaInfo )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v7 = 0;
          if ( PerformanceCounter.QuadPart - *(_QWORD *)(v41 + 128) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v43 = *(float *)(v41 + 16), v43 > 0.0) && !*((_DWORD *)a1 + 6)
              || v43 < 0.0 && *((_DWORD *)a1 + 6) == 2
              || (v44 = *(float *)(v41 + 20), v44 > 0.0) && *((_DWORD *)a1 + 6) == 1
              || v44 < 0.0 && *((_DWORD *)a1 + 6) == 3 )
            {
              v56 = 1;
            }
          }
        }
      }
    }
  }
  v45 = v7;
  LOBYTE(v45) = v59 == v7;
  v46 = v45 | 2;
  if ( !v9 )
    v46 = v45;
  v47 = v46 | 4;
  if ( v60 <= 1 )
    v47 = v46;
  v48 = v47 | 8;
  if ( !v8 )
    v48 = v47;
  v49 = v48 | 0x10;
  if ( !v19 )
    v49 = v48;
  v50 = v49 | 0x80;
  if ( v61 == v7 )
    v50 = v49;
  v51 = v50 | 0x1000;
  if ( !v20 )
    v51 = v50;
  v52 = DisambiguationArcData | v51;
  v53 = v52 | 0x40;
  if ( !v33 )
    v53 = v52;
  v54 = v53 | 0x20;
  if ( v56 == v7 )
    v54 = v53;
  *((_DWORD *)a1 + 2) = v54;
  return a1;
}
