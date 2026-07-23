/*
 * XREFs of sub_1800D6480 @ 0x1800D6480
 * Callers:
 *     sub_1800A8F80 @ 0x1800A8F80 (sub_1800A8F80.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     RtlDecodePointer @ 0x1800508D0 (RtlDecodePointer.c)
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwRaiseException @ 0x1800A7E10 (ZwRaiseException.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F8510 (RtlUnhandledExceptionFilter2.c)
 */

LONG __fastcall sub_1800D6480(_EXCEPTION_RECORD *a1, struct _CONTEXT *a2)
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
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&dword_1801150C2);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&stru_180113E90, 0LL, 0LL, &RegHandle) )
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
      EtwEventWrite(RegHandle, &stru_180124710, 2u, (PEVENT_DATA_DESCRIPTOR)&v16);
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
