/*
 * XREFs of DwmChildRectChange @ 0x1C009BDCC
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C008D8F0 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     OffsetChildren @ 0x1C00FDC68 (OffsetChildren.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C005EC88 (ScaleDPIRect.c)
 *     GreIsWindowResizeInProgress @ 0x1C0090F40 (GreIsWindowResizeInProgress.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     _AdjustWindowRectExForDpi @ 0x1C009C178 (_AdjustWindowRectExForDpi.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

LONG_PTR __fastcall DwmChildRectChange(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __m128i v8; // xmm2
  int v9; // ebx
  int v10; // edi
  bool v11; // zf
  unsigned int WindowDpiLastNotify; // eax
  int v13; // ecx
  __int32 v14; // ebx
  int v15; // edx
  __int32 v16; // edi
  __int32 v17; // r8d
  __int32 v18; // eax
  __int32 v19; // r10d
  int v20; // r11d
  int v21; // eax
  int v22; // r9d
  __int32 v23; // eax
  int v24; // eax
  __m128i v25; // xmm1
  __int64 v26; // rcx
  __int64 v27; // rdi
  LONG_PTR result; // rax
  void *v29; // rbx
  __int64 v30; // rax
  unsigned __int16 ScaledLogPixels; // ax
  unsigned int v32; // edi
  __m128i v33; // [rsp+38h] [rbp-D0h]
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h]
  __m128i v37; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v38; // [rsp+70h] [rbp-98h] BYREF
  __m128i v39; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v40[28]; // [rsp+98h] [rbp-70h] BYREF

  v3 = 0;
  v4 = a1;
  LODWORD(v34) = 0;
  if ( !a1 )
    goto LABEL_11;
  do
  {
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 )
    {
      a3 = *(_QWORD *)(a1 + 24);
      v6 = 0LL;
      if ( a3 )
      {
        v7 = *(_QWORD *)(a3 + 8);
        if ( v7 )
          v6 = *(_QWORD *)(v7 + 16);
      }
      if ( v5 == v6 )
        break;
    }
    a1 = *(_QWORD *)(a1 + 104);
  }
  while ( v5 );
  if ( !a1
    || (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D
    || *(char *)(a1 + 65) >= 0
    || (result = GreIsWindowResizeInProgress(*(HWND *)a1, &v34), !(_DWORD)result)
    || !(_DWORD)v34 )
  {
LABEL_11:
    v8 = *(__m128i *)(v4 + 128);
    v9 = _mm_cvtsi128_si32(v8);
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
    if ( v9 >= v10 || v8.m128i_i32[1] >= _mm_srli_si128(v8, 8).m128i_i32[1] )
    {
LABEL_53:
      v25 = *(__m128i *)(v4 + 144);
      v26 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 400LL);
      v37 = *(__m128i *)(v4 + 128);
      v38 = v25;
      v11 = (*(_DWORD *)(v26 + 12) & 0x20000000) == 0;
      v39 = v8;
      if ( !v11 && (*(_DWORD *)(v4 + 368) & 0xF) == 0 )
      {
        v26 = *(unsigned __int16 *)(v4 + 372);
        if ( (_WORD)v26 != 96 )
        {
          ScaledLogPixels = GreGetScaledLogPixels(v26);
          v32 = ScaledLogPixels;
          ScaleDPIRect(&v37, &v37, ScaledLogPixels, 0x60u, 0LL, 0LL);
          ScaleDPIRect(&v38, &v38, v32, 0x60u, 0LL, 0LL);
          ScaleDPIRect(&v39, &v39, v32, 0x60u, 0LL, 0LL);
          v3 *= v32 / 0x60;
        }
      }
      v27 = *(_QWORD *)v4;
      result = ReferenceDwmApiPort(v26);
      v29 = (void *)result;
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( result )
      {
        memset(v40, 0, 0x68uLL);
        v40[0] = 6815808;
        *(__m128i *)&v40[13] = v37;
        LOWORD(v40[1]) = 0x8000;
        *(__m128i *)&v40[21] = v39;
        v40[10] = 1073741845;
        *(_QWORD *)&v40[11] = v27;
        *(__m128i *)&v40[17] = v38;
        v40[25] = v3;
        EtwUpdateEvent(v27, 1073741845LL);
        LpcRequestPort(v29, v40);
        return ObfDereferenceObject(v29);
      }
      return result;
    }
    v11 = (*(_DWORD *)(v4 + 304) & 0x10000000) == 0;
    v35 = 0LL;
    v36 = 0LL;
    if ( v11 )
    {
      if ( (*(_DWORD *)(v4 + 368) & 0xF) == 0
        && (v30 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 432LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v30 + 8) + 52LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 400LL) + 284LL);
      }
    }
    else
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v4);
    }
    AdjustWindowRectExForDpi((unsigned int)&v35, *(_DWORD *)(v4 + 68), a3, *(_DWORD *)(v4 + 64), WindowDpiLastNotify);
    v13 = v8.m128i_i32[1] - HIDWORD(v35);
    v14 = v9 - v35;
    v3 = v36;
    v15 = v8.m128i_i32[3] - HIDWORD(v36);
    v16 = v10 - v36;
    v33.m128i_i32[0] = v14;
    v33.m128i_i32[1] = v8.m128i_i32[1] - HIDWORD(v35);
    if ( *(_DWORD *)(v4 + 144) < *(_DWORD *)(v4 + 152) && *(_DWORD *)(v4 + 148) < *(_DWORD *)(v4 + 156) )
    {
      if ( v14 >= *(_DWORD *)(v4 + 144) )
        v14 = *(_DWORD *)(v4 + 144);
      v33.m128i_i32[0] = v14;
      if ( v13 >= *(_DWORD *)(v4 + 148) )
        v13 = *(_DWORD *)(v4 + 148);
      v33.m128i_i32[1] = v13;
      if ( v16 <= *(_DWORD *)(v4 + 152) )
        v16 = *(_DWORD *)(v4 + 152);
      if ( v15 <= *(_DWORD *)(v4 + 156) )
        v15 = *(_DWORD *)(v4 + 156);
    }
    v17 = *(_DWORD *)(v4 + 128);
    v18 = v17;
    v19 = *(_DWORD *)(v4 + 136);
    if ( v14 > v17 )
      v18 = v14;
    if ( v18 >= v19 )
    {
      v14 = *(_DWORD *)(v4 + 136);
    }
    else
    {
      if ( v14 > v17 )
        goto LABEL_32;
      v14 = *(_DWORD *)(v4 + 128);
    }
    v33.m128i_i32[0] = v14;
LABEL_32:
    v20 = *(_DWORD *)(v4 + 132);
    v21 = v20;
    v22 = *(_DWORD *)(v4 + 140);
    if ( v13 > v20 )
      v21 = v13;
    if ( v21 >= v22 )
    {
      v13 = *(_DWORD *)(v4 + 140);
    }
    else
    {
      if ( v13 > v20 )
      {
LABEL_38:
        v23 = *(_DWORD *)(v4 + 136);
        if ( v16 < v19 )
          v23 = v16;
        if ( v23 <= v17 )
        {
          v16 = *(_DWORD *)(v4 + 128);
        }
        else if ( v16 >= v19 )
        {
          v16 = *(_DWORD *)(v4 + 136);
        }
        v24 = *(_DWORD *)(v4 + 140);
        if ( v15 < v22 )
          v24 = v15;
        if ( v24 <= v20 )
        {
          v15 = *(_DWORD *)(v4 + 132);
        }
        else if ( v15 >= v22 )
        {
          v15 = *(_DWORD *)(v4 + 140);
        }
        if ( v14 > v16 )
          v16 = v14;
        v33.m128i_i32[2] = v16;
        if ( v13 > v15 )
          v15 = v13;
        v33.m128i_i32[3] = v15;
        v8 = v33;
        goto LABEL_53;
      }
      v13 = *(_DWORD *)(v4 + 132);
    }
    v33.m128i_i32[1] = v13;
    goto LABEL_38;
  }
  return result;
}
