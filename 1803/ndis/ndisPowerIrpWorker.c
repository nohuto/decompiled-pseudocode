/*
 * XREFs of ndisPowerIrpWorker @ 0x1C00EEA20
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_qs @ 0x1C0066158 (WPP_SF_qs.c)
 *     WPP_SF_qsD @ 0x1C00661C4 (WPP_SF_qsD.c)
 *     ndisSetPower @ 0x1C00B092C (ndisSetPower.c)
 *     ndisQueryPower @ 0x1C0100D1C (ndisQueryPower.c)
 */

void __fastcall ndisPowerIrpWorker(PIRP Irp, __int64 a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DEVICE_OBJECT *DeviceObject; // rax
  ULONG_PTR DeviceExtension; // rdi
  const char *v6; // r9
  unsigned int Power; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // r9
  int v11; // [rsp+20h] [rbp-18h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceObject = CurrentStackLocation->DeviceObject;
  DeviceExtension = (ULONG_PTR)DeviceObject->DeviceExtension;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
  {
    v6 = "SET";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v6 = "QUERY";
    WPP_SF_qs(0x8Fu, a2, (__int64)DeviceObject->DeviceExtension, v6);
  }
  if ( CurrentStackLocation->MinorFunction == 3 )
    Power = ndisQueryPower(Irp);
  else
    Power = ndisSetPower(Irp, (__int64)CurrentStackLocation, DeviceExtension);
  if ( (Power & 0xC0000000) == 0xC0000000 && (unsigned __int8)byte_1C0099615 >= 2u )
  {
    v10 = "Set";
    v11 = Power;
    if ( CurrentStackLocation->MinorFunction != 2 )
      v10 = "Query";
    WPP_SF_qsD(Power, (__int64)"Query", DeviceExtension, v10, v11);
  }
  ndisDereferenceMiniport(DeviceExtension, 0xDu, v8, v9);
}
