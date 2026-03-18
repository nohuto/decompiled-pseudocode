/*
 * XREFs of MiStoreEvictThread @ 0x1401DF9C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     KiInitializeTimer2 @ 0x1400B274C (KiInitializeTimer2.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400C1A50 (RtlFindNextForwardRunClearCapped.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140224FAC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140226C68 (MiRefPageFileSpaceBitmaps.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14026A088 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x1402750B0 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *P)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // r8
  struct _KEVENT *v5; // rbx
  volatile LONG *v6; // r12
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // r13d
  __int64 v10; // rdi
  unsigned __int16 v11; // r12
  unsigned int v12; // eax
  unsigned int NextForwardRunClearCapped; // eax
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int i; // r15d
  ULONG v19; // r15d
  __int64 v20; // rcx
  void *v21; // rax
  KIRQL v22; // bl
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  ULONG StartingIndex; // [rsp+4Ch] [rbp-BCh] BYREF
  int v25; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+54h] [rbp-B4h]
  union _MM_STORE_KEY v27; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v31[24]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v32[6]; // [rsp+B0h] [rbp-58h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v34[2]; // [rsp+128h] [rbp+20h] BYREF
  __int16 v35; // [rsp+12Ah] [rbp+22h]

  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = P[8];
  v3 = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v2 )
  {
    v35 = 0;
    KiInitializeTimer2((__int64)v34, 0LL, 0LL, 8);
    v28[1] = -1LL;
    v28[0] = v4;
    KeSetTimer2((__int64)v34, -600000000LL, 600000000LL, (__int64)v28);
    v5 = (struct _KEVENT *)(v3 + 1184);
    Object[1] = v34;
    Object[0] = (PVOID)(v3 + 1184);
    v6 = (volatile LONG *)(v3 + 1168);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent(v5);
      while ( 1 )
      {
        v7 = *(_DWORD *)(v3 + 1152);
        v8 = 0;
        v9 = *(_DWORD *)(v3 + 5784);
        v26 = v7;
        if ( v9 )
        {
          do
          {
            v10 = *(_QWORD *)(v3 + 8LL * v8 + 5792);
            v11 = *(_WORD *)(v10 + 204);
            if ( (v11 & 0x40) != 0 )
            {
              if ( *(_DWORD *)(v10 + 200) )
              {
                MiRefPageFileSpaceBitmaps(*(_QWORD *)(v3 + 8LL * v8 + 5792), v31);
                v12 = 0;
                do
                {
                  NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(
                                                (__int64)v32,
                                                v12,
                                                0xFFFFFFFF,
                                                &StartingIndex);
                  v14 = NextForwardRunClearCapped;
                  if ( !NextForwardRunClearCapped )
                    break;
                  v27.EntireKey = StartingIndex | ((unsigned __int64)v11 << 60);
                  SmKeyConvert(&v27, (union _SM_PAGE_KEY *)&v25);
                  v23 = v25;
                  v16 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v15, &v23, (unsigned int)v14);
                  for ( i = v14; ; v16 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v17, &v23, i) )
                  {
                    i -= v16;
                    if ( !i )
                      break;
                    v23 += v16;
                  }
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 232), &LockHandle);
                  v19 = StartingIndex;
                  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v10 + 112) + 24LL), StartingIndex, v14);
                  v20 = *(_QWORD *)(v10 + 112);
                  *(_DWORD *)(v10 + 200) -= v14;
                  RtlClearBits((PRTL_BITMAP)(v20 + 8), v19, v14);
                  *(_QWORD *)(v10 + 24) += v14;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                  __writecr8(LockHandle.OldIrql);
                  if ( !*(_DWORD *)(v10 + 200) )
                    break;
                  v12 = v19 + v14;
                }
                while ( v19 + (unsigned int)v14 < v32[0] );
                v21 = (void *)MiDerefPageFileSpaceBitmaps(v10, v31, 0LL);
                if ( v21 )
                  ExFreePoolWithTag(v21, 0);
              }
              if ( *(_DWORD *)(v10 + 200) >= 0x100u )
                --v8;
            }
            ++v8;
          }
          while ( v8 < v9 );
          v7 = v26;
          v6 = (volatile LONG *)(v3 + 1168);
        }
        v22 = ExAcquireSpinLockExclusive(v6);
        if ( v7 == *(_DWORD *)(v3 + 1152) )
          break;
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        __writecr8(v22);
      }
      if ( v7 )
      {
        *(_DWORD *)(v3 + 1152) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1232), 0, 0);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      __writecr8(v22);
      v5 = (struct _KEVENT *)(v3 + 1184);
    }
  }
}
