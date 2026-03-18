/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x1405BECC0
 * Callers:
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x1400323B0 (MiMapArbitraryPage.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     MiPerformCombineScan @ 0x14009EED0 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x1400AE620 (MiReleaseArbitraryPage.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     KeQueryAffinityThread @ 0x1400D1320 (KeQueryAffinityThread.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiDereferencePageRuns @ 0x14014C808 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiHashIsCommon @ 0x14026BD98 (MiHashIsCommon.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiProcessCrcList @ 0x1405B6E90 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x1405BF15C (MiAllocateCrcList.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r14
  unsigned int v5; // r12d
  __int64 PteAddress; // r13
  int v7; // ebp
  unsigned int *v8; // r15
  unsigned int v9; // ebx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 *v12; // r15
  unsigned __int64 Mask; // rax
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int *v17; // rcx
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rbx
  char v22; // al
  unsigned __int64 UltraMapping; // rax
  _QWORD *v25; // rdx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 *v32; // rdi
  int v33; // [rsp+30h] [rbp-E8h]
  int v34; // [rsp+34h] [rbp-E4h]
  unsigned int v35; // [rsp+38h] [rbp-E0h]
  int v36; // [rsp+3Ch] [rbp-DCh]
  __int64 *v38; // [rsp+48h] [rbp-D0h]
  __int64 v39; // [rsp+50h] [rbp-C8h]
  unsigned int *v40; // [rsp+58h] [rbp-C0h]
  unsigned __int64 *v41; // [rsp+60h] [rbp-B8h]
  unsigned int *v42; // [rsp+68h] [rbp-B0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp-98h] BYREF
  __int64 v45; // [rsp+88h] [rbp-90h]
  _QWORD *v46; // [rsp+90h] [rbp-88h]
  __int64 *v47; // [rsp+98h] [rbp-80h]
  unsigned int *v48; // [rsp+A0h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-70h]
  __int64 *v50; // [rsp+B0h] [rbp-68h]
  __int64 v51; // [rsp+B8h] [rbp-60h]
  __int64 v52; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v53; // [rsp+C8h] [rbp-50h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+D0h] [rbp-48h] BYREF

  v1 = *(__int64 **)a1;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = **(_QWORD **)a1;
  v5 = *(_DWORD *)(a1 + 52);
  v46 = *(_QWORD **)(a1 + 16);
  PteAddress = 0LL;
  v38 = v1;
  v7 = 0;
  v45 = v2;
  v33 = 0;
  CurrentThread = KeGetCurrentThread();
  v51 = v4;
  v8 = (unsigned int *)MiReferencePageRuns(v4, 1u);
  v42 = v8;
  v36 = 0;
  v39 = *v8;
  v48 = &v8[4 * v39 + 4];
  KeQueryAffinityThread((__int64)CurrentThread, (__int64)&v52);
  v9 = 0;
  v34 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      v44 = (32LL * *(_QWORD *)(1984LL * v9 + *(_QWORD *)(v4 + 16) + 1808) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v10 = (__int64 *)MiAllocateCrcList(v1, v5, &v44);
      v47 = v10;
      v11 = v10;
      if ( !v10 )
        break;
      v12 = v10;
      v50 = (__int64 *)((char *)v10 + (v44 & 0xFFFFFFFFFFFFFFE0uLL));
      KeQueryNodeActiveAffinity(v9, &Affinity, 0LL);
      Mask = Affinity.Mask;
      if ( Affinity.Group == v53 && (Affinity.Mask & v52) != 0 )
      {
        Mask = Affinity.Mask & v52;
        Affinity.Mask &= v52;
      }
      if ( Mask )
      {
        if ( v36 )
        {
          p_PreviousAffinity = 0LL;
        }
        else
        {
          v36 = 1;
          p_PreviousAffinity = &PreviousAffinity;
        }
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      }
      v15 = v39;
      v16 = 0;
      v35 = 0;
      if ( (_DWORD)v39 )
      {
        v17 = v48;
        v18 = (unsigned __int64 *)(v42 + 6);
        v41 = (unsigned __int64 *)(v42 + 6);
        v40 = v48;
        while ( 1 )
        {
          if ( *(unsigned __int8 *)v17 == v9 )
          {
            v19 = *v18;
            v20 = *(v18 - 1) - 1;
            v21 = 48 * v20 - 0x58000000000LL;
            if ( *v18 )
            {
              while ( 1 )
              {
                if ( v3 && *(_DWORD *)(v3 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
                {
                  v17 = v40;
                  v7 = -1073741248;
                  v18 = v41;
                  v16 = v35;
                  v15 = v39;
                  v33 = -1073741248;
                  goto LABEL_22;
                }
                v22 = *(_BYTE *)(v21 + 82);
                v21 += 48LL;
                ++v20;
                if ( (v22 & 7u) <= 1 )
                {
                  do
                  {
                    v30 = MiFreeZeroPageSizeIndex(v21);
                    if ( v30 == -1 )
                      break;
                    v31 = MiLargePageSizes[v30] - (v20 & (MiLargePageSizes[v30] - 1));
                    if ( v31 >= v19 )
                      goto LABEL_20;
                    v20 += v31;
                    v19 -= v31;
                    v21 += 48 * v31;
                  }
                  while ( (*(_BYTE *)(v21 + 34) & 7u) <= 1 );
                }
                if ( (unsigned int)MiCombineCandidate(v1, v5, v21) )
                {
                  if ( !PteAddress )
                  {
                    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 200), 3u, 1LL, 0);
                    PteAddress = MiGetPteAddress(UltraMapping);
                    if ( !PteAddress )
                    {
                      v7 = -1073741670;
                      v33 = -1073741670;
                      goto LABEL_27;
                    }
                  }
                  v25 = v46;
                  v46[9] = PteAddress;
                  v25[8] = v21;
                  if ( (unsigned int)MiMapArbitraryPage(v1, v25, v5, 0, 0) )
                  {
                    if ( (*(_BYTE *)(v21 + 34) & 7) == 6 )
                      ++*(_QWORD *)(v45 + 16);
                    else
                      ++*(_QWORD *)(v45 + 24);
                    v26 = MiPerformCombineScan(a1, (__int64)v46);
                    MiReleaseArbitraryPage((__int64)v46, v27, v28);
                    v29 = a1;
                    PteAddress = 0LL;
                    if ( ((v5 & 4) == 0 || (unsigned int)MiHashIsCommon(a1, *v12)) && v26 == 1 )
                    {
                      v12[1] = v20;
                      v12[2] = 0LL;
                      v12[3] = 0LL;
                      v12 += 4;
                      if ( v12 == v50 )
                      {
                        v32 = v47;
                        MiProcessCrcList(v29, v47, ((char *)v12 - (char *)v47) >> 5, v34);
                        v12 = v32;
                      }
                    }
                    v1 = v38;
                  }
                }
                if ( !--v19 )
                {
LABEL_20:
                  v15 = v39;
                  v16 = v35;
                  v18 = v41;
                  v17 = v40;
                  break;
                }
              }
            }
            v7 = v33;
LABEL_22:
            if ( PteAddress )
              PteAddress = 0LL;
            if ( v7 < 0 )
            {
LABEL_27:
              v11 = v47;
              v9 = v34;
              if ( v12 != v47 )
                MiProcessCrcList(a1, v47, ((char *)v12 - (char *)v47) >> 5, v34);
              break;
            }
            v9 = v34;
          }
          ++v16;
          v17 = (unsigned int *)((char *)v17 + 2);
          v18 += 2;
          v35 = v16;
          v40 = v17;
          v41 = v18;
          if ( v16 >= v15 )
            goto LABEL_27;
        }
      }
      ExFreePoolWithTag(v11, 0);
      if ( v7 >= 0 )
      {
        ++v9;
        v4 = v51;
        v34 = v9;
        if ( v9 != (unsigned __int16)KeNumberNodes )
          continue;
      }
      goto LABEL_31;
    }
    v7 = -1073741670;
LABEL_31:
    if ( v36 == 1 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    v8 = v42;
  }
  MiDereferencePageRuns((__int64)v8);
  return (unsigned int)v7;
}
