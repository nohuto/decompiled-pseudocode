/*
 * XREFs of ?bWiden@WIDENER@@IEAAHXZ @ 0x1C011F858
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011F634 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C011FA30 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C011FABC (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C011FB48 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?bValid@WIDENER@@QEAAHXZ @ 0x1C011FEE0 (-bValid@WIDENER@@QEAAHXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C01200C8 (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0120178 (-vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C01201E0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0120230 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C0120558 (-vNextEvent@LINER@@QEAAXXZ.c)
 *     ?efNextStyleLength@STYLER@@IEAA?AVEFLOAT@@XZ @ 0x1C02AA764 (-efNextStyleLength@STYLER@@IEAA-AVEFLOAT@@XZ.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02AA7A0 (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C02AA828 (-ptfxFraction@@YA-AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ @ 0x1C02AAE0C (-vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall WIDENER::bWiden(WIDENER *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  struct WIDEPATHOBJ *v12; // r10
  WIDEPATHOBJ *v13; // rbx
  char v14; // r10
  float v15; // xmm0_4
  int v16; // eax
  char *v17; // rdx
  WIDENER *v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // r8
  int v21; // xmm0_4
  _DWORD *StyleLength; // rax
  __int64 v23; // r8
  int v24; // xmm0_4
  __int64 v25; // rax
  char v26[4]; // [rsp+20h] [rbp-28h] BYREF
  char v27; // [rsp+24h] [rbp-24h] BYREF
  char v28; // [rsp+50h] [rbp+8h] BYREF
  char v29; // [rsp+58h] [rbp+10h] BYREF
  char v30; // [rsp+60h] [rbp+18h] BYREF
  char v31; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v2 = *((_DWORD *)this + 10);
        if ( (v2 & 2) == 0 )
        {
          LINER::vNextEvent(this);
          goto LABEL_3;
        }
        if ( (v2 & 4) != 0 )
        {
          if ( *((_DWORD *)this + 172) == 5 )
          {
            while ( 1 )
            {
              v19 = *((float *)this + 187);
              if ( v19 < *((float *)this + 186) )
              {
                *((float *)this + 186) = *((float *)this + 186) - *((float *)this + 187);
                *((float *)this + 188) = *((float *)this + 187) + *((float *)this + 188);
                *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                              *(struct _POINTFIX *)((char *)this + 760),
                                                              *((struct LINEDATA **)this + 89),
                                                              (WIDENER *)((char *)this + 752),
                                                              (WIDENER *)((char *)this + 756));
                *((_DWORD *)this + 187) = *(_DWORD *)STYLER::efNextStyleLength(this, &v29);
                *((_DWORD *)this + 172) = 6;
                goto LABEL_3;
              }
              *((float *)this + 187) = v19 - *((float *)this + 186);
              LINER::vNextEvent(this);
              if ( (unsigned int)(*((_DWORD *)this + 172) - 3) > 1 )
                break;
              v20 = *((_QWORD *)this + 89);
              *((_DWORD *)this + 188) = FP_0_0;
              v21 = *(_DWORD *)STYLER::efWorldLength(this, &v28, *(_QWORD *)(v20 + 40));
              *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
              *((_DWORD *)this + 189) = v21;
              *((_DWORD *)this + 186) = v21;
            }
            if ( *((_DWORD *)this + 172) == 1 )
              LINER::vNextEvent(this);
            *((_DWORD *)this + 10) &= ~4u;
            *((_DWORD *)this + 172) = 8;
            goto LABEL_3;
          }
          v15 = *((float *)this + 187);
          if ( v15 <= *((float *)this + 186) )
          {
            *((float *)this + 186) = *((float *)this + 186) - *((float *)this + 187);
            *((float *)this + 188) = *((float *)this + 187) + *((float *)this + 188);
            *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                          *(struct _POINTFIX *)((char *)this + 760),
                                                          *((struct LINEDATA **)this + 89),
                                                          (WIDENER *)((char *)this + 752),
                                                          (WIDENER *)((char *)this + 756));
            *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
            *((_DWORD *)this + 187) = *(_DWORD *)STYLER::efNextStyleLength(this, &v30);
            *((_DWORD *)this + 172) = 5;
            goto LABEL_3;
          }
          *((float *)this + 187) = v15 - *((float *)this + 186);
        }
        LINER::vNextEvent(this);
        v16 = *((_DWORD *)this + 172);
        if ( v16 )
        {
          if ( (unsigned int)(v16 - 3) > 1 )
          {
            *((_DWORD *)this + 10) &= ~4u;
            goto LABEL_3;
          }
          v17 = &v31;
          v18 = this;
        }
        else
        {
          *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
          StyleLength = (_DWORD *)STYLER::efNextStyleLength(this, v26);
          v17 = &v27;
          *((_DWORD *)this + 187) = *StyleLength;
        }
        v23 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 188) = FP_0_0;
        v24 = *(_DWORD *)STYLER::efWorldLength(v18, v17, *(_QWORD *)(v23 + 40));
        v25 = *(_QWORD *)((char *)this + 692);
        *((_DWORD *)this + 10) |= 4u;
        *((_QWORD *)this + 95) = v25;
        *((_DWORD *)this + 186) = v24;
        *((_DWORD *)this + 189) = v24;
LABEL_3:
        v3 = *((_DWORD *)this + 172);
        if ( v3 > 5 )
          break;
        if ( v3 == 5 )
          goto LABEL_19;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( !v6 )
              {
                v7 = 0;
                goto LABEL_10;
              }
              if ( v6 == 1 )
              {
                v7 = 1;
LABEL_10:
                WIDENER::vAddJoin(this, v7);
              }
            }
            else
            {
              WIDENER::vAddJoin(this, 0);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 992));
              v13 = (WIDENER *)((char *)this + 1152);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
              if ( (v14 & 8) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 145) + 40LL) + 16LL) |= 8u;
                if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
                  return 0LL;
                WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), (WIDENER *)((char *)this + 992));
LABEL_26:
                WIDEPATHOBJ::vEndFigure(v13);
                goto LABEL_27;
              }
              if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
                return 0LL;
              WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), (WIDENER *)((char *)this + 992));
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
              WIDEPATHOBJ::vPrependBeforeSubpath((WIDENER *)((char *)this + 1152));
              WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1152));
LABEL_27:
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 40LL) + 16LL) |= 8u;
            }
          }
          else
          {
LABEL_19:
            WIDENER::vAddEndCap(this);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 992));
            if ( !(unsigned int)WIDENER::bValid(this) )
              return 0LL;
            WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), v12);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 145) + 40LL) + 16LL) |= 8u;
            *((_DWORD *)this + 10) |= 8u;
          }
        }
        else
        {
          if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 992))
            || !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
          {
            return 0LL;
          }
          *((_DWORD *)this + 10) &= ~8u;
          *((_QWORD *)this + 163) = *(_QWORD *)(*((_QWORD *)this + 145) + 40LL);
        }
      }
      v8 = v3 - 6;
      if ( !v8 )
        break;
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            return WIDENER::bValid(this);
        }
        else
        {
          if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
            return 0LL;
          WIDENER::vAddStartCap(this);
          WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
          WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1152));
        }
      }
      else if ( !*((_DWORD *)this + 329) )
      {
        v13 = (WIDENER *)((char *)this + 1152);
        if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
          return 0LL;
        WIDENER::vAddStartCap(this);
        WIDENER::vAddEndCap(this);
        goto LABEL_26;
      }
    }
    if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 992))
      || !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
    {
      return 0LL;
    }
    WIDENER::vAddStartCap(this);
  }
}
