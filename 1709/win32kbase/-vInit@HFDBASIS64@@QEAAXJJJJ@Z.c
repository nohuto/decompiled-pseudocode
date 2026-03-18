/*
 * XREFs of ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C00F1A28
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00F1430 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z @ 0x1C00F18E0 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vInit(HFDBASIS64 *this, int a2, int a3, int a4, int a5)
{
  __int64 v5; // r11
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx

  v5 = a3;
  v7 = a2;
  v8 = v5;
  *(_QWORD *)this = a2;
  v9 = a4;
  v10 = 2LL;
  *((_QWORD *)this + 1) = a5;
  v11 = 2LL;
  *((_QWORD *)this + 2) = v5;
  do
  {
    v8 -= v9;
    --v11;
  }
  while ( v11 );
  *((_QWORD *)this + 3) = v7;
  *((_QWORD *)this + 2) = a5 + v8;
  v12 = v7;
  do
  {
    v12 -= v5;
    --v10;
  }
  while ( v10 );
  *((_QWORD *)this + 1) = (a5 - v7) << 28;
  v13 = *((_QWORD *)this + 2);
  *(_QWORD *)this = v7 << 28;
  *((_QWORD *)this + 3) = 1610612736 * (v12 + v9);
  *((_QWORD *)this + 2) = 1610612736 * v13;
}
