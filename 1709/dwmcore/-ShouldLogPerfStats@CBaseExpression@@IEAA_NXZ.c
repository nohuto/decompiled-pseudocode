/*
 * XREFs of ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x18011ABBC
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011D9E0 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::ShouldLogPerfStats(CBaseExpression *this)
{
  bool result; // al

  if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) != 0 )
    return 1;
  result = 0;
  if ( CCommonRegistryData::m_fLogExpressionPerfStats )
    return 1;
  return result;
}
