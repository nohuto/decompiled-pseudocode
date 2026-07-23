/*
 * XREFs of sub_1800CBC40 @ 0x1800CBC40
 * Callers:
 *     sub_18009E750 @ 0x18009E750 (sub_18009E750.c)
 * Callees:
 *     EtwEventWrite @ 0x180007400 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x18009D670 (ZwRaiseException.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F5FF0 (RtlUnhandledExceptionFilter2.c)
 */

LONG __fastcall sub_1800CBC40(_EXCEPTION_RECORD *a1, struct _CONTEXT *a2)
{
  __int64 (__fastcall *v4)(_EXCEPTION_POINTERS *); // rax
  LONG result; // eax
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rdx
  USHORT Length; // ax
  int v8; // ecx
  PWCH Buffer; // rax
  void *Rip; // rax
  NTSTATUS v11; // eax
  __int16 v12; // [rsp+20h] [rbp-E0h] BYREF
  ULONGLONG RegHandle; // [rsp+28h] [rbp-D8h] BYREF
  _EXCEPTION_POINTERS ExceptionPointers; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  __int16 *v16; // [rsp+E0h] [rbp-20h] BYREF
  int v17; // [rsp+E8h] [rbp-18h]
  int v18; // [rsp+ECh] [rbp-14h]
  PWCH v19; // [rsp+F0h] [rbp-10h]
  int v20; // [rsp+F8h] [rbp-8h]
  int v21; // [rsp+FCh] [rbp-4h]

  ExceptionPointers.ExceptionRecord = a1;
  ExceptionPointers.ContextRecord = a2;
  v4 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(Ptr);
  if ( v4 )
    result = v4(&ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&dword_180114112);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&stru_1801160F8, 0LL, 0LL, &RegHandle) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v18 = 0;
      v12 = Length >> 1;
      v16 = &v12;
      v17 = 2;
      v8 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v21 = 0;
      v20 = v8;
      v19 = Buffer;
      EtwEventWrite(RegHandle, &stru_180123F90, 2u, (PEVENT_DATA_DESCRIPTOR)&v16);
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
