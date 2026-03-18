/*
 * XREFs of MiResolveMappedFileFault @ 0x140056F30
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiPickClusterForMappedFileFault @ 0x140056310 (MiPickClusterForMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x140056680 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x140056C60 (MiComputeFaultCluster.c)
 *     MiAllocateInPageSupport @ 0x14005763C (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x1400577A4 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiFinishMdlForMappedFileFault @ 0x140057A28 (MiFinishMdlForMappedFileFault.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiGetSessionIdForVa @ 0x140059D3C (MiGetSessionIdForVa.c)
 *     KeInvalidAccessAllowed @ 0x1400B54F4 (KeInvalidAccessAllowed.c)
 *     MiSetInPagePrefetchPriority @ 0x1400CC644 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MiSanitizePfnProtection @ 0x140116C20 (MiSanitizePfnProtection.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 */

__int64 MiResolveMappedFileFault(unsigned __int64 a1, __int64 *a2, ...)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 PrototypePteDirect; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // r11
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // r15
  int v19; // ecx
  unsigned __int64 v20; // r10
  int SessionIdForVa; // eax
  __int64 v22; // rdx
  unsigned int v23; // r10d
  bool v24; // zf
  __int64 SharedProtos; // rax
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 *v29; // r10
  __int64 v30; // rdi
  unsigned __int64 Address; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r10
  __int64 v35; // r9
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int16 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r11
  __int64 *v44; // rax
  __int64 v45; // r9
  __int64 v46; // r11
  int v47; // ecx
  __int64 Page; // r12
  __int16 v49; // cx
  unsigned int v50; // ebx
  __int64 v51; // r9
  unsigned __int64 v52; // r9
  int v53; // r15d
  int v54; // r14d
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // ebx
  unsigned int v60; // [rsp+20h] [rbp-89h]
  unsigned int v61; // [rsp+50h] [rbp-59h]
  unsigned int v62; // [rsp+50h] [rbp-59h]
  char v63; // [rsp+54h] [rbp-55h]
  int v64; // [rsp+58h] [rbp-51h] BYREF
  __int64 v65; // [rsp+60h] [rbp-49h]
  __int64 v66; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-39h]
  int v68; // [rsp+74h] [rbp-35h]
  unsigned __int64 v69; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v70; // [rsp+80h] [rbp-29h]
  __int64 v71; // [rsp+88h] [rbp-21h]
  volatile signed __int32 *v72; // [rsp+90h] [rbp-19h] BYREF
  __int16 v73; // [rsp+98h] [rbp-11h]
  unsigned __int16 v74; // [rsp+9Ah] [rbp-Fh]
  unsigned __int64 v75; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v76; // [rsp+A8h] [rbp-1h] BYREF
  ULONG_PTR v79; // [rsp+110h] [rbp+67h] BYREF
  va_list va; // [rsp+110h] [rbp+67h]
  __int64 v81; // [rsp+118h] [rbp+6Fh]
  __int64 v82; // [rsp+120h] [rbp+77h]
  __int64 *v83; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v79 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
  v83 = va_arg(va1, __int64 *);
  v3 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  v66 = v3;
  v7 = 0LL;
  v61 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    LOBYTE(v4) = 17;
    MiUnlockProtoPoolPage(v79, v4, v5, v6);
    return 3221225633LL;
  }
  v9 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  v10 = v6 & 1;
  if ( (v6 & 1) != 0 )
  {
    if ( *(_BYTE *)v9 == 5 )
    {
      if ( (*(_DWORD *)(v9 + 48) & 4) != 0 )
      {
        LOBYTE(v4) = 17;
        MiUnlockProtoPoolPage(v79, v4, v5, v6);
        return 3221225495LL;
      }
    }
    else if ( (v6 & 1) != 0 )
    {
      if ( *(_BYTE *)v9 == 1 )
      {
        v7 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (*(_DWORD *)(v9 + 80) & 0x100) != 0 )
        {
          LOBYTE(v4) = 17;
          MiUnlockProtoPoolPage(v79, v4, v5, v6);
          return 0LL;
        }
        v61 = 0;
      }
      else if ( (v6 & 1) != 0 && *(_BYTE *)v9 == 2 )
      {
        v7 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
  }
  v11 = v66;
  if ( (v3 & 0x400) != 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v66);
    v16 = 0LL;
    v71 = 0LL;
  }
  else
  {
    v16 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v66) - 0x58000000000LL;
    v71 = v16;
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v16 + 16));
  }
  v17 = *(_QWORD *)PrototypePteDirect;
  v18 = PrototypePteDirect;
  v65 = v17;
  v19 = *(_DWORD *)(v17 + 56);
  if ( (v19 & 0x10) != 0 )
  {
    LOBYTE(v13) = 17;
    MiUnlockProtoPoolPage(v79, v13, v17, v14);
    return 3221225478LL;
  }
  v24 = (*(_BYTE *)(PrototypePteDirect + 34) & 2) == 0;
  v20 = *(_QWORD *)(PrototypePteDirect + 8);
  v70 = v20;
  v68 = -1;
  if ( !v24 && (v19 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v15);
    v22 = 0xFFFF800000000000uLL;
    v68 = SessionIdForVa;
    v23 = SessionIdForVa;
    if ( a1 < 0xFFFF800000000000uLL )
    {
LABEL_28:
      SharedProtos = MiGetSharedProtos(v65, v23, v18);
      v17 = v65;
      LODWORD(v15) = a1;
      v14 = v82;
LABEL_32:
      v20 = *(_QWORD *)(SharedProtos + 72);
      v70 = v20;
      goto LABEL_33;
    }
    if ( v10 )
    {
      if ( *(_BYTE *)v9 == 1 )
        goto LABEL_34;
      v24 = *(_BYTE *)v9 == 3;
    }
    else
    {
      v24 = (unsigned __int8)KeInvalidAccessAllowed(v82) == 1;
    }
    if ( !v24 )
      goto LABEL_28;
LABEL_34:
    LOBYTE(v22) = 17;
    MiUnlockProtoPoolPage(v79, v22, v17, v14);
    return 3221225477LL;
  }
  v22 = 0xFFFF800000000000uLL;
  if ( v15 >= 0xFFFF800000000000uLL && (v19 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)PrototypePteDirect);
    if ( SharedProtos )
      goto LABEL_32;
  }
