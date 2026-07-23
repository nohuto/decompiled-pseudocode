/*
 * XREFs of MiScrubProcesses @ 0x1406C0060
 * Callers:
 *     MmScrubMemory @ 0x1406C04B8 (MmScrubMemory.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140020340 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140021C70 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiVadMapsLargeImage @ 0x1400CE200 (MiVadMapsLargeImage.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiVadDeleted @ 0x1400CE370 (MiVadDeleted.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400CE400 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlFindSetBitsEx @ 0x14013E9A0 (RtlFindSetBitsEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiLockPage @ 0x14021EF00 (MiLockPage.c)
 *     MiUnlockPage @ 0x14021EF0C (MiUnlockPage.c)
 *     MiMakePageBad @ 0x140225FD8 (MiMakePageBad.c)
 *     MiScrubAweMappedPage @ 0x140226064 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 *     MiScrubPage @ 0x140226824 (MiScrubPage.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 *     MiInitializeScrubPacket @ 0x1406BFEE8 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1406BFF98 (MiReleaseScrubPacket.c)
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
  _QWORD *v14; // rbx
  unsigned int v15; // r15d
  _QWORD *v16; // rax
  __int64 v17; // rbp
  _QWORD *v18; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v20; // rax
  int v21; // r15d
  __int64 *v22; // r14
  unsigned int i; // ebp
  char *v24; // rbx
  __int64 v25; // rcx
  ULONG64 v26; // rbx
  ULONG64 SetBits; // rax
  ULONG64 v28; // r14
  __int64 v29; // rbp
  unsigned __int64 v30; // rcx
  int v31; // eax
  unsigned __int8 v32; // bl
  ULONG_PTR v33; // rcx
  _QWORD *v36; // [rsp+30h] [rbp-D8h]
  _QWORD *v37; // [rsp+30h] [rbp-D8h]
  _RTL_BITMAP_EX *BitMapHeader; // [rsp+38h] [rbp-D0h]
  _BYTE v40[24]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+78h] [rbp-90h]
  $5BC46E0569261879018906DEC3127961 v43; // [rsp+90h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  result = MiInitializeScrubPacket(a1, -1, a2, (__int64)v40);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    NextProcess = PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( MiGetProcessPartition(NextProcess) == v5 )
        {
          if ( *(_DWORD *)(v4 + 4) )
            break;
          BitMapHeader = *(_RTL_BITMAP_EX **)(NextProcess + 1032);
          if ( BitMapHeader || *(_DWORD *)(NextProcess + 1708) )
          {
            KiStackAttachProcess(v9, 0, (__int64)&v43);
            --CurrentThread->KernelApcDisable;
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
            if ( (*(_DWORD *)(NextProcess + 772) & 0x20) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
            }
            else
            {
              v10 = *(_DWORD *)(NextProcess + 1708);
              v11 = 0LL;
              v36 = 0LL;
              v12 = 0LL;
              v13 = *(_QWORD **)(NextProcess + 1576);
              v14 = 0LL;
              v15 = 13;
              while ( v13 )
              {
                v14 = v13;
                v13 = (_QWORD *)*v13;
              }
              while ( v10 && v14 )
              {
                v16 = (_QWORD *)v14[1];
                v17 = (__int64)v14;
                v18 = v14;
                if ( v16 )
                {
                  do
                  {
                    v14 = v16;
                    v16 = (_QWORD *)*v16;
                  }
                  while ( v16 );
                }
                else
                {
                  while ( 1 )
                  {
                    v14 = (_QWORD *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !v14 || (_QWORD *)*v14 == v18 )
                      break;
                    v18 = v14;
                  }
                }
                if ( (*(_BYTE *)(v17 + 48) & 7) == 5 || MiVadMapsLargeImage(v17) )
                {
                  MiLockVad((__int64)CurrentThread, v17);
                  if ( (unsigned int)MiVadDeleted(v17) == 1 )
                  {
                    MiUnlockVad((__int64)CurrentThread, v17);
                  }
                  else
                  {
                    if ( v15 >= 0xD )
                    {
                      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x7356694Du);
                      v11 = PoolWithTag;
                      if ( !PoolWithTag )
                      {
                        MiUnlockVad((__int64)CurrentThread, v17);
                        break;
                      }
                      v15 = 0;
                      memset(PoolWithTag, 0, 0x70uLL);
                      if ( v12 )
                        *v36 = v11;
                      else
                        v12 = v11;
                      v36 = v11;
                    }
                    v20 = v15++;
                    v11[v20 + 1] = v17;
                    MiReferenceVad(v17);
                    MiUnlockVad((__int64)CurrentThread, v17);
                    --v10;
                  }
                }
              }
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
              v21 = 1;
              if ( !v12 )
                goto LABEL_43;
              do
              {
                v22 = v12 + 1;
                v37 = (_QWORD *)*v12;
                for ( i = 0; i < 0xD; ++i )
                {
                  v24 = (char *)*v22;
                  if ( !*v22 )
                    break;
                  MiLockVad((__int64)CurrentThread, *v22);
                  if ( !(unsigned int)MiVadDeleted((__int64)v24) && v21 == 1 )
                    v21 = MiScrubLargeMappedPage(v25, (__int64)v40, NextProcess, a2);
                  MiUnlockAndDereferenceVad(v24);
                  ++v22;
                }
                ExFreePoolWithTag(v12, 0);
                v12 = v37;
              }
              while ( v37 );
              if ( v21 )
              {
LABEL_43:
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
                    v26 = 0LL;
                    while ( 1 )
                    {
                      if ( *(_DWORD *)(a2 + 4) )
                        goto LABEL_45;
                      --CurrentThread->SpecialApcDisable;
                      ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&BitMapHeader[1], 0LL);
                      SetBits = RtlFindSetBitsEx(BitMapHeader, 1uLL, v26);
                      v28 = SetBits;
                      if ( SetBits < v26 || SetBits == -1LL )
                        break;
                      v29 = 48 * SetBits - 0x58000000000LL;
                      v30 = *(_QWORD *)(v29 + 8);
                      if ( v30 )
                        v31 = MiScrubAweMappedPage(v30, SetBits, (__int64)v40, NextProcess);
                      else
                        v31 = MiScrubPage((__int64)v40, v41, v29, 0LL);
                      if ( v31 < 0 )
                      {
                        v32 = MiLockPage(v29);
                        MiMakePageBad(v29, 0);
                        MiUnlockPage(v29, v32);
                      }
                      v26 = v28 + 1;
                      if ( v28 + 1 >= BitMapHeader->SizeOfBitMap )
                      {
                        v33 = (ULONG_PTR)&BitMapHeader[1];
LABEL_65:
                        ExReleaseAutoExpandPushLockExclusive(v33, 0LL);
                        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                        goto LABEL_45;
                      }
                      ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)&BitMapHeader[1], 0LL);
                      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                    }
                    v33 = (ULONG_PTR)&BitMapHeader[1];
                    goto LABEL_65;
                  }
                }
              }
LABEL_45:
              v5 = a1;
              v4 = a2;
            }
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
            KiUnstackDetachProcess(&v43, 0LL);
          }
        }
        NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
      }
      while ( NextProcess );
      v3 = a3;
    }
    *v3 = v42;
    MiReleaseScrubPacket((__int64)v40);
    return 0LL;
  }
  return result;
}
