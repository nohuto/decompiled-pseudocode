/*
 * XREFs of ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x18012C3A4
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180135348 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::ShouldLogPerfStats(CBaseExpression *this)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(*((_QWORD *)this + 25) + 4LL) & 0x40000000) != 0 )
    return 1LL;
  result = 0LL;
  if ( CCommonRegistryData::m_fLogExpressionPerfStats )
    return 1LL;
  return result;
}
