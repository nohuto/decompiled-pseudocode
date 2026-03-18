/*
 * XREFs of ?vParentError@HFDBASIS64@@QEAAXPEA_J@Z @ 0x1C00F1ABC
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00F1430 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // rax
  signed __int64 v5; // r11
  __int64 v6; // rdx
  __int64 v7; // r8

  v2 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 2);
  v5 = abs64(4 * v2);
  v6 = 8 * v4 - 4 * v2;
  if ( v6 >= 0 )
    v7 = 8LL * *((_QWORD *)this + 2) - 4 * v2;
  else
    v7 = 4 * v2 - 8 * v4;
  if ( v5 <= v7 )
  {
    if ( v6 < 0 )
      v6 = 4 * v2 - 8 * v4;
  }
  else
  {
    v6 = -4LL * *((_QWORD *)this + 3);
    if ( (*((_QWORD *)this + 3) & 0x2000000000000000LL) == 0 )
      v6 = 4LL * *((_QWORD *)this + 3);
  }
  *a2 = v6;
}
