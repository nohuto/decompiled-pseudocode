/*
 * XREFs of ?GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z @ 0x180135E9C
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800185B0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CHwndRenderTarget::GetRemoteAppParameters(
        CHwndRenderTarget *this,
        struct RenderTargetPresentParameters *a2,
        double a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  signed int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rax
  float v10; // xmm0_4
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  float v19; // [rsp+30h] [rbp-30h]
  float v20; // [rsp+30h] [rbp-30h]
  float v21; // [rsp+30h] [rbp-30h]
  float v22; // [rsp+30h] [rbp-30h]
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  float v25[4]; // [rsp+48h] [rbp-18h] BYREF

  v3 = *(_QWORD *)this;
  v5 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v7 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, char *))(v3 + 264))(this, (char *)a2 + 8);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x598u);
  }
  else
  {
    do
    {
      *((float *)&v23 + v5) = (float)*(int *)((char *)&v25[v5 - 2] + a2 - (struct RenderTargetPresentParameters *)&v23);
      ++v5;
    }
    while ( v5 < 4 );
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)this + 164, (__int64)&v23, v25);
    v9 = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 272LL))(this);
    v10 = v25[0];
    *(_QWORD *)a2 = v9;
    if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v10 - v10;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      v11 = (int)v10 - LODWORD(a3);
    }
    else
    {
      v19 = v10 + 6291456.25;
      v11 = (int)(LODWORD(v19) << 10) >> 11;
    }
    v12 = v25[2];
    *((_DWORD *)a2 + 2) = v11;
    if ( (LODWORD(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v12 - v12;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      v13 = (int)v12 - LODWORD(a3);
    }
    else
    {
      v20 = v12 + 6291456.25;
      v13 = (int)(LODWORD(v20) << 10) >> 11;
    }
    v14 = v25[1];
    *((_DWORD *)a2 + 4) = v13;
    if ( (LODWORD(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v14 - v14;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      v15 = (int)v14 - LODWORD(a3);
    }
    else
    {
      v21 = v14 + 6291456.25;
      v15 = (int)(LODWORD(v21) << 10) >> 11;
    }
    v16 = v25[3];
    *((_DWORD *)a2 + 3) = v15;
    if ( (LODWORD(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v16 - v16;
      v17 = (int)v16 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v22 = v16 + 6291456.25;
      v17 = (int)(LODWORD(v22) << 10) >> 11;
    }
    *((_DWORD *)a2 + 5) = v17;
    *((_QWORD *)a2 + 3) = (*(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 280LL))(this);
  }
  return v8;
}
