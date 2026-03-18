/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x1400D11C4
 * Callers:
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall KiAbThreadUnboostIoPriority(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)-(int)a2;
  _InterlockedDecrement((volatile signed __int32 *)(((_DWORD)a2 != 0 ? 4 : 0) + a1 + 1412));
  if ( (_DWORD)a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  }
  else
  {
    LODWORD(a2) = 1;
    return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
  }
  return result;
}
