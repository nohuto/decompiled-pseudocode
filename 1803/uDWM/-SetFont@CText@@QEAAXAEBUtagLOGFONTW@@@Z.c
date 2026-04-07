/*
 * XREFs of ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180014FC4
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180014470 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     memcmp_0 @ 0x18004B354 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CText::SetFont(CText *this, const struct tagLOGFONTW *a2)
{
  char *v2; // rsi
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rax

  v2 = (char *)this + 296;
  if ( memcmp_0((char *)this + 296, a2, 0x5CuLL) )
  {
    *((_BYTE *)this + 280) &= ~1u;
    *(_OWORD *)v2 = *(_OWORD *)&a2->lfHeight;
    *((_OWORD *)v2 + 1) = *(_OWORD *)&a2->lfWeight;
    *((_OWORD *)v2 + 2) = *(_OWORD *)&a2->lfFaceName[2];
    *((_OWORD *)v2 + 3) = *(_OWORD *)&a2->lfFaceName[10];
    *((_OWORD *)v2 + 4) = *(_OWORD *)&a2->lfFaceName[18];
    *((_QWORD *)v2 + 10) = *(_QWORD *)&a2->lfFaceName[26];
    *((_DWORD *)v2 + 22) = *(_DWORD *)&a2->lfFaceName[30];
    v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v5 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v5(this, 4096u);
  }
}
