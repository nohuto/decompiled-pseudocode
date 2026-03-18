/*
 * XREFs of ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C012CB50
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0117E90 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C0126DB8 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C0126E30 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01329A8 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0132B48 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::OnDeviceRemoval(DelayZonePalmRejection *this, void *a2)
{
  void *v2; // rax
  void *v5; // rax
  CHidInput *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  CHidInput *v9; // rcx
  __int64 v10; // rdx
  DelayZoneTelemetry *v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    if ( v2 == a2 )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)this + 14),
        4u,
        0xDu,
        0x13u,
        (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
        v2);
      *((_DWORD *)this + 11) = 0;
      *((_QWORD *)this + 4) = 0LL;
      if ( !*((_DWORD *)this + 10) )
      {
        *((_QWORD *)this + 2) = 0LL;
        *((_DWORD *)this + 1) = 0;
      }
    }
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 && v5 == a2 )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)this + 14),
      4u,
      0xDu,
      0x14u,
      (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
      *((_QWORD *)this + 2));
    *((_DWORD *)this + 10) = 0;
    *((_QWORD *)this + 2) = 0LL;
    v7 = *((_DWORD *)this + 1);
    if ( v7 == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v6, 1, 0);
      v9 = (CHidInput *)*((_QWORD *)this + 21);
      *((_BYTE *)this + 8) = 0;
      if ( v9 )
      {
        v10 = *((unsigned int *)this + 1);
        v12 = 0uLL;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v9, v10, v8, 2LL, &v12);
      }
      CHidInput::HandleFlushDelayZonePalmRejectInputTimer(v9);
      v7 = *((_DWORD *)this + 1);
      *((_BYTE *)this + 9) = 1;
    }
    if ( v7 == 2 && !*((_DWORD *)this + 11) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v11 = (DelayZoneTelemetry *)*((_QWORD *)this + 21);
  if ( v11 )
    DelayZoneTelemetry::ClearSession(v11);
}
