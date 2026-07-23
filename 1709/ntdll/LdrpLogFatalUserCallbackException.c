/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x1800D2020
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A3D10 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     EtwEventWrite @ 0x180019EF0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     EtwEventRegister @ 0x180075710 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1800A2C30 (ZwRaiseException.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F9930 (RtlUnhandledExceptionFilter2.c)
 */

LONG __fastcall LdrpLogFatalUserCallbackException(_EXCEPTION_RECORD *a1, struct _CONTEXT *a2)
{
  __int64 (__fastcall *v4)(_EXCEPTION_POINTERS *); // rax
  LONG result; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v8; // ecx
  wchar_t *Buffer; // rax
  void *Rip; // rax
  NTSTATUS v11; // eax
  __int16 v12; // [rsp+20h] [rbp-E0h] BYREF
  ULONGLONG RegHandle; // [rsp+28h] [rbp-D8h] BYREF
  _EXCEPTION_POINTERS ExceptionPointers; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *v17; // [rsp+F0h] [rbp-10h]
  int v18; // [rsp+F8h] [rbp-8h]
  int v19; // [rsp+FCh] [rbp-4h]

  ExceptionPointers.ExceptionRecord = a1;
  ExceptionPointers.ContextRecord = a2;
  v4 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v4 )
    result = v4(&ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&Flags);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &RegHandle) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      UserData.Reserved = 0;
      v12 = Length >> 1;
      UserData.Ptr = (unsigned __int64)&v12;
      UserData.Size = 2;
      v8 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v19 = 0;
      v18 = v8;
      v17 = Buffer;
      EtwEventWrite(RegHandle, &FatalUserCallbackException, 2u, &UserData);
      EtwNotificationUnregister(RegHandle, 0LL);
    }
    Rip = (void *)a2->Rip;
    ExceptionRecord.NumberParameters = 0;
    ExceptionRecord.ExceptionAddress = Rip;
    LODWORD(Rip) = a1->ExceptionFlags | 1;
    ExceptionRecord.ExceptionCode = -1073740771;
    ExceptionRecord.ExceptionFlags = (unsigned int)Rip;
    ExceptionRecord.ExceptionRecord = a1;
    v11 = ZwRaiseException(&ExceptionRecord, a2, 0);
    RtlRaiseStatus(v11);
  }
  return result;
}
