/*
 * XREFs of ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x180043BBC
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x18001A290 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x1801A64A0 (-CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMA.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800BAAB4 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapInternal(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD **),
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  __int64 (__fastcall *v13)(_QWORD, GUID *, _QWORD **); // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r8
  int Internal; // eax
  int v19; // eax
  int v20; // eax
  char v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v23; // [rsp+A0h] [rbp+40h] BYREF

  v8 = a8;
  v23 = 0LL;
  v22 = 0LL;
  *a8 = 0LL;
  v13 = **a2;
  if ( *(_DWORD *)(a3 + 12) == 1 )
  {
    v14 = v13(a2, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, &v23);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x64Fu);
      goto LABEL_6;
    }
    v16 = (__int64)v23;
  }
  else
  {
    v19 = v13(a2, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (_QWORD **)&v22);
    v15 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x65Au);
      goto LABEL_6;
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v22 + 96LL))(v22, 0LL, &a8);
    v15 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x65Cu);
      goto LABEL_6;
    }
    v16 = (__int64)a8;
    v23 = a8;
  }
  v21 = a7;
  Internal = CD2DBitmap::CreateInternal(*(_QWORD *)(a1 + 144), a2, v16, a3, a4, a5, a6, 0, v21, v8);
  v15 = Internal;
  if ( Internal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Internal, 0x66Fu);
LABEL_6:
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v23);
  return v15;
}
