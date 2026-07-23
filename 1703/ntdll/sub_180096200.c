/*
 * XREFs of sub_180096200 @ 0x180096200
 * Callers:
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     RtlRestoreContext @ 0x180086E50 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180096200(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax

  v1 = *(_QWORD *)(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_6:
    sub_1800960F0();
    return;
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_6;
}
