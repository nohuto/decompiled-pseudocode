/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1800270B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800248F8 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800379F0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042480 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  int v1; // ebx
  struct IBitmapRealization *v2; // r14
  struct CD3DDeviceLevel1 *v3; // r15
  struct CD3DVidMemOnlyTexture **v4; // rsi
  __int64 v6; // rcx
  struct _LUID *v7; // r13
  int CurrentRenderingRealization; // eax
  struct _LUID v9; // rax
  int v10; // eax
  int ExistingDevice; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  int v19; // eax
  unsigned int v20; // [rsp+28h] [rbp-29h]
  __int64 v21; // [rsp+38h] [rbp-19h] BYREF
  struct IBitmapRealization *v22; // [rsp+40h] [rbp-11h] BYREF
  int v23; // [rsp+48h] [rbp-9h]
  struct CD3DVidMemOnlyTexture **v24; // [rsp+50h] [rbp-1h] BYREF
  struct CD3DDeviceLevel1 *v25; // [rsp+58h] [rbp+7h] BYREF
  __int64 v26; // [rsp+60h] [rbp+Fh] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+68h] [rbp+17h] BYREF
  struct ID3D11Texture2D *v28; // [rsp+70h] [rbp+1Fh] BYREF
  struct _LUID v29; // [rsp+78h] [rbp+27h] BYREF
  int v30; // [rsp+80h] [rbp+2Fh]
  int v31; // [rsp+84h] [rbp+33h]
  char v32; // [rsp+88h] [rbp+37h]

  v1 = 0;
  v2 = 0LL;
  v26 = 0LL;
  v3 = 0LL;
  v27 = 0LL;
  v4 = 0LL;
  v28 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( *((_DWORD *)this + 58) )
    goto LABEL_17;
  v6 = *((_QWORD *)this + 45);
  if ( !v6 )
    goto LABEL_17;
  v7 = *(struct _LUID **)(v6 + 464);
  CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                  (CCompositionSurfaceBitmap *)(v6 + 64),
                                  &v22);
  v1 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRenderingRealization, 0x29u);
    v2 = v22;
    goto LABEL_17;
  }
  v9 = v7[22];
  v2 = v22;
  v31 = 0;
  v29 = v9;
  v30 = DisplayId::None;
  v32 = 0;
  v10 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, struct _LUID *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v22 + 112LL))(
          v22,
          &v29,
          0LL,
          0LL,
          &v26);
  v1 = v10;
  if ( v10 < 0 )
  {
    v20 = 51;
    goto LABEL_32;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(*(_QWORD *)v26 + 104LL))(
          v26,
          &v27);
  v1 = v10;
  if ( v10 < 0 )
  {
    v20 = 53;
    goto LABEL_32;
  }
  v10 = (**v27)(v27, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v28);
  v1 = v10;
  if ( v10 < 0 )
  {
    v20 = 54;
    goto LABEL_32;
  }
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                     (CD3DDeviceManager *)&g_D3DDeviceManager,
                     (const struct _GUID *)(*((_QWORD *)this + 2) + 324LL),
                     v7[22],
                     &v25);
  v1 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ExistingDevice, 0x3Bu);
    v3 = v25;
    goto LABEL_17;
  }
  LODWORD(v22) = (*(__int64 (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v2 + 40LL))(v2);
  HIDWORD(v22) = (*(__int64 (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v2 + 48LL))(v2);
  v12 = (*(__int64 (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v2 + 56LL))(v2);
  v3 = v25;
  v23 = v12;
  v13 = CHwTextureRenderTarget::CreateFromTexture(v25, DisplayId::None, (__int64)&v22, v28, &v24);
  v1 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x46u);
    v4 = v24;
    goto LABEL_17;
  }
  v4 = v24;
  v10 = (*(__int64 (__fastcall **)(struct CD3DVidMemOnlyTexture **, GUID *, __int64 *))*v24)(
          v24,
          &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
          &v21);
  v1 = v10;
  if ( v10 < 0 )
  {
    v20 = 73;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v20);
    goto LABEL_17;
  }
  v14 = v21;
  v15 = *((unsigned int *)this + 58);
  v16 = v15 + 1;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
    v14 = v15 + 1;
  v1 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
  if ( v16 < (unsigned int)v15 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xB5u);
  }
  else if ( v14 > *((_DWORD *)this + 57) )
  {
    v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 208, 8LL, 1LL, &v21);
    v1 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v15) = v21;
    *((_DWORD *)this + 58) = v14;
  }
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x4Bu);
  }
  else
  {
    v17 = *((_DWORD *)this + 92);
    v21 = 0LL;
    *((_DWORD *)this + 76) = v17;
    *((_DWORD *)this + 77) = *((_DWORD *)this + 93);
  }
LABEL_17:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v2);
  ReleaseInterfaceNoNULL<CD2DPencil>(v26);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v27);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v28);
  if ( v3 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v3 + 488));
  if ( v4 )
    (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v4 + 2))(v4);
  ReleaseInterfaceNoNULL<CD2DPencil>(v21);
  return (unsigned int)v1;
}
