/*
 * XREFs of ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C4024
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180037E00 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180152B38 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x1800C3F00 (-GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800C40D8 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
        CCompositionSurfaceManager *this,
        HANDLE hObject,
        struct CCompositionSurfaceInfo **a3)
{
  char v6; // si
  int v7; // ebx
  int v8; // eax
  struct CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  struct CCompositionSurfaceInfo *v10; // rdi
  int v11; // eax
  struct _LUID v13; // [rsp+70h] [rbp+18h] BYREF
  struct CCompositionSurfaceInfo *v14; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = NtValidateCompositionSurfaceHandle(hObject, &v13);
  if ( v8 < 0 )
  {
    v7 = v8 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8 | 0x10000000, 0x19u);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x44u);
  }
  else
  {
    v6 = 1;
    CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(this, v13);
    v14 = CompositionSurfaceInfoByLuid;
    v10 = CompositionSurfaceInfoByLuid;
    if ( CompositionSurfaceInfoByLuid )
    {
      CBitmapOfDeviceBitmaps::AddRef(CompositionSurfaceInfoByLuid);
    }
    else
    {
      v11 = CCompositionSurfaceInfo::Create(hObject, v13, this, &v14);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x58u);
        goto LABEL_11;
      }
      v10 = v14;
      v6 = 0;
    }
    *a3 = v10;
  }
  if ( v6 )
LABEL_11:
    CloseHandle(hObject);
  return (unsigned int)v7;
}
