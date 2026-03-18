/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01C02C8
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D8F20 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01BF13C (-ReduceFraction@@YAXPEAK0@Z.c)
 */

char __fastcall GetHimetricScaleForMonitor(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rax
  __m128i *v8; // rcx
  __m128i v9; // xmm6
  __m128i v10; // xmm7
  int v11; // r9d
  unsigned int i; // ecx
  unsigned int v14; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-3Ch] BYREF
  int v16; // [rsp+28h] [rbp-38h] BYREF
  int v17; // [rsp+2Ch] [rbp-34h]
  int v18; // [rsp+30h] [rbp-30h]
  int v19; // [rsp+34h] [rbp-2Ch]

  LOBYTE(v6) = W32GetCurrentThreadDpiAwarenessContext() & 0xF;
  if ( (_BYTE)v6 == 2 )
  {
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = (__m128i *)(v7 + 44);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = (__m128i *)(v7 + 60);
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = (__m128i *)(v7 + 28);
    }
    v9 = *v8;
    v10 = *(__m128i *)(v7 + 28);
    ExpandedMonitorSpace(&v16);
    v11 = v18 - v16;
    v16 = 0;
    v18 = v11;
    v19 -= v17;
    v17 = 0;
    v14 = *(_DWORD *)(gpsi + 2192LL) * (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - _mm_cvtsi128_si32(v9));
    v15 = v11 * (_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) - _mm_cvtsi128_si32(v10));
    ReduceFraction(&v14, &v15);
    v6 = v14;
    for ( i = v15; v6 > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
      v6 >>= 1;
    if ( !i || !v6 )
    {
      i = 1;
      v6 = 1;
    }
    *a2 = v6;
    *a3 = i;
  }
  return v6;
}
