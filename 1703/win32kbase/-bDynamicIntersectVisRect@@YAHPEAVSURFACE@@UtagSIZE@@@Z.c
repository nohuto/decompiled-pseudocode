/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0090C2C
 * Callers:
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     GreIntersectVisRect @ 0x1C00FC860 (GreIntersectVisRect.c)
 */

__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  LONG cy; // ebp
  HDC v4; // rdi
  __int64 Objt; // rax
  __int64 result; // rax

  cy = a2.cy;
  LODWORD(v4) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt((unsigned int)v4, 1);
    if ( !Objt )
      break;
    v4 = *(HDC *)Objt;
    if ( (*(_DWORD *)(Objt + 36) & 0x2000) == 0 && *(struct SURFACE **)(Objt + 512) == a1 )
    {
      if ( *(_QWORD *)(Objt + 1536) )
      {
        result = GreIntersectVisRect(v4, cy);
        if ( !(_DWORD)result )
          return result;
      }
    }
  }
  return 1LL;
}
