/*
 * XREFs of PsBoostThreadIoQoS @ 0x1400AAAB0
 * Callers:
 *     KiAbThreadBoostIoPriority @ 0x1400CE508 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400BEEF0 (KeAbProcessEffectiveIoPriorityChange.c)
 */

__int64 __fastcall PsBoostThreadIoQoS(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  }
  else
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1804));
    if ( (_DWORD)result == 1 )
      return KeAbProcessEffectiveIoPriorityChange(a1, 0LL);
  }
  return result;
}
