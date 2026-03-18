/*
 * XREFs of ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C02A7008
 * Callers:
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C013F814 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C013F8A0 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02A6F88 (-vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall WIDEPENOBJ::vAddRoundEndCap(WIDEPENOBJ *this, struct WIDENER *a2, struct LINEDATA *a3, int a4, int a5)
{
  int v5; // ebx
  WIDEPENOBJ *v8; // r13
  _QWORD *v9; // r14
  int v10; // ebx
  __int64 v11; // rdi
  struct EVECTORFX *i; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  struct EVECTORFX *v15; // r15

  v5 = *(_DWORD *)a3;
  v8 = this;
  if ( a4 )
    LOBYTE(v5) = ~(_BYTE)v5;
  v9 = (_QWORD *)*((_QWORD *)a3 + 1);
  v10 = v5 & 1;
  v11 = *((_QWORD *)a3 + 2);
  if ( !a5 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
    vAddNice(
      (struct WIDENER *)((char *)a2 + 1152),
      (struct _POINTFIX *)((char *)a2 + 692),
      *((struct EVECTORFX **)a3 + 2),
      v10);
  for ( i = (struct EVECTORFX *)(v11 + 8); ; i = (struct EVECTORFX *)(v9 + 4) )
  {
    v13 = *((_QWORD *)a3 + 1);
    if ( v9 == (_QWORD *)v13 )
    {
      v14 = *((_QWORD *)a3 + 2);
      if ( (unsigned __int64)i <= v14 )
        break;
    }
    v15 = (struct EVECTORFX *)&v9[(unsigned int)(*(_DWORD *)(v13 + 20) - 1) + 3];
    if ( i < v15 )
    {
      do
      {
        vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v10);
        i = (struct EVECTORFX *)((char *)i + 8);
      }
      while ( i < v15 );
      v8 = this;
    }
    v9 = (_QWORD *)*v9;
    if ( !v9 )
    {
      v9 = *(_QWORD **)(*((_QWORD *)v8 + 1) + 32LL);
      v10 = v10 == 0;
    }
  }
  if ( (unsigned __int64)i < v14 )
  {
    do
    {
      vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v10);
      i = (struct EVECTORFX *)((char *)i + 8);
    }
    while ( (unsigned __int64)i < *((_QWORD *)a3 + 2) );
  }
  if ( !a5 && *((_QWORD *)a3 + 3) > *((_QWORD *)a3 + 4) )
    vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v10);
}
