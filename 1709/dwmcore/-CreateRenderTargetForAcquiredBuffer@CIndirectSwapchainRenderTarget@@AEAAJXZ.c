/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180136EE0
 * Callers:
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180137B88 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A52C0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(struct _LUID *this)
{
  unsigned int v2; // ecx
  DWORD LowPart; // r8d
  struct _LUID v4; // r9
  int RenderTargetBitmapFromTexture; // eax
  signed int v6; // ebx
  struct _LUID *v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // eax
  signed int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // eax
  signed int v16; // eax
  DWORD v17; // r9d
  unsigned int v19; // [rsp+20h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  int v24; // [rsp+88h] [rbp+38h]
  int v25; // [rsp+8Ch] [rbp+3Ch]

  v23 = 0LL;
  v21 = 0LL;
  v2 = 0;
  v22 = 0LL;
  v25 = 0;
  LowPart = this[46].LowPart;
  v24 = 1;
  if ( LowPart )
  {
    v4 = this[43];
    while ( *(_QWORD *)(*(_QWORD *)&v4 + 16LL * v2) != *(_QWORD *)&this[59] )
    {
      if ( ++v2 >= LowPart )
        goto LABEL_7;
    }
    v21 = *(_QWORD *)(*(_QWORD *)&v4 + 16LL * v2 + 8);
    if ( v21 )
      goto LABEL_19;
  }
LABEL_7:
  RenderTargetBitmapFromTexture = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&this[59])(
                                    *(_QWORD *)&this[59],
                                    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                                    &v23);
  v6 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v19 = 384;
    goto LABEL_34;
  }
  RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                    (int)&qword_18026EEE8,
                                    v24,
                                    0,
                                    (int)this + 312,
                                    this[60],
                                    DisplayId::All,
                                    v23,
                                    (__int64)&v22);
  v6 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v19 = 393;
LABEL_34:
    v17 = RenderTargetBitmapFromTexture;
    goto LABEL_35;
  }
  v7 = this + 43;
  v8 = this[46].LowPart;
  v9 = v21;
  *(struct _LUID *)&v20 = this[59];
  *((_QWORD *)&v20 + 1) = v22;
  v10 = v8 + 1;
  if ( v8 + 1 >= v8 )
    v9 = v8 + 1;
  v6 = v10 < v8 ? 0x80070216 : 0;
  if ( v10 < v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( v9 > this[45].HighPart )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 0x10u, 1, &v20);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v7 + 16LL * v8) = v20;
    this[46].LowPart = v9;
  }
  if ( v6 < 0 )
  {
    v19 = 399;
    goto LABEL_30;
  }
  v12 = v22;
  v22 = 0LL;
  v21 = v12;
LABEL_19:
  v13 = this[30].LowPart;
  v14 = v21;
  v15 = v13 + 1;
  if ( (int)v13 + 1 >= (unsigned int)v13 )
    v14 = v13 + 1;
  v6 = v15 < (unsigned int)v13 ? 0x80070216 : 0;
  if ( v15 < (unsigned int)v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( v14 > this[29].HighPart )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[27], 8u, 1, &v21);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&this[27] + 8 * v13) = v21;
    this[30].LowPart = v14;
  }
  if ( v6 < 0 )
  {
    v19 = 407;
LABEL_30:
    v17 = v6;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, v19);
    goto LABEL_36;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
LABEL_36:
  ReleaseInterfaceNoNULL<CManipulationManager>(v23);
  ReleaseInterfaceNoNULL<CManipulationManager>(v22);
  return (unsigned int)v6;
}
