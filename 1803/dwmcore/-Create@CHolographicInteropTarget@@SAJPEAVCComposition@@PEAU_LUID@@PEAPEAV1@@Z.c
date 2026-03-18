/*
 * XREFs of ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801FDAA4
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801F88C4 (-EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CCompositionPointLight@@SAPEAX_K@Z @ 0x18016DB78 (--2CCompositionPointLight@@SAPEAX_K@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801FD954 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801FDBE0 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Create(
        struct CComposition *a1,
        struct _LUID *a2,
        struct CHolographicInteropTarget **a3)
{
  CHolographicInteropTarget *v6; // rax
  CMILCOMBase *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax

  v6 = (CHolographicInteropTarget *)CCompositionPointLight::operator new();
  if ( v6 )
    v7 = CHolographicInteropTarget::CHolographicInteropTarget(v6, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    CMILCOMBase::InternalAddRef(v7);
    v9 = CHolographicInteropTarget::Initialize(v7, a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1Du);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v8;
}
