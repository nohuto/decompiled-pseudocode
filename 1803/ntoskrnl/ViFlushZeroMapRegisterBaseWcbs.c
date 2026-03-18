/*
 * XREFs of ViFlushZeroMapRegisterBaseWcbs @ 0x1402A9F78
 * Callers:
 *     VfPutDmaAdapter @ 0x1408198D0 (VfPutDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140817310 (SUBTRACT_MAP_REGISTERS.c)
 */

__int64 __fastcall ViFlushZeroMapRegisterBaseWcbs(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  bool v7; // zf
  __int64 result; // rax
  _QWORD *v9; // rax

  v1 = (KSPIN_LOCK *)(a1 + 144);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v4 = *(_QWORD **)(a1 + 128);
  while ( v4 != (_QWORD *)(a1 + 128) )
  {
    v5 = v4 - 9;
    v6 = v4;
    v7 = v4[2] == 0LL;
    v4 = (_QWORD *)*v4;
    if ( v7 && !v5[12] && *((_DWORD *)v5 + 13) == 3 )
    {
      if ( (_QWORD *)v4[1] != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
        __fastfail(3u);
      *v9 = v4;
      v4[1] = v9;
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
