/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01CDCB4
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01CE6FC (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     _GetPointerDeviceType @ 0x1C01A7E5C (_GetPointerDeviceType.c)
 *     ?GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01CD7F0 (-GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01CE1C4 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01CE328 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01CE538 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     QueryInertiaInfo @ 0x1C020A788 (QueryInertiaInfo.c)
 */

__int64 __fastcall Edgy::_GetArcData(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // r9
  int v7; // esi
  const struct tagPOINTER_INFO *v8; // r14
  int v9; // r10d
  unsigned int v10; // r12d
  unsigned int i; // ebp
  const struct tagPOINTER_INFO *PointerInfo; // rax
  unsigned int v13; // r11d
  const struct tagPOINTER_INFO *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r13d
  BOOL v18; // r12d
  int PointerDeviceType; // ebp
  int IsLegacyDevice; // eax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  const struct Edgy::tagARC_DATA *v26; // r8
  int v27; // r8d
  int v28; // r15d
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // ecx
  __int64 InertiaInfo; // rbp
  float v36; // xmm1_4
  float v37; // xmm1_4
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v48; // [rsp+30h] [rbp-88h]
  __int128 v49; // [rsp+38h] [rbp-80h]
  char v50[104]; // [rsp+50h] [rbp-68h] BYREF
  int v51; // [rsp+C0h] [rbp+8h]
  unsigned int v52; // [rsp+C8h] [rbp+10h]
  int v53; // [rsp+D0h] [rbp+18h]
  unsigned int DisambiguationArcData; // [rsp+D8h] [rbp+20h]

  memset((void *)(a1 + 8), 0, 0x30uLL);
  v6 = (_DWORD *)gdwMitConfig;
  *(_QWORD *)a1 = a3;
  v7 = 1;
  v52 = 0;
  v8 = 0LL;
  v51 = 0;
  v9 = 0;
  if ( (gdwMitConfig & 4) != 0 )
    v10 = *(_DWORD *)(a3 + 48);
  else
    v10 = *(_DWORD *)(a3 + 40);
  for ( i = 0; i < v10; ++i )
  {
    if ( (*v6 & 4) != 0 )
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a3, i);
      v6 = (_DWORD *)gdwMitConfig;
      v9 = v51;
      v13 = v52;
    }
    else
    {
      PointerInfo = Edgy::GetPointerInfo((Edgy *)a3, (const struct tagPOINTERINPUTFRAME *)i);
    }
    v14 = PointerInfo;
    if ( PointerInfo )
    {
      v15 = *((_DWORD *)PointerInfo + 3);
      v52 = v13 + 1;
      if ( (v15 & 4) != 0 )
      {
        v51 = ++v9;
        if ( (v15 & 0x2000) != 0 )
        {
          v8 = v14;
          *(_QWORD *)(a1 + 40) = *((_QWORD *)v14 + 7);
          *(_DWORD *)(a1 + 48) = *((_DWORD *)v14 + 16);
        }
      }
      v16 = *(_QWORD *)(a2 + 176);
      if ( (unsigned int)(*(_DWORD *)v14 - 2) > 1 )
        v7 = 0;
      if ( v16 && *((_QWORD *)v14 + 2) != v16 )
        v7 = 0;
    }
  }
  v17 = 0;
  v53 = 0;
  v18 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v7 && v8 && v9 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v8 + 2));
    if ( ((PointerDeviceType - 1) & 0xFFFFFFFD) != 0 )
      v7 = 0;
    if ( v7 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)v8 + 2), 0LL);
      v21 = (__int64 *)Edgy::_HitTestEdgyRegion(
                         v50,
                         a2,
                         *((_QWORD *)v8 + 2),
                         *((_QWORD *)v8 + 7),
                         PointerDeviceType,
                         IsLegacyDevice);
      v22 = *v21;
      v49 = *(_OWORD *)v21;
      if ( *v21 )
      {
        v17 = 1;
        *(_DWORD *)(a1 + 24) = v21[2];
        *(_QWORD *)(a1 + 16) = v22;
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v49 + 1);
        v53 = *(_DWORD *)(*((_QWORD *)&v49 + 1) + 4LL);
        v23 = ValidateHwnd(*(_QWORD *)(v22 + 8));
        v18 = !v23 || *(char *)(v23 + 59) < 0 || *(char *)(v23 + 60) < 0;
      }
      else
      {
        v17 = 0;
      }
    }
  }
  DisambiguationArcData = 0;
  if ( v7 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v24 = *(_QWORD *)(a2 + 184);
    if ( v24 && (v25 = ValidateHwnd(*(_QWORD *)(v24 + 8))) != 0 && *(char *)(v25 + 59) >= 0 && *(char *)(v25 + 60) >= 0 )
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v26);
    else
      v18 = 1;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 208);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 216);
  }
  v27 = *(_DWORD *)(a2 + 16);
  v28 = 0;
  if ( !v27
    && (unsigned int)(*(_DWORD *)(a1 + 48) - *(_DWORD *)(a2 + 248)) < *(_DWORD *)(a2 + 252)
    && v8
    && *(_QWORD *)(a2 + 240) == *((_QWORD *)v8 + 2) )
  {
    v29 = *(_DWORD *)(a1 + 40);
    v30 = *(_DWORD *)(a2 + 256);
    v31 = v29 <= v30 ? v30 - v29 : v29 - v30;
    v32 = *(_DWORD *)(a1 + 44);
    v33 = *(_DWORD *)(a2 + 260);
    v34 = v32 <= v33 ? v33 - v32 : v32 - v33;
    if ( v31 < *(_DWORD *)(a2 + 264) && v34 < *(_DWORD *)(a2 + 268) )
      v28 = 1;
  }
  v48 = 0;
  if ( !v27 )
  {
    if ( v17 )
    {
      if ( (unsigned int)(*(_DWORD *)v8 - 2) <= 1 )
      {
        InertiaInfo = QueryInertiaInfo(&gInertiaInfo, *((_QWORD *)v8 + 6), (unsigned int)(*(_DWORD *)v8 - 1));
        if ( InertiaInfo )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(InertiaInfo + 128)) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v36 = *(float *)(InertiaInfo + 16), v36 > 0.0) && !*(_DWORD *)(a1 + 24)
              || v36 < 0.0 && *(_DWORD *)(a1 + 24) == 2
              || (v37 = *(float *)(InertiaInfo + 20), v37 > 0.0) && *(_DWORD *)(a1 + 24) == 1
              || v37 < 0.0 && *(_DWORD *)(a1 + 24) == 3 )
            {
              v48 = 1;
            }
          }
        }
      }
    }
  }
  v38 = (v51 == 0) | 2;
  if ( !v8 )
    v38 = v51 == 0;
  v39 = v38 | 4;
  if ( v52 <= 1 )
    v39 = v38;
  v40 = v39 | 8;
  if ( !v7 )
    v40 = v39;
  v41 = v40 | 0x10;
  if ( !v17 )
    v41 = v40;
  v42 = v41 | 0x80;
  if ( !v53 )
    v42 = v41;
  v43 = v42 | 0x1000;
  if ( !v18 )
    v43 = v42;
  v44 = DisambiguationArcData | v43;
  v45 = v44 | 0x40;
  if ( !v28 )
    v45 = v44;
  v46 = v45 | 0x20;
  if ( !v48 )
    v46 = v45;
  *(_DWORD *)(a1 + 8) = v46;
  return a1;
}
