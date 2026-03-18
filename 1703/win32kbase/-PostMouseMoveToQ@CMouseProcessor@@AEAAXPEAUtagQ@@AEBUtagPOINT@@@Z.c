/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z @ 0x1C00457C0
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0047A30 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C007E408 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C007EBC4 (ApiSetEditionPostMouseMoveToQ.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(CMouseProcessor *this, struct tagQ *a2, const struct tagPOINT *a3)
{
  _DWORD *v3; // rdi
  __int64 v7; // rdx
  _DWORD *v8; // rbx

  v3 = (_DWORD *)((char *)this + 2512);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor *)((char *)this + 2512));
  if ( !(unsigned int)HasHidTable(*((_QWORD *)a2 + 7))
    || (v7 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 376LL), (*(_DWORD *)(*(_QWORD *)(v7 + 776) + 100LL) & 2) == 0) )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v7, 10, 46, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
    ApiSetEditionPostMouseMoveToQ(
      (_DWORD)a2,
      LOWORD(a3->x) | (LOWORD(a3->y) << 16),
      *v3,
      *((_QWORD *)this + 315),
      *((_QWORD *)this + 306),
      (__int64)a2 + 372);
  }
  *((_DWORD *)a2 + 85) &= ~0x20u;
  v8 = (_DWORD *)((char *)a2 + 372);
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = 0;
  }
  *(_OWORD *)v3 = 0uLL;
}
