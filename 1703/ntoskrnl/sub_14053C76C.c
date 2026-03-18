/*
 * XREFs of sub_14053C76C @ 0x14053C76C
 * Callers:
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 * Callees:
 *     WbReAlloc @ 0x140441428 (WbReAlloc.c)
 */

__int64 __fastcall sub_14053C76C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // edx
  __int64 v10; // rcx
  int v11; // ecx

  v6 = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)(a1 + 16) + 1 >= v6 )
  {
    v11 = WbReAlloc(*(PVOID *)(a1 + 24), 32 * v6, 32 * (v6 + *(_DWORD *)(a1 + 32)), (_QWORD *)(a1 + 24));
    if ( v11 < 0 )
      return (unsigned int)v11;
    *(_DWORD *)(a1 + 20) += *(_DWORD *)(a1 + 32);
  }
  v10 = *(_QWORD *)(a1 + 24) + 32LL * *(unsigned int *)(a1 + 16);
  *(_QWORD *)v10 = a2;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 16) = a4;
  *(_DWORD *)(v10 + 24) = a5;
  v11 = 0;
  ++*(_DWORD *)(a1 + 16);
  if ( a2 && !_InterlockedAdd64((volatile signed __int64 *)(a2 + 80), 1uLL) )
    return (unsigned int)-1073741595;
  return (unsigned int)v11;
}
