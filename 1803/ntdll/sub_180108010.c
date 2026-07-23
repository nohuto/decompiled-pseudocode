/*
 * XREFs of sub_180108010 @ 0x180108010
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180108770 @ 0x180108770 (sub_180108770.c)
 */

void __fastcall sub_180108010(__int64 a1)
{
  __int32 v2; // edi
  __int64 v3; // rcx

  v2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v2 )
  {
    sub_180055584((_RTL_SRWLOCK *)(a1 + 56), -v2, 0);
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v3 = 2147353478LL;
    if ( *(_BYTE *)v3 )
      sub_180108770(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v2);
  }
}
