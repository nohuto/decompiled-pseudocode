/*
 * XREFs of DpiCleanup @ 0x1C01CA8CC
 * Callers:
 *     DpiDriverUnload @ 0x1C01CABD0 (DpiDriverUnload.c)
 *     DpiUnInitialize @ 0x1C01CABE0 (DpiUnInitialize.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     DpiDxgkDdiUnload @ 0x1C004289C (DpiDxgkDdiUnload.c)
 */

void __fastcall DpiCleanup(struct _DRIVER_OBJECT *ClientIdentificationAddress, char a2, __int64 a3)
{
  _DWORD *DriverObjectExtension; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_p((__int64)ClientIdentificationAddress, &EventEnterDpiDriverUnload, a3, ClientIdentificationAddress);
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v9 = (__int64)DriverObjectExtension;
  if ( DriverObjectExtension && DriverObjectExtension[4] == 1953656900 && DriverObjectExtension[5] == 1 )
  {
    AcquireMiniportListMutex();
    v10 = *(_QWORD *)v9;
    v11 = *(_QWORD **)(v9 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    _InterlockedExchange64(&qword_1C006FA08, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( a2 )
      DpiDxgkDdiUnload(v9);
    RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 40));
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v14[3] = 275LL;
    v14[4] = 21LL;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p(v12, &EventEnterDpiDriverUnload, v13, ClientIdentificationAddress);
  }
}
