/*
 * XREFs of ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x1800149A4
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800140E0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetReverseAlignment(CText *this, char a2)
{
  __int64 v2; // rax

  if ( ((*((_BYTE *)this + 280) & 4) != 0) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 280) = (4 * a2) | *((_BYTE *)this + 280) & 0xFB;
    (*(void (__fastcall **)(CText *, __int64))(v2 + 24))(this, 4096LL);
  }
}
