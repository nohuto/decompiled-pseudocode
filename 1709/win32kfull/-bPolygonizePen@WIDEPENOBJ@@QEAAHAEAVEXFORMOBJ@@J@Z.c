/*
 * XREFs of ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00E4E48
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E5198 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C00E4CB4 (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C00E5028 (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00E5C64 (-bValid@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C013B394 (-bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C013B4F0 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C013B63C (-vHalve@@YAXAEAVEVECTORFX@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall WIDEPENOBJ::bPolygonizePen(WIDEPENOBJ *this, struct EXFORMOBJ *a2, unsigned int a3)
{
  FIX x; // ecx
  FIX y; // edx
  FIX v6; // eax
  FIX v7; // r8d
  int v8; // ebx
  int v9; // r11d
  int v10; // r10d
  int v11; // r9d
  struct _POINTFIX v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  struct _POINTFIX v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+38h] [rbp-38h]
  int v17; // [rsp+3Ch] [rbp-34h]
  int v18; // [rsp+40h] [rbp-30h]
  int v19; // [rsp+44h] [rbp-2Ch]
  __int64 v20; // [rsp+48h] [rbp-28h]
  int v21; // [rsp+50h] [rbp-20h]
  int v22; // [rsp+54h] [rbp-1Ch]
  int v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+5Ch] [rbp-14h]
  int v25; // [rsp+60h] [rbp-10h]
  int v26; // [rsp+64h] [rbp-Ch]

  LODWORD(v14) = 0;
  v13 = (struct _POINTFIX)a3;
  HIDWORD(v14) = -a3;
  EXFORMOBJ::bXform(a2, (struct _VECTORL *)&v13, (struct _VECTORFX *)&v13, 2uLL);
  x = v13.x;
  y = v13.y;
  if ( v13 == __PAIR64__(-(int)v14, HIDWORD(v14)) || v13 == __PAIR64__(v14, -HIDWORD(v14)) )
  {
    v6 = v13.x;
    if ( v13.x < 0 )
      v6 = -v13.x;
    v7 = v13.y;
    if ( v13.y < 0 )
      v7 = -v13.y;
    if ( v6 <= v7 )
    {
      if ( v13.y < 0 )
        y = -v13.y;
      x = y;
    }
    else if ( v13.x < 0 )
    {
      x = -v13.x;
    }
    if ( x < 104 )
    {
      if ( (unsigned int)WIDEPENOBJ::bHobbyize(this, (struct EVECTORFX *const)&v13) )
        return 1LL;
      if ( !(unsigned int)WIDEPATHOBJ::bValid(this) )
        return 0LL;
    }
  }
  if ( (unsigned int)WIDEPENOBJ::bThicken(this, &v13) )
    return 1LL;
  if ( !(unsigned int)WIDEPATHOBJ::bValid(this) )
    return 0LL;
  if ( !bTurnLeftRandom((struct EVECTORFX *)&v13, (struct EVECTORFX *)&v14) )
  {
    LODWORD(v14) = -(int)v14;
    HIDWORD(v14) = -HIDWORD(v14);
  }
  vHalve((struct EVECTORFX *)&v13);
  vHalve((struct EVECTORFX *)&v14);
  v8 = v13.x - ((unsigned __int64)(1922922357LL * v13.x) >> 32);
  v9 = v13.y - ((unsigned __int64)(1922922357LL * v13.y) >> 32);
  v26 = -v13.y;
  v22 = HIDWORD(v14) - v9;
  v19 = v9 + HIDWORD(v14);
  v20 = v14;
  v10 = v14 - ((unsigned __int64)(1922922357LL * (int)v14) >> 32);
  v15 = v13;
  v11 = HIDWORD(v14) - ((unsigned __int64)(1922922357LL * SHIDWORD(v14)) >> 32);
  v17 = v11 + v13.y;
  v25 = -v13.x;
  v24 = v11 - v13.y;
  v23 = v10 - v13.x;
  v21 = v14 - v8;
  v18 = v8 + v14;
  v16 = v10 + v13.x;
  return WIDEPENOBJ::bPenFlatten(this, &v15);
}
