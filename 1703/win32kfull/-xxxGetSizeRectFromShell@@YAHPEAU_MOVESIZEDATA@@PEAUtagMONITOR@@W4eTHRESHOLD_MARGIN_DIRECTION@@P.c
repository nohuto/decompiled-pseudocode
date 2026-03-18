/*
 * XREFs of ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01F3018
 * Callers:
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F508C (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 * Callees:
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01B5A6C (xxxCallIAMGetArrangementRectangleHandler.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C01EFCAC (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01F02C0 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01F14CC (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 */

__int64 __fastcall xxxGetSizeRectFromShell(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 *v10; // rcx
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rax
  char OverlapCoordinatesForArrangement; // al
  int v16; // eax
  struct tagRECT v18; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-20h] BYREF

  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  v9 = *(_QWORD *)(v8 + 328);
  if ( v9 )
  {
    if ( (*(_DWORD *)(a1 + 324) & 0x18) == 0 )
    {
      v10 = *(__int64 **)a1;
      if ( *(_QWORD *)(v9 + 16) != v10[2] && (unsigned int)(a3 - 1) <= 1 )
      {
        v11 = *(_DWORD *)(a1 + 264);
        if ( (v11 & 8) != 0 )
        {
          v12 = *(_OWORD *)(a1 + 232);
          *(_DWORD *)(a1 + 264) = v11 | 2;
          *(_OWORD *)a4 = v12;
          return (*(_DWORD *)(a1 + 264) >> 1) & 1;
        }
        if ( (unsigned int)xxxCallIAMGetArrangementRectangleHandler(*v10, *(_QWORD *)(a1 + 292), &v18, v20) )
        {
          if ( PtInRect(v20, *(_QWORD *)(a1 + 292)) )
          {
            v13 = *(_QWORD *)(a2 + 40);
            if ( (unsigned int)IntersectRect((int *)v19, &v18.left, (int *)(v13 + 76)) )
            {
              v14 = v19[0] - *(_QWORD *)&v18.left;
              if ( v19[0] == *(_QWORD *)&v18.left )
                v14 = v19[1] - *(_QWORD *)&v18.right;
              if ( !v14 )
              {
                OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                                     (const struct tagRECT *const)(v13 + 76),
                                                     &v18,
                                                     1);
                v16 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
                if ( a3 == 1 )
                {
                  if ( v16 != 63745 )
                    return (*(_DWORD *)(a1 + 264) >> 1) & 1;
                }
                else if ( a3 != 2 || v16 != 63746 )
                {
                  return (*(_DWORD *)(a1 + 264) >> 1) & 1;
                }
                TransformShellProvidedRectangles(
                  (__int64 *)a1,
                  a2,
                  a3,
                  &v18,
                  (__int64)v20,
                  *(_QWORD *)(v8 + 328),
                  a4,
                  a1 + 248);
                *(_DWORD *)(a1 + 264) |= 2u;
              }
            }
          }
        }
      }
    }
  }
  return (*(_DWORD *)(a1 + 264) >> 1) & 1;
}
