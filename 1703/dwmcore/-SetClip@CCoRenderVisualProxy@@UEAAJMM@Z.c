/*
 * XREFs of ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x1801406C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18008524C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ??2CRectangleGeometry@@KAPEAX_K@Z @ 0x1800C6BA8 (--2CRectangleGeometry@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetClip(CCoRenderVisualProxy *this, float a2, float a3)
{
  unsigned int v3; // edi
  CBitmapOfDeviceBitmaps *v4; // rbx
  CBitmapOfDeviceBitmaps *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 232LL) )
    goto LABEL_9;
  v6 = (CBitmapOfDeviceBitmaps *)CRectangleGeometry::operator new();
  v4 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 2) = v7;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *((_QWORD *)v6 + 10) = 0LL;
    *((_BYTE *)v6 + 88) = 0;
    *((_DWORD *)v6 + 8) |= 1u;
    *(_QWORD *)v6 = &CRectangleGeometry::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x18Du);
    return v3;
  }
  CBitmapOfDeviceBitmaps::AddRef(v4);
  v8 = CVisual::SetClip(*((CVisual **)this + 3), v4);
  v3 = v8;
  if ( v8 >= 0 )
  {
LABEL_9:
    v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 232LL);
    *(float *)(v9 + 112) = a2;
    *(float *)(v9 + 116) = a3;
    CResource::NotifyOnChanged((_DWORD *)v9, 0LL, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x18Fu);
  }
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  return v3;
}
