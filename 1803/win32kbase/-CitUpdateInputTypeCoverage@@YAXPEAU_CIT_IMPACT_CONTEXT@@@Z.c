/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01601C0
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0162E30 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  if ( *((_WORD *)a1 + 133) != *((_WORD *)a1 + 125) && (unsigned int)dword_1C019EE64 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C019EE58);
  if ( *((_WORD *)a1 + 134) != *((_WORD *)a1 + 126) && (unsigned int)dword_1C019EE4C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C019EE40);
  if ( *((_WORD *)a1 + 135) != *((_WORD *)a1 + 127) && (unsigned int)dword_1C019EE34 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C019EE28);
  if ( *((_WORD *)a1 + 136) != *((_WORD *)a1 + 128) && (unsigned int)dword_1C019EE1C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C019EE10);
  if ( *((_WORD *)a1 + 137) != *((_WORD *)a1 + 129) && (unsigned int)dword_1C019EE04 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C019EDF8);
  if ( *((_WORD *)a1 + 138) != *((_WORD *)a1 + 130) && (unsigned int)dword_1C019EDEC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C019EDE0);
  *(_OWORD *)((char *)a1 + 264) = *(_OWORD *)((char *)a1 + 248);
}
