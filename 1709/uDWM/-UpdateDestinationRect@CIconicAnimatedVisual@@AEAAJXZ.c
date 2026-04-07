/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009E4A4
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009E790 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180009148 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateDestinationRect(const struct tagRECT *this)
{
  LONG *p_right; // rbp
  const struct tagRECT *v3; // rsi
  int RectangleGeometry; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r8
  int v9; // r10d
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  float v13; // xmm2_4
  int v14; // r10d
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // eax
  float v18; // xmm1_4
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rax
  __m128i v26; // xmm0
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  _DWORD v32[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-28h] BYREF

  p_right = &this[21].right;
  v3 = this + 22;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(this + 22, (struct CResource **)&this[21].right);
  v5 = RectangleGeometry;
  if ( RectangleGeometry >= 0 )
  {
    if ( *(_QWORD *)p_right )
    {
      v6 = *(_QWORD *)&this[20].left;
      if ( v6 )
      {
        if ( *(_QWORD *)&this[20].right )
        {
          v7 = 0;
          v8 = *(_QWORD *)&this[18].left;
          if ( v3->right - v3->left >= 0 )
            v7 = v3->right - v3->left;
          v9 = 0;
          v10 = *(_QWORD *)(v8 + 512);
          if ( v10 )
            v9 = *(_DWORD *)(v10 + 120);
          v11 = v7 / 2;
          v12 = 0;
          v13 = (float)(v11 - v9 / 2 - v3->left);
          if ( v3->bottom - v3->top >= 0 )
            v12 = v3->bottom - v3->top;
          v14 = 0;
          *(float *)v32 = v13;
          v15 = *(_QWORD *)(v8 + 512);
          if ( v15 )
            v14 = *(_DWORD *)(v15 + 124);
          v16 = v12 / 2;
          v17 = 0;
          v18 = (float)(v16 - this[22].top - v14 / 2);
          *(float *)&v32[1] = v18;
          v19 = *(_QWORD *)(v8 + 512);
          if ( v19 )
            v17 = *(_DWORD *)(v19 + 120);
          v20 = 0;
          *(float *)&v32[2] = (float)v17 + v13;
          v21 = *(_QWORD *)(v8 + 512);
          if ( v21 )
            v20 = *(_DWORD *)(v21 + 124);
          *(float *)&v32[3] = (float)v20 + v18;
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(v6 + 16) + 304LL))(
                  *(_QWORD *)(v6 + 16),
                  *(unsigned int *)(v6 + 24),
                  v32);
          v5 = v22;
          if ( v22 >= 0 )
          {
            v23 = *(_QWORD *)&this[18].left;
            v24 = 0;
            v25 = *(_QWORD *)(v23 + 512);
            if ( v25 )
              v24 = *(_DWORD *)(v25 + 120);
            v26 = _mm_cvtsi32_si128(v24);
            v27 = 0;
            v33[0] = *(_OWORD *)&_mm_cvtepi32_pd(v26);
            v28 = *(_QWORD *)(v23 + 512);
            if ( v28 )
              v27 = *(_DWORD *)(v28 + 124);
            v29 = *(_QWORD *)&this[20].right;
            *(double *)&v33[1] = (double)v27;
            v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(v29 + 16) + 312LL))(
                    *(_QWORD *)(v29 + 16),
                    *(unsigned int *)(v29 + 24),
                    v33);
            v5 = v30;
            if ( v30 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xABu);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xA3u);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x93u);
  }
  return v5;
}
