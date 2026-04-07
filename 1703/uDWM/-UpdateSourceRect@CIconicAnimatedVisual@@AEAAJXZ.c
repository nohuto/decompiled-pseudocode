/*
 * XREFs of ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800A062C
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800A06F0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateSourceRect(CIconicAnimatedVisual *this)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rax
  __m128i v6; // xmm0
  int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  _DWORD v11[4]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 39);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 36);
    v4 = 0;
    v11[0] = 0;
    v11[1] = 0;
    v5 = *(_QWORD *)(v3 + 512);
    if ( v5 )
      v4 = *(_DWORD *)(v5 + 120);
    v6 = _mm_cvtsi32_si128(v4);
    v7 = 0;
    v11[2] = _mm_cvtepi32_ps(v6).m128_u32[0];
    v8 = *(_QWORD *)(v3 + 512);
    if ( v8 )
      v7 = *(_DWORD *)(v8 + 124);
    *(float *)&v11[3] = (float)v7;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(v1 + 16) + 304LL))(
           *(_QWORD *)(v1 + 16),
           *(unsigned int *)(v1 + 24),
           v11);
    v2 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x87u);
  }
  return v2;
}
