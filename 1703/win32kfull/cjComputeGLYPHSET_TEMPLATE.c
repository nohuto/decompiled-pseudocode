/*
 * XREFs of cjComputeGLYPHSET_TEMPLATE @ 0x1C0229AB8
 * Callers:
 *     bLoadGlyphSet @ 0x1C0227A40 (bLoadGlyphSet.c)
 * Callees:
 *     EngComputeGlyphSet @ 0x1C00DE690 (EngComputeGlyphSet.c)
 *     pgsetComputeSymbolCP @ 0x1C02252C0 (pgsetComputeSymbolCP.c)
 *     fs_WinNTGetGlyphIDs @ 0x1C02BC250 (fs_WinNTGetGlyphIDs.c)
 */

__int64 __fastcall cjComputeGLYPHSET_TEMPLATE(int a1, _QWORD *a2, int a3, int a4)
{
  int v7; // r9d
  int v8; // r9d
  unsigned int *v10; // rax
  INT v11; // ecx
  unsigned int *v12; // rbx
  int v13; // edi
  __int64 v14; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  v7 = a4 - 1;
  if ( !v7 )
  {
    v11 = 10000;
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = 0;
LABEL_8:
    v10 = (unsigned int *)EngComputeGlyphSet(v11, 0, 256);
    goto LABEL_9;
  }
  if ( v8 != 2 )
    return 0LL;
  v10 = (unsigned int *)pgsetComputeSymbolCP();
LABEL_9:
  v12 = v10;
  if ( !v10 )
    return 0LL;
  v13 = 0;
  v10[1] = 4;
  if ( v10[3] )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)&v12[4 * v13 + 6];
      if ( (unsigned int)fs_WinNTGetGlyphIDs(a1, HIWORD(v12[4 * v13 + 4]), 0, a3, v14, v14) )
        break;
      if ( ++v13 >= v12[3] )
        goto LABEL_13;
    }
    EngFreeMem(v12);
    return 0LL;
  }
LABEL_13:
  *a2 = v12;
  return *v12;
}
