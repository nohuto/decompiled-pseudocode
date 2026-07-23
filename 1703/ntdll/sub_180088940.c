/*
 * XREFs of sub_180088940 @ 0x180088940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003724 @ 0x180003724 (sub_180003724.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall sub_180088940(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // r8

  v3 = a2 - 200;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    sub_180003724(*(_QWORD *)(v3 + 144), a2, *(_QWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), *(_QWORD *)(v3 + 104));
  return sub_180014660(Instance, (char *)v3, 0x102u);
}
