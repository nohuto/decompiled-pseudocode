/*
 * XREFs of ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C011FB48
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C011F858 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C011F55C (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z @ 0x1C011FC8C (-bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C011FF2C (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C011FF50 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C011FF94 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0120290 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C01202E8 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C0121C30 (-bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02AAAEC (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 */

void __fastcall WIDENER::vAddJoin(WIDENER *this, int a2)
{
  int v2; // eax
  struct EVECTORFX *v4; // rdx
  struct EVECTORFX *v5; // rcx
  BOOL v6; // r14d
  int v7; // r8d
  int v8; // r8d
  WIDEPATHOBJ *v9; // rcx
  int v10; // r8d
  BOOL v11; // r14d
  int v12; // r8d
  int v13; // r8d
  WIDEPATHOBJ *v14; // rcx
  int v15; // r8d
  int v16; // [rsp+60h] [rbp+30h] BYREF
  int v17; // [rsp+64h] [rbp+34h]
  int v18; // [rsp+70h] [rbp+40h] BYREF
  int v19; // [rsp+74h] [rbp+44h]
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF

  v2 = *((_DWORD *)this + 328);
  if ( !v2 || a2 )
  {
    WIDENER::vAddRoundJoin(this, a2);
  }
  else
  {
    v4 = (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL);
    v5 = (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL);
    if ( v2 == 1 )
    {
      v11 = bTurnLeftRandom(v5, v4);
      WIDENER::vecInPerp(this, &v16);
      WIDENER::vecOutPerp(this, &v18);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v16, v12);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1152),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v16,
        0);
      if ( v16 != v18 || v17 != v19 )
      {
        v14 = (WIDENER *)((char *)this + 992);
        if ( !v11 )
          v14 = (WIDENER *)((char *)this + 1152);
        WIDEPATHOBJ::vAddPoint(v14, (struct _POINTFIX *)((char *)this + 692), v13);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v18,
          0);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v18, v15);
      }
    }
    else
    {
      v6 = bTurnLeftRandom(v5, v4);
      WIDENER::vecInPerp(this, &v16);
      WIDENER::vecOutPerp(this, &v18);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v16, v7);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1152),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v16,
        0);
      if ( v16 != v18 || v17 != v19 )
      {
        if ( (unsigned int)bComputeIntersect(
                             (struct EVECTORFX *)&v16,
                             (struct EVECTORFX *)(*((_QWORD *)this + 88) + 40LL),
                             (struct EVECTORFX *)&v18,
                             (struct EVECTORFX *)(*((_QWORD *)this + 89) + 40LL),
                             (struct EVECTORFX *)&v20)
          && (unsigned int)WIDENER::bMiterInLimit(this, v20) )
        {
          if ( v6 )
            WIDEPATHOBJ::vAddPoint(
              (WIDENER *)((char *)this + 1152),
              (struct _POINTFIX *)((char *)this + 692),
              (struct EVECTORFX *)&v20,
              0);
          else
            WIDENER::vAddLeft(this, (struct EVECTORFX *)&v20, v8);
        }
        v9 = (WIDENER *)((char *)this + 992);
        if ( !v6 )
          v9 = (WIDENER *)((char *)this + 1152);
        WIDEPATHOBJ::vAddPoint(v9, (struct _POINTFIX *)((char *)this + 692), v8);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v18, v10);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v18,
          0);
      }
    }
  }
}
