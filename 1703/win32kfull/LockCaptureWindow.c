/*
 * XREFs of LockCaptureWindow @ 0x1C003C7A4
 * Callers:
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C004A46C (UpdateRawMouseMode.c)
 */

__int64 __fastcall LockCaptureWindow(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (_QWORD *)(a1 + 72);
  if ( *v3 )
    --*(_DWORD *)(gpsi + 5696LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 5696LL);
  v6[0] = v3;
  v6[1] = a2;
  v4 = HMAssignmentLock(v6);
  UpdateRawMouseMode(a1);
  return v4;
}
