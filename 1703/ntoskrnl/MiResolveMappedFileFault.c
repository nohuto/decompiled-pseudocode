/*
 * XREFs of MiResolveMappedFileFault @ 0x1401060D0
 * Callers:
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140027A64 (KeInvalidAccessAllowed.c)
 *     MiSetInPagePrefetchPriority @ 0x1400334E0 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiGetSessionIdForVa @ 0x1400974CC (MiGetSessionIdForVa.c)
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiAllocateInPageSupport @ 0x1401067C4 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x140106888 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiSanitizePfnProtection @ 0x1401071F0 (MiSanitizePfnProtection.c)
 *     MiFinishMdlForMappedFileFault @ 0x140107260 (MiFinishMdlForMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x140107600 (MiBuildMdlForMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140107B00 (MiPickClusterForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x140107E44 (MiComputeFaultCluster.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 */

__int64 MiResolveMappedFileFault(unsigned __int64 a1, unsigned __int64 a2, ...)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rsi
  __int64 v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  char v10; // cl
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v14; // r10
  int v15; // r11d
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r14
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // r9
  unsigned int v25; // r9d
  __int64 SharedProtos; // rax
  ULONG_PTR *v27; // rdi
  int v28; // eax
  unsigned __int64 v29; // r10
  __int64 v30; // rdx
  unsigned __int64 Address; // rax
  __int64 v32; // rdi
  unsigned int v33; // ebx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r10
  __int64 v36; // r9
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int16 v40; // r9
  __int64 v41; // r9
  __int64 Page; // r12
  int v43; // ecx
  _WORD *v44; // rax
  int v45; // r15d
  unsigned int v46; // edx
  ULONG_PTR *v47; // r15
  __int64 v48; // r15
  int v49; // r9d
  int v50; // eax
  ULONG_PTR *v51; // r15
  int v52; // ecx
  int v53; // r14d
  int v54; // eax
  int v55; // ebx
  __int64 v56; // [rsp+28h] [rbp-91h]
  unsigned int v57; // [rsp+50h] [rbp-69h]
  int v58; // [rsp+50h] [rbp-69h]
  char v59; // [rsp+54h] [rbp-65h]
  int v60; // [rsp+58h] [rbp-61h] BYREF
  int SessionIdForVa; // [rsp+5Ch] [rbp-5Dh]
  unsigned int v62; // [rsp+60h] [rbp-59h]
  __int64 v63; // [rsp+68h] [rbp-51h]
  __int64 v64; // [rsp+70h] [rbp-49h]
  ULONG_PTR *v65; // [rsp+78h] [rbp-41h]
  unsigned __int64 v66; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int64 v67; // [rsp+88h] [rbp-31h] BYREF
  __int64 v68; // [rsp+90h] [rbp-29h]
  _WORD *v69; // [rsp+98h] [rbp-21h] BYREF
  __int16 v70; // [rsp+A0h] [rbp-19h]
  unsigned __int16 v71; // [rsp+A2h] [rbp-17h]
  __int64 v72; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v73[3]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v76; // [rsp+120h] [rbp+67h] BYREF
  va_list va; // [rsp+120h] [rbp+67h]
  __int64 v78; // [rsp+128h] [rbp+6Fh]
  __int64 v79; // [rsp+130h] [rbp+77h]
  __int64 *v80; // [rsp+138h] [rbp+7Fh]
  va_list va1; // [rsp+140h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v76 = va_arg(va1, _QWORD);
  v78 = va_arg(va1, _QWORD);
  v79 = va_arg(va1, _QWORD);
  v80 = va_arg(va1, __int64 *);
  v66 = MI_READ_PTE_LOCK_FREE(a2);
  v5 = 0LL;
  v57 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    MiUnlockProtoPoolPage(v76, 0x11u);
    return 3221225633LL;
  }
  v7 = v79;
  v8 = v79 & 1;
  if ( (v79 & 1) == 0 )
    goto LABEL_12;
  v9 = v79 & 0xFFFFFFFFFFFFFFFEuLL;
  v10 = *(_BYTE *)(v79 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v10 == 5 )
  {
    if ( (*(_DWORD *)(v9 + 48) & 4) != 0 )
    {
      MiUnlockProtoPoolPage(v76, 0x11u);
      return 3221225495LL;
    }
    goto LABEL_14;
  }
  if ( v10 != 1 )
  {
LABEL_12:
    if ( (v79 & 1) != 0 && *(_BYTE *)(v79 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
      v5 = v79 & 0xFFFFFFFFFFFFFFFEuLL;
    goto LABEL_14;
  }
  v5 = v79 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_DWORD *)(v9 + 80) & 0x100) != 0 )
  {
    MiUnlockProtoPoolPage(v76, 0x11u);
    return 0LL;
  }
  v57 = 0;
