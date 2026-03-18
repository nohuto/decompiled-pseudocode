/*
 * XREFs of vEfToLfx @ 0x1C023A53C
 * Callers:
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C023A224 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vEfToLfx(int *a1, __int64 *a2)
{
  __int64 v2; // r8
  char v3; // al
  __int64 v4; // r8
  __int64 result; // rax

  v2 = *a1 & 0x7FFFFF | 0x800000LL;
  v3 = (*a1 >> 23) - 118;
  if ( v3 < 0 )
    v4 = v2 >> (118 - (unsigned __int8)(*a1 >> 23));
  else
    v4 = v2 << v3;
  result = -v4;
  if ( *a1 >= 0 )
    result = v4;
  *a2 = result;
  return result;
}
