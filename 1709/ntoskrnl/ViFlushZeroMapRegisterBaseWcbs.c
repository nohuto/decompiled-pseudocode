/*
 * XREFs of ViFlushZeroMapRegisterBaseWcbs @ 0x140276E58
 * Callers:
 *     VfPutDmaAdapter @ 0x1407AC760 (VfPutDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1407AA28C (SUBTRACT_MAP_REGISTERS.c)
 */

__int64 __fastcall ViFlushZeroMapRegisterBaseWcbs(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx

  v1 = (KSPIN_LOCK *)(a1 + 144);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v4 = *(_QWORD **)(a1 + 128);
  while ( v4 != (_QWORD *)(a1 + 128) )
  {
    v5 = v4 - 9;
    v4 = (_QWORD *)*v4;
    if ( !v5[11] && !v5[12] && *((_DWORD *)v5 + 13) == 3 )
    {
      v7 = v5[9];
      if ( *(_QWORD **)(v7 + 8) != v5 + 9 || (v8 = (_QWORD *)v5[10], (_QWORD *)*v8 != v5 + 9) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      SUBTRACT_MAP_REGISTERS(a1, *((unsigned int *)v5 + 12));
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
      break;
    }
  }
  KxReleaseSpinLock(v1);
  result = v3;
  __writecr8(v3);
  return result;
}
