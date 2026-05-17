/*
 * XREFs of sub_180108010 @ 0x180108010
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180108770 @ 0x180108770 (sub_180108770.c)
 */

void __fastcall sub_180108010(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int32 v5; // edi
  __int64 v6; // rcx

  v5 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v5 )
  {
    sub_180055584((volatile signed __int64 *)(a1 + 56), -v5, 0LL, a4);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      sub_180108770(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v5);
  }
}
