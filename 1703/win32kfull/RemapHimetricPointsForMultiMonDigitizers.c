/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C0710
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x1C01CA1A0 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C0C58 (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __m128i v7; // xmm0
  INT v8; // edx
  INT v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i *v13; // rax
  __m128i v14; // xmm6
  int DwmDependentMetric; // r14d
  __int64 v16; // r8
  __int64 v17; // r9
  INT v18; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  __int64 v22; // r8
  __int64 v23; // r9
  INT v24; // ebx
  INT v25; // r15d
  INT v26; // r12d
  INT v27; // edi
  INT v28; // ebx
  INT v29; // eax
  INT v30; // ecx
  INT v31; // eax
  INT v32; // ecx
  __int64 result; // rax
  INT v34; // [rsp+20h] [rbp-48h]
  INT b[4]; // [rsp+28h] [rbp-40h] BYREF
  __m128i v36; // [rsp+38h] [rbp-30h]
  INT c; // [rsp+B0h] [rbp+48h]
  INT ca; // [rsp+B0h] [rbp+48h]
  INT v39; // [rsp+B8h] [rbp+50h]
  INT v41; // [rsp+C8h] [rbp+60h]

  v7 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  v8 = *(_DWORD *)(a1 + 8);
  *(__m128i *)b = v7;
  v41 = EngMulDiv(_mm_cvtsi128_si32(v7) - *(_DWORD *)(gpsi + 2184LL), v8, *(_DWORD *)(gpsi + 2192LL));
  v39 = EngMulDiv(v7.m128i_i32[1] - *(_DWORD *)(gpsi + 2188LL), *(_DWORD *)(a1 + 12), *(_DWORD *)(gpsi + 2196LL));
  v34 = EngMulDiv(v7.m128i_i32[2] - *(_DWORD *)(gpsi + 2184LL), *(_DWORD *)(a1 + 8), *(_DWORD *)(gpsi + 2192LL));
  v9 = EngMulDiv(v7.m128i_i32[3] - *(_DWORD *)(gpsi + 2188LL), *(_DWORD *)(a1 + 12), *(_DWORD *)(gpsi + 2196LL));
  *(_OWORD *)b = *(_OWORD *)a1;
  c = v9;
  VirtualizeMultiMonDigitizerSize(b, v10);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v13 = (__m128i *)(*(_QWORD *)(a2 + 40) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v13 = (__m128i *)(*(_QWORD *)(a2 + 40) + 60LL);
  }
  else
  {
    v13 = (__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  }
  v36 = *v13;
  v14 = v36;
  DwmDependentMetric = GetDwmDependentMetric(76LL, 0LL, v11, v12);
  v18 = GetDwmDependentMetric(78LL, 0LL, v16, v17);
  v21 = GetDwmDependentMetric(77LL, 0LL, v19, v20);
  v24 = GetDwmDependentMetric(79LL, 0LL, v22, v23);
  v25 = EngMulDiv(_mm_cvtsi128_si32(v14) - DwmDependentMetric, b[2], v18);
  v26 = EngMulDiv(v36.m128i_i32[1] - v21, b[3], v24);
  v27 = EngMulDiv(v36.m128i_i32[2] - DwmDependentMetric, b[2], v18) - v25;
  ca = c - v39;
  v28 = EngMulDiv(v36.m128i_i32[3] - v21, b[3], v24) - v26;
  v29 = EngMulDiv(*a3 - v41, v27, v34 - v41);
  v30 = a3[1] - v39;
  *a3 = v25 + v29;
  a3[1] = v26 + EngMulDiv(v30, v28, ca);
  v31 = EngMulDiv(*a4 - v41, v27, v34 - v41);
  v32 = a4[1] - v39;
  *a4 = v25 + v31;
  result = (unsigned int)(v26 + EngMulDiv(v32, v28, ca));
  a4[1] = result;
  return result;
}
