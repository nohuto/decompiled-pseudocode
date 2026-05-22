/*
 * XREFs of ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800382B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x1800384FC (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::OnDeviceUpdate(GazeProcessor *this, struct DeviceInfo *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)this + 7) = a2;
  memset(v6, 0, 24);
  v3 = *((_QWORD *)this + 23);
  v4 = 0;
  if ( v3 && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 40LL))(v3, v6) >= 0 )
    return (unsigned int)GazeProcessor::UpdateDeviceTransformsFromInputConfig(this, (struct SystemContextMessage *)v6);
  return v4;
}
