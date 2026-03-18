/*
 * XREFs of PpmPerfApplyDomainStates @ 0x14008F7B0
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     PpmPerfApplyDomainState @ 0x140113190 (PpmPerfApplyDomainState.c)
 *     KeIsEqualAffinityEx @ 0x140138DD0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char PpmPerfApplyDomainStates()
{
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 k; // rbx
  _BYTE v4[176]; // [rsp+20h] [rbp-C8h] BYREF

  if ( PpmPerfArtificialDomainEnabled )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 613) )
      {
        KeAndAffinityEx((unsigned __int16 *)(i + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v4);
        if ( !(unsigned int)KeIsEqualAffinityEx(i + 24, v4) )
        {
          for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
          {
            KeAndAffinityEx((unsigned __int16 *)(j + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v4);
            if ( !(unsigned int)KeIsEqualAffinityEx(j + 24, v4) )
              *(_BYTE *)(j + 613) = 1;
          }
          break;
        }
      }
    }
  }
  for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
  {
    if ( *(_BYTE *)(k + 613) )
    {
      if ( (unsigned __int8)PpmPerfApplyDomainState(k) )
        *(_BYTE *)(k + 614) = 1;
      *(_BYTE *)(k + 613) = 0;
    }
  }
  return 1;
}
