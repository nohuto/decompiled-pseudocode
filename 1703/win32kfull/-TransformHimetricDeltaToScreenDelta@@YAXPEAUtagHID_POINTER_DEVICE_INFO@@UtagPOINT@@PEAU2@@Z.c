/*
 * XREFs of ?TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01ABF90
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AB15C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AB2AC (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall TransformHimetricDeltaToScreenDelta(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  INT x; // ebx
  __m128i *v6; // rcx
  __m128i v7; // xmm6
  INT v8; // eax
  INT v9; // r8d
  LONG a; // [rsp+4Ch] [rbp+14h]

  a = a2.y;
  x = a2.x;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v6 = (__m128i *)(*(_QWORD *)(*((_QWORD *)a1 + 36) + 40LL) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v6 = (__m128i *)(*(_QWORD *)(*((_QWORD *)a1 + 36) + 40LL) + 60LL);
  }
  else
  {
    v6 = (__m128i *)(*(_QWORD *)(*((_QWORD *)a1 + 36) + 40LL) + 28LL);
  }
  v7 = *v6;
  v8 = EngMulDiv(x, _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7), *((_DWORD *)a1 + 37));
  v9 = *((_DWORD *)a1 + 38);
  a3->x = v8;
  a3->y = EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v7, 4)), v9);
}
