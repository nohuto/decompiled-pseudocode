/*
 * XREFs of RtlpNtCreateKey @ 0x180090760
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateKey @ 0x1800A0460 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpNtCreateKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  if ( a3 )
    *(_DWORD *)(a3 + 24) &= 0xFFFFFFCF;
  return ZwCreateKey(a1, a2, a3, 0LL, 0LL, 0, a6);
}