LABEL_14:
  v11 = v66;
  v12 = (v66 >> 10) & 1;
  if ( ((v66 >> 10) & 1) != 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v66, v2, v3, v4);
    v16 = 0LL;
    v68 = 0LL;
  }
  else
  {
    v16 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v66) - 0x58000000000LL;
    v68 = v16;
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v16 + 16), v17, v18, v19);
  }
  v20 = *(_QWORD *)PrototypePteDirect;
  v21 = PrototypePteDirect;
  v63 = v20;
  v22 = *(_DWORD *)(v20 + 56);
  if ( (v22 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v76, 0x11u);
    return 3221225478LL;
  }
  v23 = (*(_BYTE *)(PrototypePteDirect + 34) & 2) == 0;
  v24 = *(_QWORD *)(PrototypePteDirect + 8);
  v64 = v24;
  SessionIdForVa = -1;
  if ( !v23 && (v22 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v14);
    v25 = SessionIdForVa;
    if ( a1 >= 0xFFFF800000000000uLL )
    {
      if ( v8 )
      {
        if ( ((*(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
          goto LABEL_26;
LABEL_34:
        MiUnlockProtoPoolPage(v76, 0x11u);
        return 3221225477LL;
      }
      if ( KeInvalidAccessAllowed(v7) )
        goto LABEL_34;
    }
LABEL_26:
    SharedProtos = MiGetSharedProtos(v63, v25, v21);
    v20 = v63;
    LODWORD(v14) = a1;
    v15 = v78;
LABEL_30:
    v24 = *(_QWORD *)(SharedProtos + 32);
    v64 = v24;
    goto LABEL_31;
  }
  if ( v14 >= 0xFFFF800000000000uLL && (v22 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)PrototypePteDirect);
    if ( SharedProtos )
      goto LABEL_30;
  }
LABEL_31:
  if ( a2 >= v24 + 8 * (unsigned __int64)*(unsigned int *)(v21 + 44) )
    goto LABEL_34;
  v27 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v20 + 60) & 0x3FF));
  v28 = *(_DWORD *)(v20 + 56);
  v65 = v27;
  if ( (v28 & 0x40000000) == 0 )
  {
    v59 = 0;
    v62 = MiComputeFaultNode(v15, v14, v20, v7, (__int64)&v67);
    v60 = 0;
    if ( v5 )
    {
      Address = v67;
      if ( !v67 )
        Address = MiLocateAddress(a1);
      v60 = MiComputeFaultCluster(v27, v5, Address, 0LL);
    }
    else if ( v12 && (*(_DWORD *)(v63 + 56) & 0x20) == 0 && (*(_BYTE *)(v78 + 192) & 7) == 0 )
    {
      v34 = v67;
      v35 = a1;
      if ( !v67 )
        v34 = MiLocateAddress(a1);
      v36 = *(_QWORD *)(v34 + 120);
      if ( v36 >= 0 )
      {
        v37 = *(_QWORD *)(v34 + 120) & 0xFFFLL;
        if ( v37 >= 0x11 )
        {
          v38 = v35;
          v29 = a2;
          if ( (v38 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v36 >> 12) - 1 + v37) << 12 )
          {
            v39 = a2 + 8;
            if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
              && v39 < v64 + 8 * (unsigned __int64)*(unsigned int *)(v21 + 44)
              && MI_READ_PTE_LOCK_FREE(v39) == v11 )
            {
              v60 = (v40 & 0xFFF) - 1;
            }
          }
          goto LABEL_41;
        }
      }
    }
    v29 = a2;
LABEL_41:
    v30 = v57;
    goto LABEL_42;
  }
  if ( (v28 & 0x20) != 0 )
    goto LABEL_34;
  v29 = a2;
  v30 = 0LL;
  v62 = 0;
  v60 = 1;
  v59 = 1;
