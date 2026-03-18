/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C00E5028
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00E4E48 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C00E5BD0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00E5C20 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00E5CE0 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  __int64 v4; // rbx
  int v5; // r8d
  struct _POINTFIX *v6; // rdi
  struct _POINTFIX *v7; // rbx
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0LL;
  if ( v3 < 576 )
  {
    v4 = 0LL;
  }
  else if ( v3 >= 1600 )
  {
    if ( v3 < 3136 )
    {
      v4 = 32LL;
    }
    else if ( v3 >= 5184 )
    {
      v4 = 80LL;
      if ( v3 < 7744 )
        v4 = 64LL;
    }
    else
    {
      v4 = 48LL;
    }
  }
  else
  {
    v4 = 16LL;
  }
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  v6 = *(struct _POINTFIX **)((char *)&WIDEPENOBJ::ahob + v4);
  v7 = &v6[*(unsigned int *)((char *)&WIDEPENOBJ::ahob + v4 + 8)];
  while ( v6 < v7 )
    WIDEPATHOBJ::vAddPoint(this, v6++, v5);
  WIDEPATHOBJ::vEndFigure(this);
  result = 1LL;
  *((_DWORD *)this + 40) = 1;
  return result;
}
