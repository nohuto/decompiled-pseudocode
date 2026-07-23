/*
 * XREFs of MiScrubProcesses @ 0x140757F60
 * Callers:
 *     MmScrubMemory @ 0x1407583E4 (MmScrubMemory.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140007E50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     RtlFindSetBitsEx @ 0x140153ED0 (RtlFindSetBitsEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiLockPage @ 0x140264C28 (MiLockPage.c)
 *     MiUnlockPage @ 0x140264C50 (MiUnlockPage.c)
 *     MiMakePageBad @ 0x1402701E8 (MiMakePageBad.c)
 *     MiScrubAweMappedPage @ 0x140270278 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 *     MiScrubPage @ 0x140270A34 (MiScrubPage.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140757E44 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 NextProcess; // rdi
  _KPROCESS *v9; // rcx
  int v10; // r12d
  _QWORD *v11; // r14
  _QWORD *v12; // r13
  _QWORD *v13; // rax
  _QWORD *i; // rbx
  unsigned int v15; // r15d
  _QWORD **v16; // rax
  __int64 v17; // rbp
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *PoolWithTag; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r15d
  __int64 *v29; // r14
  unsigned int j; // ebp
  void *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  ULONG64 v36; // rbp
  ULONG64 SetBits; // rax
  ULONG64 v38; // r14
  __int64 v39; // rbp
  unsigned __int64 v40; // rcx
  int v41; // eax
  unsigned __int8 v42; // bl
  unsigned __int64 SizeOfBitMap; // rbx
  _QWORD *v46; // [rsp+30h] [rbp-158h]
  _QWORD *v47; // [rsp+30h] [rbp-158h]
  _RTL_BITMAP_EX *BitMapHeader; // [rsp+38h] [rbp-150h]
  __int64 v50[24]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v51[48]; // [rsp+110h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  memset(v50, 0, sizeof(v50));
  result = MiInitializeScrubPacket(v5, -1, v4, (__int64)v50);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  NextProcess = PsGetNextProcess(0LL);
  if ( !NextProcess )
    goto LABEL_51;
  do
  {
    if ( MiGetProcessPartition(NextProcess) == v5 )
    {
      if ( *(_DWORD *)(v4 + 4) )
        break;
      BitMapHeader = *(_RTL_BITMAP_EX **)(NextProcess + 1032);
      if ( BitMapHeader || *(_DWORD *)(NextProcess + 1708) )
      {
        KiStackAttachProcess(v9, 0, (__int64)v51);
        --CurrentThread->KernelApcDisable;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
        if ( (*(_DWORD *)(NextProcess + 772) & 0x20) != 0 )
        {
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
LABEL_48:
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          KiUnstackDetachProcess((__int64)v51, 0LL);
          goto LABEL_49;
        }
        v10 = *(_DWORD *)(NextProcess + 1708);
        v11 = 0LL;
        v46 = 0LL;
        v12 = 0LL;
        v13 = *(_QWORD **)(NextProcess + 1576);
        i = 0LL;
        v15 = 13;
        while ( v13 )
        {
          i = v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v10 && i )
        {
          v16 = (_QWORD **)i[1];
          v17 = (__int64)i;
          v18 = i;
          if ( v16 )
          {
            v19 = *v16;
            for ( i = (_QWORD *)i[1]; v19; v19 = (_QWORD *)*v19 )
              i = v19;
          }
          else
          {
            while ( 1 )
            {
              i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !i || (_QWORD *)*i == v18 )
                break;
              v18 = i;
            }
          }
          if ( (*(_BYTE *)(v17 + 48) & 7) == 5 || MiVadMapsLargeImage(v17) )
          {
            MiLockVad((__int64)CurrentThread, v17);
            if ( (unsigned int)MiVadDeleted(v17) == 1 )
            {
              MiUnlockVad((__int64)CurrentThread, v17, v20, v21);
            }
            else
            {
              if ( v15 >= 0xD )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x7356694Du);
                v11 = PoolWithTag;
                if ( !PoolWithTag )
                {
                  MiUnlockVad((__int64)CurrentThread, v17, v23, v24);
                  break;
                }
                v15 = 0;
                memset(PoolWithTag, 0, 0x70uLL);
                if ( v12 )
                  *v46 = v11;
                else
                  v12 = v11;
                v46 = v11;
              }
              v25 = v15++;
              v11[v25 + 1] = v17;
              MiReferenceVad(v17);
              MiUnlockVad((__int64)CurrentThread, v17, v26, v27);
              --v10;
            }
          }
        }
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
        v28 = 1;
        if ( !v12 )
          goto LABEL_44;
        do
        {
          v29 = v12 + 1;
          v47 = (_QWORD *)*v12;
          for ( j = 0; j < 0xD; ++j )
          {
            v31 = (void *)*v29;
            if ( !*v29 )
              break;
            MiLockVad((__int64)CurrentThread, *v29);
            if ( !(unsigned int)MiVadDeleted((__int64)v31) && v28 == 1 )
              v28 = MiScrubLargeMappedPage(v33, (__int64)v50, NextProcess, a2);
            MiUnlockAndDereferenceVad(v31, v32, v34, v35);
            ++v29;
          }
          ExFreePoolWithTag(v12, 0);
          v12 = v47;
        }
        while ( v47 );
        if ( v28 )
        {
LABEL_44:
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
          if ( (*(_DWORD *)(NextProcess + 772) & 0x20) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
          }
          else
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
            if ( BitMapHeader )
            {
              v36 = 0LL;
              do
              {
                v4 = a2;
                if ( *(_DWORD *)(a2 + 4) )
                  goto LABEL_47;
                --CurrentThread->SpecialApcDisable;
                ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&BitMapHeader[1], 0LL);
                SetBits = RtlFindSetBitsEx(BitMapHeader, 1uLL, v36);
                v38 = SetBits;
                if ( SetBits < v36 || SetBits == -1LL )
                {
                  ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)&BitMapHeader[1], 0LL);
                  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                  goto LABEL_47;
                }
                v39 = 48 * SetBits - 0x58000000000LL;
                v40 = *(_QWORD *)(v39 + 8);
                if ( v40 )
                  v41 = MiScrubAweMappedPage(v40, SetBits, (__int64)v50, NextProcess);
                else
                  v41 = MiScrubPage((__int64)v50, v50[19], v39, 0LL);
                if ( v41 < 0 )
                {
                  v42 = MiLockPage(v39);
                  MiMakePageBad(v39, 0);
                  MiUnlockPage(v39, v42);
                }
                SizeOfBitMap = BitMapHeader->SizeOfBitMap;
                v36 = v38 + 1;
                ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)&BitMapHeader[1], 0LL);
                KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              }
              while ( v38 + 1 < SizeOfBitMap );
            }
          }
        }
        v4 = a2;
LABEL_47:
        v5 = a1;
        goto LABEL_48;
      }
    }
LABEL_49:
    NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
  }
  while ( NextProcess );
  v3 = a3;
LABEL_51:
  *v3 = v50[21];
  MiReleaseScrubPacket((__int64)v50);
  return 0LL;
}
