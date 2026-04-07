/*
 * XREFs of ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180024274
 * Callers:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x1800243D8 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18007DFB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18001FB20 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180024480 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAllAtlasImages(CAtlasedRectsVisual *this)
{
  __int64 i; // rdi
  volatile signed __int32 *v3; // rcx
  CAtlasedImage *(__fastcall *v4)(CAtlasedImage *, char); // rax
  void (__fastcall *v5)(CVisual *, int); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
  {
    v3 = *(volatile signed __int32 **)(*((_QWORD *)this + 30) + 8 * i);
    *((_QWORD *)v3 + 10) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      v4 = **(CAtlasedImage *(__fastcall ***)(CAtlasedImage *, char))v3;
      if ( v4 == CAtlasedImage::`vector deleting destructor' )
      {
        CAtlasedImage::`vector deleting destructor'((CAtlasedImage *)v3, 1);
      }
      else if ( (char *)v4 == (char *)CAtlasButton::`scalar deleting destructor' )
      {
        CAtlasButton::`scalar deleting destructor'((CAtlasButton *)v3, 1u);
      }
      else
      {
        v4((CAtlasedImage *)v3, 1);
      }
    }
  }
  *((_DWORD *)this + 66) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 240, 8u);
  v5 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
  if ( v5 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x2000);
  else
    v5(this, 0x2000);
}
