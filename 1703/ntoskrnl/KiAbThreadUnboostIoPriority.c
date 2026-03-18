/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x14003AB10
 * Callers:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall KiAbThreadUnboostIoPriority(volatile signed __int32 *a1, __int64 a2)
{
  volatile signed __int32 *result; // rax

  result = a1 + 353;
  if ( (_DWORD)a2 )
    result = a1 + 354;
  _InterlockedDecrement(result);
  if ( (_DWORD)a2 )
  {
    _InterlockedDecrement(a1 + 449);
  }
  else
  {
    LODWORD(a2) = 1;
    return (volatile signed __int32 *)PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
  }
  return result;
}
