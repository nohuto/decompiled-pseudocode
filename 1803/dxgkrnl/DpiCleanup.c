/*
 * XREFs of DpiCleanup @ 0x1C0204A7C
 * Callers:
 *     DpiDriverUnload @ 0x1C0205120 (DpiDriverUnload.c)
 *     DpiUnInitialize @ 0x1C02058B0 (DpiUnInitialize.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     McTemplateK0p @ 0x1C0027764 (McTemplateK0p.c)
 *     DpiDxgkDdiUnload @ 0x1C0042418 (DpiDxgkDdiUnload.c)
 */

void __fastcall DpiCleanup(struct _DRIVER_OBJECT *ClientIdentificationAddress, char a2, __int64 a3)
{
  _DWORD *DriverObjectExtension; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  _QWORD *v13; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p(&DxgkControlGuid_Context, &EventEnterDpiDriverUnload, a3, ClientIdentificationAddress);
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v7 = (__int64)DriverObjectExtension;
  if ( DriverObjectExtension && DriverObjectExtension[4] == 1953656900 && DriverObjectExtension[5] == 1 )
  {
    AcquireMiniportListMutex();
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD **)(v7 + 8), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
    if ( a2 )
      DpiDxgkDdiUnload(v7, v10, v11);
    RtlFreeUnicodeString((PUNICODE_STRING)(v7 + 40));
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6);
    v13[3] = 275LL;
    v13[4] = 21LL;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(&DxgkControlGuid_Context, &EventEnterDpiDriverUnload, v12, ClientIdentificationAddress);
  }
}
