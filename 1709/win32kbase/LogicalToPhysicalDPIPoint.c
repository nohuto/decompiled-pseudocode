/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C005D320
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00160F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C005C430 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // r12d
  __m128i v11; // xmm0
  unsigned __int16 v12; // bx
  unsigned __int64 v13; // r8
  int v14; // edi
  int v15; // ecx
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  int v18; // edi
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rax
  __int32 v25; // ebp
  signed __int64 v26; // r8
  unsigned __int64 v27; // rdx
  __int32 v28; // esi
  int v29; // r11d
  int v30; // ecx
  __int64 v31; // rdi
  signed __int64 v32; // r10
  unsigned __int64 v33; // rdx
  int v34; // r11d
  int v35; // r10d
  signed __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 result; // rax

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    if ( !a4 || (v8 = *a4) == 0 )
      v8 = _MonitorFromPoint(*(_QWORD *)a2, 2LL, CurrentThreadDpiAwarenessContext);
    if ( a4 )
      *a4 = v8;
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 0x80000000;
    v11 = *(__m128i *)(v9 + 28);
    v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    if ( v12 )
    {
      v13 = *(unsigned __int16 *)(v9 + 66);
      v14 = 1;
      v15 = _mm_cvtsi128_si32(v11);
      if ( v15 < 0 )
      {
        v14 = -1;
        v15 = -v15;
      }
      if ( *(_WORD *)(v9 + 66)
        && ((v16 = (v13 >> 1) + v12 * (__int64)v15, *(_WORD *)(v9 + 66) != 96LL)
          ? (v17 = v16 / *(unsigned __int16 *)(v9 + 66))
          : (v17 = v16 / 96),
            v17 <= 0x7FFFFFFF) )
      {
        if ( v14 <= 0 )
          LODWORD(v17) = -(int)v17;
      }
      else
      {
        LODWORD(v17) = 0x80000000;
        if ( v14 > 0 )
          LODWORD(v17) = 0x7FFFFFFF;
      }
      v18 = 1;
      v19 = HIDWORD(v11.m128i_i64[0]);
      if ( v11.m128i_i32[1] < 0 )
      {
        v18 = -1;
        LODWORD(v19) = -v11.m128i_i32[1];
      }
      if ( *(_WORD *)(v9 + 66)
        && ((v20 = *(unsigned __int16 *)(v9 + 66), v21 = (v13 >> 1) + v12 * (__int64)(int)v19, v20 != 96)
          ? (v23 = v21 / v20)
          : (v22 = (__int64)((unsigned __int128)(v21 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4,
             v23 = (v22 >> 63) + v22),
            v23 <= 0x7FFFFFFF) )
      {
        if ( v18 <= 0 )
          LODWORD(v23) = -(int)v23;
      }
      else
      {
        LODWORD(v23) = 0x80000000;
        if ( v18 > 0 )
          LODWORD(v23) = 0x7FFFFFFF;
      }
      if ( !*(_WORD *)(v9 + 64)
        || (v24 = ((unsigned __int64)*(unsigned __int16 *)(v9 + 64) >> 1) / *(unsigned __int16 *)(v9 + 64),
            v24 > 0x7FFFFFFF) )
      {
        LODWORD(v24) = 0x7FFFFFFF;
      }
      v25 = v17 + v24;
      if ( !*(_WORD *)(v9 + 64)
        || ((v26 = (unsigned __int64)*(unsigned __int16 *)(v9 + 64) >> 1, *(_WORD *)(v9 + 64) != 96LL)
          ? (v27 = v26 / *(unsigned __int16 *)(v9 + 64))
          : (v27 = v26 / 96),
            v27 > 0x7FFFFFFF) )
      {
        LODWORD(v27) = 0x7FFFFFFF;
      }
      v28 = v23 + v27;
    }
    else
    {
      v28 = v11.m128i_i32[1];
      v25 = v11.m128i_i32[0];
    }
    v29 = 1;
    v30 = *(_DWORD *)a2 - v25;
    v31 = *(unsigned __int16 *)(v9 + 64);
    if ( v30 < 0 )
    {
      v29 = -1;
      v30 = v25 - *(_DWORD *)a2;
    }
    if ( v12
      && ((v32 = ((unsigned __int64)v12 >> 1) + *(unsigned __int16 *)(v9 + 64) * (__int64)v30, v12 != 96LL)
        ? (v33 = v32 / v12)
        : (v33 = v32 / 96),
          v33 <= 0x7FFFFFFF) )
    {
      if ( v29 <= 0 )
        LODWORD(v33) = -(int)v33;
    }
    else
    {
      LODWORD(v33) = 0x80000000;
      if ( v29 > 0 )
        LODWORD(v33) = 0x7FFFFFFF;
    }
    v34 = 1;
    *(_DWORD *)a1 = v11.m128i_i32[0] + v33;
    v35 = *(_DWORD *)(a2 + 4) - v28;
    if ( v35 < 0 )
    {
      v34 = -1;
      v35 = v28 - *(_DWORD *)(a2 + 4);
    }
    if ( v12
      && ((v36 = ((unsigned __int64)v12 >> 1) + v35 * v31, v12 != 96LL) ? (v37 = v36 / v12) : (v37 = v36 / 96),
          v37 <= 0x7FFFFFFF) )
    {
      v10 = v37;
      if ( v34 <= 0 )
        v10 = -(int)v37;
    }
    else if ( v34 > 0 )
    {
      v10 = 0x7FFFFFFF;
    }
    result = 1LL;
    *(_DWORD *)(a1 + 4) = v10 + v11.m128i_i32[1];
  }
  return result;
}
