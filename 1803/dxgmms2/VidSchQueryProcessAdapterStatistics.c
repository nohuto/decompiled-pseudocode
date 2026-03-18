/*
 * XREFs of VidSchQueryProcessAdapterStatistics @ 0x1C00BD550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryProcessAdapterStatistics(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  int v4; // eax
  _QWORD *v5; // rcx
  __int64 v6; // r8

  v3 = a2 - a3;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a1 + 40);
  v5 = (_QWORD *)(a3 + 192);
  *(_DWORD *)(a3 + 8) = v4;
  v6 = 9LL;
  do
  {
    *v5 = *(_QWORD *)((char *)v5 + v3 + 2472);
    ++v5;
    --v6;
  }
  while ( v6 );
  return 0LL;
}
