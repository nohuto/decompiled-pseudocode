/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x140200DBC
 * Callers:
 *     KeMaskInterrupt @ 0x14014BBAC (KeMaskInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // r14
  KSPIN_LOCK *v5; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  v2 = 0;
  v3 = 48LL * (unsigned int)(a1 - 256);
  v5 = (KSPIN_LOCK *)(v3 + KiGlobalSecondaryIDT);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock(v5);
  if ( *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) || (v8 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40)) == 0 )
  {
    KxReleaseSpinLock(v5);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    v9 = (_QWORD *)(v8 + 8);
    v10 = (_QWORD *)(v8 + 8);
    while ( (v10[12] & 1) != 0 )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
      {
        *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 1;
        goto LABEL_9;
      }
    }
    v2 = 296;
LABEL_9:
    KxReleaseSpinLock(v5);
    __writecr8(CurrentIrql);
    if ( !v2 )
      ((void (__fastcall *)(_QWORD, _QWORD))off_14033B480[0])(a2, 0LL);
    return v2;
  }
}
