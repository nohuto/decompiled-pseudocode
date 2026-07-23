/*
 * XREFs of sub_180076A44 @ 0x180076A44
 * Callers:
 *     sub_1800768AC @ 0x1800768AC (sub_1800768AC.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall sub_180076A44(int a1, _OWORD *a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  char *v6; // rbx
  _DWORD *pShimData; // rdx
  __int128 v8; // xmm0
  __int128 v10; // xmm0

  v3 = 0;
  v6 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v6 = (char *)(pShimData + 374);
    if ( pShimData == (_DWORD *)-1496LL || !pShimData[386] )
      v6 = 0LL;
  }
  if ( a2 && a3 && v6 )
  {
    if ( !a1 )
    {
      v10 = *((_OWORD *)v6 + 3);
      *a3 = *(_QWORD *)v6;
      *a2 = v10;
      return 1;
    }
    if ( a1 == 1 )
    {
      RtlAcquireSRWLockShared(&stru_18015C388);
      v8 = *((_OWORD *)v6 + 4);
      *a3 = *(_QWORD *)v6;
      *a2 = v8;
      RtlReleaseSRWLockShared(&stru_18015C388);
      return 1;
    }
  }
  return v3;
}
