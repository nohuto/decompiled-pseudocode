/*
 * XREFs of ?Unhide@CVisual@@QEAAXXZ @ 0x180019338
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180088938 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CVisual::Unhide(CVisual *this)
{
  void (__fastcall *v2)(CVisual *, int); // rax

  if ( (*((_DWORD *)this + 22))-- == 1 )
  {
    v2 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
    if ( v2 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 256);
    else
      v2(this, 256);
  }
}
