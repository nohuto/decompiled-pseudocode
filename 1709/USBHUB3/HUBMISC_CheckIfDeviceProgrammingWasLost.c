/*
 * XREFs of HUBMISC_CheckIfDeviceProgrammingWasLost @ 0x1C0028F08
 * Callers:
 *     HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum @ 0x1C001A440 (HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_CheckIfDeviceProgrammingWasLost(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 i; // rcx
  __int64 j; // rdx
  __int64 v6; // rcx

  if ( (*(_DWORD *)(a1 + 1636) & 0x20) != 0 )
  {
    v1 = 4089;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFDF);
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      _InterlockedOr((volatile signed __int32 *)(v2 + 32), 0x80u);
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
    {
      for ( i = *(_QWORD *)(v3 + 16); ; i = *(_QWORD *)(v6 + 8) )
      {
        v6 = i - 8;
        if ( v3 + 16 == v6 + 8 )
          break;
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v6 + 24); j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(v6 + 72 * j + 48) == 4 )
            *(_DWORD *)(v6 + 72 * j + 48) = 6;
        }
      }
    }
  }
  else
  {
    return 4061;
  }
  return v1;
}
