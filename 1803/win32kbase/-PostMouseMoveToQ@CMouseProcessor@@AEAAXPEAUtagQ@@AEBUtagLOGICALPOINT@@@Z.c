/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00379B8
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0039994 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     PostPendingMouseMove @ 0x1C003B110 (PostPendingMouseMove.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003B018 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C003B054 (ApiSetEditionPostMouseMoveToQ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3)
{
  _DWORD *v6; // rdi
  int v7; // edx
  _DWORD *v8; // rbx

  if ( (*((_DWORD *)a2 + 97) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v6 = (_DWORD *)((char *)this + 2520);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor *)((char *)this + 2520));
  if ( !(unsigned int)HasHidTable(*((_QWORD *)a2 + 11))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 416LL) + 824LL) + 100LL) & 2) == 0 )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v7, 10, 46, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
    ApiSetEditionPostMouseMoveToQ(
      (_DWORD)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      *v6,
      *((_QWORD *)this + 316),
      *((_QWORD *)this + 307),
      (__int64)a2 + 420);
  }
  *((_DWORD *)a2 + 97) &= ~0x20u;
  v8 = (_DWORD *)((char *)a2 + 420);
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = 0;
  }
  *(_OWORD *)v6 = 0uLL;
}
