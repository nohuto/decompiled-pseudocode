/*
 * XREFs of MiPfPrepareReadList @ 0x140494BE0
 * Callers:
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x14002B1C0 (MiStartingOffsetNeedLock.c)
 *     MiUpdatePfnPriorityByPte @ 0x140036670 (MiUpdatePfnPriorityByPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x1400379C4 (MiSetPfnLink.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x1400A2890 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A4E10 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiPrefetchNormally @ 0x1400F4FCC (MiPrefetchNormally.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiPfAllocateMdls @ 0x140493FB0 (MiPfAllocateMdls.c)
 *     MiReleaseReadListResources @ 0x1404D1DC8 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MiPfPrepareReadList(unsigned __int64 *a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 *v3; // r14
  unsigned int v4; // ebx
  unsigned int v6; // edx
  bool v7; // zf
  __int64 *v8; // rcx
  __int64 v9; // r15
  int v10; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 SubsectionNode; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r14
  unsigned int Mdls; // ebx
  unsigned __int64 *v19; // r13
  unsigned __int64 v20; // r11
  _QWORD *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // r9
  int v27; // esi
  unsigned __int64 v28; // rax
  unsigned int v29; // edx
  _DWORD *v30; // rdx
  _DWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 PteShadow; // rax
  unsigned __int64 *v34; // rax
  __int64 PteAddress; // rax
  __int64 v36; // rdx
  _WORD *v37; // rax
  __int64 Page; // rax
  __int64 v39; // rcx
  unsigned int v40; // [rsp+20h] [rbp-A8h]
  unsigned int v41; // [rsp+24h] [rbp-A4h]
  int v42; // [rsp+28h] [rbp-A0h]
  __int64 v43; // [rsp+30h] [rbp-98h]
  __int64 v44; // [rsp+38h] [rbp-90h]
  _QWORD *v45; // [rsp+40h] [rbp-88h]
  unsigned __int64 v46; // [rsp+48h] [rbp-80h]
  unsigned __int64 *v47; // [rsp+50h] [rbp-78h]
  unsigned __int64 v48; // [rsp+58h] [rbp-70h]
  unsigned __int64 v49; // [rsp+60h] [rbp-68h]
  ULONG_PTR *ControlAreaPartition; // [rsp+68h] [rbp-60h]
  _WORD *v51; // [rsp+70h] [rbp-58h] BYREF
  __int16 v52; // [rsp+78h] [rbp-50h]
  unsigned __int16 v53; // [rsp+7Ah] [rbp-4Eh]
  unsigned int v54; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v57; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a1 + 2;
  *a2 = 0LL;
  v4 = *((_DWORD *)a1 + 4);
  v45 = a1 + 2;
  if ( (v4 & 0x180) != 0 )
    return 3221225711LL;
  v6 = *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 3) == 0;
  v54 = v6;
  v8 = *(__int64 **)(*a1 + 40);
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
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v9);
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
  {
    LODWORD(v57) = MmGetSessionIdEx((__int64)Process);
  }
  else
  {
    if ( *v3 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos((_DWORD *)v9, *v3, &v57)) == 0 )
    {
      ExFreePoolWithTag((PVOID)v12, 0);
      return 0LL;
    }
    LODWORD(v57) = -1;
  }
  v46 = 0LL;
  *(_DWORD *)(v12 + 48) = v4 & 7;
  v40 = v4 & 7;
  v48 = 0LL;
  v49 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  *(_DWORD *)(v12 + 52) = (v4 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v12 + 56) = (v4 >> 3) & 7;
  Mdls = 0;
  v43 = 0LL;
  v19 = (unsigned __int64 *)(v12 + 104);
  v47 = 0LL;
  v44 = 0LL;
  v42 = 0;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], (*(_DWORD *)(v9 + 56) >> 20) & 0x3F, (__int64)&v51);
  v41 = 0;
  if ( !v54 )
    goto LABEL_95;
  v21 = v45;
  v22 = v54;
  while ( 2 )
  {
    v23 = *v21 & 0xFFFFFFFFFFFFFF80uLL;
    v24 = 0xFFFFF6FB7DBED000uLL;
    if ( v16 <= v23 && v23 < v17 )
    {
      v25 = *(_QWORD *)(SubsectionNode + 8);
      v26 = v25 + 8 * ((v23 - v16) >> 12);
      if ( v26 >= v25 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
        break;
      if ( (*(_BYTE *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v9 + 56) & 0x4000000) != 0 )
        goto LABEL_84;
LABEL_60:
      if ( v26 == v48 )
        goto LABEL_83;
      PteShadow = *(_QWORD *)v26;
      v48 = v26;
      if ( v26 >= 0xFFFFF6FB7DBED000uLL )
      {
        v22 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v26 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
      }
      if ( (PteShadow & 1) != 0 )
      {
LABEL_65:
        MiUpdatePfnPriorityByPte(v26, v40, v24, v26);
        goto LABEL_83;
      }
      if ( (PteShadow & 0x400) == 0 )
      {
        if ( (PteShadow & 0x800) != 0 )
          goto LABEL_65;
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow, v22, v24) )
          goto LABEL_83;
      }
      v34 = v47;
      *v19 = v26;
      if ( !v47 )
        v34 = v19;
      v47 = v34;
      if ( v44 != SubsectionNode || (MiGetPteAddress(v26), PteAddress = MiGetPteAddress(v49), PteAddress != v36) )
      {
        v44 = SubsectionNode;
        *v19 = v26 | 2;
      }
      v49 = v26;
      if ( v26 == v20 )
        *v19 |= 1uLL;
      ++v19;
      if ( !MiPrefetchNormally((__int64)ControlAreaPartition, (unsigned int)(*(_DWORD *)(v12 + 56) + 1)) )
        break;
      if ( a3 )
      {
        if ( !*a3 )
          break;
        --*a3;
      }
      if ( (unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
      {
        v37 = v51;
        ++*v51;
        Page = MiGetPage((__int64)ControlAreaPartition, v53 | (unsigned int)(unsigned __int16)(v52 & *v37), 0x80u);
        if ( Page != -1 )
        {
          MiSetPfnLink((_QWORD *)(48 * Page - 0x58000000000LL), *(_QWORD *)(v12 + 40));
          ++v43;
          *(_QWORD *)(v12 + 40) = v39;
          goto LABEL_83;
        }
        MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
        if ( v43 )
          goto LABEL_39;
        Mdls = -1073741801;
      }
      else
      {
        if ( v43 )
          goto LABEL_39;
        Mdls = -1073741670;
      }
LABEL_95:
      MiReleaseReadListResources(v12);
      ExFreePoolWithTag((PVOID)v12, 0);
      return Mdls;
    }
    v27 = 0;
    while ( (*(_DWORD *)(v9 + 56) & 0x20) != 0
         && !*(_DWORD *)(SubsectionNode + 36)
         && *(_QWORD *)(SubsectionNode + 8) != *(_QWORD *)(*(_QWORD *)v9 + 64LL) )
    {
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
LABEL_37:
      if ( !SubsectionNode )
        goto LABEL_38;
    }
    v16 = MiStartingOffsetNeedLock((_QWORD *)SubsectionNode, v57);
    v28 = MiEndingOffsetWithLock((_QWORD *)SubsectionNode);
    v17 = v28;
    if ( v16 > v23 )
      goto LABEL_83;
    if ( v23 >= v28 )
    {
      if ( v23 < v16 )
        goto LABEL_83;
      if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
      {
        SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
      }
      else
      {
        if ( v23 > 0x3FFFFFFFFFF000LL )
          break;
        SubsectionNode = (__int64)MiLocateSubsectionNode(v9, v23, 0);
      }
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
      goto LABEL_51;
    v42 = MiAddViewsForSection((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4u);
    if ( v42 >= 0 )
    {
      v30 = *(_DWORD **)(v12 + 32);
      if ( *(_QWORD *)(v12 + 24) != v12 + 24 && v30[4] != 5 )
        goto LABEL_49;
      v31 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
      v30 = v31;
      if ( v31 )
      {
        v31[4] = 0;
        v32 = *(_QWORD **)(v12 + 32);
        if ( *v32 != v12 + 24 )
          __fastfail(3u);
        *(_QWORD *)v30 = v12 + 24;
        *((_QWORD *)v30 + 1) = v32;
        *v32 = v30;
        *(_QWORD *)(v12 + 32) = v30;
LABEL_49:
        *(_QWORD *)&v30[2 * v30[4]++ + 6] = SubsectionNode;
        if ( !*(_QWORD *)(v12 + 16) )
          *(_QWORD *)(v12 + 16) = SubsectionNode;
LABEL_51:
        v22 = *(_QWORD *)(SubsectionNode + 8);
        v26 = v22 + 8 * ((v23 - v16) >> 12);
        if ( v26 < v22 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
        {
          if ( (*(_BYTE *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v9 + 56) & 0x4000000) != 0 )
            v27 = 1;
          if ( (((_WORD)v17 - (_WORD)v16) & 0xFFF) != 0 )
            v20 = v22 + 8 * (((v17 - v16 + 4095) >> 12) - 1);
          else
            v20 = 0LL;
          v46 = v20;
          if ( v27 != 1 )
          {
            v24 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_60;
          }
LABEL_83:
          v22 = v54;
LABEL_84:
          v21 = v45 + 1;
          ++v41;
          ++v45;
          if ( v41 < (unsigned int)v22 )
          {
            v20 = v46;
            continue;
          }
        }
      }
      else
      {
        MiRemoveViewsFromSectionWithPfn((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4u);
      }
    }
    break;
  }
LABEL_38:
  if ( !v43 )
  {
    Mdls = v42;
    goto LABEL_95;
  }
LABEL_39:
  v29 = v57;
  *(_DWORD *)(v12 + 60) = ((__int64)v19 - v12 - 104) >> 3;
  *(_QWORD *)(v12 + 64) = v47;
  Mdls = MiPfAllocateMdls(v12, v29, 0LL);
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
  *a2 = v12;
  return Mdls;
}
