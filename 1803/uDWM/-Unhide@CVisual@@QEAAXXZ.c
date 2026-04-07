/*
 * XREFs of ?Unhide@CVisual@@QEAAXXZ @ 0x1800258A8
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800919F8 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CVisual::Unhide(CVisual *this)
{
  void (__fastcall *v2)(CVisual *__hidden, unsigned int); // rax

  if ( (*((_DWORD *)this + 22))-- == 1 )
  {
    v2 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v2 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x100u);
    else
      v2(this, 256u);
  }
}
