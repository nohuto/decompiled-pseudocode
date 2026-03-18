/*
 * XREFs of MiSelectSessionAttachProcess @ 0x140094590
 * Callers:
 *     MiGetNextSession @ 0x14007118C (MiGetNextSession.c)
 *     MiAttachToOwningSession @ 0x140076418 (MiAttachToOwningSession.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     MiAttachWorkingSet @ 0x1400B21D0 (MiAttachWorkingSet.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140213B80 (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

__int64 *__fastcall MiSelectSessionAttachProcess(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 *v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  if ( !*(_QWORD *)(a1 + 7872) || (*(_DWORD *)(a1 + 4) & 2) != 0 )
    return 0LL;
  v1 = *(__int64 **)(a1 + 16);
  if ( v1 == (__int64 *)(a1 + 16) )
    return 0LL;
  while ( 1 )
  {
    v2 = v1 - 104;
    if ( (*((_BYTE *)v1 + 641) & 1) == 0
      && (*((_DWORD *)v2 + 193) & 0xC00u) >= 0xC00
      && (*((_BYTE *)v2 + 1475) & 0xC0) != 0x80 )
    {
      _m_prefetchw(v1 - 110);
      v3 = *(v1 - 110);
      if ( v3 )
        break;
    }
LABEL_12:
    v1 = (__int64 *)*v1;
    if ( v1 == (__int64 *)(a1 + 16) )
      return 0LL;
  }
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v1 - 110, v3 + 1, v3);
    if ( v4 == v3 )
      break;
    if ( !v3 )
      goto LABEL_12;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1 - 880);
  return v2;
}
