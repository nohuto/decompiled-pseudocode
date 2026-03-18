/*
 * XREFs of ?RenderLayer@CHDRToSDRToneMapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014B5E8
 * Callers:
 *     ?RestoreState@CHDRToSDRToneMapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B820 (-RestoreState@CHDRToSDRToneMapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CHDRToSDRToneMapLayer::RenderLayer(
        CHDRToSDRToneMapLayer *this,
        struct CDrawingContext *a2,
        __int64 a3,
        double a4)
{
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __int64 v8; // rcx
  signed int v9; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rsi
  unsigned int v13; // r14d
  signed int v14; // eax
  signed int v15; // eax
  char v17; // [rsp+20h] [rbp-39h]
  __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  __int64 v19; // [rsp+50h] [rbp-9h] BYREF
  float v20; // [rsp+58h] [rbp-1h]
  float v21; // [rsp+5Ch] [rbp+3h]
  float v22; // [rsp+60h] [rbp+7h]
  float v23; // [rsp+64h] [rbp+Bh]
  _DWORD v24[4]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+80h] [rbp+27h]

  v18 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v26 = *((_QWORD *)this + 3);
  CScopedClipStack::GetTopGpuClipInScope((struct CDrawingContext *)((char *)a2 + 1008), 1);
  v6.m128_f32[0] = (float)(int)v20;
  v24[0] = _mm_cmplt_ss((__m128)LODWORD(v20), v6).m128_u32[0] + (int)v20;
  v6.m128_f32[0] = (float)(int)v21;
  v7 = _mm_cmplt_ss((__m128)LODWORD(v21), v6);
  v24[1] = v7.m128_i32[0] + (int)v21;
  v8 = *((_QWORD *)this + 1);
  v7.m128_f32[0] = (float)(int)v22;
  v24[2] = (int)v22 - _mm_cmplt_ss(v7, (__m128)LODWORD(v22)).m128_u32[0];
  *(float *)&a4 = (float)(int)v23;
  v24[3] = (int)v23 - _mm_cmplt_ss(*(__m128 *)&a4, (__m128)LODWORD(v23)).m128_u32[0];
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 200LL))(v8, &v19);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x5Bu);
  }
  else
  {
    v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 45);
    v12 = *(_QWORD *)(v19 + 120);
    v13 = *(_DWORD *)(v19 + 172);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v18);
    v14 = (**v11)(v11, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v18);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x62u);
    }
    else
    {
      v17 = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, __int64 *, _DWORD *))(*(_QWORD *)v18 + 216LL))(
              v18,
              v12,
              v13,
              *(unsigned int *)(v19 + 180),
              v17,
              &v25,
              v24);
      v10 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x6Au);
      }
      else
      {
        if ( g_LockAndReadLayer )
          (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 184LL))(
            *((_QWORD *)this + 1),
            *((_QWORD *)a2 + 48),
            ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
      }
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v18);
  return v10;
}
