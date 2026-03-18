/*
 * XREFs of MiZeroPageThread @ 0x1401579F0
 * Callers:
 *     <none>
 * Callees:
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x140029540 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     KeSetIdealProcessorThreadEx @ 0x140111648 (KeSetIdealProcessorThreadEx.c)
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     MiDeleteZeroThreadContext @ 0x14015C1E0 (MiDeleteZeroThreadContext.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageThread(ULONG_PTR *a1)
{
  __int64 v1; // r15
  _SINGLE_LIST_ENTRY *v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  _QWORD *v5; // r14
  struct _KEVENT *v6; // rdi
  void *v7; // rax
  __int64 v8; // r12
  unsigned int v9; // r13d
  ULONG_PTR **v10; // r14
  _QWORD *v11; // rdi
  ULONG_PTR *v12; // rsi
  volatile signed __int32 *v13; // rbx
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v15; // edx
  bool v16; // zf
  signed __int32 v17; // eax
  _QWORD *v18; // rbx
  _SINGLE_LIST_ENTRY *v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // ecx
  _QWORD *v24; // rax
  unsigned __int8 v25; // al
  _QWORD *v26; // rdx
  __int64 v27; // rax
  volatile signed __int32 *v28; // rbx
  unsigned __int8 v29; // di
  signed __int32 v30; // edx
  signed __int32 v31; // eax
  unsigned int v32; // eax
  _QWORD *v33; // rcx
  unsigned int v34; // ebx
  PVOID v35; // rsi
  BOOL LargePageToZero; // eax
  BOOL v37; // edi
  __int64 v38; // rsi
  int v39; // edx
  ULONG_PTR v40; // r15
  __int64 v41; // r13
  unsigned __int8 v42; // r12
  unsigned int v43; // ebx
  __int64 *v44; // rax
  unsigned int i; // ecx
  _QWORD *v46; // r11
  _QWORD *v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // r9
  __int64 PteTimeStamp; // r10
  _KPROCESS *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r10
  __int64 v54; // r11
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rdi
  unsigned __int8 v57; // al
  unsigned __int8 v58; // al
  char v59; // si
  __int64 v60; // rsi
  unsigned __int64 v61; // rbx
  unsigned __int8 v62; // r15
  unsigned __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  int FirstSetLeftGroupAffinity; // eax
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  int v68; // [rsp+44h] [rbp-BCh] BYREF
  int v69; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v70; // [rsp+4Ch] [rbp-B4h]
  BOOL v71; // [rsp+50h] [rbp-B0h]
  int v72; // [rsp+54h] [rbp-ACh]
  PVOID P; // [rsp+58h] [rbp-A8h]
  _QWORD *v74; // [rsp+60h] [rbp-A0h]
  __int64 v75; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int64 *v76; // [rsp+70h] [rbp-90h]
  unsigned __int8 v77; // [rsp+78h] [rbp-88h]
  int v78; // [rsp+80h] [rbp-80h]
  ULONG_PTR *v79; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  struct _KEVENT *v81; // [rsp+98h] [rbp-68h]
  PVOID Object[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v84[48]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+180h] [rbp+80h] BYREF
  int v86; // [rsp+1E0h] [rbp+E0h] BYREF
  __int16 v87; // [rsp+1E4h] [rbp+E4h]
  __int64 v88; // [rsp+1E8h] [rbp+E8h]
  __int64 v89; // [rsp+1F0h] [rbp+F0h]
  __int64 v90; // [rsp+1F8h] [rbp+F8h]
  void *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v79 = a1;
  v1 = (__int64)a1;
  if ( a1 == &MiSystemPartition )
    MiInitializePageZeroing();
  memset(v84, 0, 0xB8uLL);
  P = (PVOID)MiCreateZeroThreadContext(v1, v84, 0LL);
  if ( P )
  {
    v4 = v84[10];
    v5 = 0LL;
    v67 = v84[10];
    CurrentThread = KeGetCurrentThread();
    v6 = (struct _KEVENT *)(v1 + 5056);
    v78 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0, v2, v3);
    v7 = (void *)(v1 + 136);
    v81 = (struct _KEVENT *)(v1 + 5056);
    v72 = -1;
LABEL_5:
    v8 = *(_QWORD *)(v1 + 48);
    v9 = v4;
    v70 = v4;
    Object[0] = v7;
    Object[1] = v6;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v5 )
          {
            v10 = (ULONG_PTR **)(v5 - 2);
            v11 = 0LL;
            v12 = *v10;
            v13 = (volatile signed __int32 *)(*v10 + 29);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13, CurrentIrql);
            }
            else
            {
              v68 = 0;
              if ( _interlockedbittestandset(v13, 0x1Fu) )
                v68 = ExpWaitForSpinLockExclusiveAndAcquire(v13, CurrentIrql);
              v15 = *v13;
              while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
              {
                if ( (v15 & 0x40000000) == 0 )
                {
                  v17 = _InterlockedCompareExchange(v13, v15 | 0x40000000, v15);
                  v16 = v15 == v17;
                  v15 = v17;
                  if ( !v16 )
                    continue;
                }
                KeYieldProcessorEx(&v68);
                v15 = *v13;
              }
            }
            if ( v12 == &MiSystemPartition )
            {
              v16 = v12[9]-- == 1;
              if ( v16 )
              {
                v11 = (_QWORD *)v12[15];
                v12[15] = 0LL;
              }
            }
            v16 = v10[1] == (ULONG_PTR *)1;
            v10[1] = (ULONG_PTR *)((char *)v10[1] - 1);
            if ( !v16 )
              v10 = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
            else
              *v13 = 0;
            __writecr8(CurrentIrql);
            if ( v11 )
            {
              do
              {
                v18 = (_QWORD *)*v11;
                KeSignalGate((__int64)(v11 + 1), 1);
                v11 = v18;
              }
              while ( v18 );
            }
            if ( v10 )
              ExFreePoolWithTag(v10, 0);
            v1 = (__int64)v79;
            v5 = 0LL;
            v4 = v67;
            v6 = v81;
          }
          if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
          {
LABEL_154:
            KeSetActualBasePriorityThread((__int64)CurrentThread, v78, v19, v20);
            MiDeleteZeroThreadContext(P);
            ExFreePoolWithTag(P, 0);
            return;
          }
          if ( !*(_QWORD *)(v1 + 2048) )
            break;
          v20 = (unsigned __int16)KeNumberNodes;
LABEL_32:
          if ( !dword_14036CFD0 && *(_QWORD *)(v1 + 5760) >= 0xA0uLL )
          {
            if ( (unsigned __int16)KeNumberNodes > 1u )
            {
              v19 = (_SINGLE_LIST_ENTRY *)(v4 >> byte_14036C1B9);
              v21 = v4 >> byte_14036C1B9;
              while ( 1 )
              {
                v22 = v8 + 2184LL * v21;
                if ( *(_QWORD *)(v22 + 2016) )
                  break;
                v23 = 0;
                v24 = (_QWORD *)(v22 + 8);
                do
                {
                  if ( *v24 )
                    break;
                  ++v23;
                  v24 += 2;
                }
                while ( v23 < 3 );
                if ( v23 != 3 )
                  break;
                v21 = (v21 + 1) % (unsigned __int16)KeNumberNodes;
                if ( v21 == (_DWORD)v19 )
                  goto LABEL_32;
              }
              if ( v21 != (_DWORD)v19 )
              {
                v9 = *(_DWORD *)(2184LL * v21 + v8 + 2064);
                v70 = v9;
              }
            }
            v28 = (volatile signed __int32 *)(v1 + 232);
            v29 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1 + 232, v29);
            }
            else
            {
              v69 = 0;
              if ( _interlockedbittestandset(v28, 0x1Fu) )
                v69 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v1 + 232), v29);
              v30 = *v28;
              while ( (v30 & 0xBFFFFFFF) != 0x80000000 )
              {
                if ( (v30 & 0x40000000) == 0 )
                {
                  v31 = _InterlockedCompareExchange(v28, v30 | 0x40000000, v30);
                  v16 = v30 == v31;
                  v30 = v31;
                  if ( !v16 )
                    continue;
                }
                KeYieldProcessorEx(&v69);
                v30 = *v28;
              }
            }
            v5 = MmPhysicalMemoryBlock;
            if ( (ULONG_PTR *)v1 != &MiSystemPartition )
              v5 = *(_QWORD **)(v1 + 128);
            v74 = v5;
            if ( v5 )
            {
              ++*(v5 - 1);
              if ( (ULONG_PTR *)v1 == &MiSystemPartition )
                ++*(_QWORD *)(v1 + 72);
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v1 + 232, retaddr);
            else
              *v28 = 0;
            __writecr8(v29);
            if ( !v5 )
            {
              v5 = (_QWORD *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
              v74 = v5;
            }
            v4 = v9;
            v67 = v9;
            if ( v9 != -1 )
            {
              v32 = 0;
              v71 = 0;
              v33 = (_QWORD *)(*(_QWORD *)(v1 + 48) + 2184 * ((unsigned __int64)v9 >> byte_14036C1B9) + 8);
              while ( !*v33 )
              {
                ++v32;
                v33 += 2;
                if ( v32 >= 3 )
                  goto LABEL_88;
              }
              v34 = 0;
              v35 = P;
              do
              {
                LargePageToZero = MiGetLargePageToZero(v1, (__int64)v35, v34, v9);
                v71 = LargePageToZero;
                v37 = LargePageToZero;
                if ( LargePageToZero )
                  break;
                ++v34;
              }
              while ( v34 < 3 );
              if ( !LargePageToZero )
              {
                v4 = v9;
LABEL_88:
                v38 = *(_QWORD *)(v1 + 1928);
                v39 = dword_14036C1B0;
                while ( 1 )
                {
                  v40 = *(_QWORD *)(v38 + 40LL * v4 + 16);
                  if ( v40 == 0xFFFFFFFFFLL )
                  {
                    v4 = v4 & ~v39 | v39 & (v4 + 1);
                    v67 = v4;
                  }
                  else
                  {
                    v41 = 48 * v40 - 0x58000000000LL;
                    v42 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v43 = 0;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                          _mm_pause();
                        else
                          HvlNotifyLongSpinWait(v43);
                      }
                      while ( *(__int64 *)(v41 + 24) < 0
                           || _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
                    }
                    if ( v40 <= qword_14036C290
                      && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v40 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0)
                      && (*(_BYTE *)(v41 + 34) & 7) == 1 )
                    {
                      v44 = MiLargePageContainingFrames;
                      for ( i = 0; i < 3; ++i )
                      {
                        if ( (*(_QWORD *)(v41 + 40) & 0xFFFFFFFFFLL) == *v44 )
                          goto LABEL_112;
                        ++v44;
                      }
                      if ( *(_WORD *)(v41 + 32) )
                        KeBugCheckEx(0x4Eu, 0x8DuLL, v40, *(unsigned int *)(v41 + 32), *(_QWORD *)(v41 + 8));
                      *(_BYTE *)(v41 + 34) |= 8u;
                      v46 = P;
                      *(_QWORD *)(v41 + 16) = P;
                      v47 = (_QWORD *)v46[17];
                      v48 = MI_READ_PTE_LOCK_FREE(v47);
                      PteTimeStamp = MiGetPteTimeStamp(v48);
                      if ( !PteTimeStamp )
                      {
                        v88 = 20LL;
                        v86 = v49;
                        v87 = 0;
                        v89 = v49;
                        v90 = v49;
                        MiInsertTbFlushEntry((__int64)&v86, (__int64)((_QWORD)v47 << 25) >> 16, 256LL, 0);
                        MiFlushTbList((__int64)&v86, v51);
                        PteTimeStamp = 256LL;
                      }
                      *v47 = MiUpdatePageFileHighInPte(v48, PteTimeStamp - 1);
                      if ( (unsigned int)MiPteInShadowRange(v47) )
                        MiWritePteShadow(v52);
                      v55 = (unsigned __int64)&v47[v53 - 1];
                      *(_QWORD *)(v54 + 32) = v55;
                      *(_DWORD *)(v54 + 64) = -1;
                      v56 = (__int64)(v55 << 25) >> 16;
                      *(_QWORD *)(v54 + 40) = v56;
                      *(_QWORD *)(v54 + 24) = v41;
                      *(_QWORD *)(v54 + 72) = v41;
                      *(_BYTE *)(v54 + 68) = 0;
                      *(_QWORD *)(v54 + 48) = v56 + 4095;
                      v57 = *(_BYTE *)(v41 + 34);
                      if ( (v57 & 0x40) != 0 )
                      {
                        if ( (v57 & 0xC0) == 0xC0 )
                          MiFinalizePageAttribute(48 * v40 - 0x58000000000LL, 1u, 1);
                      }
                      else if ( dword_14036C224[4 * ((unsigned __int64)v57 >> 6)] == 1 )
                      {
                        MiChangePageAttribute(48 * v40 - 0x58000000000LL, 1u, 1u);
                      }
                      v58 = *(_BYTE *)(v41 + 34);
                      if ( v58 >= 0x40u )
                      {
                        v59 = 4;
                        if ( (v58 & 0xC0) == 0x80 )
                          v59 = 28;
                      }
                      else
                      {
                        v59 = 12;
                      }
                      v60 = v59 & 0x1F;
                      v61 = ((v40 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v60] & 0xFFFF000000000E7FuLL | 0x21;
                      v62 = word_14036C2A8;
                      if ( v55 < 0xFFFFF68000000000uLL || v55 > 0xFFFFF6FFFFFFFFFFuLL )
                        goto LABEL_141;
                      if ( v55 >= 0xFFFFF6FB40000000uLL && v55 <= 0xFFFFF6FB7FFFFFFFuLL )
                      {
                        v63 = v61 | 0x8000000000000000uLL;
                        v61 &= ~0x8000000000000000uLL;
                        if ( v55 == 0xFFFFF6FB7DBEDF68uLL )
                          v61 = v63;
                        if ( (unsigned int)MiUserPdeOrAbove(v55) )
                          v61 |= 4uLL;
                      }
                      if ( v55 <= 0xFFFFF6BFFFFFFF78uLL )
                        v61 |= 4uLL;
                      if ( v56 < 0xFFFF800000000000uLL )
                      {
                        v64 = HIBYTE(word_14036C2A8);
                        goto LABEL_140;
                      }
                      if ( byte_14036D700[((v56 >> 39) & 0x1FF) - 256] != 1
                        && (v56 < 0xFFFFF68000000000uLL || v56 > 0xFFFFF6FFFFFFFFFFuLL) )
                      {
                        if ( v56 < qword_14036D870 || (v64 = HIBYTE(word_14036C2A8), v56 > qword_14036C5D0) )
                          v64 = v62;
LABEL_140:
                        if ( v64 )
LABEL_141:
                          v61 |= 0x100uLL;
                      }
                      if ( (v60 & 5) == 4 )
                        v61 |= 0x42uLL;
                      *(_QWORD *)v55 = (((unsigned __int16)v61 ^ (unsigned __int16)(v62 << 8)) & 0x100 ^ v61) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
                      if ( (unsigned int)MiPteInShadowRange(v55) )
                        MiWritePteShadow(v65);
                      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      __writecr8(v42);
                      v37 = v71;
                      v1 = (__int64)v79;
                      v35 = P;
                      break;
                    }
LABEL_112:
                    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    __writecr8(v42);
                    v39 = dword_14036C1B0;
                    v4 = v67;
                    v9 = v70;
                  }
                  v1 = (__int64)v79;
                  v6 = (struct _KEVENT *)(v79 + 632);
                  v7 = v79 + 17;
                  if ( v4 == v9 )
                    goto LABEL_5;
                }
              }
              v4 = v67;
              if ( v67 >> byte_14036C1B9 != v72 )
              {
                v72 = v67 >> byte_14036C1B9;
                KeQueryNodeActiveAffinity(v67 >> byte_14036C1B9, &Affinity, 0LL);
                if ( Affinity.Mask )
                {
                  FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity((__int64)&Affinity);
                  KeSetIdealProcessorThreadEx((__int64)CurrentThread, FirstSetLeftGroupAffinity, 0LL);
                }
              }
              if ( v37 )
                MiZeroLargePage((__int64)v35, v1);
              else
                MiZeroSinglePage((__int64)v35, v1);
              v5 = v74;
              v6 = (struct _KEVENT *)(v1 + 5056);
              v7 = (void *)(v1 + 136);
              goto LABEL_5;
            }
            goto LABEL_154;
          }
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
        }
        v75 = 0LL;
        v76 = (volatile signed __int64 *)(v1 + 4672);
        v25 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v77 = v25;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v75, v1 + 4672);
        }
        else
        {
          v26 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v1 + 4672), (__int64)&v75);
          if ( v26 )
            KxWaitForLockOwnerShip((__int64)&v75, v26);
        }
        if ( !*(_QWORD *)(v1 + 2048) )
        {
          *(_BYTE *)(v1 + 5080) = 0;
          KeResetEvent(v6);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          break;
        KiReleaseQueuedSpinLockInstrumented(&v75, retaddr);
        __writecr8(v77);
      }
      _m_prefetchw(&v75);
      v27 = v75;
      if ( !v75 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v76, 0LL, (signed __int64)&v75) == &v75 )
          goto LABEL_56;
        v27 = KxWaitForLockChainValid(&v75);
      }
      v75 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
LABEL_56:
      __writecr8(v77);
    }
  }
}
