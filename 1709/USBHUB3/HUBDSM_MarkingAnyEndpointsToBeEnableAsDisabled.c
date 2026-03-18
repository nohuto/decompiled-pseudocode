/*
 * XREFs of HUBDSM_MarkingAnyEndpointsToBeEnableAsDisabled @ 0x1C001D220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_MarkingAnyEndpointsToBeEnableAsDisabled(__int64 a1)
{
  __int64 *v1; // r9
  __int64 i; // rcx
  __int64 j; // rdx
  __int64 v4; // rcx

  v1 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 48LL) + 16LL);
  for ( i = *v1; ; i = *(_QWORD *)(v4 + 8) )
  {
    v4 = i - 8;
    if ( v1 == (__int64 *)(v4 + 8) )
      break;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v4 + 24); j = (unsigned int)(j + 1) )
    {
      if ( *(_DWORD *)(v4 + 72 * j + 48) == 3 )
        *(_DWORD *)(v4 + 72 * j + 48) = 6;
    }
  }
  return 4077LL;
}
