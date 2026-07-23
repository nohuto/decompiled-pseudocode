/*
 * XREFs of MiCommitPoolMemory @ 0x1400250E0
 * Callers:
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiFlushTbAsNeeded @ 0x140025F90 (MiFlushTbAsNeeded.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1400A3860 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400A5A10 (MiAssignNonPagedPoolPtes.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiGetLargePageChain @ 0x1400BBB00 (MiGetLargePageChain.c)
 *     MiIsPoolPteInUse @ 0x1400C2C94 (MiIsPoolPteInUse.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiObtainPoolCharges @ 0x14013307C (MiObtainPoolCharges.c)
 *     MiReturnPoolCharges @ 0x140134F8C (MiReturnPoolCharges.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiWriteTopLevelPxe @ 0x140165CA8 (MiWriteTopLevelPxe.c)
 *     MiReturnPhysicalPoolPages @ 0x14017039C (MiReturnPhysicalPoolPages.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 *     MiFreeLargePageChain @ 0x14026C050 (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiCommitPoolMemory(ULONG_PTR *a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
  ULONG_PTR v5; // r14
  int v6; // esi
  __int64 v7; // r8
  unsigned int ProtectionMask; // eax
  char v9; // r8
  unsigned int v10; // r9d
  ULONG_PTR v11; // r10
  unsigned int v12; // r11d
  int v13; // ecx
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // r15
  __int64 v16; // r14
  __int64 v17; // r15
  LONG *v18; // r13
  unsigned __int64 v19; // r12
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rdi
  __int64 LargePageChain; // rax
  _QWORD *v24; // rcx
  unsigned int v25; // ebx
  unsigned int v26; // edi
  unsigned int v27; // ecx
  unsigned int v28; // eax
  __int64 PoolPages; // rax
  bool v31; // zf
  unsigned __int64 v32; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v34; // r8
  LONG *v35; // rax
  unsigned __int64 v36; // rsi
  int v37; // eax
  unsigned __int64 v38; // r9
  __int64 v39; // r10
  unsigned __int64 v40; // rdx
  __int64 valid; // rax
  char v42; // al
  int v43; // ecx
  __int64 v44; // r8
  unsigned __int64 v45; // rdi
  __int64 v46; // rdx
  unsigned __int64 v47; // r13
  __int16 v48; // ax
  __int64 v49; // r10
  ULONG_PTR v50; // rax
  __int64 *v51; // rdi
  __int64 DemandZeroPte; // rax
  __int64 v53; // r9
  ULONG_PTR v54; // r9
  _QWORD *v55; // rcx
  unsigned __int64 v56; // rsi
  __int64 ValidPte; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rsi
  unsigned __int64 v63; // rsi
  _SLIST_HEADER *v64; // rbx
  unsigned __int64 v65; // rdi
  unsigned __int64 Alignment; // rax
  _QWORD *v67; // rbx
  _QWORD *v68; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v69; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v70; // [rsp+40h] [rbp-C0h]
  unsigned int v71; // [rsp+48h] [rbp-B8h]
  unsigned int v72; // [rsp+4Ch] [rbp-B4h]
  int v73; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v74; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v75; // [rsp+68h] [rbp-98h]
  unsigned __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  LONG *v77; // [rsp+78h] [rbp-88h]
  unsigned __int64 v78; // [rsp+80h] [rbp-80h]
  unsigned __int64 v79; // [rsp+88h] [rbp-78h]
  __int64 v80; // [rsp+90h] [rbp-70h]
  __int64 v81; // [rsp+98h] [rbp-68h]
  _QWORD v82[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v86; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v87; // [rsp+D8h] [rbp-28h]
  __int64 v88; // [rsp+E0h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v91; // [rsp+148h] [rbp+48h]
  unsigned int v92; // [rsp+150h] [rbp+50h]
  unsigned int v93; // [rsp+160h] [rbp+60h]

  v5 = *a1;
  memset(v82, 0, sizeof(v82));
  v6 = a3 & 0x7F;
  v83 = 0LL;
  v92 = a3 & 0xFFFFFF80;
  v7 = a5 & 0xFFFFFFDF;
  if ( (a5 & 1) != 0 )
    v7 = a5;
  ProtectionMask = MiMakeProtectionMask(a4, a2, v7);
  v71 = ProtectionMask;
  if ( ProtectionMask > 0x18 || (v13 = 16777298, !_bittest(&v13, ProtectionMask)) )
    KeBugCheckEx(0x1Au, 0x5300uLL, v5, v11, v10);
  v91 = 0;
  v14 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = v5 + v11 - 1;
  v74 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = ((__int64)(v74 - v14) >> 3) + 1;
  v16 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v17 = ((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v75 = -1LL;
  v78 = 0LL;
  v68 = 0LL;
  v18 = (LONG *)&unk_1403CCC10;
  v77 = (LONG *)&unk_1403CCC10;
  v81 = 0LL;
  v70 = 0LL;
  v73 = v9 & 1;
  v19 = 0LL;
  v93 = 5;
  if ( (v9 & 1) == 0 )
  {
    if ( (v12 & 0x20000000) != 0 )
    {
      v22 = (((v17 - v16) >> 3) + 1) << 9;
      if ( (unsigned int)MiObtainPoolCharges(v22, 0LL) )
      {
        v83 = (((v17 - v16) >> 3) + 1) << 9;
        LargePageChain = MiGetLargePageChain((unsigned int)(v6 - 1), v22);
        v68 = (_QWORD *)LargePageChain;
        v24 = (_QWORD *)LargePageChain;
        if ( !LargePageChain )
        {
          v25 = v92;
          v26 = -1073741670;
          goto LABEL_102;
        }
        v21 = v92;
        v27 = *(_QWORD *)(LargePageChain + 40) >> 58;
        v28 = 2;
        v91 = 2;
        v72 = v27;
        goto LABEL_21;
      }
    }
    else
    {
      v21 = v12;
      PoolPages = MiGetPoolPages(v12, (unsigned int)(v6 - 1), ((__int64)(v74 - v14) >> 3) + 1);
      v68 = (_QWORD *)PoolPages;
      if ( PoolPages )
      {
        v72 = *(_QWORD *)(PoolPages + 40) >> 58;
        goto LABEL_20;
      }
    }
    return 3221225626LL;
  }
  if ( (v9 & 0x20) != 0 )
  {
    v93 = 1;
    v18 = (LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
  }
  else
  {
    v18 = (LONG *)&unk_1403CC8E0;
    v93 = 6;
  }
  v20 = *((unsigned __int16 *)v18 + 87);
  v77 = v18;
  v81 = *(_QWORD *)(qword_1403CBD88 + 8 * v20);
  if ( !(unsigned int)MiChargeCommit(v81, ((__int64)(v74 - v14) >> 3) + 1, 1LL, 0LL) )
    return 3221225626LL;
  v21 = v92;
  v70 = v80;
  v72 = 0;
LABEL_20:
  v28 = 0;
LABEL_21:
  v31 = v16 == v17;
  v32 = v74;
  if ( !v31 && !(unsigned int)MiMakeZeroedPageTables(v14, v74, v28, v93) )
  {
LABEL_23:
    v25 = v92;
    v26 = -1073741670;
    goto LABEL_101;
  }
  CurrentIrql = KeGetCurrentIrql();
  v69 = CurrentIrql;
  __writecr8(2uLL);
  MiLockWorkingSetShared(v18);
  if ( v14 > v74 )
    goto LABEL_85;
  v84 = 0LL;
  while ( 1 )
  {
    if ( v19 )
      MiUnlockPageTableInternal(v18, v19);
    if ( CurrentIrql < 2u )
    {
      v35 = &dword_1403CCD40;
      if ( (v18[46] & 7) != 2 )
        v35 = v18 + 48;
      if ( (*v35 & 0x40000000) != 0 || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared((__int64)v18, 2u, v34);
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v69 = CurrentIrql;
        MiLockWorkingSetShared(v18);
      }
    }
    v76 = 0LL;
    v36 = (__int64)((v14 << 25) - v84) >> 16;
    v37 = MiFastLockLeafPageTable((__int64)v18, v36);
    if ( v37 )
    {
      v38 = 0xFFFFF68000000000uLL;
      v39 = 0x7FFFFFFFF8LL;
      v85 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v86 = ((v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v87 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v88 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v19 = *(&v85 + v37);
      v79 = v19;
      v40 = *(&v85 + v37 - 1);
      v76 = v40;
      if ( v19 )
      {
        if ( v37 == 1 )
          goto LABEL_48;
        if ( v37 != 2 )
          goto LABEL_46;
LABEL_41:
        v42 = MI_READ_PTE_LOCK_FREE(v40);
        if ( (v42 & 1) != 0 )
        {
          if ( v42 < 0 )
            KeBugCheckEx(0x1Au, 0x5302uLL, v36, 0LL, 0LL);
          if ( (v21 & 0x20000000) != 0 )
            KeBugCheckEx(0x1Au, 0x5303uLL, v36, 0LL, 0LL);
        }
        else
        {
          v43 = v21 & 0x20000000;
          if ( (v21 & 0x20000000) != 0 )
            goto LABEL_49;
        }
        goto LABEL_46;
      }
    }
    valid = MiLockLowestValidPageTable(v18, v14, &v76);
    v40 = v76;
    v19 = valid;
    v79 = valid;
    v39 = 0x7FFFFFFFF8LL;
    v38 = 0xFFFFF68000000000uLL;
    if ( v76 == v14 )
    {
LABEL_48:
      v43 = v21 & 0x20000000;
      if ( (v21 & 0x20000000) != 0 )
        KeBugCheckEx(0x1Au, 0x5301uLL, v36, 0LL, 0LL);
LABEL_49:
      v45 = v32;
      if ( (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v32 )
        v45 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v46 = ((__int64)(v45 - v14) >> 3) + 1;
      if ( v73 )
      {
        MiFlushTbAsNeeded(v14);
        MiMakeDemandZeroPte(v71);
        if ( v14 <= v45 )
        {
          v47 = v70;
          do
          {
            v48 = MI_READ_PTE_LOCK_FREE(v14);
            if ( (v48 & 0xC01) == 0 && (v48 & 0x3E0) == 0 )
            {
              *(_QWORD *)v14 = v49;
              if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v14, v49);
              --v47;
            }
            v14 += 8LL;
          }
          while ( v14 <= v45 );
          v19 = v79;
          v32 = v74;
          v70 = v47;
          v18 = v77;
        }
        v50 = v14 - 8;
        if ( v45 == v32 )
          v50 = v14;
        v14 = (v50 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      else
      {
        v51 = (__int64 *)(v38 + (v39 & (v14 >> 9)));
        if ( v43 )
        {
          MI_READ_PTE_LOCK_FREE(v38 + (v39 & (v14 >> 9)));
          DemandZeroPte = MiMakeDemandZeroPte(24LL);
          if ( v53 != DemandZeroPte && (unsigned int)MiIsPoolPteInUse(v53) )
            KeBugCheckEx(0x1Au, 0x5304uLL, v36, v54, 0LL);
          v83 -= 512LL;
          v55 = v68;
          v68 = (_QWORD *)*v68;
          v56 = (__int64)(v55 + 0xB000000000LL) / 48;
          MiUpdateLargePageBitMap((unsigned int)&MiSystemPartition, (int)v55 / 48, 512, 1, 1);
          ValidPte = MiMakeValidPte(0LL, v56, v71 | 0xA4000000);
          if ( (unsigned __int64)v51 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v51 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            *v51 = ValidPte;
            if ( MiPteInShadowRange((unsigned __int64)v51) )
              MiWritePteShadow(v59, v58);
          }
          else
          {
            MiWriteTopLevelPxe(v51, ValidPte);
          }
          MiInitializeLargeNonPagedPoolLeafFrames(v14, v56);
          v60 = v75;
          v32 = v74;
          if ( v56 < v75 )
            v60 = v56;
          v75 = v60;
          v61 = v56 + 511;
          v62 = v56 | 0x1FF;
          if ( v61 <= v78 )
            v62 = v78;
          v78 = v62;
        }
        else
        {
          v68 = (_QWORD *)MiAssignNonPagedPoolPtes(v36, v46, v68, v71);
        }
        v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      CurrentIrql = v69;
      goto LABEL_81;
    }
    if ( v76 == ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_41;
LABEL_46:
    MiUnlockPageTableInternal(v18, v19);
    MiUnlockWorkingSetShared((__int64)v18, 2u, v44);
    __writecr8(CurrentIrql);
    if ( !(unsigned int)MiMakeZeroedPageTables(v14, v32, v91, v93) )
      goto LABEL_23;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v69 = CurrentIrql;
    MiLockWorkingSetShared(v18);
    v19 = 0LL;
LABEL_81:
    if ( v14 > v32 )
      break;
    v21 = v92;
  }
  if ( v19 )
    MiUnlockPageTableInternal(v18, v19);
LABEL_85:
  MiUnlockWorkingSetShared((__int64)v18, 2u, v34);
  __writecr8(CurrentIrql);
  v63 = v78;
  v64 = &qword_1403CB6A8[25 * v72];
  if ( v78 && v78 > v64[16].Region )
  {
    v65 = v75;
    goto LABEL_91;
  }
  v65 = v75;
  if ( v75 != -1LL && v75 < v64[16].Alignment )
  {
LABEL_91:
    KeAcquireInStackQueuedSpinLock(&v64[19].Alignment, &LockHandle);
    Alignment = v64[16].Alignment;
    if ( v65 < Alignment || !Alignment )
      v64[16].Alignment = v65;
    if ( v63 > v64[16].Region )
      v64[16].Region = v63;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v25 = v92;
  if ( (v92 & 0x20000000) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, v80);
  v26 = 0;
LABEL_101:
  v19 = v70;
  v24 = v68;
LABEL_102:
  if ( v73 )
  {
    if ( v19 )
      MiReturnCommit(v81, v19);
LABEL_105:
    v67 = v68;
  }
  else
  {
    if ( (v25 & 0x20000000) == 0 )
      goto LABEL_105;
    if ( v24 )
      MiFreeLargePageChain();
    v67 = 0LL;
    if ( v83 )
    {
      v82[0] = v83;
      MiReturnPoolCharges(v82, 0LL);
    }
  }
  if ( v67 )
    MiReturnPhysicalPoolPages(v67, 0LL);
  return v26;
}