LABEL_33:
  if ( (unsigned __int64)a2 >= v20 - 8LL * (*(_DWORD *)(v18 + 52) & 0x3FFFFFFF) + 8LL * *(unsigned int *)(v18 + 44) )
    goto LABEL_34;
  v26 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v17 + 60) & 0x3FF));
  if ( (*(_DWORD *)(v17 + 56) & 0x40000000) != 0 )
  {
    v27 = v65;
    v28 = 0LL;
    v29 = a2;
    v67 = 0;
    v64 = 1;
    v63 = 1;
    goto LABEL_43;
  }
  v30 = v81;
  v63 = 0;
  v67 = MiComputeFaultNode(v81, v15, v17, v14, (__int64)&v69);
  v64 = 0;
  if ( v7 )
  {
    Address = v69;
    if ( !v69 )
    {
      Address = MiLocateAddress(a1);
      v69 = Address;
    }
    v27 = v65;
    v64 = MiComputeFaultCluster(v26, (_QWORD *)v7, Address, 0);
  }
  else
  {
    v27 = v65;
    if ( (v11 & 0x400) != 0 && (*(_DWORD *)(v65 + 56) & 0x20) == 0 && (*(_BYTE *)(v30 + 184) & 7) == 0 )
    {
      v33 = v69;
      v34 = a1;
      if ( !v69 )
      {
        v33 = MiLocateAddress(a1);
        v69 = v33;
      }
      v35 = *(_QWORD *)(v33 + 120);
      if ( v35 >= 0 )
      {
        v36 = *(_QWORD *)(v33 + 120) & 0xFFFLL;
        if ( v36 >= 0x11 )
        {
          v37 = v34;
          v29 = a2;
          if ( (v37 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v35 >> 12) - 1 + v36) << 12 )
          {
            v38 = (unsigned __int64)(a2 + 1);
            if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
              && v38 < -8LL * (*(_DWORD *)(v18 + 52) & 0x3FFFFFFF) + v70 + 8LL * *(unsigned int *)(v18 + 44)
              && MI_READ_PTE_LOCK_FREE(v38) == v11 )
            {
              v64 = (v39 & 0xFFF) - 1;
            }
          }
          goto LABEL_42;
        }
      }
    }
  }
  v29 = a2;
LABEL_42:
  v28 = v61;
