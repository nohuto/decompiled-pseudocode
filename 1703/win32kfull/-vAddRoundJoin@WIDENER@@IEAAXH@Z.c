/*
 * XREFs of ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02AAAEC
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C011FB48 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C011F55C (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C011FF2C (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C011FF50 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C011FF94 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0120290 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C01202E8 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C02AA4E4 (-cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02AAFEC (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02AB030 (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 */

void __fastcall WIDENER::vAddRoundJoin(WIDENER *this)
{
  int v2; // r15d
  int v3; // r11d
  BOOL v4; // r13d
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  int v8; // ebx
  struct LINEDATA *v9; // r9
  struct LINEDATA *v10; // r8
  int v11; // r13d
  WIDEPATHOBJ *v12; // rcx
  int v13; // edi
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  __int64 v15; // [rsp+90h] [rbp+50h] BYREF
  char v16; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  v4 = bTurnLeftRandom(
         (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL),
         (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL));
  if ( (*((_DWORD *)this + 10) & 0x10) != 0 || v3 )
  {
    v5 = (__int64 *)WIDENER::vecInDraw(this, &v15);
  }
  else
  {
    v2 = 1;
    v5 = WIDENER::vecInPerp(this, &v14);
  }
  v6 = *v5;
  v14 = *v5;
  if ( v2 )
    v7 = WIDENER::vecOutPerp(this, &v15);
  else
    v7 = (__int64 *)WIDENER::vecOutDraw(this, &v16);
  v15 = *v7;
  v8 = v15;
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)this + 1152),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v14,
    0);
  WIDENER::vAddLeft(this, (struct EVECTORFX *)&v14);
  if ( (_DWORD)v6 != v8 || HIDWORD(v14) != HIDWORD(v15) )
  {
    v9 = (struct LINEDATA *)*((_QWORD *)this + 89);
    v10 = (struct LINEDATA *)*((_QWORD *)this + 88);
    if ( v4 )
    {
      v11 = WIDEPENOBJ::cptAddRound((WIDENER *)((char *)this + 824), this, v10, v9, v4, v2, v2);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 992), (struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
      {
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15);
        if ( v11 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            this,
            *((struct LINEDATA **)this + 89),
            *((struct LINEDATA **)this + 88),
            0,
            v2,
            v2);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v14);
        v12 = (WIDENER *)((char *)this + 992);
LABEL_19:
        WIDEPATHOBJ::vAddPoint(v12, (struct _POINTFIX *)((char *)this + 692));
      }
    }
    else
    {
      v13 = WIDEPENOBJ::cptAddRound((WIDENER *)((char *)this + 824), this, v10, v9, 0, v2, v2);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 1152), (struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
      {
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v15,
          0);
        if ( v13 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            this,
            *((struct LINEDATA **)this + 89),
            *((struct LINEDATA **)this + 88),
            1,
            v2,
            v2);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v14,
          0);
        v12 = (WIDENER *)((char *)this + 1152);
        goto LABEL_19;
      }
    }
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1152),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v15,
      0);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15);
  }
}
