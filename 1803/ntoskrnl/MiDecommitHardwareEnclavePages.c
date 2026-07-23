/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x140263B34
 * Callers:
 *     MiDecommitEnclavePages @ 0x140752190 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140752DD8 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14007BE70 (ExAcquireAutoExpandPushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400A4CF0 (ExReleaseAutoExpandPushLockShared.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     RtlInterlockedSetClearRun @ 0x1400D4AC0 (RtlInterlockedSetClearRun.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeBlockEnclavePage @ 0x1402412BC (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1402414DC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14024151C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1402415B0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1402415F4 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x1402553C8 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x140264440 (MiDeleteEnclavePage.c)
 */

__int64 __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  int v17; // ebx
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  int v21; // eax
  int v22; // ebx
  unsigned int v23; // r10d
  unsigned int v24; // r11d
  __int64 v25; // r9
  unsigned int v26; // edx
  __int64 *v27; // rdx
  __int64 i; // rax
  int v29; // ebx
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _KTHREAD *v34; // rbx
  __int64 v35; // rdx
  unsigned int SessionId; // r10d
  unsigned __int8 v37; // r12
  _KLOCK_ENTRY *v38; // r14
  unsigned int v39; // r8d
  __int64 v40; // rcx
  bool v41; // zf
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned int v44; // ecx
  volatile signed __int32 *v45; // r9
  __int64 v46; // r10
  int v47; // r13d
  unsigned __int8 v48; // [rsp+30h] [rbp-1A8h]
  int v49; // [rsp+34h] [rbp-1A4h]
  unsigned int v50; // [rsp+3Ch] [rbp-19Ch]
  int v51; // [rsp+40h] [rbp-198h]
  int v52; // [rsp+44h] [rbp-194h] BYREF
  ULONG_PTR v53; // [rsp+48h] [rbp-190h]
  int v54; // [rsp+50h] [rbp-188h]
  unsigned __int64 v55; // [rsp+58h] [rbp-180h]
  unsigned __int64 v56; // [rsp+60h] [rbp-178h]
  __int64 v57; // [rsp+68h] [rbp-170h]
  int v58; // [rsp+70h] [rbp-168h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-160h]
  unsigned __int64 v60; // [rsp+80h] [rbp-158h]
  __int64 v61[4]; // [rsp+88h] [rbp-150h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-130h]
  int v63; // [rsp+B0h] [rbp-128h]
  __int64 v64; // [rsp+B8h] [rbp-120h]
  ULONG_PTR v65; // [rsp+C0h] [rbp-118h]
  int v66; // [rsp+D0h] [rbp-108h] BYREF
  __int16 v67; // [rsp+D4h] [rbp-104h]
  int v68; // [rsp+D8h] [rbp-100h]
  int v69; // [rsp+DCh] [rbp-FCh]
  __int64 v70; // [rsp+E0h] [rbp-F8h]
  __int64 v71; // [rsp+E8h] [rbp-F0h]

  v55 = a3;
  v57 = a2;
  v61[2] = a2;
  v61[3] = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 1280;
  v64 = a1 + 1280;
  v6 = *(_QWORD *)(a1 + 1032);
  v7 = 0LL;
  v56 = 0LL;
  v8 = 0;
  v9 = 0;
  v53 = 0LL;
  v61[1] = 0LL;
  v54 = 0;
  v69 = 0;
  v66 = 1;
  v67 = 0;
  v70 = 0LL;
  v68 = 20;
  v71 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v65 = ExAcquireAutoExpandPushLockShared(v6 + 16, 0LL);
  v10 = 2;
  v51 = 2;
  v48 = MiLockWorkingSetShared(v5);
  while ( 1 )
  {
    v50 = v9;
    if ( v9 >= v10 )
      break;
    if ( v9 == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)&v66, (__int64)(v55 << 25) >> 16, 1LL, 0);
      MiFlushTbList((__int64)&v66, v13, v14);
    }
    v15 = v55;
    v16 = v55;
    v60 = v55;
    while ( v16 <= a4 )
    {
      if ( (v16 & 0x78) == 0 && v16 != v15 )
      {
        v17 = 0;
        if ( (unsigned int)MiWorkingSetIsContended(v5)
          || KeShouldYieldProcessor()
          || v7 && (unsigned int)MiPageTableLockIsContended(v5, v7) )
        {
          v17 = 1;
        }
        if ( v17 == 1 )
        {
          if ( v7 )
          {
            MiFlushTbList((__int64)&v66, v11, v12);
            MiUnlockPageTableInternal(v5, v7);
            v7 = 0LL;
            v56 = 0LL;
          }
          MiUnlockWorkingSetShared(v5, v48, v12);
          MiLockWorkingSetShared(v5);
        }
      }
      if ( v7 )
      {
        if ( (v16 & 0xFFF) != 0 )
          goto LABEL_22;
        MiFlushTbList((__int64)&v66, v11, v12);
        MiUnlockPageTableInternal(v5, v7);
      }
      v7 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v56 = v7;
      MiLockPageTableInternal(v5, v7, 0LL);
LABEL_22:
      v61[0] = MI_READ_PTE_LOCK_FREE(v16);
      if ( !v61[0] )
        goto LABEL_47;
      v18 = (__int64)(v16 << 25) >> 16;
      BugCheckParameter2 = v18;
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          v21 = KeRemoveEnclavePage();
          v22 = v21;
          v49 = v21;
          if ( v21 < 0 )
          {
            if ( v21 != -1073741757 || a5 )
            {
              v22 = 0;
            }
            else
            {
              if ( !v53 )
              {
                do
                {
                  v23 = (*(_DWORD *)(qword_1403CB798 + 8) & 4) != 0LL ? 0x20 : 0;
                  v24 = v23 + *(_DWORD *)qword_1403CB798 - 1;
                  v25 = *(_QWORD *)(qword_1403CB798 + 8) - ((*(_QWORD *)(qword_1403CB798 + 8) & 4LL) != 0 ? 4 : 0);
                  if ( *(_DWORD *)qword_1403CB798 )
                  {
                    v27 = (__int64 *)(v25 + 8 * ((unsigned __int64)v23 >> 6));
                    for ( i = *v27 | ((1LL << v23) - 1); i == -1; i = *v27 )
                    {
                      if ( (unsigned __int64)++v27 > v25 + 8 * ((unsigned __int64)v24 >> 6) )
                        goto LABEL_31;
                    }
                    _BitScanForward64((unsigned __int64 *)&i, ~i);
                    v63 = i;
                    v26 = i + ((unsigned int)(((__int64)v27 - v25) >> 3) << 6);
                    if ( v26 > v24 )
                      v26 = -1;
                  }
                  else
                  {
LABEL_31:
                    v26 = -1;
                  }
                  v8 = v26 - v23;
                  if ( v26 == -1 )
                    v8 = -1;
                }
                while ( !(unsigned int)RtlInterlockedSetClearRun(qword_1403CB798, v8, 1u) );
                v53 = qword_1403CB790 + 8 * v8;
                ++v51;
                v22 = v49;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v22 < 0 )
            goto LABEL_46;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_1403CB7A8);
            v29 = KeOutPageEnclavePage(v18, *(_QWORD *)(v57 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB7A8);
          }
          while ( v29 == -1073741802 );
          if ( v29 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v18, v29, 0LL);
        }
        MiDeleteEnclavePage(v16);
      }
      else
      {
        v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v61);
        v61[0] = MiMakeValidPte(v16, (v19 >> 12) & 0xFFFFFFFFFLL, 3221225476LL, v20);
        MiWriteValidPteNewProtection(v16, v61[0]);
      }
LABEL_46:
      MiInsertTbFlushEntry((__int64)&v66, v18, 1LL, 0);
      v5 = v64;
LABEL_47:
      v16 += 8LL;
      v60 = v16;
      v15 = v55;
    }
    MiFlushTbList((__int64)&v66, v11, v12);
    if ( v7 )
      MiUnlockPageTableInternal(v5, v7);
    v9 = v50 + 1;
    v7 = 0LL;
    v56 = 0LL;
    v10 = v51;
  }
  MiUnlockWorkingSetShared(v5, v48, v12);
  ExReleaseAutoExpandPushLockShared(v65, 0LL);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v53 )
  {
    if ( v8 )
    {
      v44 = 1;
      v45 = (volatile signed __int32 *)(*(_QWORD *)(qword_1403CB798 + 8) + 4 * ((unsigned __int64)v8 >> 5));
      v46 = v8 & 0x1F;
      result = v46 + 1;
      if ( (unsigned __int64)(v46 + 1) > 0x20 )
      {
        v47 = v8 & 0x1F;
        if ( v47 )
        {
          result = (unsigned int)~(((1 << (32 - v47)) - 1) << v46);
          _InterlockedAnd(v45, result);
          v44 = 1 - (32 - v47);
          ++v45;
        }
        if ( v44 >= 0x20 )
        {
          result = (unsigned __int64)v44 >> 5;
          do
          {
            *v45++ = 0;
            v44 -= 32;
            --result;
          }
          while ( result );
        }
        if ( v44 )
        {
          result = (unsigned int)~((1 << v44) - 1);
          _InterlockedAnd(v45, result);
        }
      }
      else
      {
        _InterlockedAnd(v45, ~(1 << v46));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB7A0, v31, v32, v33);
      v52 = 0;
      v34 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1403CB7A0) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v34->ApcState.Process);
      else
        SessionId = -1;
      --v34->SpecialApcDisable;
      v37 = ++v34->AbAllocationRegionCount;
      v38 = 0LL;
      v39 = ((char)v34->AbEntrySummary | (char)v34->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v41 = !_BitScanReverse((unsigned int *)&v42, v39);
        v58 = v42;
        if ( v41 )
          break;
        v39 &= ~(1 << v42);
        v40 = v42;
        v35 = (__int64)&v34->LockEntries[v40];
        if ( (*(_BYTE *)(v35 + 26) & 1) != 0
          && (*(_DWORD *)(v35 + 32) & 1) == 0
          && (*(_QWORD *)(v35 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403CB7A0 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v35 + 40) == SessionId )
        {
          *(_BYTE *)(v35 + 26) &= ~1u;
          if ( *(_QWORD *)(v35 + 32) )
          {
            v38 = &v34->LockEntries[v40];
            break;
          }
        }
      }
      if ( v38 )
      {
        v38->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v38->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v38->TreeNode, v35);
        v52 = 0;
        v52 = v38->BoostBitmap.AllFields & 0x1FFFF;
        v38->BoostBitmap.AllFields &= 0xFFFE0000;
        v38->ThreadLocalFlags &= ~1u;
        v38->LockState.0 = 0LL;
        v43 = ((char *)v38 - (char *)v34 - 800) / 96;
        if ( v37 == 1 )
          v34->AbEntrySummary |= 1 << v43;
        else
          _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, 1 << v43);
      }
      else if ( (*((_DWORD *)&v34->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v34, (ULONG_PTR)&qword_1403CB7A0, SessionId, 0LL);
      }
      --v34->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v34, (__int64)&qword_1403CB7A0, (__int64)&v52);
      v41 = v34->SpecialApcDisable++ == -1;
      if ( v41 && ($005F0E83B22994B61E86C72E0CE43C71 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery();
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
