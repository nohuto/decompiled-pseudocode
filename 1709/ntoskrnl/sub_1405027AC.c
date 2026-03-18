/*
 * XREFs of sub_1405027AC @ 0x1405027AC
 * Callers:
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 * Callees:
 *     sub_140502844 @ 0x140502844 (sub_140502844.c)
 *     WbReAlloc @ 0x14057672C (WbReAlloc.c)
 */

__int64 __fastcall sub_1405027AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // edx
  __int64 v10; // rcx
  __int64 result; // rax

  v6 = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)(a1 + 16) + 1 < v6 )
    goto LABEL_2;
  result = WbReAlloc(*(PVOID *)(a1 + 24), 32 * v6, 32 * (v6 + *(_DWORD *)(a1 + 32)));
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 20) += *(_DWORD *)(a1 + 32);
LABEL_2:
    v10 = *(_QWORD *)(a1 + 24) + 32LL * *(unsigned int *)(a1 + 16);
    *(_QWORD *)v10 = a2;
    *(_QWORD *)(v10 + 8) = a3;
    *(_QWORD *)(v10 + 16) = a4;
    *(_DWORD *)(v10 + 24) = a5;
    ++*(_DWORD *)(a1 + 16);
    return sub_140502844(a2);
  }
  return result;
}
