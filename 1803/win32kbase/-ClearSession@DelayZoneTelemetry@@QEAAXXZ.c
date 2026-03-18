/*
 * XREFs of ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01329A8
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C012CB50 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0132950 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C0132E3C (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 */

void __fastcall DelayZoneTelemetry::ClearSession(DelayZoneTelemetry *this)
{
  DelayZoneTelemetry::UploadTelemetryData(this, 1);
  *((_DWORD *)this + 2) = 0;
  memset((char *)this + 2064, 0, 0x27F0uLL);
  memset((char *)this + 16, 0, 0x800uLL);
  *((_BYTE *)this + 16) = 0;
  DelayZoneTelemetry::ClearInputPanelRects(this);
  *((_DWORD *)this + 3) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
}
