/*
 * XREFs of ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800777F4
 * Callers:
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180074A40 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180077850 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x18008CDF0 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::~CImmersiveIconicBitmapRegistry(
        CImmersiveIconicBitmapRegistry *this,
        unsigned int a2)
{
  bool v2; // zf
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource ***v3; // rdi
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v5; // rcx

  v2 = *((_DWORD *)this + 10) == 0;
  *(_QWORD *)this = &CImmersiveIconicBitmapRegistry::`vftable';
  v3 = (CImmersiveIconicBitmapRegistry::CImmersiveIconicResource ***)((char *)this + 16);
  if ( !v2 )
  {
    do
    {
      v5 = **v3;
      if ( v5 )
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v5, a2);
      DynArray<CTouchVisual *,0>::RemoveAt(v3, 0LL);
    }
    while ( *((_DWORD *)this + 10) );
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 48);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v3);
}
