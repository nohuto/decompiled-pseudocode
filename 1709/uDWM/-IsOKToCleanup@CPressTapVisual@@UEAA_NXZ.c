/*
 * XREFs of ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x180081190
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180083130 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

char __fastcall CPressTapVisual::IsOKToCleanup(CPressTapVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 50);
  result = 0;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
    return 1;
  return result;
}
