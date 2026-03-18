/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z @ 0x1C00146A0
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0014088 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C0012B7C (ApiSetEditionPostMouseMoveToQ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C0017E5C (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(CMouseProcessor *this, struct tagQ *a2, const struct tagPOINT *a3)
{
  unsigned int *v3; // rdi
  __int64 v7; // rdx
  _DWORD *v8; // rbx

  v3 = (unsigned int *)((char *)this + 2664);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor *)((char *)this + 2664));
  if ( !(unsigned int)HasHidTable(*((_QWORD *)a2 + 11))
    || (v7 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 400LL), (*(_DWORD *)(*(_QWORD *)(v7 + 784) + 100LL) & 2) == 0) )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v7, 10, 46, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
    ApiSetEditionPostMouseMoveToQ(
      (__int64)a2,
      LOWORD(a3->x) | (LOWORD(a3->y) << 16),
      *v3,
      *((_QWORD *)this + 334),
      *((_QWORD *)this + 325),
      (__int64)a2 + 412);
  }
  *((_DWORD *)a2 + 95) &= ~0x20u;
  v8 = (_DWORD *)((char *)a2 + 412);
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = 0;
  }
  *(_OWORD *)v3 = 0uLL;
}
