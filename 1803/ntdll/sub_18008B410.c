/*
 * XREFs of sub_18008B410 @ 0x18008B410
 * Callers:
 *     RtlRestoreContext @ 0x18000B1B0 (RtlRestoreContext.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18008B410(unsigned __int64 a1)
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
      sub_18008B350();
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
