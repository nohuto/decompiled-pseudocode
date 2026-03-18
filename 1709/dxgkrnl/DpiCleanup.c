/*
 * XREFs of DpiCleanup @ 0x1C01E4C78
 * Callers:
 *     DpiDriverUnload @ 0x1C01E4F90 (DpiDriverUnload.c)
 *     DpiUnInitialize @ 0x1C01E4FB0 (DpiUnInitialize.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     McTemplateK0p @ 0x1C00204D4 (McTemplateK0p.c)
 *     DpiDxgkDdiUnload @ 0x1C0033B4C (DpiDxgkDdiUnload.c)
 */

void __fastcall DpiCleanup(struct _DRIVER_OBJECT *ClientIdentificationAddress, char a2, __int64 a3)
{
  _DWORD *DriverObjectExtension; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  _QWORD *v15; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p(&DxgkControlGuid_Context, &EventEnterDpiDriverUnload, a3, ClientIdentificationAddress);
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v9 = (__int64)DriverObjectExtension;
  if ( DriverObjectExtension && DriverObjectExtension[4] == 1953656900 && DriverObjectExtension[5] == 1 )
  {
    AcquireMiniportListMutex();
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v11 = *(_QWORD **)(v9 + 8), *v11 != v9) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( a2 )
      DpiDxgkDdiUnload(v9, v12, v13);
    RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 40));
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v15[3] = 275LL;
    v15[4] = 21LL;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(&DxgkControlGuid_Context, &EventEnterDpiDriverUnload, v14, ClientIdentificationAddress);
  }
}
