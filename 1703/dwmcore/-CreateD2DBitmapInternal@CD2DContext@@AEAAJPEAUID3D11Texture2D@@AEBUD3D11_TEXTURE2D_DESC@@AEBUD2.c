/*
 * XREFs of ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x1800AEA28
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180042720 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x1801961E0 (-CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMA.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x18007CB44 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapInternal(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        _OWORD *a4,
        int a5,
        int a6,
        char a7,
        CD2DBitmap **a8)
{
  CD2DBitmap **v8; // r14
  __int64 (__fastcall *v13)(_QWORD **, GUID *, CD2DBitmap ***); // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r8
  int Internal; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  CD2DBitmap **v22; // [rsp+A0h] [rbp+40h] BYREF

  v8 = a8;
  v22 = 0LL;
  v21 = 0LL;
  *a8 = 0LL;
  v13 = (__int64 (__fastcall *)(_QWORD **, GUID *, CD2DBitmap ***))**a2;
  if ( *(_DWORD *)(a3 + 12) == 1 )
  {
    v14 = v13(a2, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, &v22);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x87Eu);
      goto LABEL_6;
    }
    v16 = (__int64)v22;
  }
  else
  {
    v19 = v13(a2, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (CD2DBitmap ***)&v21);
    v15 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x889u);
      goto LABEL_6;
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, CD2DBitmap ***))(*(_QWORD *)v21 + 96LL))(v21, 0LL, &a8);
    v15 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x88Bu);
      goto LABEL_6;
    }
    v16 = (__int64)a8;
    v22 = a8;
  }
  Internal = CD2DBitmap::CreateInternal(
               *(struct CD2DResourceManager **)(a1 + 144),
               (__int64)a2,
               v16,
               a3,
               a4,
               a5,
               a6,
               0,
               a7,
               v8);
  v15 = Internal;
  if ( Internal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Internal, 0x89Eu);
LABEL_6:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v22);
  return v15;
}
