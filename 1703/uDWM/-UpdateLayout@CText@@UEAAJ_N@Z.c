/*
 * XREFs of ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x18001BC10
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180024270 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001BCAC (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180023C30 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::UpdateLayout(CText *this, bool a2)
{
  int updated; // eax
  int v4; // ebx
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rax
  int v6; // eax

  updated = CVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x51u);
  }
  else
  {
    v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v5 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 4u);
    else
      v5(this, 4u);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1B9u);
  }
  else
  {
    v6 = CText::ValidateResources(this);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1BAu);
  }
  return (unsigned int)v4;
}
