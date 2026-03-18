/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x140569FE0
 * Callers:
 *     MiCombineIdenticalPages @ 0x14056185C (MiCombineIdenticalPages.c)
 * Callees:
 *     KeQueryAffinityThread @ 0x1400072C0 (KeQueryAffinityThread.c)
 *     MiReleaseArbitraryPage @ 0x140016B60 (MiReleaseArbitraryPage.c)
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     MiPerformCombineScan @ 0x14008B370 (MiPerformCombineScan.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x1400A39B0 (MiMapArbitraryPage.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiHashIsCommon @ 0x140223CB0 (MiHashIsCommon.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x14056A478 (MiAllocateCrcList.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 *v2; // r12
  int v3; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int *v7; // r15
  _QWORD *v8; // r13
  __int64 *v9; // rax
  __int64 *v10; // rbp
  __int64 *v11; // r15
  unsigned __int64 Mask; // rax
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  __int64 v16; // rdx
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rbx
  char v21; // al
  unsigned __int64 v22; // r8
  int v24; // edi
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int64 *v28; // rdi
  int v29; // [rsp+20h] [rbp-E8h]
  unsigned int v30; // [rsp+24h] [rbp-E4h]
  int v31; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+2Ch] [rbp-DCh]
  struct _KTHREAD *v33; // [rsp+30h] [rbp-D8h]
  int v35; // [rsp+40h] [rbp-C8h]
  _QWORD *v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v39; // [rsp+60h] [rbp-A8h]
  unsigned int *v40; // [rsp+68h] [rbp-A0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-80h]
  __int64 *v44; // [rsp+90h] [rbp-78h]
  unsigned int *v45; // [rsp+98h] [rbp-70h]
  __int64 *v46; // [rsp+A0h] [rbp-68h]
  __int64 v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v49; // [rsp+B8h] [rbp-50h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+C0h] [rbp-48h] BYREF

  v1 = 0;
  v2 = *(__int64 **)a1;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 8);
  v36 = *(_QWORD **)(a1 + 16);
  v6 = **(_QWORD **)a1;
  v35 = *(_DWORD *)(a1 + 52);
  v43 = *(_QWORD *)(a1 + 24);
  v31 = 0;
  v33 = CurrentThread;
  v47 = v6;
  v7 = (unsigned int *)MiReferencePageRuns(v6, 1u);
  v40 = v7;
  v32 = 0;
  v8 = 0LL;
  v37 = *v7;
  v45 = &v7[4 * v37];
  KeQueryAffinityThread((__int64)CurrentThread, (__int64)&v48);
  v29 = 0;
  if ( !KeNumberNodes )
    goto LABEL_33;
  do
  {
    v42 = (32LL * *(_QWORD *)(2184LL * v1 + *(_QWORD *)(v6 + 48) + 2056) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v9 = (__int64 *)MiAllocateCrcList(v2, &v42);
    v44 = v9;
    v10 = v9;
    if ( !v9 )
    {
      v3 = -1073741670;
      break;
    }
    v11 = v9;
    v46 = (__int64 *)((char *)v9 + (v42 & 0xFFFFFFFFFFFFFFE0uLL));
    KeQueryNodeActiveAffinity(v1, &Affinity, 0LL);
    Mask = Affinity.Mask;
    if ( Affinity.Group == v49 && (Affinity.Mask & v48) != 0 )
    {
      Mask = Affinity.Mask & v48;
      Affinity.Mask &= v48;
    }
    if ( Mask )
    {
      if ( v32 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v32 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    }
    v14 = v37;
    v30 = 0;
    v15 = 0;
    if ( !(_DWORD)v37 )
      goto LABEL_26;
    v16 = 0LL;
    v17 = (unsigned __int64 *)(v40 + 6);
    v38 = 0LL;
    v39 = (unsigned __int64 *)(v40 + 6);
    while ( *((unsigned __int8 *)v45 + v16 + 16) != v1 )
    {
LABEL_23:
      ++v15;
      v16 += 2LL;
      v17 += 2;
      v30 = v15;
      v38 = v16;
      v39 = v17;
      if ( v15 >= v14 )
        goto LABEL_24;
    }
    v18 = *v17;
    v19 = *(v17 - 1) - 1;
    v20 = 48 * v19 - 0x58000000000LL;
    if ( !*v17 )
    {
LABEL_21:
      v3 = v31;
      if ( v31 < 0 )
        goto LABEL_24;
      v1 = v29;
      goto LABEL_23;
    }
    while ( (!v5 || !*(_DWORD *)(v5 + 4)) && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      v21 = *(_BYTE *)(v20 + 82);
      v20 += 48LL;
      ++v19;
      if ( (v21 & 7u) <= 1 )
      {
        do
        {
          v26 = MiFreeZeroPageSizeIndex(v20);
          if ( v26 == -1 )
            break;
          v27 = MiLargePageSizes[v26] - (v19 & (MiLargePageSizes[v26] - 1));
          if ( v27 >= v18 )
            goto LABEL_20;
          v19 += v27;
          v18 -= v27;
          v20 += 48 * v27;
        }
        while ( (*(_BYTE *)(v20 + 34) & 7u) <= 1 );
      }
      if ( (unsigned int)MiCombineCandidate(v2, v20) )
      {
        if ( !v8 )
        {
          v8 = (_QWORD *)MiReservePtes((__int64)&qword_14036D0A0, 1uLL, v22);
          if ( !v8 )
          {
            v3 = -1073741670;
            goto LABEL_54;
          }
        }
        v36[9] = v8;
        v36[8] = v20;
        if ( (unsigned int)MiMapArbitraryPage(v2, v36, 0, 0) )
        {
          if ( (*(_BYTE *)(v20 + 34) & 7) == 6 )
            ++*(_QWORD *)(v43 + 16);
          else
            ++*(_QWORD *)(v43 + 24);
          v24 = MiPerformCombineScan(a1, (__int64)v36);
          MiReleaseArbitraryPage((__int64)v36);
          MiReleasePtes((__int64)&qword_14036D0A0, v8, 1u);
          v25 = a1;
          v8 = 0LL;
          if ( ((v35 & 4) == 0 || (unsigned int)MiHashIsCommon(a1, *v11)) && v24 == 1 )
          {
            v11[1] = v19;
            v11[2] = 0LL;
            v11[3] = 0LL;
            v11 += 4;
            if ( v11 == v46 )
            {
              v28 = v44;
              MiProcessCrcList(v25, v44, ((char *)v11 - (char *)v44) >> 5, v29);
              v11 = v28;
            }
          }
          CurrentThread = v33;
        }
      }
      if ( !--v18 )
      {
LABEL_20:
        v14 = v37;
        v15 = v30;
        v16 = v38;
        v17 = v39;
        goto LABEL_21;
      }
    }
    v3 = -1073741248;
LABEL_54:
    v31 = v3;
LABEL_24:
    v10 = v44;
    v1 = v29;
    if ( v11 != v44 )
      MiProcessCrcList(a1, v44, ((char *)v11 - (char *)v44) >> 5, v29);
LABEL_26:
    ExFreePoolWithTag(v10, 0);
    if ( v3 < 0 )
      break;
    ++v1;
    v6 = v47;
    v29 = v1;
  }
  while ( v1 != (unsigned __int16)KeNumberNodes );
  if ( v8 )
    MiReleasePtes((__int64)&qword_14036D0A0, v8, 1u);
  if ( v32 == 1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  v7 = v40;
LABEL_33:
  MiDereferencePageRuns((__int64)v7);
  return (unsigned int)v3;
}
