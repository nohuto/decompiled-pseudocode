/*
 * XREFs of ?vError@HFDBASIS64@@QEAAXPEA_J@Z @ 0x1C00F189C
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00F1430 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z @ 0x1C00F18E0 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  bool v7; // sf

  v2 = *((_QWORD *)this + 2);
  v4 = v2;
  if ( v2 < 0 )
    v4 = -v2;
  v5 = *((_QWORD *)this + 3);
  v6 = v5;
  if ( v5 < 0 )
    v6 = -v5;
  if ( v4 <= v6 )
  {
    v2 = v5;
    v7 = v5 < 0;
  }
  else
  {
    v7 = v2 < 0;
  }
  if ( v7 )
    v2 = -v2;
  *a2 = v2;
}
