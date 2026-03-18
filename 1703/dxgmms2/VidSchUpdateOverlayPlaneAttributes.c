/*
 * XREFs of VidSchUpdateOverlayPlaneAttributes @ 0x1C002A810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchUpdateOverlayPlaneAttributes(__int64 a1, unsigned int a2, __m128i *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __m128i v6; // xmm1
  __int64 v7; // rdi
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __m128i v10; // [rsp+48h] [rbp-30h]
  __m128i v11; // [rsp+58h] [rbp-20h]

  v4 = a2;
  v6 = a3[1];
  v10 = *a3;
  v7 = a4;
  v11 = v6;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v8 = 272 * v7;
  *(__m128i *)(*(_QWORD *)(a1 + 8 * v4 + 2992) + v8 + 88) = v10;
  *(_QWORD *)(*(_QWORD *)(a1 + 8 * v4 + 2992) + v8 + 104) = v11.m128i_i64[0];
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v4 + 2992) + v8 + 116) = v11.m128i_i32[3];
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v4 + 2992) + v8 + 112) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
