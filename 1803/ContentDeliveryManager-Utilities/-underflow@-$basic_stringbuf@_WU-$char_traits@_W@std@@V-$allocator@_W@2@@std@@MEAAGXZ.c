/*
 * XREFs of ?underflow@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@MEAAGXZ @ 0x180034660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstringbuf::underflow(__int64 a1)
{
  unsigned __int16 **v1; // r10
  unsigned __int16 *v3; // r8
  int *v4; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v1 = *(unsigned __int16 ***)(a1 + 56);
  v3 = *v1;
  if ( !*v1 )
    return 0xFFFFLL;
  v4 = *(int **)(a1 + 80);
  if ( v3 < &v3[*v4] )
    return *v3;
  if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
    return 0xFFFFLL;
  v6 = **(_QWORD **)(a1 + 64);
  if ( !v6 || v6 <= (unsigned __int64)v3 && *(_QWORD *)(a1 + 104) <= (unsigned __int64)v3 )
    return 0xFFFFLL;
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 < v6 )
  {
    *(_QWORD *)(a1 + 104) = v6;
    v7 = v6;
    v3 = *v1;
  }
  *v4 = (__int64)(v7 - (_QWORD)v3) >> 1;
  return ***(unsigned __int16 ***)(a1 + 56);
}
