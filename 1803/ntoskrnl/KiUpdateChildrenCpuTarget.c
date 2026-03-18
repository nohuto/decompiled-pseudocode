/*
 * XREFs of KiUpdateChildrenCpuTarget @ 0x14024ACBC
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x1400A7CCC (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400A7E68 (KiUpdateCpuTargetByRate.c)
 * Callees:
 *     KiUpdateCpuTargetByWeight @ 0x1400A7CCC (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400A7E68 (KiUpdateCpuTargetByRate.c)
 */

char __fastcall KiUpdateChildrenCpuTarget(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  char v3; // si
  unsigned __int16 *v5; // rcx
  char result; // al

  v2 = *a1;
  v3 = a2;
  do
  {
    v5 = (unsigned __int16 *)(v2 - 7);
    LOBYTE(a2) = v3;
    if ( (*((_DWORD *)v2 - 13) & 1) != 0 )
      result = KiUpdateCpuTargetByRate(v5, a2);
    else
      result = KiUpdateCpuTargetByWeight((LARGE_INTEGER *)v5, a2);
    v2 = (_QWORD *)*v2;
  }
  while ( v2 != a1 );
  return result;
}
