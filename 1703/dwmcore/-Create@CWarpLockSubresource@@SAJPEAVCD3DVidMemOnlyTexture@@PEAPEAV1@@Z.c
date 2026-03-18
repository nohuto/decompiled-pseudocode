/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18019EB94
 * Callers:
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x18019B918 (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x180026970 (-Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x18004595C (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(struct CD3DVidMemOnlyTexture *a1, struct CWarpLockSubresource **a2)
{
  __int64 v3; // rax
  struct IWarpPrivateAPI *v5; // rbp
  int DXGIResource; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct IDXGIResource *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *((_QWORD *)a1 + 2);
  *a2 = 0LL;
  v5 = *(struct IWarpPrivateAPI **)(*(_QWORD *)(v3 + 128) + 624LL);
  if ( v5 )
  {
    DXGIResource = CD3DTexture::GetDXGIResource(a1, &v10);
    v7 = DXGIResource;
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801FDD68, 1u, DXGIResource, 0x27u);
    }
    else
    {
      v8 = CWarpLockSubresource::Create(v5, v10, *((_DWORD *)a1 + 45), a2);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801FDD68, 1u, v8, 0x2Du);
    }
  }
  else
  {
    v7 = -2003292287;
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v10);
  return v7;
}
