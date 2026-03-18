/*
 * XREFs of PpmPerfSelectDomainStates @ 0x14008F110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfSelectDomainStates()
{
  __int64 i; // rdx
  unsigned int v1; // eax
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int *v4; // rcx
  int v5; // ecx

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 200);
    v2 = 1;
    if ( v1 )
    {
      v3 = v1;
      v4 = (unsigned int *)(*(_QWORD *)(i + 208) + 56LL);
      do
      {
        if ( !*((_BYTE *)v4 - 40) && *v4 > v2 )
          v2 = *v4;
        v4 += 32;
        --v3;
      }
      while ( v3 );
    }
    v5 = *(_DWORD *)(i + 364);
    *(_DWORD *)(i + 364) = v2;
    if ( v5 != v2 )
      *(_BYTE *)(i + 613) = 1;
  }
  return 1;
}
