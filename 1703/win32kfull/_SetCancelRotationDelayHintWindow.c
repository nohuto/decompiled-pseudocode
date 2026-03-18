/*
 * XREFs of _SetCancelRotationDelayHintWindow @ 0x1C01B1DB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 */

__int64 SetCancelRotationDelayHintWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 1;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    v2 = *(_QWORD *)(v1 + 24);
    v4[1] = v1;
    v4[0] = v2 + 304;
    HMAssignmentLock(v4);
  }
  else
  {
    UserSetLastError(5LL);
    return 0;
  }
  return v0;
}
