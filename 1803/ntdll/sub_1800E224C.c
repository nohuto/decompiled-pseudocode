/*
 * XREFs of sub_1800E224C @ 0x1800E224C
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     RtlAcquireResourceShared @ 0x18006C6A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006C780 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlCaptureContext @ 0x18009EAD0 (RtlCaptureContext.c)
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 */

void __fastcall sub_1800E224C(ULONG_PTR a1)
{
  signed __int32 v2; // eax
  int v3; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-588h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+D0h] [rbp-4E8h] BYREF

  RtlDecodePointer(Ptr);
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  v2 = _InterlockedIncrement(&dword_18015D744);
  if ( dword_18015978C && v2 == dword_18015978C )
  {
    v3 = 10 * dword_18015978C;
    if ( ((5 * dword_18015978C) & 0x40000000) != 0 )
      v3 = 0;
    dword_18015978C = v3;
    RtlCaptureContext(&ContextRecord);
    RtlReportException(&ExceptionRecord, &ContextRecord, 0xFu);
  }
  RtlRaiseException(&ExceptionRecord);
}
