/*
 * XREFs of ViRemoveChannelWcb @ 0x140250744
 * Callers:
 *     VfCancelAdapterChannel @ 0x140769630 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407699F0 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140769CA0 (VfFreeMapRegisters.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v7; // r14
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // al
  __int64 v11; // rdx
  KIRQL v12; // r12
  __int64 i; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rcx

  v3 = 0LL;
  v7 = 0;
  if ( a2 && a3 )
    return 0LL;
  v9 = (KSPIN_LOCK *)(a1 + 144);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v11 = a1 + 128;
  v12 = v10;
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v14 + 72) )
  {
    v14 = i - 72;
    if ( v11 == v14 + 72 )
      break;
    if ( a2 && (*(_QWORD *)(v14 + 96) == a2 || *(_QWORD *)(v14 + 88) == a2)
      || a3 && *(_QWORD *)(v14 + 40) == a3
      || *(_DWORD *)(v14 + 52) <= 1u )
    {
      v15 = *(_QWORD *)(v14 + 72);
      v16 = *(_QWORD **)(v14 + 80);
      if ( *(_QWORD *)(v15 + 8) != v14 + 72 || *v16 != v14 + 72 )
        __fastfail(3u);
      *v16 = v15;
      v7 = 1;
      *(_QWORD *)(v15 + 8) = v16;
      break;
    }
  }
  KxReleaseSpinLock(v9);
  __writecr8(v12);
  if ( v7 == 1 )
    return v14;
  return v3;
}
