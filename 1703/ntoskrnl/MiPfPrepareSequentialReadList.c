/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x140519D10
 * Callers:
 *     MiPrefetchControlArea @ 0x140423A90 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x14053D5DC (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14009A280 (MiGetControlAreaPtes.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A8BD8 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x1400CDD20 (MiEndingOffsetWithLock.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400CDF50 (MiUpdatePfnPriorityByPte.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x14053CAA0 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8)
{
  bool v8; // zf
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v12; // r15
  _QWORD *PoolWithTag; // rax
  __int64 v14; // r12
  _QWORD *v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 *v17; // r9
  ULONG_PTR *ControlAreaPartition; // r14
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbx
  _QWORD *v22; // r11
  unsigned int v23; // r10d
  unsigned int v24; // esi
  __int16 v25; // ax
  __int64 v26; // r9
  unsigned __int64 *v27; // r11
  __int64 PteAddress; // rax
  __int64 v29; // rdx
  _WORD *v30; // rax
  __int64 Page; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdi
  int v34; // edx
  unsigned __int64 v35; // r14
  _QWORD *v36; // rbp
  _DWORD *v37; // rcx
  _DWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int Mdls; // ebx
  __int64 SharedProtos; // rax
  _QWORD *v46; // [rsp+20h] [rbp-A8h]
  __int64 v47; // [rsp+28h] [rbp-A0h]
  __int64 v48; // [rsp+30h] [rbp-98h]
  unsigned __int64 v49; // [rsp+38h] [rbp-90h]
  unsigned __int64 *v50; // [rsp+48h] [rbp-80h]
  unsigned __int64 v51; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR *v52; // [rsp+58h] [rbp-70h]
  unsigned __int64 v53; // [rsp+60h] [rbp-68h]
  unsigned __int64 v54; // [rsp+68h] [rbp-60h]
  unsigned __int64 v55; // [rsp+70h] [rbp-58h]
  unsigned __int64 *v56; // [rsp+78h] [rbp-50h]
  _WORD *v57; // [rsp+80h] [rbp-48h] BYREF
  __int16 v58; // [rsp+88h] [rbp-40h]
  unsigned __int16 v59; // [rsp+8Ah] [rbp-3Eh]
  int v62; // [rsp+E8h] [rbp+20h]

  v8 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  *a8 = 0LL;
  if ( !v8 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  if ( a5 )
  {
    v12 = a5 >> 12;
    if ( a5 >> 12 < 0x100000000LL && (unsigned int)v12 <= ControlAreaPtes )
      goto LABEL_6;
    return 3221225713LL;
  }
  if ( ControlAreaPtes >= 0x100000000LL )
    return 3221225713LL;
  LODWORD(v12) = ControlAreaPtes;
LABEL_6:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v12 - 1) + 112, 0x6C526D4Du);
  v14 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = a2;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  v15 = PoolWithTag + 11;
  v16 = 0LL;
  v15[1] = v15;
  *v15 = v15;
  *(_QWORD *)(v14 + 76) = 0LL;
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_QWORD *)(v14 + 32) = v14 + 24;
  *(_QWORD *)(v14 + 24) = v14 + 24;
  v51 = 0LL;
  v48 = 0LL;
  v56 = 0LL;
  v54 = 0LL;
  v47 = a2 + 128;
  if ( a5 )
    v47 = MiOffsetToProtos((_DWORD *)a2, a3, &v51);
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a2);
  v52 = ControlAreaPartition;
  v19 = (unsigned __int64)v17;
  v55 = (unsigned __int64)v17;
  v20 = (unsigned __int64)v17;
  v53 = (unsigned __int64)v17;
  if ( a1 )
  {
    v50 = *(unsigned __int64 **)(a1 + 32);
    v21 = __PAIR64__(HIDWORD(v17), *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u);
  }
  else
  {
    v50 = v17;
    v21 = (unsigned __int64)v17;
  }
  *(_DWORD *)(v14 + 48) = a6;
  *(_DWORD *)(v14 + 52) = 5;
  *(_DWORD *)(v14 + 56) = 7;
  v46 = (_QWORD *)(v14 + 104);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
    (*(_DWORD *)(a2 + 56) >> 20) & 0x3F,
    (__int64)&v57);
  v23 = a7;
  v24 = 0;
  v62 = 0;
  if ( !(_DWORD)v12 )
  {
    v42 = 0LL;
    Mdls = 0;
    goto LABEL_49;
  }
  while ( 1 )
  {
    if ( v19 < v20 )
      goto LABEL_13;
    v8 = v19 == 0;
    v33 = v47;
    if ( !v8 )
    {
      v33 = *(_QWORD *)(v47 + 16);
      v47 = v33;
      if ( !v33 )
      {
LABEL_47:
        v42 = v48;
        goto LABEL_48;
      }
      v51 = 0LL;
    }
    v34 = *(_DWORD *)(a2 + 56);
    if ( (v34 & 0x20) != 0 )
    {
      v35 = *(_QWORD *)(v33 + 8);
      if ( (*(_WORD *)(v33 + 34) & 2) == 0 || (v34 & 0x4000000) == 0 )
        goto LABEL_42;
      if ( !*(_QWORD *)(v33 + 24) )
      {
        ControlAreaPartition = v52;
        v19 = v20 - 8;
        goto LABEL_26;
      }
      SharedProtos = MiGetSharedProtos(a2, v23, v33);
      if ( !SharedProtos )
      {
        ControlAreaPartition = v52;
        v19 = v20 - 8;
        goto LABEL_26;
      }
      v35 = *(_QWORD *)(SharedProtos + 32);
    }
    else
    {
      v62 = MiAddViewsForSection((volatile signed __int32 **)v33, *(unsigned int *)(v33 + 44), 4);
      if ( v62 < 0 )
      {
        MiReleaseReadListResources(v14);
        ExFreePoolWithTag((PVOID)v14, 0);
        return (unsigned int)v62;
      }
      v35 = *(_QWORD *)(v33 + 8);
      v36 = (_QWORD *)(v14 + 24);
      v37 = *(_DWORD **)(v14 + 32);
      if ( (_QWORD *)*v36 == v36 || v37[4] == 5 )
      {
        v38 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
        v37 = v38;
        if ( !v38 )
        {
          MiRemoveViewsFromSectionWithPfn((__int64 *)v33, *(unsigned int *)(v33 + 44), 4u);
          MiReleaseReadListResources(v14);
          ExFreePoolWithTag((PVOID)v14, 0);
          return 3221225626LL;
        }
        v38[4] = 0;
        v39 = *(_QWORD **)(v14 + 32);
        if ( (_QWORD *)*v39 != v36 )
          __fastfail(3u);
        *(_QWORD *)v37 = v36;
        *((_QWORD *)v37 + 1) = v39;
        *v39 = v37;
        *(_QWORD *)(v14 + 32) = v37;
      }
      if ( !*(_QWORD *)(v14 + 16) )
        *(_QWORD *)(v14 + 16) = v33;
      *(_QWORD *)&v37[2 * v37[4]++ + 6] = v33;
    }
    v23 = a7;
LABEL_42:
    v19 = v35 + 8 * v51;
    v20 = v35 + 8LL * *(unsigned int *)(v47 + 44);
    v40 = MiStartingOffset((__int64 *)v47, v35, v23);
    v41 = MiEndingOffsetWithLock((_QWORD *)v47);
    if ( (((_WORD)v41 - (_WORD)v40) & 0xFFF) != 0 )
      v55 = v35 + 8 * (((v41 - v40 + 4095) >> 12) - 1);
    else
      v55 = 0LL;
    if ( v50 )
    {
      HIDWORD(v49) = HIDWORD(v40);
      v53 = v35;
      LODWORD(v49) = v40 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
      v21 = v49;
    }
    ControlAreaPartition = v52;
    v16 = v54;
LABEL_13:
    v25 = MI_READ_PTE_LOCK_FREE(v19);
    if ( (v25 & 1) != 0 )
      goto LABEL_30;
    if ( (v25 & 0x400) != 0 )
    {
      if ( v50 )
      {
        v21 += (__int64)(v19 - v53) >> 3 << 12;
        v53 = v19;
        *v50++ = v21;
      }
    }
    else
    {
      if ( (v25 & 0x800) != 0 )
      {
LABEL_30:
        MiUpdatePfnPriorityByPte(v19, a6);
        goto LABEL_26;
      }
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v25) )
        goto LABEL_26;
    }
    v8 = v56 == 0LL;
    *v27 = v19;
    if ( v8 )
      v56 = v27;
    if ( v26 != v47 || (MiGetPteAddress(v19), PteAddress = MiGetPteAddress(v16), PteAddress != v29) )
      *v27 = v19 | 2;
    v16 = v19;
    v54 = v19;
    if ( v19 == v55 )
      *v27 |= 1uLL;
    v46 = v27 + 1;
    if ( !(unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
    {
      v42 = v48;
      v22 = v46;
      v23 = a7;
      if ( !v48 )
      {
        Mdls = -1073741670;
        goto LABEL_49;
      }
LABEL_48:
      Mdls = v62;
      goto LABEL_49;
    }
    v30 = v57;
    ++*v57;
    Page = MiGetPage((__int64)ControlAreaPartition, v59 | (unsigned int)(unsigned __int16)(v58 & *v30), 0x80u);
    if ( Page == -1 )
      break;
    v32 = (_QWORD *)(48 * Page - 0x58000000000LL);
    ++v48;
    *v32 = *(_QWORD *)(v14 + 40);
    *(_QWORD *)(v14 + 40) = v32;
LABEL_26:
    v22 = v46;
    ++v24;
    v23 = a7;
    v19 += 8LL;
    if ( v24 >= (unsigned int)v12 )
      goto LABEL_47;
  }
  MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1LL);
  v42 = v48;
  Mdls = v62;
  v22 = v46;
  v23 = a7;
  if ( !v48 )
    Mdls = -1073741801;
LABEL_49:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v50;
  if ( v42 )
  {
    *(_QWORD *)(v14 + 64) = v56;
    *(_DWORD *)(v14 + 60) = ((__int64)v22 - v14 - 104) >> 3;
    Mdls = MiPfAllocateMdls(v14, v23, 0LL);
    if ( *(_QWORD *)(v14 + 88) == v14 + 88 )
    {
      MiReleaseReadListResources(v14);
      ExFreePoolWithTag((PVOID)v14, 0);
      v14 = 0LL;
    }
    else
    {
      Mdls = 0;
    }
    *a8 = v14;
  }
  else
  {
    MiReleaseReadListResources(v14);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
  return Mdls;
}
