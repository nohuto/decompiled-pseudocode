/*
 * XREFs of sub_180088940 @ 0x180088940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003724 @ 0x180003724 (sub_180003724.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall sub_180088940(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // r8

  v3 = (__int64 *)(a2 - 200);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    sub_180003724(v3[18], a2, v3[10], v3[11], v3[13]);
  return sub_180014660(a1, (__int64)v3, 0x102u);
}
