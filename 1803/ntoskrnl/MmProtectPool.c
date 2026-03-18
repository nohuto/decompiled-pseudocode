/*
 * XREFs of MmProtectPool @ 0x14004B80C
 * Callers:
 *     ExProtectPoolEx @ 0x14004C6F8 (ExProtectPoolEx.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiPreUnlockWorkingSetShared @ 0x140083B98 (MiPreUnlockWorkingSetShared.c)
 *     MiFindLargeMapping @ 0x1400C8A04 (MiFindLargeMapping.c)
 *     MiVaIsSessionSpecialPool @ 0x1400CA560 (MiVaIsSessionSpecialPool.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiLockNonPagedPoolPte @ 0x1400DC2A0 (MiLockNonPagedPoolPte.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140125D90 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmProtectPool(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned int v6; // edi
  int v7; // esi
  unsigned __int64 v8; // r12
  int v9; // ebx
  unsigned __int64 v10; // r14
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r10
  int v14; // r11d
  char *AnyMultiplexedVm; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r10
  int v19; // r11d
  char *SessionVm; // rax
  __int64 v21; // r13
  __int64 v22; // rcx
  unsigned __int8 v23; // r12
  unsigned __int64 v24; // rbx
  char v25; // al
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // r11
  unsigned __int64 v30; // rax
  __int64 TransitionPte; // rax
  __int64 v32; // r9
  signed __int64 v33; // rdx
  signed __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // r11d
  __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  int v41; // r9d
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // rcx
  int v45; // eax
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // eax
  volatile LONG *v50; // rbx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // eax
  volatile signed __int32 *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // r10
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r10
  unsigned __int64 v65; // rbx
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  __int64 v68; // r10
  __int64 v69; // rdx
  __int64 v70; // r11
  __int64 v71; // r13
  __int64 v72; // r9
  unsigned __int64 ValidPte; // rdi
  __int64 v74; // r12
  char v75; // si
  signed __int64 v76; // rdi
  signed __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r8
  int v83; // eax
  volatile signed __int32 *v84; // rbx
  __int64 v85; // rcx
  unsigned __int64 v86; // rax
  __int64 v87; // r9
  __int64 v88; // r10
  __int64 v89; // rdx
  __int64 v90; // r11
  __int64 v91; // r13
  int v92; // edi
  __int64 v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // r8
  int v96; // eax
  volatile signed __int32 *SharedVm; // rbx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // r8
  int v103; // eax
  volatile signed __int32 *v104; // rbx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // r10
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r10
  __int64 v112; // rdx
  __int64 v113; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // rcx
  int v116; // eax
  char *PriorityState; // rax
  int v118; // ecx
  _KTHREAD *NextThread; // rax
  _KTHREAD *IdleThread; // r8
  _DWORD *v121; // r8
  int v122; // edx
  unsigned __int8 v124; // [rsp+20h] [rbp-E0h]
  int v125; // [rsp+24h] [rbp-DCh]
  unsigned int v126; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v127; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v128; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v129; // [rsp+38h] [rbp-C8h]
  unsigned int v130; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v131; // [rsp+48h] [rbp-B8h]
  __int64 v132; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v133; // [rsp+58h] [rbp-A8h]
  __int64 v134; // [rsp+60h] [rbp-A0h]
  __int64 v135; // [rsp+68h] [rbp-98h]
  int v136; // [rsp+70h] [rbp-90h] BYREF
  __int16 v137; // [rsp+74h] [rbp-8Ch]
  __int64 v138; // [rsp+78h] [rbp-88h]
  __int64 v139; // [rsp+80h] [rbp-80h]
  __int64 v140; // [rsp+88h] [rbp-78h]
  int v141; // [rsp+130h] [rbp+30h] BYREF
  __int16 v142; // [rsp+134h] [rbp+34h]
  __int64 v143; // [rsp+138h] [rbp+38h]
  __int64 v144; // [rsp+140h] [rbp+40h]
  __int64 v145; // [rsp+148h] [rbp+48h]
  void *retaddr; // [rsp+238h] [rbp+138h]

  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 = (unsigned int)a3 & 0xFFFFFFEF;
  ProtectionMask = MiMakeProtectionMask((unsigned int)a3, a2, a3);
  v126 = ProtectionMask;
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v125 = 0;
  v7 = 0;
  v8 = v4 + v5 - 1;
  v9 = 0;
  v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(v5);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v11 + 2);
  if ( v14 == 6 )
    goto LABEL_20;
  if ( v14 == 7 || v14 == 13 )
  {
    if ( ((v8 ^ v13) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      return 0LL;
    if ( v14 == 7 )
      goto LABEL_20;
LABEL_18:
    SessionVm = MiGetAnyMultiplexedVm(5);
    goto LABEL_19;
  }
  if ( !(unsigned int)MiVaIsSessionSpecialPool(v13) )
  {
    if ( v19 != 5 || (unsigned int)MiFindLargeMapping(v18, v8) )
      return 0LL;
    v7 = 1;
    v125 = 1;
    goto LABEL_18;
  }
  if ( ((v8 ^ v18) & 0xFFFFFFFFFFFFF000uLL) == 0 )
  {
    v9 = 2;
    SessionVm = (char *)MiGetSessionVm(v16, 0LL, v17);
LABEL_19:
    AnyMultiplexedVm = SessionVm;
LABEL_20:
    v129 = v12;
    v21 = v12;
    v137 = 0;
    v138 = 20LL;
    v136 = v9;
    v139 = v12;
    v140 = v12;
    v22 = *((unsigned __int16 *)AnyMultiplexedVm + 87);
    v131 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v135 = *(_QWORD *)(qword_1403CBD88 + 8 * v22);
    v23 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v127 = v23;
    while ( v10 <= v131 )
    {
      if ( v21 )
      {
        if ( (v10 & 0xFFF) != 0 )
          goto LABEL_25;
        MiFlushTbList(&v136);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v21);
      }
      v21 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v129 = v21;
      MiLockPageTableInternal(AnyMultiplexedVm, v21, 0LL);
LABEL_25:
      v24 = MI_READ_PTE_LOCK_FREE(v10);
      v128 = v24;
      v25 = AnyMultiplexedVm[184] & 7;
      if ( v6 != 24 )
      {
        if ( v25 != 7 )
        {
          if ( (v24 & 1) != 0 )
          {
            v86 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v128);
            v89 = v88 & (v86 >> 12);
            v91 = v90 + 48 * v89;
            if ( (*(_QWORD *)(v91 + 40) & 0x200000000000000LL) != 0 )
            {
              MiFlushTbList(&v136);
              v92 = MiCopyOnWrite((__int64)(v10 << 25) >> 16);
              if ( v92 < 0 )
              {
                v93 = v129;
                MiUnlockPageTableInternal(AnyMultiplexedVm, v129);
                if ( (AnyMultiplexedVm[184] & 7u) < 6 )
                {
                  v96 = HIBYTE(*((_DWORD *)AnyMultiplexedVm + 46));
                  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0x8000000) != 0 || (v96 & 4) != 0 || (v96 & 0x10) != 0 )
                  {
                    LOBYTE(v94) = v23;
                    MiPreUnlockWorkingSetShared(AnyMultiplexedVm, v94, v95);
                  }
                  SharedVm = (volatile signed __int32 *)MiGetSharedVm(AnyMultiplexedVm);
                  MiCheckProcessShadow(v98, 1);
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  {
                    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SharedVm, retaddr);
                  }
                  else
                  {
                    _InterlockedAnd(SharedVm, 0xBFFFFFFF);
                    _InterlockedDecrement(SharedVm);
                  }
                  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
                }
                __writecr8(v23);
                MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v92);
                MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
                MiLockPageTableInternal(AnyMultiplexedVm, v93, 0LL);
              }
              v10 -= 8LL;
              goto LABEL_122;
            }
            v99 = v126;
            LODWORD(v99) = v126 | 0x80000000;
            if ( _InterlockedCompareExchange64(
                   (volatile signed __int64 *)v10,
                   ((HIBYTE(v24) & 0xF | (16 * ((v24 >> 60) & 7))) << 56) | MiMakeValidPte(v10, v89, v99, v87) & 0x80FFFFFFFFFFFFFFuLL,
                   v24) == v24 )
            {
              if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v128) )
                MiInsertTbFlushEntry((__int64)&v136, (__int64)(v10 << 25) >> 16, 1LL, 0);
              v100 = 0LL;
              MiLockPageAtDpcInline(v91);
              v6 = v126;
              *(_QWORD *)(v91 + 16) ^= (*(_DWORD *)(v91 + 16) ^ (32 * v126)) & 0x3E0;
              if ( (v128 & 0x42) != 0 )
                v100 = MiCaptureDirtyBitToPfn(v91);
              _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v100 )
                MiReleasePageFileInfo(v135, v100, 1LL);
            }
            else
            {
              v10 -= 8LL;
LABEL_96:
              v6 = v126;
            }
          }
          else if ( (v24 & 0x400) != 0 )
          {
            MiFlushTbList(&v136);
            MiUnlockPageTableInternal(AnyMultiplexedVm, v21);
            if ( (AnyMultiplexedVm[184] & 7u) < 6 )
            {
              v103 = HIBYTE(*((_DWORD *)AnyMultiplexedVm + 46));
              if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0x8000000) != 0 || (v103 & 4) != 0 || (v103 & 0x10) != 0 )
              {
                LOBYTE(v101) = v23;
                MiPreUnlockWorkingSetShared(AnyMultiplexedVm, v101, v102);
              }
              v104 = (volatile signed __int32 *)MiGetSharedVm(AnyMultiplexedVm);
              MiCheckProcessShadow(v105, 1);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v104, retaddr);
              }
              else
              {
                _InterlockedAnd(v104, 0xBFFFFFFF);
                _InterlockedDecrement(v104);
              }
              KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
            }
            __writecr8(v23);
            MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
            MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
            MiLockPageTableInternal(AnyMultiplexedVm, v21, 0LL);
            v10 -= 8LL;
          }
          else if ( (v24 & 0x800) != 0 )
          {
            if ( MiLockTransitionLeafPage(v10) )
            {
              v106 = MI_READ_PTE_LOCK_FREE(v10);
              v108 = 32LL * (v6 & 0x1F);
              *(_QWORD *)(v107 + 16) = v108 | *(_QWORD *)(v107 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
              v128 = v108 | v106 & 0xFFFFFFFFFFFFFC1FuLL;
              *(_QWORD *)v10 = v128;
              if ( MiPteInShadowRange(v10) )
                MiWritePteShadow(v110, v109);
              _InterlockedAnd64((volatile signed __int64 *)(v111 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              v10 -= 8LL;
            }
          }
          else
          {
            v128 = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(32 * v6)) & 0x3E0;
            *(_QWORD *)v10 = v128;
            if ( MiPteInShadowRange(v10) )
              MiWritePteShadow(v113, v112);
          }
LABEL_97:
          v7 = v125;
          goto LABEL_98;
        }
        v67 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v128);
        v69 = v68 & (v67 >> 12);
        v71 = v70 + 48 * v69;
        v130 = v6 | 0x80000000;
        ValidPte = MiMakeValidPte(v10, v69, v6 | 0x80000000, v72);
        if ( (v24 & 1) == 0 )
        {
LABEL_92:
          if ( (*(_QWORD *)(v71 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            MiLockPageAtDpcInline(v71);
            *(_QWORD *)(v71 + 24) = *(_QWORD *)(v71 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ValidPte |= 0x200uLL;
          }
          *(_QWORD *)(v71 + 16) ^= (*(_DWORD *)(v71 + 16) ^ (32 * v126)) & 0x3E0;
          *(_QWORD *)v10 = ValidPte;
          if ( MiPteInShadowRange(v10) )
          {
            MiWritePteShadow(v80, ValidPte);
            goto LABEL_96;
          }
LABEL_122:
          v6 = v126;
          goto LABEL_97;
        }
        v74 = v24;
        while ( 1 )
        {
          v7 = v125;
          v134 = v74;
          v133 = ValidPte;
          v132 = v74;
          if ( v125 != 1 )
            break;
          v71 = MiLockNonPagedPoolPte(v10);
          v74 = MI_READ_PTE_LOCK_FREE(v10);
          v75 = v74;
          if ( v74 == v132 )
          {
            v76 = ValidPte | 0x200;
            if ( (v132 & 0x200) == 0 )
              v76 = v133;
            v77 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v76, v24);
            v75 = v77;
            v74 = v77;
            if ( v77 == v134 )
            {
              v24 = v128;
              v7 = 1;
              goto LABEL_87;
            }
            v128 = v77;
          }
          else
          {
            v128 = v74;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v124);
          v78 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v128) >> 12) & 0xFFFFFFFFFLL;
          v71 = 48 * v78 - 0x58000000000LL;
          ValidPte = MiMakeValidPte(v10, v78, v130, v79);
          if ( (v75 & 1) == 0 )
            goto LABEL_92;
          v24 = v128;
        }
        v124 = 17;
        MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_87:
        *(_QWORD *)(v71 + 16) ^= (*(_DWORD *)(v71 + 16) ^ (32 * v126)) & 0x3E0;
        if ( v7 == 1 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v124);
          v24 = v128;
        }
        if ( (MiFlags & 0x100) != 0 && !(unsigned int)MI_TIGHTER_PERMISSIONS(v24) )
        {
LABEL_91:
          v6 = v126;
          goto LABEL_98;
        }
        goto LABEL_38;
      }
      if ( v25 == 7 )
      {
        if ( v7 == 1 )
        {
          v26 = MiLockNonPagedPoolPte(v10);
          v24 = MI_READ_PTE_LOCK_FREE(v10);
          v128 = v24;
        }
        else
        {
          v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v128);
          v26 = v29 + 48 * (v28 & (v27 >> 12));
          v124 = MiLockPageInline(v26);
        }
        *(_QWORD *)(v26 + 16) = *(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v128);
        TransitionPte = MiMakeTransitionPte((v30 >> 12) & 0xFFFFFFFFFLL, 24LL);
        v33 = TransitionPte;
        if ( v7 == 1 )
        {
          while ( 1 )
          {
            v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v33, v24);
            v24 = v34;
            if ( v34 == v32 )
              break;
            v128 = v34;
            v35 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v128);
            v33 = MiMakeTransitionPte(v37 & (v35 >> 12), v36);
          }
          if ( (v32 & 0x200) != 0 )
            *(_QWORD *)(v26 + 24) = *(_QWORD *)(v26 + 24) & 0xC000000000000000uLL | 0x10000;
        }
        else
        {
          *(_QWORD *)v10 = TransitionPte;
          if ( MiPteInShadowRange(v10) )
            MiWritePteShadow(v39, v38);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_38:
        MiInsertTbFlushEntry((__int64)&v136, (__int64)(v10 << 25) >> 16, 1LL, 0);
        goto LABEL_49;
      }
      if ( (v24 & 1) == 0 )
      {
        if ( (v24 & 0x400) != 0 )
        {
          MiFlushTbList(&v136);
          MiUnlockPageTableInternal(AnyMultiplexedVm, v21);
          if ( (AnyMultiplexedVm[184] & 7u) < 6 )
          {
            v56 = HIBYTE(*((_DWORD *)AnyMultiplexedVm + 46));
            if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0x8000000) != 0 || (v56 & 4) != 0 || (v56 & 0x10) != 0 )
            {
              LOBYTE(v54) = v23;
              MiPreUnlockWorkingSetShared(AnyMultiplexedVm, v54, v55);
            }
            v57 = (volatile signed __int32 *)MiGetSharedVm(AnyMultiplexedVm);
            MiCheckProcessShadow(v58, 1);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v57, retaddr);
            }
            else
            {
              _InterlockedAnd(v57, 0xBFFFFFFF);
              _InterlockedDecrement(v57);
            }
            KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
          }
          __writecr8(v23);
          MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
          MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
          MiLockPageTableInternal(AnyMultiplexedVm, v21, 0LL);
          v10 -= 8LL;
          goto LABEL_98;
        }
        if ( (v24 & 0x800) == 0 )
        {
          v65 = v24 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v128 = v65;
          *(_QWORD *)v10 = v65;
          if ( MiPteInShadowRange(v10) )
            MiWritePteShadow(v66, v65);
          goto LABEL_98;
        }
        if ( MiLockTransitionLeafPage(v10) )
        {
          v60 = MI_READ_PTE_LOCK_FREE(v10) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v61 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v128 = v60;
          *(_QWORD *)(v59 + 16) = v61;
          *(_QWORD *)v10 = v60;
          if ( MiPteInShadowRange(v10) )
            MiWritePteShadow(v63, v62);
          _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_98;
        }
LABEL_54:
        v10 -= 8LL;
        goto LABEL_98;
      }
      v40 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v128);
      v44 = 0x200000000000000LL;
      if ( (*(_QWORD *)(v43 + 48 * (v42 & (v40 >> 12)) + 40) & 0x200000000000000LL) == 0 )
      {
        if ( dword_1403CBF28 != v41 )
          MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, v10);
        if ( (MiGetWsleContents(v44, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
          goto LABEL_98;
        v52 = MiTbFlushType((__int64)AnyMultiplexedVm);
        v144 = v53;
        v145 = v53;
        v143 = 20LL;
        v141 = v52;
        v142 = 4;
        MiInsertTbFlushEntry((__int64)&v141, (__int64)(v10 << 25) >> 16, 1LL, 0);
        if ( MiFreeWsleList((__int64)AnyMultiplexedVm, (__int64)&v141, 0) )
          goto LABEL_98;
        goto LABEL_54;
      }
      MiFlushTbList(&v136);
      v45 = MiCopyOnWrite((__int64)(v10 << 25) >> 16);
      v10 -= 8LL;
      v46 = v45;
      if ( v45 >= 0 )
        goto LABEL_91;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v21);
      if ( (AnyMultiplexedVm[184] & 7u) < 6 )
      {
        v49 = HIBYTE(*((_DWORD *)AnyMultiplexedVm + 46));
        if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0x8000000) != 0 || (v49 & 4) != 0 || (v49 & 0x10) != 0 )
        {
          LOBYTE(v47) = v23;
          MiPreUnlockWorkingSetShared(AnyMultiplexedVm, v47, v48);
        }
        v50 = (volatile LONG *)MiGetSharedVm(AnyMultiplexedVm);
        MiCheckProcessShadow(v51, 1);
        ExReleaseSpinLockSharedFromDpcLevel(v50);
      }
      __writecr8(v23);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v46);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      MiLockPageTableInternal(AnyMultiplexedVm, v21, 0LL);
LABEL_49:
      v6 = v126;
LABEL_98:
      v23 = v127;
      v10 += 8LL;
      v21 = v129;
    }
    MiFlushTbList(&v136);
    if ( v21 )
      MiUnlockPageTableInternal(AnyMultiplexedVm, v21);
    if ( (AnyMultiplexedVm[184] & 7u) >= 6 )
      goto LABEL_169;
    v83 = HIBYTE(*((_DWORD *)AnyMultiplexedVm + 46));
    if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0x8000000) != 0 || (v83 & 4) != 0 || (v83 & 0x10) != 0 )
    {
      LOBYTE(v81) = v23;
      MiPreUnlockWorkingSetShared(AnyMultiplexedVm, v81, v82);
    }
    v84 = (volatile signed __int32 *)MiGetSharedVm(AnyMultiplexedVm);
    MiCheckProcessShadow(v85, 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v84, retaddr);
    }
    else
    {
      _InterlockedAnd(v84, 0xBFFFFFFF);
      _InterlockedDecrement(v84);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( !SchedulerAssist )
      goto LABEL_169;
    if ( CurrentPrcb->NestingLevel > 1u )
      goto LABEL_169;
    v116 = SchedulerAssist[5] - 1;
    SchedulerAssist[5] = v116;
    if ( v116 || *((_BYTE *)SchedulerAssist + 25) || *((_BYTE *)SchedulerAssist + 27) )
      goto LABEL_169;
    PriorityState = CurrentPrcb->PriorityState;
    v118 = *PriorityState;
    if ( *PriorityState )
    {
      if ( v118 == 127 )
        v118 = 0;
    }
    else
    {
      NextThread = CurrentPrcb->NextThread;
      IdleThread = CurrentPrcb->IdleThread;
      if ( NextThread != IdleThread && (CurrentPrcb->CurrentThread != IdleThread || NextThread) )
        goto LABEL_165;
      v118 = KiVpThreadSystemWorkPriority;
    }
    if ( v118 >= 16 )
    {
LABEL_169:
      __writecr8(v23);
      return 1LL;
    }
LABEL_165:
    v121 = CurrentPrcb->SchedulerAssist;
    v122 = v121[1];
    if ( (unsigned int)(v122 - 1) <= 0x1E && v122 > v118 && v122 >= KiVpThreadSystemWorkPriority )
    {
      v121[4] = 3;
      __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
    }
    goto LABEL_169;
  }
  return 0LL;
}