LABEL_42:
  v32 = MiAllocateInPageSupport(v29, v30, &v60, (__int64 *)va);
  if ( v32 )
  {
    if ( MI_READ_PTE_LOCK_FREE(a2) != v11
      || !v12 && ((*(_BYTE *)(v16 + 34) & 0x20) == 0 || (*(_BYTE *)(*(_QWORD *)v16 + 157LL) & 0x10) != 0) )
    {
      v33 = -1073740748;
      MiUnlockProtoPoolPage(v76, 0x11u);
      MiFreeInPageSupportBlock((PVOID)v32);
      goto LABEL_61;
    }
    if ( v59 == 1 )
    {
      MiUnlockProtoPoolPage(v76, 0x11u);
      *(_BYTE *)(v32 + 188) |= 2u;
      *(_BYTE *)(v32 + 191) &= ~2u;
      *(_DWORD *)(v32 + 296) = 0;
      *(_DWORD *)(v32 + 180) = 0;
      *(_QWORD *)(v32 + 224) = a2;
      *(_QWORD *)(v32 + 160) = 0LL;
      *(_QWORD *)(v32 + 248) = 0LL;
      *(_QWORD *)(v32 + 200) = v21;
      *(_QWORD *)(v32 + 168) = v11;
LABEL_90:
      *v80 = v32;
      return 3221435187LL;
    }
    if ( v5 && *(_BYTE *)v5 == 1 )
      MiSetInPagePrefetchPriority(v5, v32);
    if ( v12 )
      v41 = (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v66);
    else
      v41 = (v11 >> 5) & 0x1F;
    v58 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(v21 + 32) >> 1) & 0x1F, (unsigned int)v41, v41);
    MiInitializePageColorBase(v78, v62, &v69);
    Page = -1LL;
    v43 = *(_DWORD *)(v63 + 56);
    if ( (v43 & 0x20) != 0 && (v43 & 0x40000) == 0 )
    {
      if ( v12 )
      {
        if ( !dword_14036CEA4 )
        {
          v44 = v69;
          ++*v69;
          v45 = v71 | (unsigned __int16)(v70 & *v44);
          if ( !v5 || *(_BYTE *)v5 != 1 || MiGetAvailablePagesBelowPriority(v65, ((*(_DWORD *)(v5 + 80) >> 3) & 7u) + 1) )
          {
            if ( (unsigned int)MiObtainFaultCharges(v65, 1u, 1) )
            {
              v46 = v45;
              v47 = v65;
              Page = MiGetPage((__int64)v65, v46, 0);
              if ( Page != -1 )
              {
                v48 = v76;
                v56 = v76;
                *(_QWORD *)(v32 + 216) = a1;
                if ( (unsigned int)MiCopyDataPageToImagePage(v32, (__int64 *)v21, a2, v7, Page, v56) == 1 )
                  goto LABEL_90;
LABEL_83:
                v49 = v64;
                *(_QWORD *)(v32 + 224) = a2;
                *(_DWORD *)(v32 + 180) = v60;
                v50 = SessionIdForVa;
                *(_QWORD *)(v32 + 160) = v48;
                v51 = v65;
                v52 = (int)v65;
                *(_QWORD *)(v32 + 168) = v11;
                *(_QWORD *)(v32 + 200) = v21;
                v53 = MiPickClusterForMappedFileFault(v52, v32, v5, v49, v50, Page, (__int64)v73, (__int64)&v72);
                v54 = MiBuildMdlForMappedFileFault(v32, v73[0], v72, (_DWORD)v51, v53, Page, v58, v5, (__int64)&v69);
                v55 = v54;
                if ( v54 != v53 )
                  MiReturnFaultCharges((__int64)v51, (unsigned int)(v53 - v54), 1LL);
                if ( !v55 )
                {
                  MiUnlockProtoPoolPage(v76, 0x11u);
                  MiFreeInPageSupportBlock((PVOID)v32);
                  return 3221225495LL;
                }
                MiFinishMdlForMappedFileFault(v32, v7, v55, v68, SessionIdForVa);
                goto LABEL_90;
              }
              MiReturnFaultCharges((__int64)v47, 1uLL, 1LL);
            }
          }
        }
      }
    }
    v48 = v76;
    goto LABEL_83;
  }
  v33 = -1073741670;
LABEL_61:
  if ( v5 )
    *(_BYTE *)(v5 + 1) = (v33 == -1073741670) + 1;
  return v33;
}
