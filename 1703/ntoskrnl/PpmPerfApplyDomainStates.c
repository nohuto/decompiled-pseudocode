/*
 * XREFs of PpmPerfApplyDomainStates @ 0x1400458C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyDomainState @ 0x14000E170 (PpmPerfApplyDomainState.c)
 *     KeAndAffinityEx @ 0x1400450B0 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140160800 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
      if ( *(_BYTE *)(i + 486) )
      {
        KeAndAffinityEx((unsigned __int16 *)(i + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v4);
        if ( !(unsigned int)KeIsEqualAffinityEx(i + 24, v4) )
        {
          for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
          {
            KeAndAffinityEx((unsigned __int16 *)(j + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v4);
            if ( !(unsigned int)KeIsEqualAffinityEx(j + 24, v4) )
              *(_BYTE *)(j + 486) = 1;
          }
          break;
        }
      }
    }
  }
  for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
  {
    if ( *(_BYTE *)(k + 486) )
    {
      if ( PpmPerfApplyDomainState(k) )
        *(_BYTE *)(k + 487) = 1;
      *(_BYTE *)(k + 486) = 0;
    }
  }
  return 1;
}
