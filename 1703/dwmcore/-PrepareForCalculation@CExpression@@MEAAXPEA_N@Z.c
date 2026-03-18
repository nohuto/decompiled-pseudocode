/*
 * XREFs of ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x1800333A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExpression::PrepareForCalculation(CExpression *this, bool *a2)
{
  if ( CCommonRegistryData::m_fOptimizeForDirtyExpressions )
    *a2 = *((_QWORD *)this + 27) > *((_QWORD *)this + 19);
  else
    *a2 = 1;
}
