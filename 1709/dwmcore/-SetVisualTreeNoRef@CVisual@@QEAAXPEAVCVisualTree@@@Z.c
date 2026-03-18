/*
 * XREFs of ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18004EE6C
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180031910 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180051E5C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetVisualTreeNoRef(CVisual *this, struct CVisualTree *a2)
{
  struct CVisualTree *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CVisualTree *)`CVisual::SetVisualTreeNoRef'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x40000000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 2u, 8u, &v2);
}
