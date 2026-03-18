/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084010
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0083540 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  if ( *((_WORD *)a1 + 133) != *((_WORD *)a1 + 125) && (unsigned int)dword_1C018CFCC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C018CFC0);
  if ( *((_WORD *)a1 + 134) != *((_WORD *)a1 + 126) && (unsigned int)dword_1C018CFB4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C018CFA8);
  if ( *((_WORD *)a1 + 135) != *((_WORD *)a1 + 127) && (unsigned int)dword_1C018D5E4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C018D5D8);
  if ( *((_WORD *)a1 + 136) != *((_WORD *)a1 + 128) && (unsigned int)dword_1C018D5CC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C018D5C0);
  if ( *((_WORD *)a1 + 137) != *((_WORD *)a1 + 129) && (unsigned int)dword_1C018D5B4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C018D5A8);
  if ( *((_WORD *)a1 + 138) != *((_WORD *)a1 + 130) && (unsigned int)dword_1C018D59C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C018D590);
  *(_OWORD *)((char *)a1 + 264) = *(_OWORD *)((char *)a1 + 248);
}
