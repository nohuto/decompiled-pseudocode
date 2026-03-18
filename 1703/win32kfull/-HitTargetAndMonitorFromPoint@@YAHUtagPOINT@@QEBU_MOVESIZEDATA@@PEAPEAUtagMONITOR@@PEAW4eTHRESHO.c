/*
 * XREFs of ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F0770
 * Callers:
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01EFD04 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01EFE0C (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01EFED0 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F0E38 (-PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall HitTargetAndMonitorFromPoint(
        struct tagPOINT a1,
        const struct _MOVESIZEDATA *const a2,
        struct tagMONITOR **a3,
        enum eTHRESHOLD_MARGIN_DIRECTION *a4)
{
  __int64 v6; // rsi
  BOOL v7; // r14d
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // r15
  unsigned __int8 v10; // r12
  struct tagRECT v11; // xmm6
  int v12; // esi
  __int64 v13; // r9
  struct tagMONITOR *v14; // r10
  unsigned __int8 v15; // r11
  __int64 v16; // r9
  int v17; // r11d
  __int64 v18; // r9
  int v19; // r11d
  int v20; // r11d
  __int64 result; // rax
  struct tagMONITOR *v22[2]; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT v24; // [rsp+90h] [rbp+30h] BYREF

  v24 = a1;
  v6 = (*((_DWORD *)a2 + 45) >> 15) & 7;
  v7 = *(_DWORD *)*gpDispInfo > 1u && (unsigned int)v6 < 6;
  ComputeSourceRectAndMonitorWithPrecision(a2, &v24, v22, &v23);
  v8 = *((_BYTE *)v22[0] + 4 * v6 + 425);
  v9 = *((_BYTE *)v22[0] + 4 * v6 + 424);
  v10 = *((_BYTE *)v22[0] + 4 * v6 + 427);
  if ( v7 )
  {
    if ( !v8 )
      v8 = gWinArrGlobal[dword_1C02E7FA4[4 * (unsigned int)v6]];
    if ( !v9 )
      v9 = gWinArrGlobal[dword_1C02E7FA0[4 * (unsigned int)v6]];
    if ( !v10 )
      v10 = gWinArrGlobal[dword_1C02E7FAC[4 * (unsigned int)v6]];
  }
  v11 = v23;
  *(struct tagRECT *)v22 = v23;
  v12 = _mm_cvtsi128_si32((__m128i)v23) + v8;
  LODWORD(v22[1]) = v12;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PtInRectSpace)(v22, v24, 1LL) )
  {
    *(_DWORD *)a4 = 1;
  }
  else
  {
    *(struct tagRECT *)v22 = v11;
    LODWORD(v22[0]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 8)) - v15;
    if ( (unsigned int)PtInRectSpace(v22, v13, 2LL) )
    {
      *(_DWORD *)a4 = 2;
    }
    else
    {
      LODWORD(v22[1]) = v11.right - v17;
      HIDWORD(v22[1]) = v11.top + v9;
      v22[0] = (struct tagMONITOR *)__PAIR64__(v11.top, v12);
      if ( (unsigned int)PtInRectSpace(v22, v16, 0LL) )
      {
        *(_DWORD *)a4 = 0;
      }
      else
      {
        HIDWORD(v22[1]) = v11.bottom;
        LODWORD(v22[1]) = v11.right - v19;
        LODWORD(v22[0]) = v12;
        HIDWORD(v22[0]) = v11.bottom - v10;
        if ( !(unsigned int)PtInRectSpace(v22, v18, 3LL) )
        {
          *(_DWORD *)a4 = 4;
          result = 0LL;
          goto LABEL_22;
        }
        *(_DWORD *)a4 = v20;
      }
    }
  }
  result = 1LL;
LABEL_22:
  *a3 = v14;
  return result;
}
