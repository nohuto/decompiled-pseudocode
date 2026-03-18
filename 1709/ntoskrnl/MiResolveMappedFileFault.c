/*
 * XREFs of MiResolveMappedFileFault @ 0x14002A0B0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 * Callees:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiPickClusterForMappedFileFault @ 0x1400281E0 (MiPickClusterForMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x140028510 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiAllocateInPageSupport @ 0x14002A89C (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x14002AC68 (MiComputeFaultNode.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002AE10 (MiFinishMdlForMappedFileFault.c)
 *     MiGetSessionIdForVa @ 0x14002CD24 (MiGetSessionIdForVa.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiSanitizePfnProtection @ 0x1400384C0 (MiSanitizePfnProtection.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiGetSubsectionDriverProtos @ 0x1400B6F28 (MiGetSubsectionDriverProtos.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     MiComputeFaultCluster @ 0x140109A10 (MiComputeFaultCluster.c)
 *     KeInvalidAccessAllowed @ 0x14011D0D8 (KeInvalidAccessAllowed.c)
 *     MiSetInPagePrefetchPriority @ 0x14012EF60 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 */

__int64 MiResolveMappedFileFault(unsigned __int64 a1, __int64 *a2, ...)
{
  unsigned __int64 PteShadow; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  char v10; // cl
  __int64 v11; // r15
  __int64 PrototypePteDirect; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r10
  int v15; // r11d
  __int64 v16; // r8
  __int64 v17; // r13
  int v18; // ecx
  bool v19; // zf
  unsigned __int64 v20; // r9
  unsigned int SessionIdForVa; // eax
  __int64 v22; // r8
  unsigned int v23; // r9d
  unsigned __int64 v24; // rdx
  __int64 SharedProtos; // rax
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  char v29; // r12
  __int64 Address; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r10
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // r9
  __int64 Page; // r12
  int v43; // ecx
  _WORD *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // r15d
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // r15
  unsigned __int64 v50; // r9
  __int64 v51; // r15
  int v52; // r13d
  int v53; // r14d
  int v54; // eax
  __int64 v55; // rdx
  int v56; // ebx
  __int64 v57; // r9
  unsigned int v58; // [rsp+20h] [rbp-89h]
  __int64 v59; // [rsp+28h] [rbp-81h]
  int v60; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v61; // [rsp+54h] [rbp-55h]
  int v62; // [rsp+58h] [rbp-51h]
  __int64 v63; // [rsp+60h] [rbp-49h]
  __int64 v64; // [rsp+68h] [rbp-41h]
  unsigned __int64 v65; // [rsp+70h] [rbp-39h]
  __int64 v66; // [rsp+78h] [rbp-31h]
  __int64 v67; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp-21h] BYREF
  _WORD *v69; // [rsp+90h] [rbp-19h] BYREF
  __int16 v70; // [rsp+98h] [rbp-11h]
  unsigned __int16 v71; // [rsp+9Ah] [rbp-Fh]
  unsigned __int64 v72; // [rsp+A0h] [rbp-9h] BYREF
  __int64 *v73; // [rsp+A8h] [rbp-1h] BYREF
  unsigned int v75; // [rsp+108h] [rbp+5Fh]
  unsigned int v76; // [rsp+108h] [rbp+5Fh]
  __int64 v77; // [rsp+110h] [rbp+67h] BYREF
  va_list va; // [rsp+110h] [rbp+67h]
  __int64 v79; // [rsp+118h] [rbp+6Fh]
  __int64 v80; // [rsp+120h] [rbp+77h]
  __int64 *v81; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v77 = va_arg(va1, _QWORD);
  v79 = va_arg(va1, _QWORD);
  v80 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, __int64 *);
  PteShadow = *a2;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *a2);
  v4 = 0LL;
  v68 = PteShadow;
  v5 = 0LL;
  v75 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    LOBYTE(v4) = 17;
    MiUnlockProtoPoolPage(v77, v4);
    return 3221225633LL;
  }
  v7 = v80;
  v8 = v80 & 1;
  if ( (v80 & 1) == 0 )
    goto LABEL_15;
  v9 = v80 & 0xFFFFFFFFFFFFFFFEuLL;
  v10 = *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v10 == 5 )
  {
    if ( (*(_DWORD *)(v9 + 48) & 4) != 0 )
    {
      LOBYTE(v4) = 17;
      MiUnlockProtoPoolPage(v77, v4);
      return 3221225495LL;
    }
    goto LABEL_17;
  }
  if ( v10 != 1 )
  {
LABEL_15:
    if ( (v80 & 1) != 0 && *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
      v5 = v80 & 0xFFFFFFFFFFFFFFFEuLL;
    goto LABEL_17;
  }
  v5 = v80 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_DWORD *)(v9 + 80) & 0x100) != 0 )
  {
    LOBYTE(v4) = 17;
    MiUnlockProtoPoolPage(v77, v4);
    return 0LL;
  }
  v75 = 0;
