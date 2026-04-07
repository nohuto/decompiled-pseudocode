/*
 * XREFs of ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x1800100C4
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001C234 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAccent::SetParentVisible(CAccent *this, char a2)
{
  void (__fastcall *v4)(CVisual *__hidden, unsigned int); // rax

  if ( a2 != *((_BYTE *)this + 374) )
  {
    v4 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v4 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x10000u);
    else
      v4(this, 0x10000u);
    *((_BYTE *)this + 374) = a2;
  }
}
