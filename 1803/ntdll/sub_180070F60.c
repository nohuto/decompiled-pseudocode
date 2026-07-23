/*
 * XREFs of sub_180070F60 @ 0x180070F60
 * Callers:
 *     sub_180070DBC @ 0x180070DBC (sub_180070DBC.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall sub_180070F60(int a1, _OWORD *a2, _QWORD *a3)
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
      RtlAcquireSRWLockShared(&stru_18015D3C0);
      v8 = *((_OWORD *)v6 + 4);
      *a3 = *(_QWORD *)v6;
      *a2 = v8;
      RtlReleaseSRWLockShared(&stru_18015D3C0);
      return 1;
    }
  }
  return v3;
}
