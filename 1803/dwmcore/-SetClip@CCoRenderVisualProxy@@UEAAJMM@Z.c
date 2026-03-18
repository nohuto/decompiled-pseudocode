/*
 * XREFs of ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x18014B7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18004FDA8 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CSolidColorLegacyMilBrush@@KAPEAX_K@Z @ 0x1800C63F0 (--2CSolidColorLegacyMilBrush@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetClip(CCoRenderVisualProxy *this, float a2, float a3)
{
  unsigned int v3; // edi
  CMILCOMBase *v4; // rbx
  CMILCOMBase *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 240LL) )
    goto LABEL_9;
  v6 = (CMILCOMBase *)CSolidColorLegacyMilBrush::operator new();
  v4 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 2) = v7;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *((_DWORD *)v6 + 21) = 1065353216;
    *((_QWORD *)v6 + 12) = 0LL;
    *((_BYTE *)v6 + 104) = 0;
    *((_QWORD *)v6 + 14) = 0LL;
    *((_BYTE *)v6 + 120) = 0;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x18Du);
    return v3;
  }
  CMILCOMBase::InternalAddRef(v4);
  v8 = CVisual::SetClip(*((CVisual **)this + 3), v4);
  v3 = v8;
  if ( v8 >= 0 )
  {
LABEL_9:
    v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 240LL);
    *(_DWORD *)(v9 + 32) |= 1u;
    *(float *)(v9 + 144) = a2;
    *(float *)(v9 + 148) = a3;
    CResource::NotifyOnChanged((CVisual *)v9, 0LL, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x18Fu);
  }
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  return v3;
}
