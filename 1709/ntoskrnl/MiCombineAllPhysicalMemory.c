/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x1406ECD38
 * Callers:
 *     MiCombineIdenticalPages @ 0x140509D90 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiMapArbitraryPage @ 0x140008F00 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x1400097B4 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x14000A0A0 (MiReleaseArbitraryPage.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     KeQueryNodeActiveAffinity @ 0x1400FC870 (KeQueryNodeActiveAffinity.c)
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     KeQueryAffinityThread @ 0x14012F6F0 (KeQueryAffinityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiHashIsCommon @ 0x14023192C (MiHashIsCommon.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x1406ECC24 (MiAllocateCrcList.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 a1)
{
  __int64 *v1; // rbx
  int v2; // r14d
  int v3; // r15d
  unsigned int v4; // esi
  __int64 v5; // rax
  unsigned int *v6; // rdi
  unsigned int *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r13d
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // rbx
  unsigned __int64 Mask; // rcx
  __int64 v16; // r11
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // rdi
  int v25; // eax
  unsigned __int64 v26; // rcx
  int v27; // eax
  __int64 PteAddress; // rax
  unsigned __int64 UltraMapping; // rax
  int v30; // eax
  int v31; // esi
  __int64 v32; // r10
  bool v33; // zf
  unsigned int v35; // [rsp+38h] [rbp-99h]
  unsigned int v36; // [rsp+3Ch] [rbp-95h]
  int v37; // [rsp+40h] [rbp-91h]
  unsigned int v38; // [rsp+48h] [rbp-89h]
  __int64 v39; // [rsp+50h] [rbp-81h]
  unsigned int *v40; // [rsp+58h] [rbp-79h]
  __int64 v42; // [rsp+68h] [rbp-69h]
  _QWORD *v43; // [rsp+70h] [rbp-61h]
  __int64 *v44; // [rsp+78h] [rbp-59h]
  unsigned int *v45; // [rsp+80h] [rbp-51h]
  __int64 *v46; // [rsp+88h] [rbp-49h]
  struct _GROUP_AFFINITY Affinity; // [rsp+90h] [rbp-41h] BYREF
  SIZE_T v48; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-29h]
  unsigned int *v50; // [rsp+B0h] [rbp-21h]
  __int64 v51; // [rsp+B8h] [rbp-19h]
  __int64 v52; // [rsp+C0h] [rbp-11h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-9h]
  __int64 *v54; // [rsp+D0h] [rbp-1h]
  __int64 v55; // [rsp+D8h] [rbp+7h] BYREF
  __int16 v56; // [rsp+E0h] [rbp+Fh]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+E8h] [rbp+17h] BYREF

  v1 = *(__int64 **)a1;
  v2 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 52);
  v52 = *(_QWORD *)(a1 + 8);
  v43 = *(_QWORD **)(a1 + 16);
  v5 = *v1;
  v49 = *(_QWORD *)(a1 + 24);
  v46 = v1;
  v36 = v4;
  CurrentThread = KeGetCurrentThread();
  v51 = v5;
  v6 = (unsigned int *)MiReferencePageRuns(v5, 1u);
  v50 = v6;
  v37 = 0;
  v38 = *v6;
  v7 = &v6[4 * *v6];
  v42 = 0LL;
  v45 = v7;
  KeQueryAffinityThread((__int64)CurrentThread, (__int64)&v55);
  v11 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      v48 = (32LL * *(_QWORD *)(8256LL * v11 + *(_QWORD *)(v51 + 16) + 8080) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v12 = (__int64 *)MiAllocateCrcList(v1, v4, &v48);
      v44 = v12;
      v13 = v12;
      if ( !v12 )
        break;
      v14 = v12;
      v54 = (__int64 *)((char *)v12 + (v48 & 0xFFFFFFFFFFFFFFE0uLL));
      KeQueryNodeActiveAffinity(v11, &Affinity, 0LL);
      Mask = Affinity.Mask;
      if ( Affinity.Group == v56 )
      {
        if ( (Affinity.Mask & v55) != 0 )
          Mask = Affinity.Mask & v55;
        Affinity.Mask = Mask;
      }
      v16 = 0LL;
      if ( Mask )
      {
        if ( v2 )
        {
          p_PreviousAffinity = 0LL;
        }
        else
        {
          v37 = 1;
          p_PreviousAffinity = &PreviousAffinity;
        }
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        v16 = 0LL;
      }
      v18 = v38;
      v19 = 0;
      v35 = 0;
      if ( v38 )
      {
        v20 = 0LL;
        v21 = (unsigned __int64 *)(v6 + 6);
        v39 = 0LL;
        v40 = v6 + 6;
        while ( 1 )
        {
          if ( *((unsigned __int8 *)v7 + v20 + 16) == v11 )
          {
            v22 = *v21;
            v23 = *(v21 - 1) - 1;
            v24 = 48 * v23 - 0x58000000000LL;
            if ( *v21 )
            {
              while ( (!v52 || *(_DWORD *)(v52 + 4) == (_DWORD)v16)
                   && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
              {
                v24 += 48LL;
                ++v23;
                while ( (*(_BYTE *)(v24 + 34) & 7u) <= 1 )
                {
                  v25 = MiFreeZeroPageSizeIndex(v24);
                  if ( v25 == -1 )
                    break;
                  v26 = MiLargePageSizes[v25] - (v23 & (MiLargePageSizes[v25] - 1));
                  if ( v26 >= v22 )
                    goto LABEL_40;
                  v23 += v26;
                  v24 += 48 * v26;
                  v22 -= v26;
                }
                v27 = MiCombineCandidate(v46, v36, v24);
                v16 = 0LL;
                if ( v27 )
                {
                  PteAddress = v42;
                  if ( !v42 )
                  {
                    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 152), 3u, 1LL, 0);
                    PteAddress = MiGetPteAddress(UltraMapping);
                    v16 = 0LL;
                    v42 = PteAddress;
                    if ( !PteAddress )
                    {
                      v3 = -1073741670;
                      goto LABEL_40;
                    }
                  }
                  v43[9] = PteAddress;
                  v43[8] = v24;
                  v30 = MiMapArbitraryPage((__int64)v46, v43, v36, 0, 0);
                  v16 = 0LL;
                  if ( v30 )
                  {
                    if ( (*(_BYTE *)(v24 + 34) & 7) == 6 )
                      ++*(_QWORD *)(v49 + 16);
                    else
                      ++*(_QWORD *)(v49 + 24);
                    v31 = MiPerformCombineScan(a1, (__int64)v43);
                    MiReleaseArbitraryPage((__int64)v43);
                    v32 = a1;
                    v16 = 0LL;
                    v42 = 0LL;
                    if ( (v36 & 4) != 0 )
                      v31 = (unsigned int)MiHashIsCommon(a1, *v14) != 0 ? v31 : 0;
                    v33 = v31 == 1;
                    v13 = v44;
                    if ( v33 )
                    {
                      v14[1] = v23;
                      v14[2] = v16;
                      v14[3] = v16;
                      v14 += 4;
                      if ( v14 == v54 )
                      {
                        MiProcessCrcList(v32, v44, ((char *)v14 - (char *)v44) >> 5, v11);
                        v16 = 0LL;
                        v14 = v44;
                      }
                    }
                  }
                }
                if ( !--v22 )
                  goto LABEL_40;
              }
              v3 = -1073741248;
LABEL_40:
              v18 = v38;
              v19 = v35;
              v21 = (unsigned __int64 *)v40;
              v20 = v39;
            }
            v42 = v16;
            if ( v3 < 0 )
            {
LABEL_44:
              if ( v14 != v13 )
                MiProcessCrcList(a1, v13, ((char *)v14 - (char *)v13) >> 5, v11);
              v7 = v45;
              v6 = v50;
              break;
            }
            v7 = v45;
          }
          ++v19;
          v20 += 2LL;
          v21 += 2;
          v35 = v19;
          v39 = v20;
          v40 = (unsigned int *)v21;
          if ( v19 >= v18 )
            goto LABEL_44;
        }
      }
      ExFreePoolWithTag(v13, 0);
      v2 = v37;
      if ( v3 >= 0 )
      {
        ++v11;
        v1 = v46;
        LOBYTE(v4) = v36;
        if ( v11 != (unsigned __int16)KeNumberNodes )
          continue;
      }
      goto LABEL_51;
    }
    v3 = -1073741670;
LABEL_51:
    if ( v2 == 1 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  MiDereferencePageRuns((__int64)v6, v8, v9, v10);
  return (unsigned int)v3;
}
