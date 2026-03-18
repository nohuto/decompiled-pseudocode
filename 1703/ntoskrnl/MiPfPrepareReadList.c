/*
 * XREFs of MiPfPrepareReadList @ 0x140518E60
 * Callers:
 *     MmPrefetchPagesEx @ 0x14053D370 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x1400A7F30 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A8BD8 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiStartingOffsetNeedLock @ 0x1400CDC90 (MiStartingOffsetNeedLock.c)
 *     MiEndingOffsetWithLock @ 0x1400CDD20 (MiEndingOffsetWithLock.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400CDF50 (MiUpdatePfnPriorityByPte.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiPrefetchNormally @ 0x140108510 (MiPrefetchNormally.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x14053CAA0 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareReadList(_DWORD *a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  _QWORD *v4; // r14
  unsigned int v5; // ebx
  unsigned int v6; // edx
  bool v7; // zf
  __int64 *v8; // rcx
  __int64 v9; // r12
  int v10; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 SubsectionNode; // rsi
  struct _KPROCESS *Process; // rdi
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r15
  unsigned int Mdls; // ebx
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 *v23; // rbx
  int v25; // edi
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int16 v28; // ax
  unsigned __int64 v29; // r9
  __int64 v30; // r10
  __int64 PteAddress; // rax
  __int64 v32; // rdx
  _WORD *v33; // rax
  __int64 Page; // rax
  _QWORD *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 *v40; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+28h] [rbp-A0h]
  unsigned int v42; // [rsp+30h] [rbp-98h]
  int v43; // [rsp+34h] [rbp-94h]
  __int64 v44; // [rsp+38h] [rbp-90h]
  unsigned __int64 v45; // [rsp+40h] [rbp-88h]
  __int64 v46; // [rsp+50h] [rbp-78h]
  unsigned __int64 *v47; // [rsp+58h] [rbp-70h]
  unsigned __int64 v48; // [rsp+60h] [rbp-68h]
  __int64 *ControlAreaPartition; // [rsp+68h] [rbp-60h]
  _WORD *v50; // [rsp+70h] [rbp-58h] BYREF
  __int16 v51; // [rsp+78h] [rbp-50h]
  unsigned __int16 v52; // [rsp+7Ah] [rbp-4Eh]
  unsigned __int64 v53; // [rsp+D0h] [rbp+8h] BYREF
  __int64 *v54; // [rsp+D8h] [rbp+10h]
  _QWORD *v55; // [rsp+E0h] [rbp+18h]
  unsigned int v56; // [rsp+E8h] [rbp+20h]

  v55 = a3;
  v54 = a2;
  v3 = 0;
  v4 = a1 + 4;
  *a2 = 0LL;
  v5 = a1[4];
  if ( (v5 & 0x180) != 0 )
    return 3221225711LL;
  v6 = a1[2];
  v7 = a1[3] == 0;
  v42 = v6;
  v8 = *(__int64 **)(*(_QWORD *)a1 + 40LL);
  if ( !v7 )
    v8 += 2;
  v9 = *v8;
  v10 = *(_DWORD *)(*v8 + 56);
  if ( (v10 & 0x400) != 0 || !*(_QWORD *)(v9 + 64) )
    return 3221225711LL;
  if ( (v10 & 0x40000000) != 0 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (v6 - 1) + 112, 0x6C526D4Du);
  v12 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v9;
  v13 = PoolWithTag + 11;
  SubsectionNode = v9 + 128;
  v13[1] = v13;
  *v13 = v13;
  *(_QWORD *)(v12 + 76) = 0LL;
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_QWORD *)(v12 + 32) = v12 + 24;
  *(_QWORD *)(v12 + 24) = v12 + 24;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = (__int64 *)MiGetControlAreaPartition(v9);
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
  {
    LODWORD(v53) = MmGetSessionIdEx(Process);
  }
  else
  {
    if ( v16 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos((_DWORD *)v9, v16, &v53)) == 0 )
    {
      ExFreePoolWithTag((PVOID)v12, 0);
      return 0LL;
    }
    LODWORD(v53) = -1;
  }
  v45 = 0LL;
  *(_DWORD *)(v12 + 48) = v5 & 7;
  v40 = (unsigned __int64 *)(v12 + 104);
  v56 = v5 & 7;
  v41 = 0LL;
  v48 = 0LL;
  v44 = 0LL;
  *(_DWORD *)(v12 + 52) = (v5 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v12 + 56) = (v5 >> 3) & 7;
  v17 = 0LL;
  Mdls = 0;
  v47 = 0LL;
  v46 = 0LL;
  v43 = 0;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], (*(_DWORD *)(v9 + 56) >> 20) & 0x3F, (__int64)&v50);
  if ( !v42 )
    goto LABEL_21;
  while ( 1 )
  {
    v20 = *v4 & 0xFFFFFFFFFFFFFF80uLL;
    if ( v20 >= v45 || v17 > v20 )
      break;
    v21 = *(_QWORD *)(SubsectionNode + 8);
    v22 = v21 + 8 * ((v20 - v17) >> 12);
    if ( v22 >= v21 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_18;
    if ( (*(_WORD *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v9 + 56) & 0x4000000) != 0 )
      goto LABEL_17;
LABEL_33:
    if ( v22 != v19 )
    {
      v41 = v22;
      v28 = MI_READ_PTE_LOCK_FREE(v22);
      if ( (v28 & 1) != 0 )
      {
        MiUpdatePfnPriorityByPte(v29, v56);
      }
      else
      {
        if ( (v28 & 0x400) == 0 )
        {
          if ( (v28 & 0x800) != 0 )
          {
            MiUpdatePfnPriorityByPte(v29, v56);
            v19 = v41;
            goto LABEL_17;
          }
          if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v28) )
            goto LABEL_17;
        }
        *v40 = v29;
        if ( !v47 )
          v47 = v40;
        if ( v46 != SubsectionNode || (MiGetPteAddress(v29), PteAddress = MiGetPteAddress(v48), PteAddress != v32) )
        {
          v46 = SubsectionNode;
          *v40 = v29 | 2;
        }
        v48 = v29;
        if ( v29 == v30 )
          *v40 |= 1uLL;
        v23 = ++v40;
        if ( !MiPrefetchNormally(ControlAreaPartition, *(_DWORD *)(v12 + 56) + 1) )
          goto LABEL_19;
        if ( v55 )
        {
          if ( !*v55 )
            goto LABEL_19;
          --*v55;
        }
        if ( !(unsigned int)MiObtainFaultCharges((ULONG_PTR *)ControlAreaPartition, 1u, 1) )
        {
          if ( v44 )
            goto LABEL_69;
          Mdls = -1073741670;
          goto LABEL_21;
        }
        v33 = v50;
        ++*v50;
        Page = MiGetPage((__int64)ControlAreaPartition, v52 | (unsigned int)(unsigned __int16)(v51 & *v33), 0x80u);
        if ( Page == -1 )
        {
          MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1LL);
          if ( v44 )
            goto LABEL_69;
          Mdls = -1073741801;
LABEL_21:
          MiReleaseReadListResources(v12);
          ExFreePoolWithTag((PVOID)v12, 0);
          return Mdls;
        }
        v35 = (_QWORD *)(48 * Page - 0x58000000000LL);
        ++v44;
        *v35 = *(_QWORD *)(v12 + 40);
        *(_QWORD *)(v12 + 40) = v35;
      }
LABEL_36:
      v19 = v41;
    }
LABEL_17:
    ++v3;
    ++v4;
    if ( v3 >= v42 )
      goto LABEL_18;
  }
  v25 = 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0
      && !*(_DWORD *)(SubsectionNode + 36)
      && *(_QWORD *)(SubsectionNode + 8) != *(_QWORD *)(*(_QWORD *)v9 + 64LL) )
    {
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
      goto LABEL_54;
    }
    v17 = MiStartingOffsetNeedLock((__int64 *)SubsectionNode, v53);
    v26 = MiEndingOffsetWithLock((_QWORD *)SubsectionNode);
    v45 = v26;
    if ( v17 > v20 )
      goto LABEL_36;
    if ( v20 < v26 )
      break;
    if ( v20 < v17 )
      goto LABEL_36;
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
    {
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
    }
    else
    {
      if ( v20 > 0x3FFFFFFFFFF000LL )
        goto LABEL_18;
      SubsectionNode = (__int64)MiLocateSubsectionNode(v9, v20, 0);
    }
LABEL_54:
    if ( !SubsectionNode )
      goto LABEL_18;
  }
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
    goto LABEL_29;
  v43 = MiAddViewsForSection((volatile signed __int32 **)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4);
  if ( v43 < 0 )
    goto LABEL_18;
  v36 = *(_DWORD **)(v12 + 32);
  if ( *(_QWORD *)(v12 + 24) != v12 + 24 && v36[4] != 5 )
  {
LABEL_61:
    *(_QWORD *)&v36[2 * v36[4]++ + 6] = SubsectionNode;
    if ( !*(_QWORD *)(v12 + 16) )
      *(_QWORD *)(v12 + 16) = SubsectionNode;
LABEL_29:
    v27 = *(_QWORD *)(SubsectionNode + 8);
    v22 = v27 + 8 * ((v20 - v17) >> 12);
    if ( v22 >= v27 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_18;
    if ( (*(_WORD *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v9 + 56) & 0x4000000) != 0 )
      v25 = 1;
    v19 = v41;
    if ( v25 == 1 )
      goto LABEL_17;
    goto LABEL_33;
  }
  v37 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
  v36 = v37;
  if ( v37 )
  {
    v37[4] = 0;
    v38 = *(_QWORD **)(v12 + 32);
    if ( *v38 != v12 + 24 )
      __fastfail(3u);
    *(_QWORD *)v36 = v12 + 24;
    *((_QWORD *)v36 + 1) = v38;
    *v38 = v36;
    *(_QWORD *)(v12 + 32) = v36;
    goto LABEL_61;
  }
  MiRemoveViewsFromSectionWithPfn((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4u);
LABEL_18:
  v23 = v40;
LABEL_19:
  if ( !v44 )
  {
    Mdls = v43;
    goto LABEL_21;
  }
LABEL_69:
  v39 = (unsigned int)v53;
  *(_DWORD *)(v12 + 60) = ((__int64)v23 - v12 - 104) >> 3;
  *(_QWORD *)(v12 + 64) = v47;
  Mdls = MiPfAllocateMdls(v12, v39, 0LL);
  if ( *(_QWORD *)(v12 + 88) == v12 + 88 )
  {
    MiReleaseReadListResources(v12);
    ExFreePoolWithTag((PVOID)v12, 0);
    v12 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *v54 = v12;
  return Mdls;
}
