/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x1C00366F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqt @ 0x1C003418C (McTemplateK0pqt.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  _QWORD *v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  v4 = (_QWORD *)Context[636];
  *((_BYTE *)Context + 108) &= ~1u;
  PoFxReportDevicePoweredOn(*v4);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      v9 = 1;
      v8 = *((_DWORD *)Context + 14);
      McTemplateK0pqt(v6, &EventAdapterPowerRequiredStop, v7, *(_QWORD *)Context[636], v8, v9);
    }
  }
}
