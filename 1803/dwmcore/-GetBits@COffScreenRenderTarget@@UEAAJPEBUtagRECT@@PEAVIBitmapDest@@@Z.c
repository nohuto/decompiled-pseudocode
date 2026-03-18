/*
 * XREFs of ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18016FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetBits(
        COffScreenRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  __int64 v5; // rcx
  float left; // xmm9_4
  float top; // xmm6_4
  float right; // xmm8_4
  float bottom; // xmm7_4
  unsigned int v10; // ebx
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  int v15; // eax
  float v17; // [rsp+30h] [rbp-68h] BYREF
  float v18; // [rsp+34h] [rbp-64h]
  float v19; // [rsp+38h] [rbp-60h]
  float v20; // [rsp+3Ch] [rbp-5Ch]

  v5 = **((_QWORD **)this + 26);
  left = (float)a2->left;
  top = (float)a2->top;
  right = (float)a2->right;
  bottom = (float)a2->bottom;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v5 + 48LL))(v5, &v17);
    v11 = v17;
    if ( left > v17 )
    {
      v11 = left;
      v17 = left;
    }
    v12 = v18;
    if ( top > v18 )
    {
      v18 = top;
      v12 = top;
    }
    v13 = v19;
    if ( v19 > right )
    {
      v19 = right;
      v13 = right;
    }
    v14 = v20;
    if ( v20 > bottom )
    {
      v20 = bottom;
      v14 = bottom;
    }
    if ( v13 <= v11 || v14 <= v12 )
    {
      return 0;
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, float *, struct IBitmapDest *, _QWORD, _DWORD))(***((_QWORD ***)this + 26)
                                                                                             + 80LL))(
              **((_QWORD **)this + 26),
              &v17,
              a3,
              0LL,
              0);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1FEu);
    }
  }
  else
  {
    v10 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304442, 0x1F1u);
  }
  return v10;
}
