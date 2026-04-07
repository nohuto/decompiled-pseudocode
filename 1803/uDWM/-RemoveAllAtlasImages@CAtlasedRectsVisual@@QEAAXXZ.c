/*
 * XREFs of ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180024620
 * Callers:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180024788 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180087090 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180018B30 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18001FD70 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
      if ( v4 == CAtlasedImage::`vector deleting destructor' )
      {
        CAtlasedImage::`vector deleting destructor'((CAtlasedImage *)v3, 1);
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
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 240, 8u);
  v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v5 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x2000u);
  else
    v5(this, 0x2000u);
}
