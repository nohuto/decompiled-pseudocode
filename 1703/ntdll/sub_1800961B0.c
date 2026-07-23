/*
 * XREFs of sub_1800961B0 @ 0x1800961B0
 * Callers:
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     RtlRestoreContext @ 0x180086E50 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800961B0(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) != 0 )
  {
    v2 &= ~1uLL;
    if ( !_bittest64(&v1, v2) )
    {
LABEL_6:
      sub_1800960F0();
      return;
    }
LABEL_5:
    if ( _bittest64(&v1, v2 | 1) )
      return;
    goto LABEL_6;
  }
  if ( !_bittest64(&v1, v2) )
    goto LABEL_5;
}
