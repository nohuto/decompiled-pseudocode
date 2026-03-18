/*
 * XREFs of ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01B8CF4
 * Callers:
 *     DitClose @ 0x1C01B9FB8 (DitClose.c)
 *     DitStopRead @ 0x1C01BA158 (DitStopRead.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01B94F8 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

void __fastcall CloseDevice(struct DEVICEINFO *a1)
{
  int v2; // eax
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && (v2 = *((_DWORD *)a1 + 24), (v2 & 4) != 0) )
  {
    *((_DWORD *)a1 + 24) = v2 | 0x10;
    RitWakeDITAndWaitForResponse(2u);
  }
  else
  {
    if ( gfRecordPnpNotification )
      RecordPnpNotification(7LL, a1, *((unsigned __int16 *)a1 + 33));
    v3 = (void *)*((_QWORD *)a1 + 28);
    if ( v3 )
    {
      ZwCancelIoFile(v3, &IoStatusBlock);
      v4 = (void *)*((_QWORD *)a1 + 28);
      if ( v4 == (void *)ghRemoteMouseChannel || v4 == (void *)ghRemoteKeyboardChannel )
      {
        *((_QWORD *)a1 + 28) = 0LL;
      }
      else
      {
        ZwClose(v4);
        v5 = (void *)*((_QWORD *)a1 + 29);
        *((_QWORD *)a1 + 28) = 0LL;
        if ( v5 )
        {
          ObfDereferenceObject(v5);
          *((_QWORD *)a1 + 29) = 0LL;
        }
      }
    }
  }
}
