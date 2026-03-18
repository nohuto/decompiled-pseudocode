/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x140495440
 * Callers:
 *     MmPrefetchForCacheManager @ 0x140492FC0 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1404F605C (MiPrefetchControlArea.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiUpdatePfnPriorityByPte @ 0x140036670 (MiUpdatePfnPriorityByPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x1400379C4 (MiSetPfnLink.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x1400A1550 (MiGetControlAreaPtes.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A4E10 (MiRemoveViewsFromSectionWithPfn.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiPfAllocateMdls @ 0x140493FB0 (MiPfAllocateMdls.c)
 *     MiReleaseReadListResources @ 0x1404D1DC8 (MiReleaseReadListResources.c)
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
  _DWORD *v10; // r15
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v15; // rsi
  _QWORD *v17; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbp
  __int64 v21; // rbx
  unsigned __int64 *v22; // r12
  __int64 v23; // r8
  unsigned __int64 v24; // r11
  __int64 v25; // r10
  int v26; // r13d
  __int64 v27; // rdx
  int v28; // ecx
  unsigned __int64 v29; // r15
  __int64 SharedProtos; // rax
  _QWORD *v31; // rdi
  _DWORD *v32; // rdx
  _DWORD *v33; // rax
  _QWORD *v34; // rax
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  _QWORD *v37; // r9
  __int64 PteShadow; // rax
  unsigned __int64 *v39; // rax
  __int64 PteAddress; // rax
  __int64 v41; // rdx
  _WORD *v42; // rax
  ULONG_PTR *v43; // rcx
  __int64 Page; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 *v48; // rax
  unsigned int Mdls; // ebx
  __int64 v50; // [rsp+20h] [rbp-A8h]
  __int64 v51; // [rsp+28h] [rbp-A0h]
  __int64 v52; // [rsp+30h] [rbp-98h]
  _QWORD *v53; // [rsp+38h] [rbp-90h]
  unsigned __int64 v54; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-80h]
  unsigned __int64 v56; // [rsp+50h] [rbp-78h]
  unsigned __int64 v57; // [rsp+58h] [rbp-70h]
  ULONG_PTR *ControlAreaPartition; // [rsp+60h] [rbp-68h]
  unsigned __int64 *v59; // [rsp+68h] [rbp-60h]
  unsigned __int64 v60; // [rsp+70h] [rbp-58h]
  unsigned __int64 v61; // [rsp+78h] [rbp-50h]
  _WORD *v62; // [rsp+80h] [rbp-48h] BYREF
  __int16 v63; // [rsp+88h] [rbp-40h]
  unsigned __int16 v64; // [rsp+8Ah] [rbp-3Eh]
  int v67; // [rsp+E8h] [rbp+20h]

  v8 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v10 = (_DWORD *)a2;
  *a8 = 0LL;
  if ( !v8 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  if ( a5 )
  {
    v13 = a5 >> 12;
    v56 = a5 >> 12;
    if ( a5 >> 12 < 0x100000000LL && (unsigned int)v13 <= ControlAreaPtes )
      goto LABEL_6;
    return 3221225713LL;
  }
  if ( ControlAreaPtes >= 0x100000000LL )
    return 3221225713LL;
  LODWORD(v13) = ControlAreaPtes;
  v56 = (unsigned int)ControlAreaPtes;
LABEL_6:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v13 - 1) + 112, 0x6C526D4Du);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v10;
  v17 = PoolWithTag + 11;
  v18 = (__int64)(v10 + 32);
  v54 = 0LL;
  v17[1] = v17;
  *v17 = v17;
  *(_QWORD *)(v15 + 76) = 0LL;
  *(_QWORD *)(v15 + 16) = 0LL;
  *(_QWORD *)(v15 + 32) = v15 + 24;
  *(_QWORD *)(v15 + 24) = v15 + 24;
  v50 = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  if ( a5 )
    v18 = MiOffsetToProtos(v10, a3, &v54);
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition((__int64)v10);
  v19 = 0LL;
  v57 = 0LL;
  v20 = 0LL;
  v55 = 0LL;
  if ( a1 )
  {
    v21 = *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u;
    v53 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v53 = 0LL;
    v21 = 0LL;
  }
  *(_DWORD *)(v15 + 48) = a6;
  v22 = (unsigned __int64 *)(v15 + 104);
  *(_DWORD *)(v15 + 52) = 5;
  *(_DWORD *)(v15 + 56) = 7;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
    (v10[14] >> 20) & 0x3F,
    (__int64)&v62);
  v25 = 0LL;
  v67 = 0;
  v26 = 0;
  v52 = 0LL;
  if ( (_DWORD)v56 )
  {
    v27 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      if ( v19 < v20 )
      {
        v37 = v53;
      }
      else
      {
        if ( v19 )
        {
          v18 = *(_QWORD *)(v18 + 16);
          if ( !v18 )
            goto LABEL_79;
          v54 = 0LL;
        }
        v28 = v10[14];
        if ( (v28 & 0x20) != 0 )
        {
          v29 = *(_QWORD *)(v18 + 8);
          if ( (*(_BYTE *)(v18 + 34) & 2) != 0 && (v28 & 0x4000000) != 0 )
          {
            v10 = (_DWORD *)a2;
            if ( !*(_QWORD *)(v18 + 24) )
            {
              v19 = v20 - 8;
              goto LABEL_68;
            }
            SharedProtos = MiGetSharedProtos(a2, a7, v18);
            if ( !SharedProtos )
            {
              v19 = v20 - 8;
              goto LABEL_67;
            }
            v29 = *(_QWORD *)(SharedProtos + 32);
          }
        }
        else
        {
          v26 = MiAddViewsForSection((__int64 *)v18, *(unsigned int *)(v18 + 44), 4u);
          if ( v26 < 0 )
          {
            v46 = v15;
            goto LABEL_72;
          }
          v29 = *(_QWORD *)(v18 + 8);
          v31 = (_QWORD *)(v15 + 24);
          v32 = *(_DWORD **)(v15 + 32);
          if ( (_QWORD *)*v31 == v31 || v32[4] == 5 )
          {
            v33 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
            v32 = v33;
            if ( !v33 )
            {
              MiRemoveViewsFromSectionWithPfn((__int64 *)v18, *(unsigned int *)(v18 + 44), 4u);
              MiReleaseReadListResources(v15);
              ExFreePoolWithTag((PVOID)v15, 0);
              return 3221225626LL;
            }
            v33[4] = 0;
            v34 = *(_QWORD **)(v15 + 32);
            if ( (_QWORD *)*v34 != v31 )
              __fastfail(3u);
            *(_QWORD *)v32 = v31;
            *((_QWORD *)v32 + 1) = v34;
            *v34 = v32;
            *(_QWORD *)(v15 + 32) = v32;
          }
          if ( !*(_QWORD *)(v15 + 16) )
            *(_QWORD *)(v15 + 16) = v18;
          *(_QWORD *)&v32[2 * v32[4]++ + 6] = v18;
        }
        v19 = v29 + 8 * v54;
        v60 = v29 + 8LL * *(unsigned int *)(v18 + 44);
        v35 = MiStartingOffset((__int64 *)v18, v29, a7);
        v36 = MiEndingOffsetWithLock((_QWORD *)v18);
        if ( (((_WORD)v36 - (_WORD)v35) & 0xFFF) != 0 )
          v24 = v29 + 8 * (((v36 - v35 + 4095) >> 12) - 1);
        else
          v24 = 0LL;
        v37 = v53;
        v25 = v52;
        v57 = v24;
        v27 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v53 )
        {
          HIDWORD(v51) = HIDWORD(v35);
          v55 = v29;
          LODWORD(v51) = v35 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
          v21 = v51;
        }
        v20 = v60;
        v10 = (_DWORD *)a2;
      }
      PteShadow = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      if ( (PteShadow & 1) != 0 )
        goto LABEL_51;
      if ( (PteShadow & 0x400) != 0 )
      {
        if ( v37 )
        {
          v21 += (__int64)(v19 - v55) >> 3 << 12;
          v55 = v19;
          *v37 = v21;
          v53 = v37 + 1;
        }
LABEL_57:
        v39 = v59;
        v8 = v59 == 0LL;
        *v22 = v19;
        if ( v8 )
          v39 = v22;
        v59 = v39;
        if ( v25 != v18 || (MiGetPteAddress(v19), PteAddress = MiGetPteAddress(v61), PteAddress != v41) )
        {
          v52 = v18;
          *v22 = v19 | 2;
        }
        v61 = v19;
        if ( v19 == v24 )
          *v22 |= 1uLL;
        ++v22;
        if ( !(unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
        {
          v47 = v50;
          if ( !v50 )
            v26 = -1073741670;
          goto LABEL_80;
        }
        v42 = v62;
        v43 = ControlAreaPartition;
        ++*v62;
        Page = MiGetPage((__int64)v43, v64 | (unsigned int)(unsigned __int16)(v63 & *v42), 0x80u);
        if ( Page == -1 )
        {
          MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
          v47 = v50;
          if ( !v50 )
            v26 = -1073741801;
          goto LABEL_80;
        }
        MiSetPfnLink((_QWORD *)(48 * Page - 0x58000000000LL), *(_QWORD *)(v15 + 40));
        ++v50;
        *(_QWORD *)(v15 + 40) = v45;
        goto LABEL_67;
      }
      if ( (PteShadow & 0x800) != 0 )
      {
LABEL_51:
        MiUpdatePfnPriorityByPte(v19, a6, v23, (unsigned __int64)v37);
      }
      else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow, v27, v23) )
      {
        goto LABEL_57;
      }
LABEL_67:
      v27 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_68:
      v19 += 8LL;
      if ( ++v67 >= (unsigned int)v56 )
      {
LABEL_79:
        v47 = v50;
        goto LABEL_80;
      }
      v24 = v57;
      v25 = v52;
    }
  }
  v47 = 0LL;
LABEL_80:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v53;
  v46 = v15;
  if ( v47 )
  {
    v48 = v59;
    *(_DWORD *)(v15 + 60) = ((__int64)v22 - v15 - 104) >> 3;
    *(_QWORD *)(v15 + 64) = v48;
    Mdls = MiPfAllocateMdls(v15, a7, 0LL);
    if ( *(_QWORD *)(v15 + 88) == v15 + 88 )
    {
      MiReleaseReadListResources(v15);
      ExFreePoolWithTag((PVOID)v15, 0);
      *a8 = 0LL;
      return Mdls;
    }
    else
    {
      *a8 = v15;
      return 0LL;
    }
  }
  else
  {
LABEL_72:
    MiReleaseReadListResources(v46);
    ExFreePoolWithTag((PVOID)v15, 0);
    return (unsigned int)v26;
  }
}
