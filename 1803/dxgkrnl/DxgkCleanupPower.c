/*
 * XREFs of DxgkCleanupPower @ 0x1C02058C8
 * Callers:
 *     DxgkUnload @ 0x1C0197330 (DxgkUnload.c)
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C007A757 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C007AB68 )
    {
      PoUnregisterPowerSettingCallback(qword_1C007AB68);
      qword_1C007AB68 = 0LL;
    }
    if ( qword_1C007ABF8 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C007ABF8, qword_1C007ABF8 | 3, qword_1C007ABF8 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C007ABF8 = 0LL;
      }
    }
  }
}
