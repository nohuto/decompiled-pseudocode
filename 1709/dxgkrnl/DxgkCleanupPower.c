/*
 * XREFs of DxgkCleanupPower @ 0x1C01E4FC8
 * Callers:
 *     DxgkUnload @ 0x1C01A5BE0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C0060858 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C0060C10 )
    {
      PoUnregisterPowerSettingCallback(qword_1C0060C10);
      qword_1C0060C10 = 0LL;
    }
    if ( qword_1C0060CA0 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C0060CA0, qword_1C0060CA0 | 3, qword_1C0060CA0 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C0060CA0 = 0LL;
      }
    }
  }
}
