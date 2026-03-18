/*
 * XREFs of DxgkCleanupPower @ 0x1C01CABF0
 * Callers:
 *     DxgkUnload @ 0x1C01910D0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C006F9D8 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C006FD90 )
    {
      PoUnregisterPowerSettingCallback(qword_1C006FD90);
      qword_1C006FD90 = 0LL;
    }
    if ( qword_1C006FE20 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C006FE20, qword_1C006FE20 | 3, qword_1C006FE20 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C006FE20 = 0LL;
      }
    }
  }
}
