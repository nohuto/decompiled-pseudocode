/*
 * XREFs of ExpSetTimerObject2 @ 0x140038A8C
 * Callers:
 *     ExpSetTimer2 @ 0x1400389A4 (ExpSetTimer2.c)
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x14005AE80 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x14014A734 (ExpSetTimer.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x140038B4C (ExpTimerSetParametersAreValid.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall ExpSetTimerObject2(_QWORD *Object, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax

  v3 = 0;
  if ( a3 && !(unsigned __int8)ExpTimerSetParametersAreValid(a3) )
  {
    v3 = -1073741583;
  }
  else
  {
    if ( a2 )
      v5 = *a2;
    else
      v5 = 0LL;
    Object[18] = v5;
    Object[19] = 0LL;
    if ( a3 )
      Object[19] = *(_QWORD *)(a3 + 8);
    if ( a2 )
      KeSetTimer2((__int64)Object, Object[18], 0LL, a3);
    else
      KeCancelTimer2(Object);
  }
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v3;
}
