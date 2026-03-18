/*
 * XREFs of MiStoreEvictPageFile @ 0x1400320B4
 * Callers:
 *     MiStoreEvictThread @ 0x1401687C0 (MiStoreEvictThread.c)
 * Callees:
 *     MiDerefPageFileSpaceBitmaps @ 0x1400321DC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14003224C (MiRefPageFileSpaceBitmaps.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x140056200 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400AC7C0 (RtlFindNextForwardRunClearCapped.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140121758 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  unsigned __int16 v2; // r15
  unsigned int v3; // eax
  unsigned int NextForwardRunClearCapped; // eax
  __int64 v5; // rdi
  ULONG v6; // r14d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int i; // esi
  __int64 v11; // rcx
  void *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v15[4]; // [rsp+50h] [rbp-10h] BYREF
  union _MM_STORE_KEY v16; // [rsp+90h] [rbp+30h] BYREF
  ULONG StartingIndex; // [rsp+98h] [rbp+38h] BYREF
  int v18; // [rsp+A0h] [rbp+40h] BYREF

  v2 = *(_WORD *)(a1 + 204);
  if ( *(_DWORD *)(a1 + 200) )
  {
    MiRefPageFileSpaceBitmaps(a1, v14);
    v3 = 0;
    do
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v15, v3, 0xFFFFFFFFLL, &StartingIndex);
      v5 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v6 = StartingIndex;
      v16.EntireKey = StartingIndex | ((unsigned __int64)v2 << 60);
      SmKeyConvert(&v16, (union _SM_PAGE_KEY *)&v18);
      *(_DWORD *)&v16.0 = v18;
      v8 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v7, &v16, (unsigned int)v5);
      for ( i = v5; ; v8 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v9, &v16, i) )
      {
        i -= v8;
        if ( !i )
          break;
        *(_DWORD *)&v16.0 += v8;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
      RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 24LL), v6, v5);
      v11 = *(_QWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 200) -= v5;
      RtlClearBits((PRTL_BITMAP)(v11 + 8), v6, v5);
      *(_QWORD *)(a1 + 24) += v5;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( !*(_DWORD *)(a1 + 200) )
        break;
      v3 = v6 + v5;
    }
    while ( v6 + (unsigned int)v5 < v15[0] );
    v12 = (void *)MiDerefPageFileSpaceBitmaps(a1, v14, 0LL);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
}
