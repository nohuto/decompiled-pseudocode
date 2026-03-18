/*
 * XREFs of ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00E53B8
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E5198 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00E5590 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?bValid@WIDENER@@QEAAHXZ @ 0x1C00E5930 (-bValid@WIDENER@@QEAAHXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C00E5B20 (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C00E5BD0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00E5C20 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C00E5F58 (-vNextEvent@LINER@@QEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C013F814 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C013F8A0 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C013FCE4 (-vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?efNextStyleLength@STYLER@@IEAA?AVEFLOAT@@XZ @ 0x1C02A6DD0 (-efNextStyleLength@STYLER@@IEAA-AVEFLOAT@@XZ.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02A6E0C (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C02A6E94 (-ptfxFraction@@YA-AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ @ 0x1C02A7474 (-vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ.c)
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
  WIDEPATHOBJ *v12; // rbx
  WIDEPATHOBJ *v13; // rcx
  char v14; // r10
  struct WIDEPATHOBJ *v15; // r10
  float v16; // xmm0_4
  int v17; // eax
  char *v18; // rdx
  WIDENER *v19; // rcx
  float v20; // xmm0_4
  int v21; // ecx
  __int64 v22; // r8
  int v23; // xmm0_4
  _DWORD *StyleLength; // rax
  __int64 v25; // r8
  int v26; // xmm0_4
  __int64 v27; // rax
  char v28[4]; // [rsp+20h] [rbp-28h] BYREF
  char v29; // [rsp+24h] [rbp-24h] BYREF
  char v30; // [rsp+50h] [rbp+8h] BYREF
  char v31; // [rsp+58h] [rbp+10h] BYREF
  char v32; // [rsp+60h] [rbp+18h] BYREF
  char v33; // [rsp+68h] [rbp+20h] BYREF

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
              v20 = *((float *)this + 187);
              if ( v20 < *((float *)this + 186) )
              {
                *((float *)this + 186) = *((float *)this + 186) - *((float *)this + 187);
                *((float *)this + 188) = *((float *)this + 187) + *((float *)this + 188);
                *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                              *(struct _POINTFIX *)((char *)this + 760),
                                                              *((struct LINEDATA **)this + 89),
                                                              (WIDENER *)((char *)this + 752),
                                                              (WIDENER *)((char *)this + 756));
                *((_DWORD *)this + 187) = *(_DWORD *)STYLER::efNextStyleLength(this, &v31);
                *((_DWORD *)this + 172) = 6;
                goto LABEL_3;
              }
              *((float *)this + 187) = v20 - *((float *)this + 186);
              LINER::vNextEvent(this);
              v21 = *((_DWORD *)this + 172);
              if ( (unsigned int)(v21 - 3) > 1 )
                break;
              v22 = *((_QWORD *)this + 89);
              *((_DWORD *)this + 188) = FP_0_0;
              v23 = *(_DWORD *)STYLER::efWorldLength(this, &v30, *(_QWORD *)(v22 + 40));
              *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
              *((_DWORD *)this + 189) = v23;
              *((_DWORD *)this + 186) = v23;
            }
            if ( v21 == 1 )
              LINER::vNextEvent(this);
            *((_DWORD *)this + 10) &= ~4u;
            *((_DWORD *)this + 172) = 8;
            goto LABEL_3;
          }
          v16 = *((float *)this + 187);
          if ( v16 <= *((float *)this + 186) )
          {
            *((float *)this + 186) = *((float *)this + 186) - *((float *)this + 187);
            *((float *)this + 188) = *((float *)this + 187) + *((float *)this + 188);
            *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                          *(struct _POINTFIX *)((char *)this + 760),
                                                          *((struct LINEDATA **)this + 89),
                                                          (WIDENER *)((char *)this + 752),
                                                          (WIDENER *)((char *)this + 756));
            *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
            *((_DWORD *)this + 187) = *(_DWORD *)STYLER::efNextStyleLength(this, &v32);
            *((_DWORD *)this + 172) = 5;
            goto LABEL_3;
          }
          *((float *)this + 187) = v16 - *((float *)this + 186);
        }
        LINER::vNextEvent(this);
        v17 = *((_DWORD *)this + 172);
        if ( v17 )
        {
          if ( (unsigned int)(v17 - 3) > 1 )
          {
            *((_DWORD *)this + 10) &= ~4u;
            goto LABEL_3;
          }
          v18 = &v33;
          v19 = this;
        }
        else
        {
          *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
          StyleLength = (_DWORD *)STYLER::efNextStyleLength(this, v28);
          v18 = &v29;
          *((_DWORD *)this + 187) = *StyleLength;
        }
        v25 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 188) = FP_0_0;
        v26 = *(_DWORD *)STYLER::efWorldLength(v19, v18, *(_QWORD *)(v25 + 40));
        v27 = *(_QWORD *)((char *)this + 692);
        *((_DWORD *)this + 10) |= 4u;
        *((_QWORD *)this + 95) = v27;
        *((_DWORD *)this + 186) = v26;
        *((_DWORD *)this + 189) = v26;
LABEL_3:
        v3 = *((_DWORD *)this + 172);
        if ( v3 > 5 )
          break;
        if ( v3 == 5 )
          goto LABEL_23;
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
              v12 = (WIDENER *)((char *)this + 1152);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
              v13 = (WIDENER *)((char *)this + 1152);
              if ( (v14 & 8) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 145) + 40LL) + 16LL) |= 8u;
                if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(v13) )
                  return 0LL;
                WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), (WIDENER *)((char *)this + 992));
                goto LABEL_22;
              }
              if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(v13) )
                return 0LL;
              WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), (WIDENER *)((char *)this + 992));
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
              WIDEPATHOBJ::vPrependBeforeSubpath((WIDENER *)((char *)this + 1152));
              WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1152));
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 145) + 40LL) + 16LL) |= 8u;
            }
          }
          else
          {
LABEL_23:
            WIDENER::vAddEndCap(this);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 992));
            if ( !(unsigned int)WIDENER::bValid(this) )
              return 0LL;
            WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), v15);
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
        v12 = (WIDENER *)((char *)this + 1152);
        if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
          return 0LL;
        WIDENER::vAddStartCap(this);
        WIDENER::vAddEndCap(this);
LABEL_22:
        WIDEPATHOBJ::vEndFigure(v12);
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 145) + 40LL) + 16LL) |= 8u;
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
