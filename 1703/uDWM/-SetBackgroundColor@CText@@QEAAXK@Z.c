/*
 * XREFs of ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18001C314
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001B9D0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x1800248D8 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetBackgroundColor(CText *this, int a2)
{
  int v2; // edx
  __int64 v3; // rax
  void (__fastcall *v4)(CVisual *__hidden, unsigned int); // rax

  v2 = a2 & 0xFFFFFF;
  if ( *((_DWORD *)this + 103) != v2 )
  {
    v3 = *(_QWORD *)this;
    *((_DWORD *)this + 103) = v2;
    v4 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v3 + 24);
    if ( v4 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v4(this, 4096u);
  }
}
