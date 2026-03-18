/*
 * XREFs of ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x1801A184C
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800445FC (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801A1C0C (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::Create(
        struct IBitmapSource *a1,
        const struct CColorKey *a2,
        struct CBitmapColorKey **a3)
{
  char *v6; // rax
  CBitmapColorKey *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x78uLL);
  v7 = (CBitmapColorKey *)v6;
  if ( !v6 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  *((_DWORD *)v6 + 2) = 0;
  *(_QWORD *)v6 = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v6 + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
  *((_QWORD *)v6 + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
  *((_QWORD *)v6 + 8) = 0LL;
  *((_QWORD *)v6 + 12) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_DWORD *)v6 + 10) = 0;
  *(_QWORD *)(v6 + 44) = 1LL;
  CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v6);
  v8 = CBitmapColorKey::Initialize(v7, a1, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB4u);
    CMILCOMBase::InternalRelease(v7);
  }
  else
  {
    *a3 = v7;
  }
  return v9;
}
