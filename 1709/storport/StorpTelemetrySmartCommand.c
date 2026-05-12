/*
 * XREFs of StorpTelemetrySmartCommand @ 0x1C0002D6C
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

NTSTATUS __fastcall StorpTelemetrySmartCommand(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v6; // rcx
  char *v7; // rcx
  PIRP v8; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( KeGetCurrentIrql() )
    return -1073741496;
  if ( !a3 )
    return -1073741811;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  memset(a3, 0, 0x22CuLL);
  *a3 = 28;
  memmove(a3 + 1, "SCSIDISK", 8uLL);
  a3[3] = 0;
  v6 = (unsigned int)*a3;
  a3[6] = 528;
  v7 = (char *)a3 + v6;
  a3[4] = 1770763;
  *(_DWORD *)v7 = 33;
  v7[4] = a2;
  *(_DWORD *)(v7 + 5) = -1035010047;
  v7[10] = -80;
  v7[12] = *(_BYTE *)(a1 + 89);
  v8 = IoBuildDeviceIoControlRequest(
         0x4D008u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         a3,
         0x3Cu,
         a3,
         0x22Cu,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v8 )
    return -1073741670;
  v8->IoStatus.Status = -1073741637;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v8);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 && (IoStatusBlock.Information < 0x2C || *a3 != 28 || a3[6] < 0x10u) )
    return -1073741637;
  return result;
}
