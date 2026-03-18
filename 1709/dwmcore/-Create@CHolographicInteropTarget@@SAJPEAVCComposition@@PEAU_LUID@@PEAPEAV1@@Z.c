/*
 * XREFs of ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801C1664
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801C06E8 (-EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CMeshGeometry2D@@KAPEAX_K@Z @ 0x180146630 (--2CMeshGeometry2D@@KAPEAX_K@Z.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801C17E8 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Create(
        struct CComposition *a1,
        struct _LUID *a2,
        struct CHolographicInteropTarget **a3)
{
  char *v6; // rax
  CMILCOMBase *v7; // rbx
  unsigned int v8; // edi
  signed int v9; // eax

  v6 = (char *)CMeshGeometry2D::operator new();
  v7 = (CMILCOMBase *)v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 2) = a1;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *(_QWORD *)v6 = &CHolographicInteropTarget::`vftable'{for `CNotificationResource'};
    *((_QWORD *)v6 + 8) = &CHolographicInteropTarget::`vftable'{for `IRenderTargetResource'};
    *((_QWORD *)v6 + 9) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
    *((_QWORD *)v6 + 15) = 0LL;
    *(_OWORD *)(v6 + 140) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    CMILCOMBase::InternalAddRef(v7);
    v9 = CHolographicInteropTarget::Initialize(v7, a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1Du);
      CMILCOMBase::InternalRelease(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x19u);
  }
  return v8;
}
