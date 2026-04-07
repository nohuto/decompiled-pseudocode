/*
 * XREFs of ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180013F00
 * Callers:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800185E0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018840 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CF68 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::SetSize(CText *this, const struct tagSIZE *a2)
{
  LONG v4; // eax
  bool v5; // zf
  void (__fastcall *v6)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v8)(CVisual *__hidden, unsigned int); // rax

  if ( (*((_BYTE *)this + 280) & 1) == 0
    || a2->cy != *((_DWORD *)this + 31)
    || (v4 = *((_DWORD *)this + 100), a2->cx < v4)
    || *((_DWORD *)this + 30) < v4 )
  {
    v8 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v8 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v8(this, 4096u);
  }
  if ( (*((_BYTE *)this + 280) & 4) != 0 && a2->cx != *((_DWORD *)this + 30) )
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
  if ( *((_DWORD *)this + 30) != a2->cx || *((_DWORD *)this + 31) != a2->cy )
  {
    v5 = (*((_BYTE *)this + 84) & 1) == 0;
    *((struct tagSIZE *)this + 15) = *a2;
    if ( !v5 )
      (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    v6 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 2u);
    else
      v6(this, 2u);
  }
  return 0LL;
}
