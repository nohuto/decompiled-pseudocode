/*
 * XREFs of TelemetryData_CreateReport @ 0x1C0036CD8
 * Callers:
 *     WER_CreateReport @ 0x1C0035FAC (WER_CreateReport.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0010724 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

_QWORD *__fastcall TelemetryData_CreateReport(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  PVOID v9; // rax
  int v10; // eax
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4D8uLL, 0x74614454u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x4D8uLL);
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40000uLL, 0x74614454u);
    *v8 = v9;
    if ( v9
      && RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v8 + 312, 0x20uLL, L"%ws", L"USBHUB3") >= 0
      && (RtlCaptureContext(&ContextRecord),
          (v10 = KeCapturePersistentThreadState(&ContextRecord, 0LL, 324LL, a3, a4, a5, 0LL, *v8)) != 0) )
    {
      *((_DWORD *)v8 + 2) = v10;
    }
    else
    {
      if ( *v8 )
        ExFreePoolWithTag((PVOID)*v8, 0x74614454u);
      ExFreePoolWithTag(v8, 0x74614454u);
      return 0LL;
    }
  }
  return v8;
}
