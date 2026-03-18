/*
 * XREFs of HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure @ 0x1C0022094
 * Callers:
 *     HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach @ 0x1C001E490 (HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach.c)
 * Callees:
 *     memmove @ 0x1C0038E80 (memmove.c)
 */

__int64 __fastcall HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure(__int64 a1)
{
  __int64 v2; // rax
  __int64 i; // rcx
  __int64 j; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 112) )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
    {
      for ( i = *(_QWORD *)(v2 + 16); ; i = *(_QWORD *)(v5 + 8) )
      {
        v5 = i - 8;
        if ( v2 + 16 == v5 + 8 )
          break;
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v5 + 24); j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(v5 + 72 * j + 48) == 3 )
            *(_DWORD *)(v5 + 72 * j + 48) = 6;
        }
      }
      memmove(
        (void *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)),
        *(const void **)(a1 + 104),
        8LL * *(unsigned int *)(a1 + 112));
      *(_DWORD *)(a1 + 144) += *(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 112) = 0;
    }
  }
  result = 4089LL;
  if ( !*(_DWORD *)(a1 + 128) )
    return 4061LL;
  return result;
}
