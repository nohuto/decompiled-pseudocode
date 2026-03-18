/*
 * XREFs of ?GetContactVisualizationPointerEventInt@CTouchProcessor@@QEAAPEBUtagPOINTEREVENTINT@@PEAXPEAH@Z @ 0x1C0113D80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTEREVENTINT *__fastcall CTouchProcessor::GetContactVisualizationPointerEventInt(
        CTouchProcessor *this,
        CPointerInfoNode *a2,
        int *a3)
{
  _DWORD *v3; // r8
  _DWORD *v4; // r9

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) || (*v4 & 0x1000) != 0 )
    return 0LL;
  *v3 = -__CFSHR__(*v4, 4);
  return (const struct tagPOINTEREVENTINT *)(v4 + 56);
}
