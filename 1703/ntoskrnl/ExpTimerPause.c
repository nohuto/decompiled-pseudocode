/*
 * XREFs of ExpTimerPause @ 0x1400315B0
 * Callers:
 *     PspSetProcessFreezeStateCallback @ 0x140031420 (PspSetProcessFreezeStateCallback.c)
 *     PsInsertVirtualizedTimer @ 0x14012AA9C (PsInsertVirtualizedTimer.c)
 *     ExWakeTimersPause @ 0x14013DACC (ExWakeTimersPause.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeCancelTimerInternal @ 0x140031670 (KeCancelTimerInternal.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 */

void __fastcall ExpTimerPause(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v8; // dl
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( !a4 )
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 304) |= 2u;
  if ( !(unsigned __int8)KeCancelTimerInternal(a1, &v10, &v11, a1 + 320) )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v8 = v11;
  switch ( v11 )
  {
    case 1:
      if ( v10 <= a3 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 312) = 0LL;
        break;
      }
      v9 = a2 + v10 - a3;
LABEL_14:
      *(_QWORD *)(a1 + 312) = v9;
      break;
    case 2:
      if ( v10 > a3 )
      {
        *(_QWORD *)(a1 + 312) = a3 - v10;
        break;
      }
      goto LABEL_15;
    case 3:
      v9 = v10;
      goto LABEL_14;
  }
LABEL_8:
  *(_BYTE *)(a1 + 248) = v8;
  if ( !a4 )
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 64));
}
