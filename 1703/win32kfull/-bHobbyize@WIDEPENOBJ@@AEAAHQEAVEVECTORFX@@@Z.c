/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C0120C9C
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C012086C (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C01201E0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0120230 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C01202E8 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  __int64 v4; // rbx
  __int64 v5; // rbx
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
  else if ( v3 < 1600 )
  {
    v4 = 1LL;
  }
  else if ( v3 < 3136 )
  {
    v4 = 2LL;
  }
  else
  {
    v4 = v3 >= 5184 ? (v3 >= 7744) + 4LL : 3LL;
  }
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  v5 = 2 * v4;
  v6 = (struct _POINTFIX *)*(&WIDEPENOBJ::ahob + v5);
  v7 = &v6[*((unsigned int *)&WIDEPENOBJ::ahob + 2 * v5 + 2)];
  while ( v6 < v7 )
    WIDEPATHOBJ::vAddPoint(this, v6++);
  WIDEPATHOBJ::vEndFigure(this);
  result = 1LL;
  *((_DWORD *)this + 40) = 1;
  return result;
}
