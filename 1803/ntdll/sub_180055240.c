/*
 * XREFs of sub_180055240 @ 0x180055240
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180055240(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdx
  signed __int32 v3; // eax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v2 = *(_RTL_SRWLOCK **)(a1 + 144);
  ++*(_BYTE *)(a1 + 355);
  LOBYTE(v3) = sub_18002888C(a1, v2 + 14, 0);
  if ( (_BYTE)v3 )
  {
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v3 == 1 )
      LOBYTE(v3) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return v3;
}
