/*
 * XREFs of RtlpHpFixedVsCommit @ 0x140245010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpFixedVsCommit(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v4)(__int64, __int64 *, unsigned __int64 *); // rax
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = (__int64 (__fastcall *)(__int64, __int64 *, unsigned __int64 *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 80));
  v6 = a3;
  result = v4(a1, &v7, &v6);
  if ( (int)result >= 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), v6 >> 12);
  return result;
}
