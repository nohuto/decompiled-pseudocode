/*
 * XREFs of MmIsWriteErrorFatal @ 0x140135254
 * Callers:
 *     CcIsFatalWriteError @ 0x1400C52EC (CcIsFatalWriteError.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x140714660 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1401352C0 (FsRtlIsTotalDeviceFailure.c)
 */

__int64 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (a3 == -1073741740 || !a1 || !a2) && a3 != -1073741672 && a3 != -1073741566 && a3 != -1073741202 )
  {
    if ( a3 == -1073741667 )
    {
      if ( a1 && a2 )
        goto LABEL_7;
    }
    else if ( a3 != -1073741662 || !a1 )
    {
LABEL_7:
      LOBYTE(v3) = FsRtlIsTotalDeviceFailure(a3) == 0;
      return v3;
    }
  }
  return 1LL;
}
