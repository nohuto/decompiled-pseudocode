/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C0006BF8
 * Callers:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     IsShellFrameHangResilient @ 0x1C0102128 (IsShellFrameHangResilient.c)
 *     EditionMouseMoveShellResilience @ 0x1C0109BA0 (EditionMouseMoveShellResilience.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00CBEDC (IsDebuggerAttached.c)
 *     IsIAMThread @ 0x1C00D63C0 (IsIAMThread.c)
 */

_BOOL8 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 1352);
  result = 1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 112);
    if ( (!v3 || !(unsigned int)IsIAMThread(*(_QWORD *)(v3 + 16)))
      && !(unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 400)) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1352) + 112LL);
      if ( !v4 || !(unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 400LL)) )
        return 0;
    }
  }
  return result;
}
