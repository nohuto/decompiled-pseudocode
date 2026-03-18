/*
 * XREFs of ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800CF1F4
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800CF090 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCursorVisual::Create(struct CComposition *a1, struct CVisual *a2, struct CWeakReferenceBase ***a3)
{
  struct CWeakReferenceBase **v6; // rax
  struct CWeakReferenceBase **v7; // rbx
  int WeakReferenceBase; // eax
  unsigned int v9; // edi
  unsigned int v11; // edx

  *a3 = 0LL;
  v6 = (struct CWeakReferenceBase **)operator new(0x20uLL);
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
    WeakReferenceBase = CComposition::GetWeakReferenceBase((struct _RTL_GENERIC_TABLE *)*v7, a2, v7 + 1);
    v9 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x1Au);
      CCursorVisual::`scalar deleting destructor'((CCursorVisual *)v7, v11);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x18u);
  }
  return v9;
}
