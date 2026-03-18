/*
 * XREFs of ?GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV?$span@QEAVCComputeScribble@@$0?0@gsl@@PEAM1@Z @ 0x18021D884
 * Callers:
 *     ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x18021E2F8 (-ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V-$span@QEAV.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CComputeScribbleRenderer::CScheduler::GetWakeupTimeBeforeVBlank(
        __int64 a1,
        _QWORD *a2,
        float *a3,
        float *a4)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdi
  float v8; // xmm8_4
  float v9; // xmm10_4
  float v12; // xmm6_4
  float i; // xmm7_4
  __int64 v14; // rcx
  __m128i v15; // xmm0
  float v16; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v17[4]; // [rsp+38h] [rbp-A0h] BYREF
  int v18; // [rsp+3Ch] [rbp-9Ch]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v6 = *a2 - 1LL;
  v8 = *(float *)(a1 + 40) - *(float *)(a1 + 44);
  v9 = *(float *)(a1 + 40) * 0.1;
  v12 = 0.0;
  for ( i = 0.0;
        v6 >= 0;
        v12 = fmaxf(
                (float)((float)((float)((float)(1.0 - (float)((float)(int)result / _mm_cvtepi32_ps(v15).m128_f32[0]))
                                      * v8)
                              + v9)
                      + v16)
              + *(float *)(a1 + 44),
                v16 + v12) )
  {
    v14 = *(_QWORD *)(a2[1] + 8 * v6);
    (*(void (__fastcall **)(__int64, _QWORD *, _BYTE *, float *))(*(_QWORD *)v14 + 24LL))(v14, a2, v17, &v16);
    result = (unsigned int)v18;
    v15 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 36));
    if ( v18 < 0 )
      result = 0LL;
    --v6;
    i = i + v16;
  }
  *a3 = v12 + *(float *)a1;
  *a4 = i + *(float *)a1;
  return result;
}
