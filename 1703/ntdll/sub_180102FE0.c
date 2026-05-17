/*
 * XREFs of sub_180102FE0 @ 0x180102FE0
 * Callers:
 *     sub_180093A28 @ 0x180093A28 (sub_180093A28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180102FE0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 386) == 2 )
    v3 = *(_QWORD *)(a1 + 376);
  else
    v3 = 0LL;
  *(_QWORD *)a2 = v3;
  *(_QWORD *)(a2 + 8) = 3264LL;
  *(_DWORD *)(a2 + 16) = -2147352576;
  v4 = *(_DWORD *)(v3 + 40) - v3;
  *a3 = 0;
  *(_DWORD *)(a2 + 24) = v4;
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(v3 + 48) - *(_DWORD *)(v3 + 40);
  *(_QWORD *)(a2 + 32) = v3;
  result = *(_QWORD *)(v3 + 48);
  *(_QWORD *)(a2 + 40) = result;
  return result;
}
