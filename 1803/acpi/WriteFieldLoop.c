/*
 * XREFs of WriteFieldLoop @ 0x1C004DF60
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     PushAccFieldObj @ 0x1C004CFE0 (PushAccFieldObj.c)
 */

__int64 __fastcall WriteFieldLoop(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rcx

  v3 = a3;
  if ( a3 )
    v6 = 1;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return v3;
    goto LABEL_12;
  }
  v7 = *(_DWORD *)(a2 + 56);
  if ( !v7 )
  {
    ++*(_DWORD *)(a2 + 16);
LABEL_12:
    v10 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v10 + 8);
    HeapFree(v10);
    return v3;
  }
  if ( *(_DWORD *)(a2 + 60) <= v7 )
    v7 = *(_DWORD *)(a2 + 60);
  v8 = v7;
  v9 = PushAccFieldObj(
         a1,
         (__int64)WriteFieldObj,
         *(_QWORD *)(a2 + 32),
         *(_DWORD **)(a2 + 40),
         *(_QWORD *)(a2 + 48),
         v7);
  *(_DWORD *)(a2 + 56) -= v8;
  v3 = v9;
  *(_QWORD *)(a2 + 48) += v8;
  return v3;
}
