/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015937C
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180159888 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015A00C (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DDDE0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(struct _LUID *this)
{
  unsigned int v2; // ecx
  DWORD LowPart; // r8d
  struct _LUID v4; // r9
  int RenderTargetBitmapFromTexture; // eax
  int v6; // ebx
  struct _LUID *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // r9d
  unsigned int v17; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  __int64 v20; // [rsp+78h] [rbp+28h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  int v22; // [rsp+88h] [rbp+38h]
  int v23; // [rsp+8Ch] [rbp+3Ch]

  v21 = 0LL;
  v19 = 0LL;
  v2 = 0;
  v20 = 0LL;
  v23 = 0;
  LowPart = this[53].LowPart;
  v22 = 1;
  if ( LowPart )
  {
    v4 = this[50];
    while ( *(_QWORD *)(*(_QWORD *)&v4 + 16LL * v2) != *(_QWORD *)&this[66] )
    {
      if ( ++v2 >= LowPart )
        goto LABEL_7;
    }
    v19 = *(_QWORD *)(*(_QWORD *)&v4 + 16LL * v2 + 8);
    if ( v19 )
      goto LABEL_17;
  }
LABEL_7:
  RenderTargetBitmapFromTexture = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&this[66])(
                                    *(_QWORD *)&this[66],
                                    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                                    &v21);
  v6 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v17 = 370;
    goto LABEL_30;
  }
  RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                    (int)&qword_1802D6728,
                                    v22,
                                    0,
                                    (int)this + 368,
                                    this[67],
                                    DisplayId::All,
                                    v21,
                                    (__int64)&v20);
  v6 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v17 = 379;
LABEL_30:
    v15 = RenderTargetBitmapFromTexture;
    goto LABEL_31;
  }
  v7 = this + 50;
  *(struct _LUID *)&v18 = this[66];
  *((_QWORD *)&v18 + 1) = v20;
  v8 = this[53].LowPart;
  v9 = v8 + 1;
  v6 = (int)v8 + 1 < (unsigned int)v8 ? 0x80070216 : 0;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v9 > this[52].HighPart )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 0x10u, 1, &v18);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v7 + 16 * v8) = v18;
    this[53].LowPart = v9;
  }
  if ( v6 < 0 )
  {
    v17 = 385;
    goto LABEL_26;
  }
  v11 = v20;
  v20 = 0LL;
  v19 = v11;
LABEL_17:
  v12 = this[37].LowPart;
  v13 = v12 + 1;
  v6 = v12 + 1 < v12 ? 0x80070216 : 0;
  if ( v12 + 1 < v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v13 > this[36].HighPart )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[34], 8u, 1, &v19);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&this[34] + 8LL * v12) = v19;
    this[37].LowPart = v13;
  }
  if ( v6 < 0 )
  {
    v17 = 393;
LABEL_26:
    v15 = v6;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v17);
    goto LABEL_32;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
LABEL_32:
  ReleaseInterfaceNoNULL<IWICBitmap>(v21);
  ReleaseInterfaceNoNULL<IWICBitmap>(v20);
  return (unsigned int)v6;
}
