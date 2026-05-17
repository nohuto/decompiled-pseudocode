/*
 * XREFs of sub_180073760 @ 0x180073760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180073760(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  signed __int32 v4; // eax

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  v2 = *(_QWORD *)(a1 + 144);
  ++*(_BYTE *)(a1 + 355);
  LOBYTE(v4) = sub_1800177A0(a1, v2 + 112, 0LL, v3);
  if ( (_BYTE)v4 )
  {
    v4 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v4 == 1 )
      LOBYTE(v4) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return v4;
}
