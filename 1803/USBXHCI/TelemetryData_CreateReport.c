/*
 * XREFs of TelemetryData_CreateReport @ 0x1C003FCB0
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0009DB4 (Controller_TelemetryReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C000D628 (RtlStringCbPrintfW.c)
 */

_QWORD *__fastcall TelemetryData_CreateReport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  PVOID v8; // rax
  int v9; // eax
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4D8uLL, 0x74614454u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x4D8uLL);
    v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40000uLL, 0x74614454u);
    *v7 = v8;
    if ( v8
      && RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v7 + 312, 0x20uLL, L"%ws", L"USBXHCI") >= 0
      && (RtlCaptureContext(&ContextRecord),
          (v9 = KeCapturePersistentThreadState(&ContextRecord, 0LL, 324LL, a3, a4, 0LL, 0LL, *v7)) != 0) )
    {
      *((_DWORD *)v7 + 2) = v9;
    }
    else
    {
      if ( *v7 )
        ExFreePoolWithTag((PVOID)*v7, 0x74614454u);
      ExFreePoolWithTag(v7, 0x74614454u);
      return 0LL;
    }
  }
  return v7;
}
