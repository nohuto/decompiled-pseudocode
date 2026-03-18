/*
 * XREFs of ?vScale@ERECTL@@QEAAXVPOINTFL@@@Z @ 0x1C024F0D0
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C008CCDC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

__int64 __fastcall ERECTL::vScale(int *a1, __int64 a2)
{
  int *v2; // r14
  int v3; // ebp
  int *v4; // rsi
  int v5; // r15d
  int *v6; // rdi
  int v7; // r12d
  __int64 result; // rax
  char v10; // r8
  char v11; // r8
  char v12; // r8

  v2 = a1 + 1;
  v3 = a1[1];
  v4 = a1 + 2;
  v5 = a1[2];
  v6 = a1 + 3;
  v7 = a1[3];
  result = bFToL((float)*a1 * *(float *)&a2, a1, 6);
  if ( !(_DWORD)result
    || (result = bFToL((float)v3 * *((float *)&a2 + 1), v2, v10), !(_DWORD)result)
    || (result = bFToL((float)v5 * *(float *)&a2, v4, v11), !(_DWORD)result)
    || (result = bFToL((float)v7 * *((float *)&a2 + 1), v6, v12), !(_DWORD)result) )
  {
    *v6 = 0;
    *v4 = 0;
    *v2 = 0;
    *a1 = 0;
  }
  return result;
}
