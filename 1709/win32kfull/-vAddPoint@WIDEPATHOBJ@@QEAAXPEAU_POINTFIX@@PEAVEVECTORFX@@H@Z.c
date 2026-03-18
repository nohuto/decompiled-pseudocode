/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C00E5C80
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00E5590 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C00E597C (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C013F814 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C013F8A0 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02A6F88 (-vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02A7154 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02A7388 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall WIDEPATHOBJ::vAddPoint(WIDEPATHOBJ *this, struct _POINTFIX *a2, struct EVECTORFX *a3, int a4)
{
  _DWORD *v4; // r11
  int v6; // ecx

  v4 = (_DWORD *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)v4 >= *((_QWORD *)this + 18) )
  {
    WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, a3, a4);
  }
  else
  {
    if ( a4 )
    {
      *v4 = a2->x - *(_DWORD *)a3;
      v6 = a2->y - *((_DWORD *)a3 + 1);
    }
    else
    {
      *v4 = *(_DWORD *)a3 + a2->x;
      v6 = *((_DWORD *)a3 + 1) + a2->y;
    }
    *(_DWORD *)(*((_QWORD *)this + 17) + 4LL) = v6;
    *((_QWORD *)this + 17) += 8LL;
  }
}
