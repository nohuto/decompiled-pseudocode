/*
 * XREFs of sub_1800737B0 @ 0x1800737B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800737B0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _RTL_SRWLOCK *v3; // rsi
  int v6; // ecx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = (_RTL_SRWLOCK *)(a1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  sub_180017414(a1, v2 + 112, a2 != 0 ? 2 : 0, &v7);
  ++*(_BYTE *)(a1 + 355);
  RtlReleaseSRWLockExclusive(v3);
  v6 = v7;
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v7) == -v6 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
}
