/*
 * XREFs of MiBuildForkPte @ 0x1400E7530
 * Callers:
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 * Callees:
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiLockPageTablePage @ 0x1400BE2E0 (MiLockPageTablePage.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiSetWsleProtection @ 0x1400E5A4C (MiSetWsleProtection.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400E9684 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x1400E9F0C (MiGetWsleProtection.c)
 *     MiReferenceCloneProto @ 0x1400EA030 (MiReferenceCloneProto.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400EACA4 (MiUpdateWorkingSetPrivateSize.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiFindZeroCloneBlock @ 0x14012ABD4 (MiFindZeroCloneBlock.c)
 *     MiWriteSharedDemandZeroPte @ 0x14012C2A4 (MiWriteSharedDemandZeroPte.c)
 *     MiLockAndInsertPageInFreeList @ 0x140150B54 (MiLockAndInsertPageInFreeList.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402301C0 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140230230 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     MiIncrementCombinedPte @ 0x140231960 (MiIncrementCombinedPte.c)
 */

__int64 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7,
        __int64 a8,
        int *a9,
        __int64 a10,
        __int64 a11,
        int a12,
        KIRQL a13,
        _QWORD *a14,
        _DWORD *a15)
{
  __int64 PteShadow; // rax
  ULONG_PTR v18; // r12
  int v19; // esi
  __int64 ZeroCloneBlock; // rax
  int v21; // ebx
  int v22; // edx
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 PrototypePteVadLookup; // rbx
  unsigned int v27; // r15d
  __int64 v28; // r9
  int v29; // ecx
  KIRQL v30; // al
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r13
  int v34; // r9d
  unsigned __int8 WsleContents; // al
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r11
  unsigned __int64 v39; // r12
  unsigned __int8 v40; // di
  __int64 *v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r9
  unsigned __int64 v46; // rsi
  __int64 v47; // r10
  __int64 v48; // rcx
  __int64 v49; // r12
  __int64 v50; // rdx
  __int64 v51; // r11
  __int64 v52; // rcx
  __int16 v53; // dx
  __int64 v54; // rcx
  __int64 v55; // rdi
  _KPROCESS *v56; // rdx
  LONG *SharedVm; // rdi
  int v58; // eax
  __int64 v59; // rdi
  _KPROCESS *v60; // rdx
  __int64 v61; // r9
  __int64 v62; // r10
  __int64 v63; // rdi
  LONG *v64; // rdi
  __int64 DemandZeroPte; // rax
  bool v66; // zf
  __int64 v67; // rbx
  __int64 v68; // r9
  unsigned __int64 v69; // rbx
  unsigned int PageFileReservationOffset; // eax
  _QWORD *v71; // r11
  unsigned __int16 v72; // dx
  __int64 v73; // r9
  __int64 v74; // rax
  _QWORD *v75; // r11
  __int64 v76; // rax
  __int64 *v77; // r11
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // rbx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v88; // r9
  __int64 v89; // rax
  int v90; // r8d
  unsigned int WsleProtection; // eax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r10
  __int64 v96; // r8
  __int64 v97; // r10
  __int64 v98; // rax
  __int64 v99; // rax
  bool v100; // zf
  int v101; // r13d
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // r11
  unsigned __int64 *v105; // rdx
  unsigned __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // r10
  unsigned __int64 v110; // r11
  __int64 v111; // rdx
  __int64 v112; // rax
  int v113; // edx
  __int64 v114; // r10
  __int64 v115; // rax
  unsigned __int64 v116; // [rsp+60h] [rbp-89h] BYREF
  __int64 Page; // [rsp+68h] [rbp-81h]
  unsigned int v118; // [rsp+70h] [rbp-79h]
  int v119; // [rsp+74h] [rbp-75h]
  __int64 v120; // [rsp+78h] [rbp-71h]
  int v121; // [rsp+80h] [rbp-69h]
  __int64 v122; // [rsp+88h] [rbp-61h] BYREF
  __int64 v123; // [rsp+90h] [rbp-59h] BYREF
  __int64 v124; // [rsp+98h] [rbp-51h]
  __int64 v125; // [rsp+A0h] [rbp-49h]
  __int64 v126; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v127; // [rsp+B0h] [rbp-39h]
  _WORD *v128; // [rsp+B8h] [rbp-31h] BYREF
  __int16 v129; // [rsp+C0h] [rbp-29h]
  unsigned __int16 v130; // [rsp+C2h] [rbp-27h]
  _QWORD v131[3]; // [rsp+C8h] [rbp-21h] BYREF

  PteShadow = *a3;
  v18 = (ULONG_PTR)a3;
  v19 = a2;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a3, *a3);
  v116 = PteShadow;
  if ( !PteShadow )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 3) & 0x1F);
      v21 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1u);
        MiWriteSharedDemandZeroPte(v19, v22, v21, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiLockPageAtDpcInline(a8);
  *(_QWORD *)(a8 + 16) ^= ((unsigned int)*(_QWORD *)(a8 + 16) ^ ((unsigned int)*(_QWORD *)(a8 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiIsAddressValid(*(_QWORD *)(a8 + 8) | 0x8000000000000000uLL);
  v25 = a2;
  PrototypePteVadLookup = v116;
  v27 = 0;
  v124 = a1 + 1280;
  v28 = 0LL;
  v118 = 0;
  Page = -1LL;
  v120 = a2 + 1280;
  v29 = 0;
  v122 = -1LL;
LABEL_11:
  v30 = a13;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v29 == 1 )
        {
          MiMakeSystemAddressValid(v18, 0LL, 0, v30, 1);
          PrototypePteVadLookup = *(_QWORD *)v18;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
            PrototypePteVadLookup = MiReadPteShadow(v18, *(_QWORD *)v18);
          v28 = v118;
          v25 = a2;
          v116 = PrototypePteVadLookup;
        }
        v121 = 1;
        if ( (PrototypePteVadLookup & 1) == 0 )
          break;
        v31 = MI_GET_PFN_FROM_PTE(&v116, v25, v24, v28);
        v33 = v31;
        if ( v34 != 1 )
        {
          if ( *(_WORD *)(v31 + 32) <= 1u
            || (v32 = *(_QWORD *)(v31 + 40) >> 57, (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) != 0) )
          {
            v127 = (__int64)(v18 << 25) >> 16;
            WsleContents = MiGetWsleContents(v32, v127);
            v39 = *(_QWORD *)(v33 + 40);
            v40 = WsleContents;
            if ( (v39 & 0x200000000000000LL) == 0 )
            {
              v41 = (__int64 *)(v38 + ((a6 >> 9) & 0x7FFFFFFFF8LL));
              v42 = 0xFFFFF6FB7DBED000uLL;
              v43 = *v41;
              if ( (unsigned __int64)v41 >= 0xFFFFF6FB7DBED000uLL )
              {
                v42 = 0xFFFFF6FB7DBED7F8uLL;
                if ( (unsigned __int64)v41 <= 0xFFFFF6FB7DBED7F8uLL )
                  v43 = MiReadPteShadow(v41, *v41);
              }
              v126 = v43;
              v44 = MI_GET_PFN_FROM_PTE(&v126, v42, v36, v37);
              v46 = 0LL;
              v48 = *(unsigned __int16 *)(v47 + 172);
              v125 = v44;
              v119 = 0;
              v118 = 0;
              v49 = *(_QWORD *)(qword_140388AF0 + 8 * ((v39 >> 40) & 0x3FF));
              if ( *(_QWORD *)(qword_140388AF0 + 8 * v48) != v49 )
              {
                if ( (a12 & 1) == 0 )
                  goto LABEL_29;
                if ( (unsigned int)MiChargeCommit(v49, 1uLL, 0LL, v45) )
                {
                  v118 = 1;
LABEL_29:
                  if ( (unsigned int)MiGetCrossPartitionCloneCharges(v49) )
                  {
                    v44 = v125;
                    v119 = 1;
                    goto LABEL_31;
                  }
                  DemandZeroPte = MiMakeDemandZeroPte(4LL);
                  *a4 = DemandZeroPte;
                  if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
                    MiWritePteShadow(a4, DemandZeroPte);
                  v66 = v118 == 0;
LABEL_53:
                  *a15 = 1;
                  if ( !v66 )
                    MiReturnCommit(v49, 1uLL);
LABEL_166:
                  v89 = Page;
                  goto LABEL_167;
                }
LABEL_92:
                v99 = MiMakeDemandZeroPte(4LL);
                *a4 = v99;
                if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow(a4, v99);
                *a15 = 1;
                goto LABEL_166;
              }
LABEL_31:
              if ( (v40 & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v44, 3) )
              {
                v67 = v125;
                MiLockPageAtDpcInline(v125);
                *(_QWORD *)(v67 + 24) ^= (*(_QWORD *)(v67 + 24) ^ (*(_QWORD *)(v67 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
                _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiLockPageAtDpcInline(v33);
                v69 = v116;
                if ( (v116 & 0x42) != 0 )
                {
                  if ( (*(_DWORD *)(a10 + 48) & 7) == 4 && (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) == 0 )
                    MiCaptureWriteWatchDirtyBit(a1, v127, a10, v68);
                  v46 = MiCaptureDirtyBitToPfn(v33);
                  v116 = v69 & 0xFFFFFFFFFFFFFFBDuLL;
                }
                if ( (*(_QWORD *)(v33 + 16) & 2) != 0 )
                {
                  PageFileReservationOffset = MiGetPageFileReservationOffset(v33 + 16);
                  v74 = MiTransferSoftwarePte(
                          *v71,
                          *(_QWORD *)(v49 + 8LL * (v72 >> 12) + 5792),
                          PageFileReservationOffset,
                          v73);
                  *v75 &= ~2uLL;
                  v46 = v74;
                }
                *(_QWORD *)(v33 + 8) = a6;
                *(_QWORD *)(v33 + 40) |= 0x200000000000000uLL;
                v76 = MI_GET_PAGE_FRAME_FROM_PTE(&v126);
                *(_QWORD *)(v33 + 40) = v78 ^ (v78 ^ v76) & 0xFFFFFFFFFLL;
                v79 = *v77;
                if ( (unsigned __int64)v77 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v77 <= 0xFFFFF6FB7DBED7F8uLL )
                  v79 = MiReadPteShadow(v77, *v77);
                if ( (v79 & 0x80u) != 0LL )
                {
                  v80 = v79 | 0x20;
                  *v77 = v80;
                  if ( (unsigned __int64)v77 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v77 <= 0xFFFFF6FB7DBED7F8uLL )
                    MiWritePteShadow(v77, v80);
                }
                v125 = (unsigned __int64)*v77 >> 5;
                _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v46 )
                  MiReleasePageFileInfo((struct _KEVENT *)v49, v46, 1);
                v81 = v116;
                if ( (v116 & 0x800) != 0 )
                {
                  v81 = v116 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
                  v116 = v81;
                }
                MiWriteValidPteNewPage(a3, v81);
                v82 = v127;
                MiInsertTbFlushEntry(a9, v127, 1LL, 0);
                *(_QWORD *)a6 = 0LL;
                *(_QWORD *)a6 = v81;
                if ( a6 >= 0xFFFFF6FB7DBED000uLL && a6 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow(a6, v81);
                v66 = v119 == 1;
                *(_QWORD *)(a6 + 24) = 2LL;
                *(_QWORD *)(a6 + 8) = v66;
                MiSetWsleProtection(v83, v82);
                PrototypePteDirect = MiMakePrototypePteDirect(
                                       *(_QWORD *)(v33 + 8) | 0x8000000000000000uLL,
                                       v84,
                                       v85,
                                       v86);
                v116 = PrototypePteDirect;
                if ( (a12 & 1) != 0 )
                {
                  *(_QWORD *)(a6 + 16) = 1LL;
                  v116 = PrototypePteDirect | 8;
                  if ( v118 )
                    ++*a14;
                  else
                    ++a14[1];
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 6472), 1uLL);
                  PrototypePteDirect = v116;
                }
                else
                {
                  *(_QWORD *)(a6 + 16) = 0LL;
                }
                *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v125 << 59);
                *a4 = PrototypePteDirect;
                if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL )
                {
                  v88 = 0xFFFFF6FB7DBED7F8uLL;
                  if ( (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
                    MiWritePteShadow(a4, PrototypePteDirect);
                }
                _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
                MiUpdateWorkingSetPrivateSize(v124, v82, -1LL, v88);
                v89 = v122;
                v27 = v90 + 2;
                goto LABEL_167;
              }
              if ( v119 == 1 )
                MiReturnCrossPartitionCloneCharges(v49, v50, v24);
              if ( v118 )
                MiReturnCommit(v49, 1uLL);
              v18 = (ULONG_PTR)a3;
              v28 = 1LL;
              v29 = 1;
              v25 = a2;
              v118 = 1;
              goto LABEL_11;
            }
            WsleProtection = MiGetWsleProtection(v37, WsleContents, *(_QWORD *)(v33 + 8), v37);
            if ( WsleProtection )
            {
              PrototypePteVadLookup = MiMakePrototypePteVadLookup(WsleProtection, v92, v93, v94);
              v116 = PrototypePteVadLookup;
              goto LABEL_90;
            }
            v98 = MiMakePrototypePteDirect(v95, v92, v93, v94);
            v116 = v98;
            PrototypePteVadLookup = v98;
            if ( v96 >= 0 )
            {
              PrototypePteVadLookup = v98 | 0x800;
              v116 = v98 | 0x800;
LABEL_90:
              if ( v96 >= 0 )
              {
                if ( !(unsigned int)MiIncrementCombinedPte(v120, v97) )
                  goto LABEL_92;
LABEL_163:
                *a4 = PrototypePteVadLookup;
                if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow(a4, PrototypePteVadLookup);
                goto LABEL_166;
              }
            }
            if ( !(unsigned int)MiReferenceCloneProto(v120, v97, a12, (_DWORD)a14, (__int64)&v123) )
              goto LABEL_92;
            v100 = v123 == 0;
            goto LABEL_160;
          }
        }
        MiInitializePageColorBase(v124, 0, (__int64)&v128);
        v52 = v120;
        v53 = *v128 + 1;
        *v128 = v53;
        v54 = *(unsigned __int16 *)(v52 + 172);
        v55 = *(_QWORD *)(qword_140388AF0 + 8 * v54);
        if ( v51 != -1
          || (Page = MiGetPage(
                       *(_QWORD *)(qword_140388AF0 + 8 * v54),
                       v130 | (unsigned int)(unsigned __int16)(v129 & v53),
                       0),
              v51 = Page,
              v122 = Page,
              Page != -1) )
        {
          MiFinalizePageAttribute(48 * v51 - 0x58000000000LL, *(unsigned __int8 *)(v33 + 34) >> 6, 0);
          MiDuplicateCloneLeaf(v18, (_DWORD)a4, Page, a13, 17);
          ++*a7;
          return 0LL;
        }
        MiFlushTbList((__int64)a9, v56);
        MiUnlockWorkingSetExclusive(v124, a13);
        MiWaitForFreePage(v55);
        SharedVm = MiGetSharedVm(v124);
        v30 = ExAcquireSpinLockExclusive(SharedVm);
        v28 = v118;
        v29 = v121;
        v25 = a2;
        a13 = v30;
        SharedVm[1] = 0;
      }
      if ( (PrototypePteVadLookup & 0x400) != 0 )
      {
        MiGetPrototypePteDirect(PrototypePteVadLookup);
        if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(PrototypePteVadLookup) )
        {
          if ( (unsigned int)MiIncrementCombinedPte(v120, v114) )
            goto LABEL_163;
        }
        else if ( (unsigned int)MiReferenceCloneProto(v120, v114, a12, (_DWORD)a14, (__int64)&v123) )
        {
          if ( !v123 )
            goto LABEL_163;
          v100 = *(_QWORD *)(v123 + 16) >> 59 == 24;
LABEL_160:
          if ( v100 )
            goto LABEL_163;
          PrototypePteVadLookup |= 8uLL;
          goto LABEL_162;
        }
        v115 = MiMakeDemandZeroPte(4LL);
        *a4 = v115;
        if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(a4, v115);
        *a15 = 1;
        goto LABEL_166;
      }
      if ( (PrototypePteVadLookup & 0x800) == 0 )
        break;
      v58 = MiHandleForkTransitionPte(a1, v25, (__int64 *)v18, a4, a6, a7, (__int64)a9, &v122, a12, a13, a14, a15);
      if ( v58 )
      {
        v66 = v58 == 1;
        v89 = v122;
        LOBYTE(v27) = !v66;
        goto LABEL_167;
      }
      v28 = v118;
      v30 = a13;
      v29 = v121;
      v25 = a2;
      Page = v122;
    }
    v59 = (PrototypePteVadLookup >> 5) & 0x1F;
    if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(PrototypePteVadLookup) )
    {
      if ( (PrototypePteVadLookup & 2) != 0 )
      {
        PrototypePteVadLookup &= ~2uLL;
        v116 = PrototypePteVadLookup;
      }
      if ( a5 )
      {
        v112 = MiFindZeroCloneBlock(a5, (unsigned int)v59);
        v123 = v112;
        if ( v112 )
        {
          MiWriteSharedDemandZeroPte(a2, v113, v112, (_DWORD)a4, (__int64)a14);
          goto LABEL_166;
        }
      }
      else
      {
        v123 = 0LL;
      }
      goto LABEL_163;
    }
    if ( (_DWORD)v59 == 16 )
    {
      if ( (PrototypePteVadLookup & 2) == 0 )
        goto LABEL_163;
      PrototypePteVadLookup &= ~2uLL;
LABEL_162:
      v116 = PrototypePteVadLookup;
      goto LABEL_163;
    }
    if ( ((PrototypePteVadLookup >> 5) & 0x18) != 0x10 )
      break;
    MiFlushTbList((__int64)a9, v60);
    v63 = v124;
    MiUnlockWorkingSetExclusive(v124, a13);
    v131[1] = 4096LL;
    v131[0] = (__int64)(v18 << 25) >> 16;
    MiPrefetchVirtualMemory(1LL, v131, v63, 45LL);
    v64 = MiGetSharedVm(v63);
    v30 = ExAcquireSpinLockExclusive(v64);
    v28 = v118;
    v29 = v121;
    v25 = a2;
    a13 = v30;
    v64[1] = 0;
  }
  v101 = 0;
  v119 = 0;
  v49 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 1452));
  if ( *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v62 + 172)) != v49 )
  {
    if ( (a12 & 1) != 0 )
    {
      if ( !(unsigned int)MiChargeCommit(
                            *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 1452)),
                            1uLL,
                            0LL,
                            v61) )
        goto LABEL_92;
      v101 = 1;
      v119 = 1;
    }
    if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v49) )
    {
      v102 = MiMakeDemandZeroPte(4LL);
      *a4 = v102;
      if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(a4, v102);
      v66 = v101 == 0;
      goto LABEL_53;
    }
    v101 = 1;
  }
  v103 = PrototypePteVadLookup;
  v104 = 0xFFFFF6FB7DBED000uLL;
  v105 = &v116;
  v106 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)&v116 >= 0xFFFFF6FB7DBED000uLL )
  {
    v105 = &v116;
    if ( (unsigned __int64)&v116 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v103 = MiReadPteShadow(&v116, PrototypePteVadLookup);
      v106 = 0xFFFFF6FB7DBED7F8uLL;
    }
  }
  if ( (v103 & 0x80u) != 0LL )
  {
    v107 = v103 | 0x20;
    v116 = v107;
    v105 = &v116;
    if ( (unsigned __int64)&v116 >= v104 )
    {
      v105 = &v116;
      if ( (unsigned __int64)&v116 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(&v116, v107);
    }
    PrototypePteVadLookup = v116;
  }
  if ( (PrototypePteVadLookup & 2) != 0 )
  {
    MiReleasePageFileInfo((struct _KEVENT *)v49, PrototypePteVadLookup & 0xFFFFFFFFFFFFFFFBuLL, 1);
    PrototypePteVadLookup &= ~2uLL;
    v104 = 0xFFFFF6FB7DBED000uLL;
    v116 = PrototypePteVadLookup;
  }
  *(_QWORD *)a6 = 0LL;
  *(_QWORD *)a6 = PrototypePteVadLookup;
  if ( a6 >= v104 && a6 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(a6, PrototypePteVadLookup);
  if ( v101 )
    *(_QWORD *)(a6 + 8) = 1LL;
  else
    *(_QWORD *)(a6 + 8) = 0LL;
  *(_QWORD *)(a6 + 24) = 2LL;
  v108 = MiMakePrototypePteDirect(a6, v105, v106, v61);
  v111 = v108;
  v116 = v108;
  *a3 = v108;
  if ( (unsigned __int64)a3 >= v110 && (unsigned __int64)a3 <= v109 )
    MiWritePteShadow(a3, v108);
  if ( (a12 & 1) != 0 )
  {
    if ( (_DWORD)v59 != 24 )
      v116 = v111 | 8;
    *(_QWORD *)(a6 + 16) = 1LL;
    if ( v119 )
      ++*a14;
    else
      ++a14[1];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 6472), 1uLL);
    v111 = v116;
  }
  else
  {
    if ( v101 == 1 )
      *(_QWORD *)(a6 + 8) = 1LL;
    *(_QWORD *)(a6 + 16) = 0LL;
  }
  *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v59 << 59);
  *a4 = v111;
  if ( (unsigned __int64)a4 >= v110 && (unsigned __int64)a4 <= v109 )
    MiWritePteShadow(a4, v111);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
  v89 = v122;
  v27 = 1;
LABEL_167:
  if ( v89 != -1 )
    MiLockAndInsertPageInFreeList(48 * v89 - 0x58000000000LL);
  return v27;
}
