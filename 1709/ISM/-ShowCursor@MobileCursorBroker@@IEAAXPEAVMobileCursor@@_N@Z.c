/*
 * XREFs of ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180030460
 * Callers:
 *     ?OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18002F9D0 (-OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z @ 0x18002FD80 (-SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ?DestroyCursor@MobileCursorBroker@@QEAAJPEAVMobileCursor@@@Z @ 0x18002FF40 (-DestroyCursor@MobileCursorBroker@@QEAAJPEAVMobileCursor@@@Z.c)
 *     ?OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x180030240 (-OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?SetPosition@MobileCursor@@UEAAJJJ@Z @ 0x180030B10 (-SetPosition@MobileCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x1800309F4 (-GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MobileCursorBroker::ShowCursor(MobileCursorBroker *this, struct MobileCursor *a2, unsigned __int8 a3)
{
  __int64 v6; // rcx
  HMONITOR HMonitor; // rax
  int v8; // eax
  __int64 v9; // rcx

  if ( ((*(__int64 (__fastcall **)(struct MobileCursor *))(*(_QWORD *)a2 + 48LL))(a2) & 8) != 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 560, 87);
  }
  else
  {
    HMonitor = MobileCursor::GetHMonitor(a2);
    v8 = (*((__int64 (__fastcall **)(HMONITOR, _QWORD))this + 7))(HMonitor, a3);
    if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, 563, v8);
  }
}
