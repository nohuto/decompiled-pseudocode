/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180155B14
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180156994 (-TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAXAEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@Z @ 0x1801554E4 (--$emplace_back@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UDXGIReso.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DDDE0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this)
{
  __int64 v1; // rdx
  _QWORD *v2; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int RenderTargetBitmapFromTexture; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v1 = 0LL;
  v19 = 1LL;
  v17 = 0LL;
  v2 = (_QWORD *)((char *)this + 432);
  v4 = (_QWORD *)*((_QWORD *)this + 54);
  v18 = 0LL;
  if ( v4 == (_QWORD *)v2[1] )
    goto LABEL_7;
  while ( *v4 != *((_QWORD *)this + 57) )
  {
    v4 += 2;
    if ( v4 == (_QWORD *)v2[1] )
      goto LABEL_7;
  }
  v5 = v4[1];
  v17 = v5;
  if ( !v5 || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5), v6 = v17, v1 = v18, !v17) )
  {
LABEL_7:
    v18 = 0LL;
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 57))(
           *((_QWORD *)this + 57),
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v18);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x204u);
      goto LABEL_27;
    }
    v9 = v17;
    v17 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                      (int)&qword_1802D6728,
                                      v19,
                                      0,
                                      (int)this + 368,
                                      *(struct _LUID *)((char *)this + 408),
                                      DisplayId::All,
                                      v18,
                                      (__int64)&v17);
    v8 = RenderTargetBitmapFromTexture;
    if ( RenderTargetBitmapFromTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x20Du);
      goto LABEL_27;
    }
    v15 = *((_QWORD *)this + 57);
    v16 = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::emplace_back<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
      v2,
      &v15);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v16);
    v6 = v17;
  }
  v11 = *((_DWORD *)this + 74);
  v19 = v6;
  v12 = v11 + 1;
  v8 = v11 + 1 < v11 ? 0x80070216 : 0;
  if ( v11 + 1 < v11 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v12 > *((_DWORD *)this + 73) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8u, 1, &v19);
    v8 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * v11) = v19;
    *((_DWORD *)this + 74) = v12;
  }
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x218u);
  else
    v17 = 0LL;
LABEL_27:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v18);
  return (unsigned int)v8;
}
