/*
 * XREFs of MiPfPrepareReadList @ 0x1405B7520
 * Callers:
 *     MmPrefetchPagesEx @ 0x1404BBAC8 (MmPrefetchPagesEx.c)
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
 *     MiLocateSubsectionNode @ 0x1400E48D0 (MiLocateSubsectionNode.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 *     MiUpdatePfnPriorityByPte @ 0x140128510 (MiUpdatePfnPriorityByPte.c)
 *     MiEndingOffsetWithLock @ 0x140128880 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x1401289A0 (MiStartingOffsetNeedLock.c)
 *     MiPrefetchNormally @ 0x14012B448 (MiPrefetchNormally.c)
 *     MiRefillPurgedExtents @ 0x14025E774 (MiRefillPurgedExtents.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x1404BBF28 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x1404BC050 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareReadList(unsigned __int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v3; // r15
  unsigned int v5; // ebx
  unsigned int v6; // edx
  __int64 *v7; // rcx
  __int64 v8; // r14
  _QWORD *PoolWithTag; // rax
  __int64 v10; // r12
  _QWORD *v11; // rax
  __int64 v12; // rbp
  _KPROCESS *Process; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // esi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  int v18; // edx
  _DWORD *v19; // r11
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *v24; // r9
  __int64 PteShadow; // rax
  int v26; // edi
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 *v30; // rax
  unsigned int v31; // edi
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r8
  unsigned __int64 *v35; // rax
  __int64 PteAddress; // rax
  __int64 v37; // rdx
  unsigned int NextPageColor; // eax
  __int64 Page; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  _DWORD *v42; // rcx
  _DWORD *v43; // rax
  _QWORD *v44; // rax
  int v45; // edx
  unsigned int Mdls; // ebx
  _QWORD *SubsectionNode; // rax
  int v48; // eax
  __int64 v49; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v50; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v51; // [rsp+30h] [rbp-98h]
  unsigned int SessionId; // [rsp+38h] [rbp-90h]
  __int64 v53; // [rsp+40h] [rbp-88h]
  unsigned int v54; // [rsp+48h] [rbp-80h]
  unsigned int v55; // [rsp+4Ch] [rbp-7Ch]
  __int64 v56; // [rsp+50h] [rbp-78h]
  __int64 v57; // [rsp+58h] [rbp-70h]
  unsigned __int64 v58; // [rsp+60h] [rbp-68h]
  ULONG_PTR *ControlAreaPartition; // [rsp+68h] [rbp-60h]
  _BYTE v60[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+E8h] [rbp+20h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v5 = *((_DWORD *)a1 + 4);
  if ( (v5 & 0x180) != 0 )
    return 3221225711LL;
  v6 = *((_DWORD *)a1 + 2);
  v55 = v6;
  v7 = *(__int64 **)(*a1 + 40);
  if ( *((_DWORD *)a1 + 3) )
    v7 += 2;
  v8 = *v7;
  v53 = *v7;
  if ( (*(_DWORD *)(*v7 + 56) & 0x400) != 0 || !*(_QWORD *)(v8 + 64) )
    return 3221225711LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (v6 - 1) + 112, 0x6C526D4Du);
  v10 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v8;
  v11 = PoolWithTag + 11;
  v12 = v8 + 128;
  v11[1] = v11;
  *v11 = v11;
  *(_QWORD *)(v10 + 76) = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 32) = v10 + 24;
  *(_QWORD *)(v10 + 24) = v10 + 24;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v8);
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)Process);
  }
  else
  {
    v14 = a1[2];
    if ( v14 > 0x3FFFFFFFFFF000LL || (v12 = MiOffsetToProtos((_DWORD *)v8, v14, &v64)) == 0 )
    {
      ExFreePoolWithTag((PVOID)v10, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  v15 = 0;
  v51 = (unsigned __int64 *)(v10 + 104);
  v57 = 0LL;
  v58 = 0LL;
  *(_DWORD *)(v10 + 48) = v5 & 7;
  v54 = v5 & 7;
  v49 = 0LL;
  v50 = 0LL;
  v56 = 0LL;
  *(_DWORD *)(v10 + 52) = (v5 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v10 + 56) = (v5 >> 3) & 7;
  v16 = 0LL;
  v17 = 0LL;
  v18 = (*(_DWORD *)(v53 + 56) >> 20) & 0x3F;
  LODWORD(v64) = 0;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], v18, (__int64)v60);
  if ( !v55 )
  {
    v31 = 0;
LABEL_40:
    MiReleaseReadListResources(v10);
    ExFreePoolWithTag((PVOID)v10, 0);
    return v31;
  }
  while ( 1 )
  {
    v20 = 0xFFFFF6FB7DBED7F8uLL;
    v21 = 0xFFFFF6FB7DBED000uLL;
    v22 = a1[v15 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v22 >= v17 || v16 > v22 )
      break;
    v23 = *(_QWORD *)(v12 + 8);
    v24 = (__int64 *)(v23 + 8 * ((v22 - v16) >> 12));
    if ( (unsigned __int64)v24 >= v23 + 8 * (unsigned __int64)*(unsigned int *)(v12 + 44) )
      goto LABEL_36;
    if ( (*(_BYTE *)(v12 + 34) & 2) != 0 && (v19[14] & 0x4000000) != 0 )
      goto LABEL_22;
LABEL_16:
    if ( v24 == v3 )
      goto LABEL_22;
    PteShadow = *v24;
    v3 = v24;
    if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL )
    {
      v21 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v24, *v24);
    }
    if ( (PteShadow & 1) != 0 )
    {
LABEL_21:
      MiUpdatePfnPriorityByPte((unsigned __int64)v24, v54);
      goto LABEL_22;
    }
    if ( (PteShadow & 0x400) != 0 )
    {
      if ( (unsigned int)MiControlAreaUsingExtents((__int64)v19) )
      {
        LODWORD(v64) = MiRefillPurgedExtents((__int64 *)v12);
        if ( (v64 & 0x80000000) != 0LL )
        {
          if ( v49 )
          {
            v28 = v51;
            v30 = v50;
            goto LABEL_74;
          }
          v31 = -1073741670;
          goto LABEL_40;
        }
        goto LABEL_22;
      }
LABEL_42:
      v34 = v33;
      v35 = v51;
      if ( v50 )
        v35 = v50;
      v50 = v35;
      *v51 = v33;
      if ( v56 != v12 || (MiGetPteAddress(v33), PteAddress = MiGetPteAddress(v58), PteAddress != v37) )
      {
        v34 |= 2uLL;
        v56 = v12;
        *v51 = v34;
      }
      v58 = v33;
      if ( v33 == v57 )
        *v51 = v34 | 1;
      v28 = ++v51;
      if ( !MiPrefetchNormally((__int64)ControlAreaPartition, (unsigned int)(*(_DWORD *)(v10 + 56) + 1)) )
        goto LABEL_37;
      if ( a3 )
      {
        if ( !*a3 )
          goto LABEL_37;
        --*a3;
      }
      if ( !(unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
      {
        v48 = v64;
        v29 = v49;
        if ( !v49 )
          v48 = -1073741670;
        LODWORD(v64) = v48;
        goto LABEL_38;
      }
      NextPageColor = MiGetNextPageColor((__int64)v60);
      Page = MiGetPage((__int64)ControlAreaPartition, NextPageColor, 0x200u);
      if ( Page == -1 )
      {
        MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
        v30 = v50;
        if ( v49 )
          goto LABEL_74;
        v31 = -1073741801;
        goto LABEL_40;
      }
      MiSetPfnLink((_QWORD *)(48 * Page - 0x58000000000LL), *(_QWORD *)(v10 + 40));
      ++v49;
      *(_QWORD *)(v10 + 40) = v40;
      goto LABEL_22;
    }
    if ( (PteShadow & 0x800) != 0 )
      goto LABEL_21;
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow, v21, v20, (__int64)v24) )
      goto LABEL_42;
LABEL_22:
    if ( ++v15 >= v55 )
      goto LABEL_36;
    v19 = (_DWORD *)v53;
  }
  v26 = 0;
  while ( 1 )
  {
    if ( (v19[14] & 0x20) != 0 && !*(_DWORD *)(v12 + 36) && *(_QWORD *)(v12 + 8) != *(_QWORD *)(*(_QWORD *)v19 + 64LL) )
    {
      v12 = *(_QWORD *)(v12 + 16);
      goto LABEL_35;
    }
    v16 = MiStartingOffsetNeedLock((_QWORD *)v12, SessionId);
    v27 = MiEndingOffsetWithLock((_QWORD *)v12);
    v17 = v27;
    if ( v16 > v22 )
      goto LABEL_22;
    if ( v22 < v27 )
      break;
    if ( v22 < v16 )
      goto LABEL_22;
    v19 = (_DWORD *)v53;
    if ( (*(_DWORD *)(v53 + 56) & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      if ( v22 > 0x3FFFFFFFFFF000LL )
        goto LABEL_36;
      SubsectionNode = MiLocateSubsectionNode(v53, v22, 0);
      v19 = (_DWORD *)v53;
      v12 = (__int64)SubsectionNode;
    }
LABEL_35:
    if ( !v12 )
      goto LABEL_36;
  }
  v19 = (_DWORD *)v53;
  if ( (*(_DWORD *)(v53 + 56) & 0x20) != 0 )
    goto LABEL_54;
  LODWORD(v64) = MiAddViewsForSection((__int64 *)v12, *(unsigned int *)(v12 + 44), 4u);
  if ( (v64 & 0x80000000) != 0LL )
    goto LABEL_36;
  v42 = *(_DWORD **)(v10 + 32);
  if ( *(_QWORD *)(v10 + 24) != v10 + 24 )
  {
    v45 = v42[4];
    if ( v45 != 5 )
    {
LABEL_68:
      v19 = (_DWORD *)v53;
      *(_QWORD *)&v42[2 * v45 + 6] = v12;
      ++v42[4];
      if ( !*(_QWORD *)(v10 + 16) )
        *(_QWORD *)(v10 + 16) = v12;
LABEL_54:
      v41 = *(_QWORD *)(v12 + 8);
      v24 = (__int64 *)(v41 + 8 * ((v22 - v16) >> 12));
      if ( (unsigned __int64)v24 >= v41 + 8 * (unsigned __int64)*(unsigned int *)(v12 + 44) )
        goto LABEL_36;
      if ( (*(_BYTE *)(v12 + 34) & 2) != 0 && (v19[14] & 0x4000000) != 0 )
        v26 = 1;
      if ( (((_WORD)v17 - (_WORD)v16) & 0xFFF) != 0 )
        v57 = v41 + 8 * (((v17 - v16 + 4095) >> 12) - 1);
      else
        v57 = 0LL;
      if ( v26 != 1 )
      {
        v21 = 0xFFFFF6FB7DBED000uLL;
        v20 = 0xFFFFF6FB7DBED7F8uLL;
        goto LABEL_16;
      }
      goto LABEL_22;
    }
  }
  v43 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
  v42 = v43;
  if ( v43 )
  {
    v43[4] = 0;
    v44 = *(_QWORD **)(v10 + 32);
    if ( *v44 != v10 + 24 )
      __fastfail(3u);
    *(_QWORD *)v42 = v10 + 24;
    *((_QWORD *)v42 + 1) = v44;
    *v44 = v42;
    *(_QWORD *)(v10 + 32) = v42;
    v45 = v42[4];
    goto LABEL_68;
  }
  MiRemoveViewsFromSectionWithPfn((__int64 *)v12);
LABEL_36:
  v28 = v51;
LABEL_37:
  v29 = v49;
LABEL_38:
  v30 = v50;
  if ( !v29 )
  {
    v31 = v64;
    goto LABEL_40;
  }
LABEL_74:
  *(_QWORD *)(v10 + 64) = v30;
  *(_DWORD *)(v10 + 60) = ((__int64)v28 - v10 - 104) >> 3;
  Mdls = MiPfAllocateMdls(v10, SessionId, 0LL);
  if ( *(_QWORD *)(v10 + 88) == v10 + 88 )
  {
    MiReleaseReadListResources(v10);
    ExFreePoolWithTag((PVOID)v10, 0);
    v10 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *a2 = v10;
  return Mdls;
}
