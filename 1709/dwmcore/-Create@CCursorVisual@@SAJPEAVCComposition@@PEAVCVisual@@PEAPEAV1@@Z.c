/*
 * XREFs of ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18013BCA4
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127964 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801278B0 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCursorVisual::Create(struct CComposition *a1, struct CVisual *a2, CComposition ***a3)
{
  CComposition **v6; // rax
  CComposition **v7; // rbx
  unsigned int v8; // edi
  signed int WeakReferenceBase; // eax

  *a3 = 0LL;
  v6 = (CComposition **)operator new(0x20uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    v6[2] = 0LL;
    *((_DWORD *)v6 + 7) = 0;
    *v6 = a1;
    *((_BYTE *)v6 + 24) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    WeakReferenceBase = CComposition::GetWeakReferenceBase(*v7, a2, v7 + 1);
    v8 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WeakReferenceBase, 0x1Au);
      CCursorVisual::`scalar deleting destructor'(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x18u);
  }
  return v8;
}
