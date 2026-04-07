/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800A6A04
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800A6CF0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180006C10 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
  int v24; // eax
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  _DWORD v31[4]; // [rsp+30h] [rbp-38h] BYREF
  double v32[2]; // [rsp+40h] [rbp-28h] BYREF

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
          *(float *)v31 = v13;
          v15 = *(_QWORD *)(v8 + 512);
          if ( v15 )
            v14 = *(_DWORD *)(v15 + 124);
          v16 = v12 / 2;
          v17 = 0;
          v18 = (float)(v16 - this[22].top - v14 / 2);
          *(float *)&v31[1] = v18;
          v19 = *(_QWORD *)(v8 + 512);
          if ( v19 )
            v17 = *(_DWORD *)(v19 + 120);
          v20 = 0;
          *(float *)&v31[2] = (float)v17 + v13;
          v21 = *(_QWORD *)(v8 + 512);
          if ( v21 )
            v20 = *(_DWORD *)(v21 + 124);
          *(float *)&v31[3] = (float)v20 + v18;
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(v6 + 16) + 312LL))(
                  *(_QWORD *)(v6 + 16),
                  *(unsigned int *)(v6 + 24),
                  v31);
          v5 = v22;
          if ( v22 >= 0 )
          {
            v23 = *(_QWORD *)&this[18].left;
            v24 = 0;
            v25 = *(_QWORD *)(v23 + 512);
            if ( v25 )
              v24 = *(_DWORD *)(v25 + 120);
            v26 = 0;
            v32[0] = (double)v24;
            v27 = *(_QWORD *)(v23 + 512);
            if ( v27 )
              v26 = *(_DWORD *)(v27 + 124);
            v28 = *(_QWORD *)&this[20].right;
            v32[1] = (double)v26;
            v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v28 + 16) + 320LL))(
                    *(_QWORD *)(v28 + 16),
                    *(unsigned int *)(v28 + 24),
                    v32);
            v5 = v29;
            if ( v29 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0xABu);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xA3u);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x93u);
  }
  return v5;
}
