/*
 * XREFs of ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180086A40
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18008A0D0 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180009FF0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180087714 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Create(
        int a1,
        int a2,
        const struct PixelFormatInfo *a3,
        struct CSecondarySysmemBitmap **a4)
{
  char *v8; // rax
  char *v9; // rbx
  CBitmapOfDeviceBitmaps *v10; // rcx
  int v11; // eax
  signed int v12; // eax
  unsigned int v13; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v8 + 2) = 0;
  v10 = (CBitmapOfDeviceBitmaps *)v8;
  *((_QWORD *)v8 + 2) = &ISecondaryBitmap::`vftable';
  *((_QWORD *)v8 + 3) = v8 + 32;
  *((_DWORD *)v8 + 8) = 0;
  *((_DWORD *)v8 + 30) = 0;
  *(_QWORD *)v8 = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v8 + 2) = &CSecondarySysmemBitmap::`vftable'{for `CSecondaryBitmap'};
  *((_QWORD *)v8 + 12) = &CSecondarySysmemBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)v8 + 13) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
  *((_DWORD *)v8 + 28) = a1;
  *((_DWORD *)v8 + 29) = a2;
  *(_QWORD *)(v8 + 124) = *(_QWORD *)a3;
  v11 = *((_DWORD *)a3 + 2);
  *((_QWORD *)v9 + 17) = 0LL;
  *((_DWORD *)v9 + 36) = 0;
  *((_DWORD *)v9 + 33) = v11;
  v9[148] = 0;
  CBitmapOfDeviceBitmaps::AddRef(v10);
  v12 = CSecondarySysmemBitmap::Initialize((CSecondarySysmemBitmap *)v9);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x21u);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    *a4 = (struct CSecondarySysmemBitmap *)v9;
  }
  return v13;
}
