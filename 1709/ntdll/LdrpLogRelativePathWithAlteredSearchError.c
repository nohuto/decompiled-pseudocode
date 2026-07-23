/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x180082DE0
 * Callers:
 *     LdrpGetDllPath @ 0x180037BA4 (LdrpGetDllPath.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1800754D8 (TraceLoggingRegisterEx.c)
 *     _TlgWrite @ 0x18007F4CC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800D27C8 (_TlgCreateWsz.c)
 */

TLG_STATUS __fastcall LdrpLogRelativePathWithAlteredSearchError(
        LPCWSTR pwsz,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        void *a3)
{
  struct _PEB *v3; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  const WCHAR *Buffer; // rbx
  TLG_STATUS result; // eax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-28h] BYREF

  v3 = NtCurrentPeb();
  if ( v3 && (ProcessParameters = v3->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = &word_18011E4A0;
  result = _InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !result )
  {
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180159540, a2, a3);
    result = _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( dword_180159540 > 5u && CentennialIssueTracker_InitializedState == 2 )
  {
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateWsz(&v12, Buffer);
    return TlgWrite((TraceLoggingHProvider)&dword_180159540, &unk_180126B13, v8, v9, 4u, &pData);
  }
  return result;
}
