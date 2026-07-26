/*
 * XREFs of NdisTryAcquireRWLockRead @ 0x1C007AAE0
 * Callers:
 *     ?ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C007A880 (-ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NdisTryAcquireRWLockRead(__int64 a1, KIRQL *a2, char a3)
{
  KIRQL v7; // al
  _QWORD *v8; // rbx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !KeTestSpinLock((PKSPIN_LOCK)(a1 + 16)) )
    return 0;
  if ( (a3 & 1) != 0 )
    v7 = 2;
  else
    v7 = KfRaiseIrql(2u);
  *a2 = v7;
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 32) + (KeGetPcr()->Prcb.Number << 12));
  ++*v8;
  _InterlockedOr(v9, 0);
  if ( !KeTestSpinLock((PKSPIN_LOCK)(a1 + 16)) )
  {
    --*v8;
    if ( *a2 != 2 )
      KeLowerIrql(*a2);
    return 0;
  }
  a2[1] = 3;
  return 1;
}
