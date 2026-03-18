/*
 * XREFs of MiValidFault @ 0x14003E340
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiUpdatePrefetchPriority @ 0x140113880 (MiUpdatePrefetchPriority.c)
 *     KeInvalidAccessAllowed @ 0x14011D0D8 (KeInvalidAccessAllowed.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140129D90 (MiCheckAndUpdateIoAttribution.c)
 *     MiCheckSystemNxFault @ 0x14012C034 (MiCheckSystemNxFault.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiCanGrantExecute @ 0x140228660 (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x140228F84 (MiValidVirtualizationFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiForceCrashForInvalidAccess @ 0x1406DEB64 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiValidFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  ULONG_PTR v8; // r10
  unsigned __int64 *v9; // r12
  ULONG_PTR v10; // r15
  _KPROCESS *Process; // r13
  char v12; // al
  __int64 result; // rax
  signed __int64 v14; // rbx
  unsigned int v15; // ebp
  unsigned __int8 v16; // r14
  unsigned int v17; // edi
  unsigned __int8 v18; // si
  LONG *p_ProfileListHead; // rcx
  LONG *SharedVm; // rbx
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // r11
  __int64 v24; // rdx
  __int64 Address; // rax
  ULONG_PTR v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r15
  __int64 PteShadow; // rcx
  unsigned __int64 v32; // r9
  __int64 v33; // rcx
  _DWORD *v34; // r9
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r11
  unsigned __int16 *v37; // r13
  BOOL v38; // edx
  int v39; // r8d
  signed __int64 v40; // rcx
  unsigned int v41; // eax
  _BYTE *v42; // rdi
  ULONG_PTR v43; // [rsp+30h] [rbp-48h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  ULONG_PTR v45; // [rsp+88h] [rbp+10h]
  __int64 v46; // [rsp+90h] [rbp+18h] BYREF
  __int64 v47; // [rsp+98h] [rbp+20h] BYREF

  v46 = a3;
  v8 = BugCheckParameter2;
  v9 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = a4 & 1;
  v43 = v10;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a4 & 1) != 0 )
  {
    v12 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v12 == 1 )
    {
      MiUpdatePrefetchPriority(a4 & 0xFFFFFFFFFFFFFFFEuLL, BugCheckParameter1, 0LL);
      return 0LL;
    }
    if ( v12 == 3 )
      return 0LL;
  }
  v14 = v46;
  if ( BugCheckParameter1 >= 0xFFFFF68000000000uLL
    && BugCheckParameter1 <= 0xFFFFF6FFFFFFFFFFuLL
    && (v46 & 0x80u) != 0LL )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
        return 3221225477LL;
      if ( (a4 & 1) != 0 )
      {
        if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
        {
          if ( (a4 & 1) != 0 )
            goto LABEL_96;
          goto LABEL_14;
        }
        return 3221225477LL;
      }
    }
LABEL_14:
    if ( (unsigned __int8)KeInvalidAccessAllowed(a4, 0xFFFFF68000000000uLL, a3, a4) == 1 )
      return 3221225477LL;
LABEL_96:
    KeBugCheckEx(0x50u, BugCheckParameter1, v8, a4, 8uLL);
  }
  v15 = 0;
  if ( (v46 & 4) == 0 && BugCheckParameter1 <= 0x7FFFFFFEFFFFLL )
    return 3221225477LL;
  v16 = a5;
  v45 = BugCheckParameter2 & 2;
  if ( (BugCheckParameter2 & 2) == 0 )
  {
    if ( (BugCheckParameter2 & 0x10) != 0 )
    {
      if ( v46 < 0 )
      {
        if ( (unsigned int)MiCanGrantExecute(Process, BugCheckParameter1) != 1 )
          return 3221225477LL;
        v21 = MI_GET_PAGE_FRAME_FROM_PTE(&v46);
        if ( !(unsigned int)MiIsPfnInline(v21) )
          return 3221225477LL;
        v23 = v22 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          v23 |= 0x20uLL;
        MiWriteValidPteNewPage(v9, v23);
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          goto LABEL_92;
        v24 = 1LL;
LABEL_90:
        KeFlushSingleTb(BugCheckParameter1, v24, 0LL);
        goto LABEL_91;
      }
      if ( !a6 )
        MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, a4, v46, 5);
    }
LABEL_48:
    if ( Process[1].ActiveProcessors.Bitmap[3] )
    {
      Address = MiLocateAddress(BugCheckParameter1);
      if ( Address )
      {
        if ( (*(_BYTE *)(Address + 48) & 7) == 3 )
        {
          if ( !v10 )
            return v15;
          if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
            return (unsigned int)-1073741503;
LABEL_92:
          if ( v10 )
          {
            v42 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( *v42 == 5 )
              MiValidVirtualizationFault(v42, v9, v16);
          }
          return v15;
        }
      }
    }
    v26 = v45;
    if ( v45 )
    {
      v27 = MI_GET_PAGE_FRAME_FROM_PTE(&v46);
      if ( v27 <= qword_1403885E0 )
      {
        if ( !MmPhysicalMemoryBlock
          || (v28 = 0x20000000000000LL, (*(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
        {
          v30 = 48 * v27 - 0x58000000000LL;
          PteShadow = *(_QWORD *)(v30 + 16);
          v32 = v30 + 16;
          if ( (unsigned __int64)(v30 + 16) >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v30 + 16, *(_QWORD *)(v30 + 16));
          v47 = PteShadow;
          if ( (unsigned int)MiInvalidPteConforms(PteShadow, v28, v29, v32) && (v33 & 0x400) == 0 )
          {
            if ( (unsigned __int64)&v47 >= v36 && (unsigned __int64)&v47 <= v35 )
              LOBYTE(v33) = MiReadPteShadow(&v47, v33);
            if ( (v33 & 4) != 0 )
            {
              MiLockPageAndSetDirty(v30, 1);
              v34 = (_DWORD *)(v30 + 16);
            }
          }
          if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 && (*v34 & 0x400LL) != 0 )
            MiCheckAndUpdateIoAttribution(v30);
          v10 = v43;
          v26 = v45;
        }
      }
    }
    v37 = &Process[1].IdealNode[12];
    v38 = 0;
    v39 = 0;
    v40 = v14;
    if ( (v14 & 0x20) != 0 )
    {
      if ( (MiFlags & 0x100) == 0 )
        v38 = (MiFlags & 0x200) == 0;
    }
    else
    {
      v40 = v14 | 0x20;
      v39 = 1;
    }
    if ( !v26 || (v40 & 2) != 0 )
    {
      if ( !v39 )
      {
LABEL_84:
        if ( !v38 || (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          goto LABEL_91;
        v41 = 0;
        if ( v37 )
          v41 = MiTbFlushType(v37);
        v24 = v41;
        goto LABEL_90;
      }
    }
    else
    {
      if ( (v40 & 0x42) == 0x40 )
        v38 = 1;
      v40 |= 0x62uLL;
    }
    if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v40, v14) )
    {
LABEL_91:
      v16 = a5;
      goto LABEL_92;
    }
    goto LABEL_84;
  }
  if ( (v46 & 0x200) != 0 )
  {
    if ( !(unsigned int)MiCopyOnWriteEx(
                          BugCheckParameter1,
                          (unsigned int)(BugCheckParameter1 >> 9) & 0xFFFFFFF8,
                          -1,
                          a5,
                          0) )
      return 3221225495LL;
    v15 = 274;
    goto LABEL_92;
  }
  if ( (v46 & 0x800) == 0 )
    return 3221225477LL;
  if ( v46 < 0 || (Process[1].DirectoryTableBase & 0x1000000000LL) == 0 || BugCheckParameter1 >= 0xFFFF800000000000uLL )
    goto LABEL_48;
  if ( (BYTE1(KeGetCurrentThread()[1].Queue) & 0x10) != 0 )
  {
    v14 = v46;
    goto LABEL_48;
  }
  v17 = -1073739997;
  if ( a6 == 1 )
    return v17;
  v18 = a5;
  MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], a5);
  p_ProfileListHead = &dword_140389780;
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) != 2 )
    p_ProfileListHead = (LONG *)&Process[2].ProfileListHead;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(p_ProfileListHead, retaddr);
  else
    *p_ProfileListHead = 0;
  __writecr8(v18);
  MiForceCrashForInvalidAccess(Process);
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  ExAcquireSpinLockExclusive(SharedVm);
  result = 3221227299LL;
  SharedVm[1] = 0;
  return result;
}
