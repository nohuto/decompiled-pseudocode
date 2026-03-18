/*
 * XREFs of ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x1801F5AAC
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1801EF984 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CVisualGroup@@CAPEAX_K@Z @ 0x18016E050 (--2CVisualGroup@@CAPEAX_K@Z.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801F64C0 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::Create(
        struct IBitmapSource *a1,
        const struct CColorKey *a2,
        struct CBitmapColorKey **a3)
{
  char *v6; // rax
  CMILCOMBase *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax

  v6 = (char *)CVisualGroup::operator new();
  v7 = (CMILCOMBase *)v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v6 + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
    *((_QWORD *)v6 + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 12) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_DWORD *)v6 + 10) = 0;
    *(_QWORD *)(v6 + 44) = 1LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    CMILCOMBase::InternalAddRef(v7);
    v9 = CBitmapColorKey::Initialize(v7, a1, a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB4u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB0u);
  }
  return v8;
}
