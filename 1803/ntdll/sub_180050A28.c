/*
 * XREFs of sub_180050A28 @ 0x180050A28
 * Callers:
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180050A28(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  int v3; // r8d
  char v4; // cl
  unsigned int v5; // r8d
  int v6; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v3 = (*(_DWORD *)(a1 + 52) >> 20) & 0xF;
  v4 = v3 - 1;
  if ( !v3 )
    v4 = 0;
  v5 = 1 << v4;
  v6 = 16;
  *a2 = v5;
  if ( v5 >= 0x10 )
    v6 = v5;
  else
    *a2 = 16;
  result = v2;
  *a2 = v6 - 1;
  return result;
}
