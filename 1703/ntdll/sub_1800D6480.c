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

__int64 __fastcall sub_1800D6480(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(_QWORD *); // rax
  __int64 result; // rax
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v8; // ecx
  wchar_t *Buffer; // rax
  __int64 v10; // rax
  int v11; // eax
  __int16 v12; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+40h] [rbp-C0h]
  int v16; // [rsp+44h] [rbp-BCh]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+58h] [rbp-A8h]
  __int16 *v20; // [rsp+E0h] [rbp-20h] BYREF
  int v21; // [rsp+E8h] [rbp-18h]
  int v22; // [rsp+ECh] [rbp-14h]
  wchar_t *v23; // [rsp+F0h] [rbp-10h]
  int v24; // [rsp+F8h] [rbp-8h]
  int v25; // [rsp+FCh] [rbp-4h]

  v14[0] = a1;
  v14[1] = a2;
  v4 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer(qword_18015B2C0);
  if ( v4 )
    result = v4(v14);
  else
    result = RtlUnhandledExceptionFilter2(v14, &unk_1801150C2);
  if ( (_DWORD)result != -1 )
  {
    if ( !(unsigned int)EtwEventRegister((int)&unk_180113E90, 0LL, 0LL, (__int64)&v13) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v22 = 0;
      v12 = Length >> 1;
      v20 = &v12;
      v21 = 2;
      v8 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v25 = 0;
      v24 = v8;
      v23 = Buffer;
      EtwEventWrite(v13, (int)&unk_180124710, 2, (__int64)&v20);
      EtwNotificationUnregister(v13, 0LL);
    }
    v10 = *(_QWORD *)(a2 + 248);
    v19 = 0;
    v18 = v10;
    LODWORD(v10) = *(_DWORD *)(a1 + 4) | 1;
    v15 = -1073740771;
    v16 = v10;
    v17 = a1;
    v11 = ZwRaiseException();
    RtlRaiseStatus(v11);
  }
  return result;
}
