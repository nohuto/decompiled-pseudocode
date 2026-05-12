/*
 * XREFs of RaidGetResourceListElement @ 0x1C001A4F4
 * Callers:
 *     RaidTranslateResourceListAddress @ 0x1C001A328 (RaidTranslateResourceListAddress.c)
 *     RaidGetResourceListInterrupt @ 0x1C001A434 (RaidGetResourceListInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetResourceListElement(
        _QWORD *a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 result; // rax
  _DWORD *v9; // rdx

  v6 = *a1;
  v7 = a2;
  *a3 = *(_DWORD *)(*a1 + 4LL);
  result = *(unsigned int *)(v6 + 8);
  *a4 = result;
  if ( a5 )
  {
    *a3 = *(_DWORD *)(v6 + 4);
    *a4 = *(_DWORD *)(v6 + 8);
    result = v6 + 20 * (a2 + 1LL);
    *a5 = result;
  }
  if ( a6 )
  {
    v9 = (_DWORD *)(a1[1] + 4LL);
    *a3 = *v9;
    *a4 = v9[1];
    result = (__int64)&v9[4 * v7 + 4 + v7];
    *a6 = result;
  }
  return result;
}
