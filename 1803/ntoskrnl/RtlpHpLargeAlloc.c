/*
 * XREFs of RtlpHpLargeAlloc @ 0x14029E2A0
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14029477C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpAllocVA @ 0x1402943E0 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataAlloc @ 0x140295B48 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140295D08 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x14029ED0C (RtlpHpLargeLockAcquire.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, unsigned __int64 a3, unsigned int a4)
{
  __int128 v4; // xmm0
  unsigned __int64 v5; // rsi
  void *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r15d
  bool v15; // cf
  __int128 v16; // xmm0
  int v17; // eax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  unsigned __int8 v23; // r14
  unsigned __int64 v24; // rdx
  BOOLEAN v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  unsigned __int64 v30; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-31h] BYREF
  __int64 v32[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v33; // [rsp+68h] [rbp-19h] BYREF
  __int128 v34; // [rsp+78h] [rbp-9h] BYREF
  __int128 v35; // [rsp+88h] [rbp+7h] BYREF
  __int128 v36; // [rsp+98h] [rbp+17h] BYREF
  __int128 v37; // [rsp+A8h] [rbp+27h] BYREF

  v4 = *(_OWORD *)a1;
  v5 = 0LL;
  v30 = 0LL;
  v33 = v4;
  v10 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0LL, &v33);
  v11 = (__int64)v10;
  if ( v10 )
  {
    memset(v10, 0, 0x28uLL);
    v14 = BYTE1(*(_QWORD *)a1) < 2u;
    v32[0] = a3 + (v14 << 12);
    if ( v32[0] >= a3 )
    {
      v15 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
      v34 = *(_OWORD *)a1;
      if ( (int)RtlpHpAllocVA((__int64 *)&v30, v32, 0LL, 0x2000, v15 ? 64 : 4, &v34, a1) >= 0 )
      {
        v16 = *(_OWORD *)a1;
        v17 = *(_DWORD *)(a1 + 20) & 0x40000000;
        v31 = a3;
        v35 = v16;
        if ( (int)RtlpHpAllocVA((__int64 *)&v30, (__int64 *)&v31, 0LL, 4096, v17 != 0 ? 64 : 4, &v35, 0LL) >= 0 )
        {
          v18 = v31;
          *(_QWORD *)(v11 + 24) = v30;
          v19 = v18 & 0xFFFFFFFFFFFFF000uLL | *(_DWORD *)(v11 + 32) & 0xFFD | (2LL * v14);
          *(_QWORD *)(v11 + 32) = v19;
          _BitScanForward64(&v20, v32[0]);
          *(_QWORD *)(v11 + 32) = v19 ^ (unsigned __int8)(v19 ^ (4 * v20)) & 0xFC;
          *(_WORD *)(v11 + 24) = v18 - a2;
          v21 = RtlpHpLargeLockAcquire(a1, a4);
          v22 = *(_QWORD *)(a1 + 88);
          v23 = v21;
          v24 = *(_QWORD *)(a1 + 80);
          if ( (v22 & 1) != 0 && v24 )
            v24 ^= a1 + 80;
          v25 = 0;
          if ( v24 )
          {
            while ( 1 )
            {
              if ( v30 < (*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFF0000uLL) )
              {
                v26 = *(_QWORD *)v24;
                if ( (v22 & 1) != 0 )
                {
                  if ( !v26 )
                    goto LABEL_21;
                  v26 ^= v24;
                }
                if ( !v26 )
                {
LABEL_21:
                  v25 = 0;
                  break;
                }
              }
              else
              {
                v26 = *(_QWORD *)(v24 + 8);
                if ( (v22 & 1) != 0 )
                {
                  if ( !v26 )
                    goto LABEL_15;
                  v26 ^= v24;
                }
                if ( !v26 )
                {
LABEL_15:
                  v25 = 1;
                  break;
                }
              }
              v24 = v26;
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 80), (PRTL_BALANCED_NODE)v24, v25, (PRTL_BALANCED_NODE)v11);
          if ( (a4 & 1) == 0 )
          {
            if ( (*(_DWORD *)a1 & 1) != 0 )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
              __writecr8(v23);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), v27, v12, v13);
              KeAbPostRelease(a1 + 72);
              KeLeaveCriticalRegion();
              v18 = v31;
            }
          }
          v28 = v18 >> 12;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v28 + 1);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), v28);
          v5 = v30;
          v11 = 0LL;
          v30 = 0LL;
        }
      }
      else
      {
        v30 = 0LL;
      }
    }
    if ( v11 )
    {
      v36 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v11, &v36, v12, v13);
    }
  }
  if ( v30 )
  {
    v37 = *(_OWORD *)a1;
    RtlpHpFreeVA(&v30, (unsigned __int64 *)v32, 0x8000LL, &v37);
  }
  return v5;
}
