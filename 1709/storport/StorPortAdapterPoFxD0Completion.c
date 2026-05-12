/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x1C001EE60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqt @ 0x1C0036A50 (McTemplateK0pqt.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  _QWORD *v4; // rcx
  int v6; // ecx
  int v7; // r8d

  v4 = (_QWORD *)Context[636];
  *((_BYTE *)Context + 108) &= ~1u;
  PoFxReportDevicePoweredOn(*v4);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      McTemplateK0pqt(
        v6,
        (unsigned int)&EventAdapterPowerRequiredStop,
        v7,
        *(_QWORD *)Context[636],
        *((_DWORD *)Context + 14),
        1);
  }
}
