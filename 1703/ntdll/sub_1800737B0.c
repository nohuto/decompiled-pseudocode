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

signed __int64 __fastcall sub_1800737B0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  volatile signed __int64 *v3; // rsi
  signed __int64 result; // rax
  int v7; // ecx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = (volatile signed __int64 *)(a1 + 240);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  sub_180017414(a1, v2 + 112, a2 != 0 ? 2 : 0, &v8);
  ++*(_BYTE *)(a1 + 355);
  result = RtlReleaseSRWLockExclusive(v3);
  if ( v8 < 0 )
  {
    v7 = -v8;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v8);
    if ( (_DWORD)result == v7 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
