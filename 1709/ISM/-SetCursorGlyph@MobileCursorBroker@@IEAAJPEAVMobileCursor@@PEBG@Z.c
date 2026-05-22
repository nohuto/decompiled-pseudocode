/*
 * XREFs of ?SetCursorGlyph@MobileCursorBroker@@IEAAJPEAVMobileCursor@@PEBG@Z @ 0x1800304F8
 * Callers:
 *     ?OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18002F9D0 (-OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x180030350 (-OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x1800309F4 (-GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::SetCursorGlyph(
        __int64 (__fastcall **this)(HMONITOR, const unsigned __int16 *),
        struct MobileCursor *a2,
        const unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  HMONITOR HMonitor; // rax
  int v7; // eax
  __int64 v8; // rcx

  v3 = 0;
  if ( this[9] )
  {
    HMonitor = MobileCursor::GetHMonitor(a2);
    v7 = this[9](HMonitor, a3);
    v3 = v7;
    if ( v7 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 613, v7);
  }
  return v3;
}
