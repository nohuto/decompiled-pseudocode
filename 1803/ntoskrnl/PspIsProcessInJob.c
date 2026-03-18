/*
 * XREFs of PspIsProcessInJob @ 0x14052FCE0
 * Callers:
 *     NtIsProcessInJob @ 0x14052FBF4 (NtIsProcessInJob.c)
 *     PspGetJobAssignmentDisposition @ 0x1405304F0 (PspGetJobAssignmentDisposition.c)
 *     PspCheckConditionalWakeCharge @ 0x14056A04C (PspCheckConditionalWakeCharge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIsProcessInJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 944);
  result = 291LL;
  while ( v2 )
  {
    v4 = v2 == a2;
    v2 = *(_QWORD *)(v2 + 1072);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
