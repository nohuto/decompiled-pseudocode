/*
 * XREFs of ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1801DF648
 * Callers:
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@U3@UtagSIZE@@W4CoreKeyboardAlignment@Core@Text@Internal@UI@6@@Z @ 0x1801AF1F4 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@U3@.c)
 * Callees:
 *     ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801DF314 (-VerticallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801DF3D0 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@0@Z @ 0x1801DF490 (-CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_P.c)
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x1801DF514 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Immersive::QueryRelativePosition(
        __int64 a1,
        struct tagRECT *a2,
        __int64 a3,
        LONG *a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v8; // r15d
  LONG v10; // r8d
  LONG v11; // eax
  bool v12; // cc
  LONG v13; // ebx
  unsigned __int64 v14; // r9
  struct tagRECT *v15; // rax
  char v16; // dl
  char v17; // di
  int v18; // r8d
  unsigned int v19; // r13d
  unsigned int v20; // r8d
  BOOL v21; // eax
  int v22; // ecx
  const struct tagRECT *v23; // r9
  unsigned int v24; // r15d
  unsigned int v25; // r15d
  unsigned int v26; // r15d
  const struct tagRECT *v27; // r9
  struct tagRECT v28; // xmm0
  struct tagRECT v29; // xmm0
  LONG top; // r8d
  struct tagRECT v31; // xmm0
  int v32; // ebx
  struct tagRECT v33; // xmm0
  __int64 result; // rax
  char v35; // [rsp+30h] [rbp-59h]
  char v36; // [rsp+31h] [rbp-58h]
  struct tagRECT v37; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-39h]
  int pvParam; // [rsp+58h] [rbp-31h] BYREF
  LONG v40; // [rsp+5Ch] [rbp-2Dh]
  struct tagRECT v41; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v42; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF

  v5 = 1;
  v8 = 1;
  if ( a5 )
    v8 = a5;
  rc = *a2;
  InflateRect(&rc, -5, -5);
  v10 = *(_QWORD *)a3;
  v38 = *(_QWORD *)a3;
  v11 = HIDWORD(v38);
  if ( v10 > rc.right - rc.left )
    v10 = rc.right - rc.left;
  v12 = *(_DWORD *)(a3 + 4) <= rc.bottom - rc.top;
  v13 = a4[2];
  if ( !v12 )
    v11 = rc.bottom - rc.top;
  v38 = __PAIR64__(v11, v10);
  *(_QWORD *)&v41.left = __PAIR64__(v11, v10) >> 32;
  v42.right = 0;
  v42.bottom = v11;
  v40 = *a4;
  v37.left = v40;
  v37.top = a4[1];
  v37.bottom = a4[3];
  v42.right = v10;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)&v42.left = 0LL;
  v37.right = v13;
  if ( !Windows::UI::Immersive::CanPositionRelativeOnSide(&v37.left, &v42, v8, &rc) )
  {
    v16 = 0;
    v17 = 0;
    v35 = 0;
    v18 = 1;
    v19 = 4;
    if ( v8 == 1 )
    {
      v18 = 2;
    }
    else if ( v8 != 2 )
    {
      if ( v8 == 3 )
      {
        v18 = 4;
      }
      else
      {
        if ( v8 != 4 )
          goto LABEL_19;
        v18 = 3;
      }
      v17 = 1;
LABEL_19:
      v36 = v16;
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v37.left, &v42, v18, &rc) )
      {
        v14 = v20;
        goto LABEL_9;
      }
      if ( v8 - 3 <= 1 )
      {
        v19 = 1;
        v35 = 1;
      }
      else
      {
        pvParam = 1;
        v21 = SystemParametersInfoW(0x1Bu, 0, &pvParam, 0);
        v22 = pvParam;
        if ( !v21 )
          v22 = 1;
        if ( !v22 )
        {
          v19 = 3;
          v17 = 1;
        }
      }
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v37.left, &v42, v19, &rc) )
      {
        v14 = v19;
        goto LABEL_9;
      }
      if ( v35 )
      {
        if ( v36 )
          v5 = (v17 != 0) + 3;
        else
          v5 = 2;
      }
      if ( Windows::UI::Immersive::CanPositionRelativeOnSide(&v37.left, &v42, v5, &rc) )
      {
        v14 = v5;
        goto LABEL_9;
      }
      v24 = v8 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 != 1 )
            {
LABEL_46:
              v15 = Windows::UI::Immersive::ShiftRectIntoContainer(&v37, &rc, (struct tagRECT *)a1, v23);
              goto LABEL_47;
            }
            v41 = v42;
            OffsetRect(&v41, rc.right - v38, _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v42, 4)));
            v28 = v41;
          }
          else
          {
            OffsetRect(
              &v42,
              rc.left - _mm_cvtsi128_si32((__m128i)v42),
              _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v42, 4)));
            v28 = v42;
          }
          *(struct tagRECT *)a1 = v28;
          v29 = *Windows::UI::Immersive::VerticallyCenterRect(&v42, &v37, (struct tagRECT *)a1, v27);
LABEL_45:
          *(struct tagRECT *)a1 = v29;
          goto LABEL_46;
        }
        top = rc.bottom + v42.top - v41.left;
      }
      else
      {
        top = rc.top;
      }
      v37 = v42;
      OffsetRect(&v37, 0, top);
      v31 = v37;
      *(struct tagRECT *)a1 = v37;
      v32 = v40 + v13 - *(_DWORD *)(a1 + 8) - *(_DWORD *)a1;
      v37 = v31;
      OffsetRect(&v37, v32 / 2, 0);
      v29 = v37;
      goto LABEL_45;
    }
    v16 = 1;
    v35 = 1;
    goto LABEL_19;
  }
  v14 = v8;
LABEL_9:
  v15 = Windows::UI::Immersive::PositionRelativeOnSide(&v41, &v37, &v42, (const struct tagRECT *)v14, &rc);
LABEL_47:
  v33 = *v15;
  result = a1;
  *(struct tagRECT *)a1 = v33;
  return result;
}
