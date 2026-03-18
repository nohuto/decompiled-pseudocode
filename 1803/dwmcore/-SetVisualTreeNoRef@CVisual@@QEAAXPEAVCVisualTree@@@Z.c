/*
 * XREFs of ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18004CFEC
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180040FD0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetVisualTreeNoRef(CVisual *this, struct CVisualTree *a2)
{
  char **v2; // rcx
  struct CVisualTree *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct CVisualTree *)`CVisual::SetVisualTreeNoRef'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x40000000u;
  else
    CSparseStorage::SetData(v2, 2, 8u, &v3);
}
