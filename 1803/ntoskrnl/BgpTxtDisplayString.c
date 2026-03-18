/*
 * XREFs of BgpTxtDisplayString @ 0x140841398
 * Callers:
 *     BgDisplayString @ 0x14083F84C (BgDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 *     BgpFoGetTextMetrics @ 0x1401657AC (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x140165AAC (BgpGxFillRectangle.c)
 *     BgpRasPrintGlyph @ 0x140173ACC (BgpRasPrintGlyph.c)
 *     BgpFoGetAdvanceWidth @ 0x1402C623C (BgpFoGetAdvanceWidth.c)
 *     BgpGxRectangleCreate @ 0x14083C2B0 (BgpGxRectangleCreate.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
 *     BgpGxBlendRectangle @ 0x140840A84 (BgpGxBlendRectangle.c)
 *     BgpTxtClearRegion @ 0x140841368 (BgpTxtClearRegion.c)
 *     TxtpJustifyRectangle @ 0x140841658 (TxtpJustifyRectangle.c)
 */

__int64 __fastcall BgpTxtDisplayString(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v6; // r14
  int AdvanceWidth; // ebx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  unsigned __int16 *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  _DWORD *v17; // r15
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // r13d
  int v21; // eax
  unsigned int *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v29; // [rsp+38h] [rbp-28h]
  _DWORD v30[4]; // [rsp+50h] [rbp-10h] BYREF
  _DWORD *v31; // [rsp+A0h] [rbp+40h] BYREF
  int v32; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h] BYREF

  v33 = a4;
  v32 = a3;
  v6 = a2;
  v31 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 64) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 68) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v8 )
      {
        v11 = a1 + 40;
        v12 = a2;
        while ( 1 )
        {
          AdvanceWidth = BgpFoGetAdvanceWidth(v11, *v12, (int)&v32, a4, 0LL);
          if ( AdvanceWidth < 0 )
            break;
          v9 += v32;
          v11 = a1 + 40;
          ++v10;
          ++v12;
          if ( v10 >= (unsigned int)v8 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        AdvanceWidth = BgpFoGetTextMetrics(a1 + 40, (__int64)&a5);
        if ( AdvanceWidth >= 0 )
        {
          v13 = *(_DWORD *)(a1 + 12);
          v14 = HIDWORD(a5);
          v30[2] = v9;
          if ( HIDWORD(a5) > v13 )
            v14 = v13;
          v15 = *(_DWORD *)(a1 + 8);
          v30[1] = v14;
          if ( v9 > v15 )
            v9 = v15;
          v30[0] = v9;
          v16 = BgpGxRectangleCreate(v30, 32, (__int64 *)&v31);
          v17 = v31;
          AdvanceWidth = v16;
          if ( v16 >= 0 )
          {
            BgpGxFillRectangle((__int64)v31, *(_DWORD *)(a1 + 40));
            v18 = 0;
            v19 = 0;
            v20 = 0;
            v33 = 0LL;
            if ( (_DWORD)v8 )
            {
              while ( 1 )
              {
                v21 = BgpRasPrintGlyph((__int64)v17, a1 + 40, *v6, v18, v19, 0, &v32, v29, 0LL);
                AdvanceWidth = v21;
                if ( v21 == -2147483643 )
                  break;
                if ( v21 < 0 )
                  goto LABEL_30;
                v18 = v32 + v33;
                LODWORD(v33) = v18;
                if ( v18 > v9 )
                  break;
                ++v20;
                ++v6;
                if ( v20 >= (unsigned int)v8 )
                  break;
                v19 = HIDWORD(v33);
              }
            }
            TxtpJustifyRectangle(a1, v30, &v33);
            v22 = *(unsigned int **)(a1 + 24);
            v31 = 0LL;
            v23 = BgpGxBlendRectangle(v22, v17, (int *)&v33, (__int64 *)&v31);
            v26 = (__int64)v31;
            AdvanceWidth = v23;
            if ( v23 >= 0 )
            {
              AdvanceWidth = BgpTxtClearRegion(a1, v24, v25);
              if ( AdvanceWidth >= 0 )
              {
                HIDWORD(v33) = *(_DWORD *)(a1 + 4);
                LODWORD(v33) = *(_DWORD *)a1 + v33;
                AdvanceWidth = BgpGxDrawRectangle(v26, (__int64)&v33, v27);
              }
            }
            if ( v26 )
              BgpGxRectangleDestroy(v26);
          }
LABEL_30:
          if ( v17 )
            BgpGxRectangleDestroy((__int64)v17);
        }
      }
    }
  }
  else
  {
    return (unsigned int)BgpTxtClearRegion(a1, 0LL, a3);
  }
  return (unsigned int)AdvanceWidth;
}
