/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x140200F98
 * Callers:
 *     KeUnmaskInterrupt @ 0x14013CD98 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14014C108 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  KSPIN_LOCK *v5; // rbp
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rax
  int v10; // edi

  v2 = 0;
  v3 = 48LL * (unsigned int)(a1 - 256);
  v5 = (KSPIN_LOCK *)(v3 + KiGlobalSecondaryIDT);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock(v5);
  if ( !*(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) )
  {
    v2 = 296;
LABEL_4:
    KxReleaseSpinLock(v5);
    __writecr8(CurrentIrql);
    return v2;
  }
  v7 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40);
  if ( !v7 )
    goto LABEL_4;
  v8 = (__int64 *)(v7 + 8);
  v9 = (__int64 *)(v7 + 8);
  while ( 1 )
  {
    v10 = -(v9[12] & 1);
    if ( (v9[12] & 1) == 0 )
      break;
    v9 = (__int64 *)*v9;
    if ( v9 == v8 )
      goto LABEL_10;
  }
  *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 0;
LABEL_10:
  KxReleaseSpinLock(v5);
  __writecr8(CurrentIrql);
  if ( !v10 )
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD))off_14033B488[0])(a2, 0LL);
  return v2;
}
