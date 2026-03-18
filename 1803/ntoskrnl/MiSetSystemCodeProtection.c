/*
 * XREFs of MiSetSystemCodeProtection @ 0x14013EB40
 * Callers:
 *     MiSetImageProtection @ 0x14013EAF4 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x14061C574 (MiProtectSystemImage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiPreUnlockWorkingSetShared @ 0x140083B98 (MiPreUnlockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140125D90 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  int v8; // r9d
  unsigned int v10; // r15d
  int v11; // ebx
  unsigned __int64 v12; // r8
  int v13; // r8d
  __int64 SessionVm; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // bl
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  int v25; // eax
  char v26; // r15
  LONG *SharedVm; // rdi
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int64 ValidPte; // rdi
  __int64 v34; // rdi
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r10
  __int64 v44; // rcx
  unsigned int v45; // edi
  int v46; // eax
  LONG *v47; // rbx
  __int64 v48; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v51; // eax
  char *PriorityState; // rax
  int v53; // edx
  _KTHREAD *NextThread; // rax
  _KTHREAD *IdleThread; // r8
  _DWORD *v56; // r9
  int v57; // r8d
  char v58; // [rsp+30h] [rbp-D0h]
  __int64 v60; // [rsp+40h] [rbp-C0h]
  __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  __int64 i; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  _DWORD *v67; // [rsp+78h] [rbp-88h]
  unsigned __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v69; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  int v71; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v72; // [rsp+A4h] [rbp-5Ch]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-48h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v69 = a3;
  v6 = a2;
  v64 = a1;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 1LL;
  v10 = a4;
  v11 = 2;
  if ( a4 == 256 )
  {
    v67 = (_DWORD *)MiSectionControlArea(*(_QWORD *)(v64 + 112));
    v65 = v12;
  }
  else
  {
    v67 = 0LL;
    v65 = a3;
    v10 = a4 & 0xFFFFFFFE;
    LOBYTE(v8) = 17;
    if ( (a4 & 5) != 5 )
      v10 = a4;
    if ( (int)MiMakeDriverPagesPrivate(v64, v6, a3, v8, (v10 >> 1) & 2) < 0 )
      return 0LL;
  }
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
  {
    SessionVm = MiGetSessionVm();
  }
  else
  {
    v11 = v13;
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  }
  v72 = 0;
  v16 = SessionVm;
  v73 = 20LL;
  v71 = v11;
  v17 = v15;
  v74 = v15;
  v75 = v15;
  v63 = v15;
  v19 = MiLockWorkingSetShared(SessionVm);
  v58 = v19;
  if ( v6 > v69 )
    goto LABEL_66;
  v21 = 0LL;
  v22 = 0LL;
  for ( i = 0LL; ; v22 = i )
  {
    if ( !v17 )
      goto LABEL_17;
    if ( (v6 & 0xFFF) == 0 )
    {
      MiFlushTbList((__int64)&v71, v18, v22);
      MiUnlockPageTableInternal(v16, v17);
LABEL_17:
      v17 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v63 = v17;
      MiLockPageTableInternal(v16, v17, 0LL);
      v22 = i;
      v21 = 0LL;
    }
    if ( v6 > v65 )
    {
      v23 = v7 - *(_QWORD *)(v64 + 48);
      if ( v22 )
      {
        v30 = *(_QWORD *)(v22 + 16);
        v29 = v21;
        i = v30;
        v68 = v21;
      }
      else
      {
        MiFlushTbList((__int64)&v71, v18, 0LL);
        MiUnlockPageTableInternal(v16, v17);
        if ( (*(_BYTE *)(v16 + 184) & 7u) < 6 )
        {
          v25 = HIBYTE(*(_DWORD *)(v16 + 184));
          if ( (*(_DWORD *)(v16 + 184) & 0x8000000) != 0 || (v25 & 4) != 0 || (v25 & 0x10) != 0 )
          {
            v26 = v58;
            MiPreUnlockWorkingSetShared(v16, v58);
          }
          else
          {
            v26 = v58;
          }
          SharedVm = MiGetSharedVm(v16);
          MiCheckProcessShadow(v28, 1);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SharedVm, retaddr);
          }
          else
          {
            _InterlockedAnd(SharedVm, 0xBFFFFFFF);
            _InterlockedDecrement(SharedVm);
          }
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
          v17 = v63;
          v24 = v26;
        }
        else
        {
          v24 = v58;
        }
        __writecr8(v24);
        i = MiOffsetToProtos(v67, v23, &v68);
        MiLockWorkingSetShared(v16);
        MiLockPageTableInternal(v16, v17, 0LL);
        v29 = v68;
        v30 = i;
      }
      v10 = (*(unsigned __int16 *)(v30 + 32) >> 1) & 0x1F;
      v65 = v6 + 8 * (*(unsigned int *)(v30 + 44) - (unsigned __int64)(*(_DWORD *)(v30 + 52) & 0x3FFFFFFF) - v29 - 1);
      if ( (v10 & 5) == 5 )
        v10 &= ~1u;
    }
    v31 = MI_READ_PTE_LOCK_FREE(v6);
    v61 = v31;
    v32 = v31;
    if ( (v31 & 1) != 0 )
    {
      v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v61) >> 12) & 0xFFFFFFFFFLL;
      v70 = 48 * v18 - 0x58000000000LL;
      v20 = *(_QWORD *)(v70 + 40);
      if ( (v20 & 0x200000000000000LL) != 0 )
        goto LABEL_61;
      if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 )
      {
        v20 >>= 54;
        LOBYTE(v20) = v20 & 7;
        if ( (_BYTE)v20 == 3 )
        {
          v19 = v58;
          v45 = v21;
          goto LABEL_67;
        }
      }
      ValidPte = MiMakeValidPte(v6, v18, v10, v21);
      v60 = v32;
      if ( (v10 & 5) == 4 )
      {
        v60 = v32;
        if ( (v32 & 0x42) != 0 )
        {
          ValidPte |= 0x42uLL;
          v60 = v32;
        }
      }
      MiWriteValidPteNewProtection(v6, ValidPte);
      v66 = v60;
      if ( (MiFlags & 0x100) == 0 && (v66 = v60, (MiFlags & 0x200) == 0) || MI_TIGHTER_PERMISSIONS(v32, ValidPte) )
      {
        MiInsertTbFlushEntry((__int64)&v71, v7, 1LL, 0);
        v66 = v60;
      }
      v34 = v70;
      v35 = 0LL;
      MiLockPageAtDpcInline(v70);
      *(_QWORD *)(v34 + 16) ^= (*(_DWORD *)(v34 + 16) ^ (32 * v10)) & 0x3E0;
      if ( (v66 & 0x42) != 0 )
        v35 = MiCaptureDirtyBitToPfn(v34);
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = 0LL;
      if ( !v35 )
        goto LABEL_61;
      MiReleasePageFileInfo(
        *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v34 + 40) >> 40) & 0x3FFLL)),
        v35,
        1);
LABEL_60:
      v21 = 0LL;
      goto LABEL_61;
    }
    if ( (v31 & 0x400) == 0 )
    {
      if ( (v31 & 0x800) == 0 )
      {
        if ( a4 == 256 )
          goto LABEL_61;
        v61 = v31 ^ ((unsigned __int16)v31 ^ (unsigned __int16)(32 * v10)) & 0x3E0;
        *(_QWORD *)v6 = v61;
        if ( !MiPteInShadowRange(v6) )
          goto LABEL_61;
        MiWritePteShadow(v44, v18, v20);
        goto LABEL_60;
      }
      v36 = MiLockTransitionLeafPage(v6, 0LL);
      v21 = 0LL;
      if ( !v36 )
        goto LABEL_62;
      v61 = MI_READ_PTE_LOCK_FREE(v6);
      v37 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v61) - 0x58000000000LL;
      v38 = 32LL * (v10 & 0x1F);
      v40 = v38 | v39 & 0xFFFFFFFFFFFFFC1FuLL;
      v41 = *(_QWORD *)(v37 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
      v61 = v40;
      *(_QWORD *)(v37 + 16) = v38 | v41;
      *(_QWORD *)v6 = v40;
      if ( MiPteInShadowRange(v6) )
      {
        MiWritePteShadow(v42, v18, v20);
        v21 = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_61:
    v6 += 8LL;
    v7 += 4096LL;
LABEL_62:
    if ( v6 > v69 )
      break;
    v17 = v63;
  }
  v19 = v58;
LABEL_66:
  v45 = 1;
LABEL_67:
  MiFlushTbList((__int64)&v71, v18, v20);
  if ( v63 )
    MiUnlockPageTableInternal(v16, v63);
  if ( (*(_BYTE *)(v16 + 184) & 7u) < 6 )
  {
    v46 = HIBYTE(*(_DWORD *)(v16 + 184));
    if ( (*(_DWORD *)(v16 + 184) & 0x8000000) != 0 || (v46 & 4) != 0 || (v46 & 0x10) != 0 )
      MiPreUnlockWorkingSetShared(v16, v19);
    v47 = MiGetSharedVm(v16);
    MiCheckProcessShadow(v48, 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v47, retaddr);
    }
    else
    {
      _InterlockedAnd(v47, 0xBFFFFFFF);
      _InterlockedDecrement(v47);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v51 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v51;
        if ( !v51 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        {
          PriorityState = CurrentPrcb->PriorityState;
          v53 = *PriorityState;
          if ( !*PriorityState )
          {
            NextThread = CurrentPrcb->NextThread;
            IdleThread = CurrentPrcb->IdleThread;
            if ( NextThread == IdleThread || CurrentPrcb->CurrentThread == IdleThread && !NextThread )
            {
              v53 = KiVpThreadSystemWorkPriority;
              goto LABEL_89;
            }
            goto LABEL_90;
          }
          if ( v53 == 127 )
            v53 = 0;
LABEL_89:
          if ( v53 < 16 )
          {
LABEL_90:
            v56 = CurrentPrcb->SchedulerAssist;
            v57 = v56[1];
            if ( (unsigned int)(v57 - 1) <= 0x1E && v57 > v53 && v57 >= KiVpThreadSystemWorkPriority )
            {
              v56[4] = 3;
              __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
            }
          }
        }
      }
    }
    v19 = v58;
  }
  __writecr8(v19);
  return v45;
}
