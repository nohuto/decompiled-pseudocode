/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C0002114
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     EditionMouseMoveShellResilience @ 0x1C00F4740 (EditionMouseMoveShellResilience.c)
 *     IsShellFrameHangResilient @ 0x1C01081B0 (IsShellFrameHangResilient.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00B44C4 (IsDebuggerAttached.c)
 *     IsIAMThread @ 0x1C00F6870 (IsIAMThread.c)
 */

_BOOL8 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 1264);
  result = 1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 112);
    if ( (!v3 || !(unsigned int)IsIAMThread(*(_QWORD *)(v3 + 16)))
      && !(unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 376)) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1264) + 112LL);
      if ( !v4 || !(unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 376LL)) )
        return 0;
    }
  }
  return result;
}
