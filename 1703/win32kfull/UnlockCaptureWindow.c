/*
 * XREFs of UnlockCaptureWindow @ 0x1C00F8780
 * Callers:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C000656C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C004A46C (UpdateRawMouseMode.c)
 */

__int64 __fastcall UnlockCaptureWindow(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 72);
  if ( *v2 )
  {
    --*(_DWORD *)(gpsi + 5696LL);
    HMAssignmentUnlock(v2);
    return UpdateRawMouseMode(a1);
  }
  return result;
}
