/*
 * XREFs of ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18001C2DC
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001B9D0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetRTLReading(CText *this, char a2)
{
  __int64 v2; // rax

  if ( ((*((_BYTE *)this + 280) & 2) != 0) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 280) = (2 * a2) | *((_BYTE *)this + 280) & 0xFD;
    (*(void (__fastcall **)(CText *, __int64))(v2 + 24))(this, 4096LL);
  }
}
