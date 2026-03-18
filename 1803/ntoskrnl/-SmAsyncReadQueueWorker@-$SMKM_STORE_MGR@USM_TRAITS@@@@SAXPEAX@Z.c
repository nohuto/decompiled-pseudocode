/*
 * XREFs of ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401531E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140090488 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // r8
  unsigned __int64 v3; // r12
  int v4; // eax
  KSPIN_LOCK *v5; // rbp
  __int64 v6; // rdi
  KIRQL v7; // al
  unsigned __int64 v8; // rbx
  LARGE_INTEGER v9; // rbx
  unsigned __int64 v10; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  int v12; // r14d
  KIRQL v13; // al
  _QWORD *v14; // rcx
  KIRQL v15; // r15
  unsigned __int64 v16; // rsi
  int v17; // esi
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 40);
  LODWORD(v3) = 100;
  v4 = v2 & 3;
  v2 &= 0xFFFFFFFFFFFFFFFCuLL;
  v5 = (KSPIN_LOCK *)(v2 + 768);
  v6 = v2 + 24 * (*(_DWORD *)(a1 + 32) & 7 | (unsigned __int64)(unsigned int)(8 * v4));
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 768));
  --*(_DWORD *)(v6 + 16);
  ++*(_DWORD *)(v6 + 20);
  v8 = v7;
  KxReleaseSpinLock(v5);
  __writecr8(v8);
LABEL_2:
  v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v1[4] & 0xFFFFFFFFFFFFFFF8uLL, (unsigned __int64)(v1 - 5), 0);
  v10 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v9.QuadPart) / PerformanceFrequency.QuadPart;
  if ( v10 >= (unsigned int)v3 )
    LODWORD(v10) = v3;
  PerformanceCounter.QuadPart = 0LL;
  v12 = 0;
  v3 = (unsigned int)v10;
  while ( 1 )
  {
LABEL_5:
    v13 = KeAcquireSpinLockRaiseToDpc(v5);
    v14 = *(_QWORD **)(v6 + 8);
    v15 = v13;
    if ( *v14 )
    {
      if ( v14 == (_QWORD *)v6 )
      {
        v1 = 0LL;
      }
      else
      {
        v1 = *(_QWORD **)v6;
        *(_QWORD *)v6 = **(_QWORD **)v6;
        if ( v1 == v14 )
        {
          *(_QWORD *)v6 = 0LL;
          *(_QWORD *)(v6 + 8) = v6;
        }
        else
        {
          --*v14;
        }
      }
      KxReleaseSpinLock(v5);
      __writecr8(v15);
      goto LABEL_2;
    }
    v16 = v13;
    if ( v12 )
      break;
    KxReleaseSpinLock(v5);
    __writecr8(v16);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v17 = 0;
    while ( *(_DWORD *)(v6 + 16) <= *(_DWORD *)(v6 + 20) )
    {
      if ( **(_QWORD **)(v6 + 8) )
        goto LABEL_5;
      if ( (++v17 & 0x7F) == 0
        && 1000000
         * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart)
         / PerformanceFrequency.QuadPart >= v3 )
      {
        break;
      }
      _mm_pause();
    }
    v12 = 1;
  }
  --*(_DWORD *)(v6 + 20);
  KxReleaseSpinLock(v5);
  __writecr8(v16);
}
