/*
 * XREFs of ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01D24D8
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D1E4C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D2B58 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?_GetRectForLocation@Edgy@@YA?AUtagRECT@@AEBU2@W4tagEDGY_LOCATION@@K@Z @ 0x1C01D2464 (-_GetRectForLocation@Edgy@@YA-AUtagRECT@@AEBU2@W4tagEDGY_LOCATION@@K@Z.c)
 */

_QWORD *__fastcall Edgy::_HitTestEdgyRegion(
        _QWORD *a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  __int64 v6; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // ebp
  __int64 v12; // r15
  __int64 v13; // r11
  int v14; // r13d
  unsigned int v15; // ecx
  int *v16; // rsi
  int *v17; // rsi
  __int64 v18; // r11
  __int128 v21; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v22[16]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v23; // [rsp+48h] [rbp-50h] BYREF

  v6 = a3;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_DWORD *)a1 + 4) = 0;
  if ( (unsigned int)GetPointerDeviceRects(a3, &v23, 0LL) )
  {
    v10 = *a2;
    v11 = 0;
    if ( *a2 )
    {
      v12 = *((_QWORD *)a2 + 1);
      do
      {
        v13 = 32LL * v11;
        if ( *(_QWORD *)(v13 + v12) == v6 )
        {
          v14 = *(_DWORD *)(v13 + v12 + 16);
          if ( a5 == 3 )
          {
            v15 = a6 != 0 ? 2 : 0;
          }
          else
          {
            if ( a5 != 1 )
              goto LABEL_14;
            v15 = 1;
          }
          v16 = (int *)(a2 + 6);
          if ( ((v14 - 1) & 0xFFFFFFFD) != 0 )
            v16 = (int *)(a2 + 12);
          v17 = &v16[13 * v15];
          if ( v17 )
          {
            v21 = *(_OWORD *)Edgy::_GetRectForLocation((__int64)v22, &v23, v14, *v17);
            if ( PtInRect(&v21, a4) )
            {
              a1[1] = v17;
              *a1 = v18 + v12;
              *((_DWORD *)a1 + 4) = v14;
              return a1;
            }
          }
          v6 = a3;
        }
LABEL_14:
        ++v11;
      }
      while ( v11 < v10 );
    }
  }
  return a1;
}
