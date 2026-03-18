/*
 * XREFs of ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180129B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180051044 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??2CRectangleGeometry@@KAPEAX_K@Z @ 0x1800BE39C (--2CRectangleGeometry@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetClip(CCoRenderVisualProxy *this, float a2, float a3)
{
  unsigned int v3; // edi
  CMILCOMBase *v4; // rbx
  CMILCOMBase *v6; // rax
  __int64 v7; // rcx
  signed int v8; // eax
  float *v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 232LL) )
    goto LABEL_9;
  v6 = (CMILCOMBase *)CRectangleGeometry::operator new();
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x18Du);
    return v3;
  }
  CMILCOMBase::InternalAddRef(v4);
  v8 = CVisual::SetClip(*((CVisual **)this + 3), v4);
  v3 = v8;
  if ( v8 >= 0 )
  {
LABEL_9:
    v9 = *(float **)(*((_QWORD *)this + 3) + 232LL);
    v9[28] = a2;
    v9[29] = a3;
    CResource::NotifyOnChanged((CGradientBrush *)v9, 0, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x18Fu);
  }
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  return v3;
}
