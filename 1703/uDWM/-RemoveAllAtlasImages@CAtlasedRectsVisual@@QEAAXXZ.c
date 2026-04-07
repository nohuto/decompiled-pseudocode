/*
 * XREFs of ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180021C78
 * Callers:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180021E48 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180086BB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x18001AE50 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002B6B0 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAllAtlasImages(CAtlasedRectsVisual *this)
{
  __int64 i; // rdi
  volatile signed __int32 *v3; // rcx
  CAtlasButton *(__fastcall *v4)(CAtlasButton *, char); // rax
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
  {
    v3 = *(volatile signed __int32 **)(*((_QWORD *)this + 30) + 8 * i);
    *((_QWORD *)v3 + 10) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      v4 = **(CAtlasButton *(__fastcall ***)(CAtlasButton *, char))v3;
      if ( (char *)v4 == (char *)CAtlasedImage::`vector deleting destructor' )
      {
        CAtlasedImage::`vector deleting destructor'((CAtlasedImage *)v3, 1u);
      }
      else if ( v4 == CAtlasButton::`scalar deleting destructor' )
      {
        CAtlasButton::`scalar deleting destructor'((CAtlasButton *)v3, 1);
      }
      else
      {
        v4((CAtlasButton *)v3, 1);
      }
    }
  }
  *((_DWORD *)this + 66) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 240, 8LL);
  v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v5 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x2000u);
  else
    v5(this, 0x2000u);
}
