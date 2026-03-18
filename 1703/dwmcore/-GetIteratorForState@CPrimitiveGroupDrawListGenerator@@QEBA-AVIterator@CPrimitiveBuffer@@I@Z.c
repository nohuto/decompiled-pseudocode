/*
 * XREFs of ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800094D0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18015C6E4 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GetIteratorForState(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-A8h]
  __int128 v10; // [rsp+10h] [rbp-98h]

  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 24);
  v5 = 144LL * a3 + *v3;
  v9 = *(_OWORD *)v5;
  v10 = *(_OWORD *)(v5 + 16);
  *(_QWORD *)a2 = v4;
  LODWORD(v5) = 100 * v9 + 48;
  *(_DWORD *)(a2 + 24) = v5;
  v6 = *v4 + (unsigned int)v10;
  v7 = (unsigned int)(v5 * (DWORD1(v10) - 1));
  result = a2;
  *(_QWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 16) = v6 + v7;
  return result;
}