LABEL_43:
  v32 = MiAllocateInPageSupport(v29, v28, &v64, (ULONG_PTR *)va);
  if ( !v32 )
  {
    result = 3221225626LL;
    goto LABEL_88;
  }
  if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) == v11 )
  {
    v43 = (v11 >> 10) & 1;
    if ( ((v11 >> 10) & 1) != 0
      || (*(_BYTE *)(v16 + 34) & 0x20) != 0 && (*(_BYTE *)(*(_QWORD *)v16 + 157LL) & 0x10) == 0 )
    {
      if ( v63 == 1 )
      {
        LOBYTE(v40) = 17;
        MiUnlockProtoPoolPage(v79, v40, v41, v42);
        *(_BYTE *)(v32 + 188) |= 2u;
        *(_BYTE *)(v32 + 191) &= ~2u;
        *(_QWORD *)(v32 + 224) = a2;
        v44 = v83;
        *(_DWORD *)(v32 + 304) = 0;
        *(_QWORD *)(v32 + 200) = v18;
        *(_DWORD *)(v32 + 180) = 0;
        *v44 = v32;
        result = 3221435187LL;
        *(_QWORD *)(v32 + 168) = v11;
        *(_QWORD *)(v32 + 160) = 0LL;
        *(_QWORD *)(v32 + 248) = 0LL;
        return result;
      }
      if ( v7 && *(_BYTE *)v7 == 1 )
        MiSetInPagePrefetchPriority(v7, v32);
      if ( v43 )
        LODWORD(v45) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v66);
      else
        v45 = (v11 >> 5) & 0x1F;
      v62 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(v18 + 32) >> 1) & 0x1F, (unsigned int)v45);
      MiInitializePageColorBase(v81, v67, &v72);
      v47 = *(_DWORD *)(v27 + 56);
      Page = -1LL;
      if ( (v47 & 0x20) != 0 && (v47 & 0x40000) == 0 && v46 && !dword_1403CC3E4 )
      {
        v49 = _InterlockedExchangeAdd(v72, 1u);
        v50 = v74 | (unsigned __int16)(v49 & v73);
        if ( (!v7 || *(_BYTE *)v7 != 1 || MiGetAvailablePagesBelowPriority(v26, ((*(_DWORD *)(v7 + 80) >> 3) & 7u) + 1))
          && (unsigned int)MiObtainFaultCharges(v26, 1LL, 1LL) )
        {
          Page = MiGetPage(v26, v50, 0);
          if ( Page == -1 )
          {
            MiReturnFaultCharges(v26, 1LL, 1LL);
          }
          else
          {
            v51 = v82;
            *(_QWORD *)(v32 + 216) = a1;
            if ( (unsigned int)MiCopyDataPageToImagePage(v32, (void **)v18, a2, v51, Page, v79) == 1 )
            {
LABEL_86:
              *v83 = v32;
              return 3221435187LL;
            }
          }
        }
        v11 = v66;
      }
      v52 = v70;
      *(_QWORD *)(v32 + 160) = v79;
      *(_QWORD *)(v32 + 224) = a2;
      *(_DWORD *)(v32 + 180) = v64;
      *(_QWORD *)(v32 + 200) = v18;
      v53 = v68;
      v60 = v68;
      *(_QWORD *)(v32 + 168) = v11;
      v54 = MiPickClusterForMappedFileFault(v26, v32, v7, v52, v60, Page, &v76, &v75);
      v55 = MiBuildMdlForMappedFileFault(v32, v76, v75, v26, v54, Page, v62, v7, (__int64)&v72);
      v59 = v55;
      if ( v55 != v54 )
        MiReturnFaultCharges(v26, (unsigned int)(v54 - v55), 1LL);
      if ( !v59 )
      {
        LOBYTE(v56) = 17;
        MiUnlockProtoPoolPage(v79, v56, v57, v58);
        MiFreeInPageSupportBlock((PVOID)v32);
        return 3221225495LL;
      }
      MiFinishMdlForMappedFileFault(v32, v82, v59, v71, v53);
      goto LABEL_86;
    }
  }
  LOBYTE(v40) = 17;
  MiUnlockProtoPoolPage(v79, v40, v41, v42);
  MiFreeInPageSupportBlock((PVOID)v32);
  result = 3221226548LL;
LABEL_88:
  if ( v7 )
    *(_BYTE *)(v7 + 1) = ((_DWORD)result == -1073741670) + 1;
  return result;
}
