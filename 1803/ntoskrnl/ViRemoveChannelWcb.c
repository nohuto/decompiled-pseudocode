/*
 * XREFs of ViRemoveChannelWcb @ 0x1402AA0BC
 * Callers:
 *     VfCancelAdapterChannel @ 0x140818470 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140818830 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140818AD0 (VfFreeMapRegisters.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // al
  __int64 v10; // rdx
  KIRQL v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx

  v6 = 0;
  if ( a2 && a3 )
    return 0LL;
  v8 = (KSPIN_LOCK *)(a1 + 144);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v10 = a1 + 128;
  v11 = v9;
  v12 = *(_QWORD *)(a1 + 128);
  v13 = v12 - 72;
  if ( v10 != v12 )
  {
    while ( (!a2 || *(_QWORD *)(v13 + 96) != a2 && *(_QWORD *)(v13 + 88) != a2)
         && (!a3 || *(_QWORD *)(v13 + 40) != a3)
         && *(_DWORD *)(v13 + 52) > 1u )
    {
      v14 = *(_QWORD *)(v13 + 72);
      v13 = v14 - 72;
      if ( v10 == v14 )
        goto LABEL_12;
    }
    v15 = *(_QWORD *)(v13 + 72);
    if ( *(_QWORD *)(v15 + 8) != v13 + 72 || (v16 = *(_QWORD **)(v13 + 80), *v16 != v13 + 72) )
      __fastfail(3u);
    *v16 = v15;
    v6 = 1;
    *(_QWORD *)(v15 + 8) = v16;
  }
LABEL_12:
  KxReleaseSpinLock(v8);
  __writecr8(v11);
  if ( v6 != 1 )
    return 0LL;
  return v13;
}
