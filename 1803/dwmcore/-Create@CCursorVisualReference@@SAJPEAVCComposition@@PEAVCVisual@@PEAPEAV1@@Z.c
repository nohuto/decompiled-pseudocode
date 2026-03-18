/*
 * XREFs of ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D9ED8
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800D9DD8 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800D9F60 (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCursorVisualReference::Create(struct CComposition *a1, struct CVisual *a2, CComposition ***a3)
{
  CComposition **v6; // rax
  CComposition **v7; // rbx
  int WeakReferenceBase; // eax
  unsigned int v9; // edi
  unsigned int v11; // edx

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
    v9 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, 0x1Au);
      CCursorVisualReference::`scalar deleting destructor'((CCursorVisualReference *)v7, v11);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x18u);
  }
  return v9;
}
