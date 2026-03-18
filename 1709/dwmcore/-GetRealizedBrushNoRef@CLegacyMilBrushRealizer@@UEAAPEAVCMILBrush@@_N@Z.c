/*
 * XREFs of ?GetRealizedBrushNoRef@CLegacyMilBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18007D7D0
 * Callers:
 *     ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18007B960 (-GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CLegacyMilBrushRealizer::GetRealizedBrushNoRef(CLegacyMilBrushRealizer *this, char a2)
{
  struct CMILBrush *result; // rax

  result = (struct CMILBrush *)*((_QWORD *)this + 11);
  if ( a2 )
  {
    if ( !result )
      return (struct CMILBrush *)(((unsigned __int64)this + 40) & -(__int64)((CLegacyMilBrushRealizer *)((char *)this + 16) != 0LL));
  }
  return result;
}
