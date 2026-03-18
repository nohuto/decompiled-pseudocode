/*
 * XREFs of ??_GInkFeedbackProviderBase@@MEAAPEAXI@Z @ 0x1C021D200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

InkFeedbackProviderBase *__fastcall InkFeedbackProviderBase::`scalar deleting destructor'(
        InkFeedbackProviderBase *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &InkFeedbackProviderBase::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