LABEL_17:
  v11 = (PteShadow >> 10) & 1;
  if ( ((PteShadow >> 10) & 1) != 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(PteShadow);
    v66 = v13;
  }
  else
  {
    v66 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v68) - 0x58000000000LL;
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v66 + 16));
  }
  v16 = *(_QWORD *)PrototypePteDirect;
  v17 = PrototypePteDirect;
  v64 = v16;
  v18 = *(_DWORD *)(v16 + 56);
  if ( (v18 & 0x10) != 0 )
  {
    LOBYTE(v13) = 17;
    MiUnlockProtoPoolPage(v77, v13);
    return 3221225478LL;
  }
  v19 = (*(_BYTE *)(PrototypePteDirect + 34) & 2) == 0;
  v20 = *(_QWORD *)(PrototypePteDirect + 8);
  v65 = v20;
  v62 = -1;
  if ( !v19 && (v18 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v14);
    v62 = SessionIdForVa;
    v23 = SessionIdForVa;
    if ( a1 >= 0xFFFF800000000000uLL )
    {
      if ( v8 )
      {
        v24 = *(unsigned __int8 *)(v7 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (((_BYTE)v24 - 1) & 0xFD) != 0 )
          goto LABEL_29;
LABEL_37:
        LOBYTE(v24) = 17;
        MiUnlockProtoPoolPage(v77, v24);
        return 3221225477LL;
      }
      if ( (unsigned __int8)KeInvalidAccessAllowed(v7, 0xFFFF800000000000uLL, v22, SessionIdForVa) == 1 )
        goto LABEL_37;
    }
LABEL_29:
    SharedProtos = MiGetSharedProtos(v64, v23, v17);
    v16 = v64;
    LODWORD(v14) = a1;
    v15 = v79;
LABEL_33:
    v20 = *(_QWORD *)(SharedProtos + 32);
    v65 = v20;
    goto LABEL_34;
  }
  v24 = 0xFFFF800000000000uLL;
  if ( v14 >= 0xFFFF800000000000uLL && (v18 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos(PrototypePteDirect);
    if ( SharedProtos )
      goto LABEL_33;
  }
LABEL_34:
  if ( (unsigned __int64)a2 >= v20 + 8LL * *(unsigned int *)(v17 + 44) )
    goto LABEL_37;
  v26 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v16 + 60) & 0x3FF));
  v27 = *(_DWORD *)(v16 + 56);
  v63 = v26;
  if ( (v27 & 0x40000000) != 0 )
  {
    if ( (v27 & 0x20) != 0 )
      goto LABEL_37;
    v28 = 0LL;
    v60 = 1;
    v61 = 0;
    v29 = 1;
  }
  else
  {
    v61 = MiComputeFaultNode(v15, v14, v16, v7, (__int64)&v67);
    v60 = 0;
    if ( v5 )
    {
      Address = v67;
      if ( !v67 )
        Address = MiLocateAddress(a1);
      v60 = MiComputeFaultCluster(v26, v5, Address, 0LL);
    }
    else if ( v11 && (*(_DWORD *)(v64 + 56) & 0x20) == 0 && (*(_BYTE *)(v79 + 192) & 7) == 0 )
    {
      v31 = v67;
      v32 = a1;
      if ( !v67 )
        v31 = MiLocateAddress(a1);
      v33 = *(_QWORD *)(v31 + 120);
      if ( v33 >= 0 )
      {
        v34 = *(_QWORD *)(v31 + 120) & 0xFFFLL;
        if ( v34 >= 0x11 && (v32 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v33 >> 12) - 1 + v34) << 12 )
        {
          v35 = a2 + 1;
          if ( (((_DWORD)a2 + 8) & 0xFFF) != 0 && (unsigned __int64)v35 < v65 + 8LL * *(unsigned int *)(v17 + 44) )
          {
            v36 = *v35;
            if ( (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v35 <= 0xFFFFF6FB7DBED7F8uLL )
              v36 = MiReadPteShadow(v35, *v35);
            if ( v36 == PteShadow )
              v60 = (v33 & 0xFFF) - 1;
          }
        }
      }
    }
    v28 = v75;
    v29 = 0;
  }
  v38 = MiAllocateInPageSupport(a2, v28, &v60, (__int64 *)va);
  if ( !v38 )
  {
    result = 3221225626LL;
    goto LABEL_95;
  }
  v39 = *a2;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    v39 = MiReadPteShadow(a2, *a2);
  if ( v39 != PteShadow
    || !v11 && ((*(_BYTE *)(v66 + 34) & 0x20) == 0 || (*(_BYTE *)(*(_QWORD *)v66 + 157LL) & 0x10) != 0) )
  {
    LOBYTE(v37) = 17;
    MiUnlockProtoPoolPage(v77, v37);
    MiFreeInPageSupportBlock((PVOID)v38);
    result = 3221226548LL;
LABEL_95:
    if ( v5 )
      *(_BYTE *)(v5 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( v29 == 1 )
  {
    LOBYTE(v37) = 17;
    MiUnlockProtoPoolPage(v77, v37);
    *(_BYTE *)(v38 + 188) |= 2u;
    *(_BYTE *)(v38 + 191) &= ~2u;
    *(_DWORD *)(v38 + 296) = 0;
    *(_DWORD *)(v38 + 180) = 0;
    *(_QWORD *)(v38 + 160) = 0LL;
    *(_QWORD *)(v38 + 248) = 0LL;
    v40 = v81;
    *(_QWORD *)(v38 + 200) = v17;
    *(_QWORD *)(v38 + 168) = PteShadow;
    *(_QWORD *)(v38 + 224) = a2;
    *v40 = v38;
    return 3221435187LL;
  }
  if ( v5 && *(_BYTE *)v5 == 1 )
    MiSetInPagePrefetchPriority(v5, v38);
  if ( v11 )
    LODWORD(v41) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v68);
  else
    v41 = (PteShadow >> 5) & 0x1F;
  v76 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(v17 + 32) >> 1) & 0x1F, (unsigned int)v41);
  MiInitializePageColorBase(v79, v61, &v69);
  Page = -1LL;
  v43 = *(_DWORD *)(v64 + 56);
  if ( (v43 & 0x20) != 0 && (v43 & 0x40000) == 0 )
  {
    if ( v11 )
    {
      if ( !dword_140389164 )
      {
        v44 = v69;
        v45 = v63;
        ++*v69;
        v46 = v71 | (unsigned __int16)(v70 & *v44);
        if ( !v5 || *(_BYTE *)v5 != 1 || MiGetAvailablePagesBelowPriority(v45, ((*(_DWORD *)(v5 + 80) >> 3) & 7u) + 1) )
        {
          if ( (unsigned int)MiObtainFaultCharges(v45, 1LL, 1LL) )
          {
            v47 = v46;
            v48 = v63;
            Page = MiGetPage(v63, v47, 0LL);
            if ( Page != -1 )
            {
              v49 = v77;
              v57 = v80;
              v59 = v77;
              *(_QWORD *)(v38 + 216) = a1;
              if ( (unsigned int)MiCopyDataPageToImagePage(v38, (__int64 *)v17, a2, v57, Page, v59) == 1 )
              {
                *v81 = v38;
                return 3221435187LL;
              }
              goto LABEL_87;
            }
            MiReturnFaultCharges(v48, 1LL, 1LL);
          }
        }
      }
    }
  }
  v49 = v77;
LABEL_87:
  v50 = v65;
  *(_DWORD *)(v38 + 180) = v60;
  *(_QWORD *)(v38 + 160) = v49;
  v51 = v63;
  *(_QWORD *)(v38 + 200) = v17;
  v52 = v62;
  v58 = v62;
  *(_QWORD *)(v38 + 168) = PteShadow;
  *(_QWORD *)(v38 + 224) = a2;
  v53 = MiPickClusterForMappedFileFault(v51, v38, v5, v50, v58, Page, &v73, &v72);
  v54 = MiBuildMdlForMappedFileFault((_QWORD *)v38, v73, v72, v51, v53, Page, v76, v5, (__int64)&v69);
  v56 = v54;
  if ( v54 != v53 )
    MiReturnFaultCharges(v51, (unsigned int)(v53 - v54), 1LL);
  if ( v56 )
  {
    MiFinishMdlForMappedFileFault(v38, v80, v56, v66, v52);
    *v81 = v38;
    return 3221435187LL;
  }
  else
  {
    LOBYTE(v55) = 17;
    MiUnlockProtoPoolPage(v77, v55);
    MiFreeInPageSupportBlock((PVOID)v38);
    return 3221225495LL;
  }
}
