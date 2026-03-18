/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x1404ADAD0
 * Callers:
 *     MmPrefetchForCacheManager @ 0x1404BBCB8 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14053E190 (MiPrefetchControlArea.c)
 * Callees:
 *     MiControlAreaUsingExtents @ 0x1400093B8 (MiControlAreaUsingExtents.c)
 *     MiGetNextPageColor @ 0x1400093C8 (MiGetNextPageColor.c)
 *     MiSetPfnLink @ 0x1400093E8 (MiSetPfnLink.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140048408 (MiRemoveViewsFromSectionWithPfn.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x1400E5F38 (MiGetControlAreaPtes.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 *     MiUpdatePfnPriorityByPte @ 0x140128510 (MiUpdatePfnPriorityByPte.c)
 *     MiEndingOffsetWithLock @ 0x140128880 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiRefillPurgedExtents @ 0x14025E774 (MiRefillPurgedExtents.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x1404BBF28 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x1404BC050 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        _QWORD *a8)
{
  bool v8; // zf
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v12; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // r14
  __int64 v15; // r11
  _QWORD *v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 *v20; // rdi
  unsigned __int64 v21; // r13
  __int64 v22; // rbx
  _QWORD *v23; // r12
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // r9
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 PteShadow; // rax
  __int64 *v30; // r10
  _QWORD *v31; // rax
  unsigned __int64 v32; // r8
  _QWORD *v33; // rbp
  __int64 PteAddress; // rax
  __int64 v35; // rdx
  unsigned int NextPageColor; // eax
  __int64 Page; // rax
  __int64 v38; // rcx
  __int64 v39; // rbp
  int v40; // ecx
  unsigned __int64 v41; // r14
  _DWORD *v42; // rcx
  _QWORD *v43; // r13
  _DWORD *v44; // rax
  _QWORD *v45; // rax
  unsigned __int64 v46; // rbp
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  unsigned int v50; // ebp
  unsigned int Mdls; // ebx
  __int64 SharedProtos; // rax
  int v54; // eax
  _QWORD *v55; // [rsp+20h] [rbp-A8h]
  __int64 v56; // [rsp+28h] [rbp-A0h]
  __int64 *BugCheckParameter2; // [rsp+30h] [rbp-98h]
  __int64 v58; // [rsp+38h] [rbp-90h]
  _QWORD *P; // [rsp+40h] [rbp-88h]
  _QWORD *v60; // [rsp+50h] [rbp-78h]
  unsigned __int64 v61; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-68h]
  __int64 *v63; // [rsp+68h] [rbp-60h]
  ULONG_PTR *ControlAreaPartition; // [rsp+70h] [rbp-58h]
  __int64 *v65; // [rsp+78h] [rbp-50h]
  _BYTE v66[16]; // [rsp+80h] [rbp-48h] BYREF
  int v69; // [rsp+E8h] [rbp+20h]

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
  P = PoolWithTag;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v15 = a2;
  PoolWithTag[1] = a2;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  v16 = PoolWithTag + 11;
  v17 = 0LL;
  v61 = 0LL;
  v16[1] = v16;
  *v16 = v16;
  *(_QWORD *)((char *)v14 + 76) = 0LL;
  v14[2] = 0LL;
  v14[4] = v14 + 3;
  v14[3] = v14 + 3;
  v56 = 0LL;
  v55 = 0LL;
  v65 = 0LL;
  BugCheckParameter2 = (__int64 *)(a2 + 128);
  if ( a5 )
  {
    v18 = MiOffsetToProtos((_DWORD *)a2, a3, &v61);
    v15 = a2;
    BugCheckParameter2 = (__int64 *)v18;
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v15);
  v20 = 0LL;
  v63 = 0LL;
  v21 = 0LL;
  v62 = 0LL;
  if ( a1 )
  {
    v22 = *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u;
    v60 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v60 = 0LL;
    v22 = 0LL;
  }
  *((_DWORD *)v14 + 12) = a6;
  v23 = v14 + 13;
  *((_DWORD *)v14 + 13) = 5;
  *((_DWORD *)v14 + 14) = 7;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
    (*(_DWORD *)(v19 + 56) >> 20) & 0x3F,
    (__int64)v66);
  v26 = a7;
  v27 = 0;
  v69 = 0;
  if ( !(_DWORD)v12 )
  {
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0;
    goto LABEL_55;
  }
  v28 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    if ( (unsigned __int64)v20 < v21 )
      goto LABEL_14;
    v39 = (__int64)BugCheckParameter2;
    if ( v20 )
    {
      v39 = BugCheckParameter2[2];
      BugCheckParameter2 = (__int64 *)v39;
      if ( !v39 )
      {
LABEL_53:
        v48 = v55;
        v49 = v56;
        goto LABEL_54;
      }
      v61 = 0LL;
    }
    v40 = *(_DWORD *)(v25 + 56);
    if ( (v40 & 0x20) == 0 )
    {
      v69 = MiAddViewsForSection((__int64 *)v39, *(unsigned int *)(v39 + 44), 4u);
      if ( v69 < 0 )
      {
        MiReleaseReadListResources(v14);
        ExFreePoolWithTag(v14, 0);
        return (unsigned int)v69;
      }
      v41 = *(_QWORD *)(v39 + 8);
      v42 = (_DWORD *)P[4];
      v43 = P + 3;
      if ( (_QWORD *)*v43 == v43 || v42[4] == 5 )
      {
        v44 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
        v42 = v44;
        if ( !v44 )
        {
          MiRemoveViewsFromSectionWithPfn((__int64 *)v39);
          MiReleaseReadListResources(P);
          ExFreePoolWithTag(P, 0);
          return 3221225626LL;
        }
        v44[4] = 0;
        v45 = (_QWORD *)P[4];
        if ( (_QWORD *)*v45 != v43 )
          __fastfail(3u);
        *(_QWORD *)v42 = v43;
        *((_QWORD *)v42 + 1) = v45;
        *v45 = v42;
        P[4] = v42;
      }
      if ( !P[2] )
        P[2] = v39;
      *(_QWORD *)&v42[2 * v42[4]++ + 6] = v39;
      goto LABEL_47;
    }
    v41 = *(_QWORD *)(v39 + 8);
    if ( (*(_BYTE *)(v39 + 34) & 2) == 0 || (v40 & 0x4000000) == 0 )
      goto LABEL_48;
    if ( *(_QWORD *)(v39 + 24) )
      break;
    v14 = P;
    v20 = (__int64 *)(v21 - 8);
LABEL_32:
    v26 = a7;
    ++v27;
    ++v20;
    if ( v27 >= (unsigned int)v12 )
      goto LABEL_53;
    v17 = v55;
    v25 = a2;
  }
  SharedProtos = MiGetSharedProtos(v25, (unsigned int)v26, v39);
  if ( !SharedProtos )
  {
    v14 = P;
    v20 = (__int64 *)(v21 - 8);
    goto LABEL_31;
  }
  v41 = *(_QWORD *)(SharedProtos + 72);
LABEL_47:
  LODWORD(v26) = a7;
LABEL_48:
  v20 = (__int64 *)(v41 + 8 * v61);
  v21 = v41 + 8LL * *(unsigned int *)(v39 + 44);
  v46 = MiStartingOffset((__int64 *)v39, v41, v26);
  v47 = MiEndingOffsetWithLock(BugCheckParameter2);
  if ( (((_WORD)v47 - (_WORD)v46) & 0xFFF) != 0 )
    v63 = (__int64 *)(v41 + 8 * (((v47 - v46 + 4095) >> 12) - 1));
  else
    v63 = 0LL;
  v25 = a2;
  v28 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v60 )
  {
    HIDWORD(v58) = HIDWORD(v46);
    v62 = v41;
    LODWORD(v58) = v46 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
    v22 = v58;
  }
  v17 = v55;
  v14 = P;
