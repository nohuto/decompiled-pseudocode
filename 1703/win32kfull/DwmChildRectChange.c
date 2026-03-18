/*
 * XREFs of DwmChildRectChange @ 0x1C00607B4
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0016158 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C009E7C4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     OffsetChildren @ 0x1C009E97C (OffsetChildren.c)
 * Callees:
 *     GreIsWindowResizeInProgress @ 0x1C0022E8C (GreIsWindowResizeInProgress.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     AdjustWindowRectExInternal @ 0x1C003E718 (AdjustWindowRectExInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

LONG_PTR __fastcall DwmChildRectChange(__int64 a1)
{
  unsigned int v1; // r15d
  int v3; // r14d
  __int64 TopLevelWindow; // rax
  LONG_PTR result; // rax
  __m128i v6; // xmm2
  int v7; // ebx
  int v8; // edi
  bool v9; // zf
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v11; // rax
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  __int64 ThreadWin32Thread; // rax
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v16; // r8
  __int32 v17; // ebx
  __int32 v18; // edi
  __int32 v19; // edx
  __int32 *v20; // rcx
  __int32 v21; // r8d
  __int32 v22; // ecx
  __int32 v23; // eax
  __int32 v24; // r10d
  __int32 v25; // r11d
  __int32 v26; // eax
  __int32 v27; // r9d
  __int32 v28; // eax
  __int32 v29; // eax
  __int128 v30; // xmm1
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int16 ScaledLogPixels; // di
  __int64 v36; // rdi
  void *v37; // rbx
  __m128i v38; // [rsp+48h] [rbp-C0h]
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h]
  _DWORD v42[28]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-10h] BYREF
  __m128i v45; // [rsp+108h] [rbp+0h] BYREF

  v1 = 0;
  v3 = 0;
  LODWORD(v39) = 0;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( TopLevelWindow )
  {
    if ( (*(_WORD *)(TopLevelWindow + 82) & 0x3FFF) != 0x29D && *(char *)(TopLevelWindow + 65) < 0 )
    {
      result = GreIsWindowResizeInProgress(*(HWND *)TopLevelWindow, &v39);
      if ( (_DWORD)result )
      {
        if ( (_DWORD)v39 )
          return result;
      }
    }
  }
  v6 = *(__m128i *)(a1 + 128);
  v7 = _mm_cvtsi128_si32(v6);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  if ( v7 < v8 && v6.m128i_i32[1] < _mm_srli_si128(v6, 8).m128i_i32[1] )
  {
    v9 = (*(_DWORD *)(a1 + 304) & 0x10000000) == 0;
    v40 = 0LL;
    v41 = 0LL;
    if ( v9 )
    {
      if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
        && (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 52LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
      }
    }
    else
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    v12 = *(_DWORD *)(a1 + 64);
    v13 = *(_DWORD *)(a1 + 68);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 552) <= 0x9900u )
      v1 = *(_DWORD *)(ThreadWin32Thread + 568);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v16 = v1;
    LODWORD(v16) = v1 | 0x2000000;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
      v16 = v1;
    AdjustWindowRectExInternal(&v40, v13, v16, v12, *(_DWORD *)(gptiCurrent + 552LL), v16, WindowDpiLastNotify);
    v17 = v7 - v40;
    v3 = v41;
    v18 = v8 - v41;
    v38.m128i_i32[1] = v6.m128i_i32[1] - HIDWORD(v40);
    v38.m128i_i32[0] = v17;
    if ( !IsRectEmptyInl((const struct tagRECT *)(a1 + 144)) )
    {
      if ( v17 >= *v20 )
        v17 = *v20;
      v38.m128i_i32[0] = v17;
      if ( v19 >= *(_DWORD *)(a1 + 148) )
        v19 = *(_DWORD *)(a1 + 148);
      v38.m128i_i32[1] = v19;
      if ( v18 <= *(_DWORD *)(a1 + 152) )
        v18 = *(_DWORD *)(a1 + 152);
      if ( v21 <= *(_DWORD *)(a1 + 156) )
        v21 = *(_DWORD *)(a1 + 156);
    }
    v22 = *(_DWORD *)(a1 + 128);
    v23 = v22;
    v24 = *(_DWORD *)(a1 + 136);
    if ( v17 > v22 )
      v23 = v17;
    if ( v23 >= v24 )
    {
      v17 = *(_DWORD *)(a1 + 136);
      v38.m128i_i32[0] = v17;
    }
    else if ( v17 <= v22 )
    {
      v17 = *(_DWORD *)(a1 + 128);
      v38.m128i_i32[0] = v17;
    }
    v25 = *(_DWORD *)(a1 + 132);
    v26 = v25;
    v27 = *(_DWORD *)(a1 + 140);
    if ( v19 > v25 )
      v26 = v19;
    if ( v26 >= v27 )
    {
      v19 = *(_DWORD *)(a1 + 140);
    }
    else
    {
      if ( v19 > v25 )
      {
LABEL_41:
        v28 = *(_DWORD *)(a1 + 136);
        if ( v18 < v24 )
          v28 = v18;
        if ( v28 <= v22 )
        {
          v18 = *(_DWORD *)(a1 + 128);
        }
        else if ( v18 >= v24 )
        {
          v18 = *(_DWORD *)(a1 + 136);
        }
        v29 = *(_DWORD *)(a1 + 140);
        if ( v21 < v27 )
          v29 = v21;
        if ( v29 <= v25 )
        {
          v21 = *(_DWORD *)(a1 + 132);
        }
        else if ( v21 >= v27 )
        {
          v21 = *(_DWORD *)(a1 + 140);
        }
        if ( v17 > v18 )
          v18 = v17;
        v38.m128i_i32[2] = v18;
        if ( v19 > v21 )
          v21 = v19;
        v38.m128i_i32[3] = v21;
        v6 = v38;
        goto LABEL_58;
      }
      v19 = *(_DWORD *)(a1 + 132);
    }
    v38.m128i_i32[1] = v19;
    goto LABEL_41;
  }
LABEL_58:
  v30 = *(_OWORD *)(a1 + 144);
  v43 = *(_OWORD *)(a1 + 128);
  v44 = v30;
  v45 = v6;
  if ( (unsigned int)IsPWNDEligibleForGDIScaling(a1) )
  {
    v32 = *(unsigned __int16 *)(a1 + 372);
    if ( (_WORD)v32 != 96 )
    {
      ScaledLogPixels = GreGetScaledLogPixels(v32);
      ScaleDPIRect(&v43, &v43, ScaledLogPixels, 96LL, 0LL, 0LL);
      ScaleDPIRect(&v44, &v44, ScaledLogPixels, 96LL, 0LL, 0LL);
      ScaleDPIRect(&v45, &v45, ScaledLogPixels, 96LL, 0LL, 0LL);
    }
  }
  v36 = *(_QWORD *)a1;
  result = ReferenceDwmApiPort(v32, v31, v33, v34);
  v37 = (void *)result;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( result )
  {
    memset((char *)v42 + 2, 0, 0x66uLL);
    v42[0] = 6815808;
    *(_OWORD *)&v42[13] = v43;
    LOWORD(v42[1]) = 0x8000;
    *(__m128i *)&v42[21] = v45;
    v42[10] = 1073741845;
    *(_QWORD *)&v42[11] = v36;
    *(_OWORD *)&v42[17] = v44;
    v42[25] = v3;
    EtwUpdateEvent(v36, 1073741845LL);
    LpcRequestPort(v37, v42);
    return ObfDereferenceObject(v37);
  }
  return result;
}
