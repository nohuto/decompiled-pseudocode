/*
 * XREFs of ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C0142B48
 * Callers:
 *     ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0142C90 (-SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C01413A0 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(
        DirectComposition::CGenericInkMarshaler *this,
        unsigned int a2,
        bool *a3)
{
  int v5; // r9d
  __int64 v6; // rax

  v5 = DirectComposition::CDCompDynamicArrayBase::Shrink(
         (DirectComposition::CGenericInkMarshaler *)((char *)this + 96),
         *((_QWORD *)this + 18) * a2);
  if ( v5 >= 0 )
  {
    v6 = *((_QWORD *)this + 16) / *((_QWORD *)this + 18);
    if ( *((_DWORD *)this + 38) < (unsigned int)v6 )
      LODWORD(v6) = *((_DWORD *)this + 38);
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_DWORD *)this + 38) = v6;
    *a3 = 1;
  }
  return (unsigned int)v5;
}