LABEL_14:
  PteShadow = *v20;
  if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)v20, *v20);
  if ( (PteShadow & 1) != 0 )
    goto LABEL_36;
  if ( (PteShadow & 0x400) == 0 )
  {
    if ( (PteShadow & 0x800) == 0 )
    {
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow, v28, v24, v26) )
      {
LABEL_22:
        v31 = v23;
        *v23 = v20;
        if ( v17 )
          v31 = v17;
        v32 = (unsigned __int64)v20;
        v55 = v31;
        v33 = v31;
        if ( v30 != BugCheckParameter2
          || (MiGetPteAddress((unsigned __int64)v20),
              PteAddress = MiGetPteAddress((unsigned __int64)v65),
              PteAddress != v35) )
        {
          v32 |= 2uLL;
          *v23 = v32;
        }
        v65 = v20;
        if ( v20 == v63 )
          *v23 = v32 | 1;
        ++v23;
        if ( !(unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
        {
          v54 = v69;
          v49 = v56;
          LODWORD(v26) = a7;
          if ( !v56 )
            v54 = -1073741670;
          v50 = v54;
          v48 = v55;
          goto LABEL_55;
        }
        NextPageColor = MiGetNextPageColor((__int64)v66);
        Page = MiGetPage((__int64)ControlAreaPartition, NextPageColor, 0x200u);
        if ( Page == -1 )
        {
          MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
          v49 = v56;
          v48 = v33;
          LODWORD(v26) = a7;
          if ( !v56 )
          {
            v50 = -1073741801;
            goto LABEL_55;
          }
LABEL_54:
          v50 = v69;
          goto LABEL_55;
        }
        MiSetPfnLink((_QWORD *)(48 * Page - 0x58000000000LL), v14[5]);
        ++v56;
        v14[5] = v38;
      }
LABEL_31:
      v28 = 0xFFFFF6FB7DBED7F8uLL;
      goto LABEL_32;
    }
LABEL_36:
    MiUpdatePfnPriorityByPte((unsigned __int64)v20, a6);
    goto LABEL_31;
  }
  if ( !(unsigned int)MiControlAreaUsingExtents(v25) )
  {
    if ( v60 )
    {
      v22 += (__int64)((__int64)v20 - v62) >> 3 << 12;
      v62 = (unsigned __int64)v20;
      *v60++ = v22;
    }
    goto LABEL_22;
  }
  v69 = MiRefillPurgedExtents(BugCheckParameter2);
  v50 = v69;
  if ( v69 >= 0 )
    goto LABEL_31;
  v49 = v56;
  v48 = v55;
  LODWORD(v26) = a7;
  if ( !v56 )
    v50 = -1073741670;
LABEL_55:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v60;
  if ( v49 )
  {
    v14[8] = v48;
    *((_DWORD *)v14 + 15) = ((char *)v23 - (char *)v14 - 104) >> 3;
    Mdls = MiPfAllocateMdls(v14, (unsigned int)v26, 0LL);
    if ( (_QWORD *)v14[11] == v14 + 11 )
    {
      MiReleaseReadListResources(v14);
      ExFreePoolWithTag(v14, 0);
      v14 = 0LL;
    }
    else
    {
      Mdls = 0;
    }
    *a8 = v14;
    return Mdls;
  }
  else
  {
    MiReleaseReadListResources(v14);
    ExFreePoolWithTag(v14, 0);
    return v50;
  }
}
