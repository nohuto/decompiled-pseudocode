/*
 * XREFs of ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1800247F8
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180024F1C (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180024CCC (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800471A0 (-AddRef@CHolographicClient@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Create(
        int a1,
        int a2,
        enum DXGI_FORMAT a3,
        enum D2D1_ALPHA_MODE a4,
        enum DXGI_COLOR_SPACE_TYPE a5,
        struct CSecondarySysmemBitmap **a6)
{
  CSecondarySysmemBitmap *v10; // rax
  CSecondarySysmemBitmap *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  void *retaddr; // [rsp+48h] [rbp+0h]

  *a6 = 0LL;
  v10 = (CSecondarySysmemBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL);
  v11 = v10;
  if ( !v10 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *((_DWORD *)v10 + 2) = 0;
  *((_QWORD *)v10 + 2) = &ISecondaryBitmap::`vftable';
  *((_QWORD *)v10 + 3) = (char *)v10 + 32;
  *((_DWORD *)v10 + 8) = 0;
  *((_DWORD *)v10 + 30) = 0;
  *((_QWORD *)v10 + 17) = 0LL;
  *((_DWORD *)v10 + 36) = 0;
  *(_QWORD *)v10 = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v10 + 2) = &CSecondarySysmemBitmap::`vftable'{for `CSecondaryBitmap'};
  *((_QWORD *)v10 + 12) = &CSecondarySysmemBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)v10 + 13) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
  *((_DWORD *)v10 + 33) = a5;
  *((_DWORD *)v10 + 28) = a1;
  *((_DWORD *)v10 + 29) = a2;
  *((_DWORD *)v10 + 31) = a3;
  *((_DWORD *)v10 + 32) = a4;
  *((_BYTE *)v10 + 148) = 0;
  CHolographicClient::AddRef(v10);
  v12 = CSecondarySysmemBitmap::Initialize(v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x25u);
    (*(void (__fastcall **)(CSecondarySysmemBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    *a6 = v11;
  }
  return v13;
}
