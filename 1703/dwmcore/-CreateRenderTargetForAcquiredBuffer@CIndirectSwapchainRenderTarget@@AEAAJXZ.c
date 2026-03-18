/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B4550
 * Callers:
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B44A8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180135BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(struct _LUID *this)
{
  unsigned int v2; // edx
  DWORD LowPart; // ecx
  int RenderTargetBitmapFromTexture; // eax
  int v5; // ebx
  struct _LUID *v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax
  struct _LUID v14; // r8
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-40h]
  __int128 v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+20h] BYREF
  __int64 v22; // [rsp+88h] [rbp+28h] BYREF
  __int64 v23; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+98h] [rbp+38h]
  int v25; // [rsp+9Ch] [rbp+3Ch]

  v23 = 0LL;
  v21 = 0LL;
  v2 = 0;
  v22 = 0LL;
  v25 = 0;
  LowPart = this[46].LowPart;
  v24 = 1;
  if ( LowPart )
  {
    v14 = this[43];
    while ( *(_QWORD *)(*(_QWORD *)&v14 + 16LL * v2) != *(_QWORD *)&this[59] )
    {
      if ( ++v2 >= LowPart )
        goto LABEL_2;
    }
    v21 = *(_QWORD *)(*(_QWORD *)&v14 + 16LL * v2 + 8);
    if ( v21 )
      goto LABEL_10;
  }
LABEL_2:
  RenderTargetBitmapFromTexture = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&this[59])(
                                    *(_QWORD *)&this[59],
                                    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                                    &v23);
  v5 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v19 = 366;
    goto LABEL_37;
  }
  RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                    (int)&qword_18023E818,
                                    v24,
                                    0,
                                    (int)this + 312,
                                    (struct _GUID *)(*(_QWORD *)&this[2] + 324LL),
                                    this[60],
                                    DisplayId::All,
                                    v23,
                                    (__int64)&v22);
  v5 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v19 = 376;
LABEL_37:
    v18 = RenderTargetBitmapFromTexture;
    goto LABEL_38;
  }
  v6 = this + 43;
  v7 = this[46].LowPart;
  v8 = v21;
  *(struct _LUID *)&v20 = this[59];
  *((_QWORD *)&v20 + 1) = v22;
  v9 = v7 + 1;
  if ( (int)v7 + 1 >= (unsigned int)v7 )
    v8 = v7 + 1;
  v5 = v9 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( v9 >= (unsigned int)v7 )
  {
    if ( v8 > this[45].HighPart )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6, 0x10u, 1, &v20);
      v5 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v6 + 16 * v7) = v20;
      this[46].LowPart = v8;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
  }
  if ( v5 < 0 )
  {
    v19 = 382;
    goto LABEL_34;
  }
  v15 = v22;
  v22 = 0LL;
  v21 = v15;
LABEL_10:
  v10 = this[29].LowPart;
  v11 = v21;
  v12 = v10 + 1;
  if ( (int)v10 + 1 >= (unsigned int)v10 )
    v11 = v10 + 1;
  v5 = v12 < (unsigned int)v10 ? 0x80070216 : 0;
  if ( v12 < (unsigned int)v10 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v11 > this[28].HighPart )
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[26], 8u, 1, &v21);
    v5 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&this[26] + 8 * v10) = v21;
    this[29].LowPart = v11;
  }
  if ( v5 < 0 )
  {
    v19 = 390;
LABEL_34:
    v18 = v5;
LABEL_38:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v19);
    goto LABEL_17;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
LABEL_17:
  ReleaseInterfaceNoNULL<CD2DPencil>(v23);
  ReleaseInterfaceNoNULL<CD2DPencil>(v22);
  return (unsigned int)v5;
}
