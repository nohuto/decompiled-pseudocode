/*
 * XREFs of InitializeDPIINFO @ 0x1C0092178
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C009103C (UpdateWindowSpriteDPI.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall InitializeDPIINFO(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // di
  int v8; // r15d
  INT ScaledLogPixels; // r14d
  __int64 result; // rax
  INT v12; // eax
  INT v13; // ecx
  __m128i v14; // [rsp+20h] [rbp-38h] BYREF
  __m128i v15[2]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a2;
  v8 = *(unsigned __int16 *)(*(_QWORD *)(a3 + 40) + 64LL);
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v8;
  v14 = *GetMonitorRectForDpi(&v14, a3, ScaledLogPixels);
  *(_QWORD *)(a1 + 16) = v14.m128i_i64[0];
  v14 = *GetMonitorRectForDpi(v15, a3, 0);
  *(_QWORD *)(a1 + 24) = v14.m128i_i64[0];
  if ( (v5 & 0xF) == 0 && v8 != 96 )
  {
    if ( a4
       ? IsPWNDEligibleForGDIScaling(a4)
       : *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 224LL) & 0x40 )
    {
      ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
      v12 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
      v13 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 16) = v12;
      *(_DWORD *)(a1 + 20) = EngMulDiv(v13, ScaledLogPixels, 96);
    }
  }
  if ( (_WORD)ScaledLogPixels )
  {
    result = (unsigned __int16)ScaledLogPixels;
    *(double *)a1 = (double)v8 / (double)(unsigned __int16)ScaledLogPixels;
  }
  else
  {
    if ( a4 )
    {
      if ( (*(_DWORD *)(a4 + 304) & 0x20000000) == 0 )
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 400LL) + 284LL);
    }
    result = 0x3FF0000000000000LL;
    *(_QWORD *)a1 = 0x3FF0000000000000LL;
  }
  return result;
}
