/*
 * XREFs of EtwpEventWriteTemplateSessAndProv @ 0x1407AB268
 * Callers:
 *     EtwpCloseRegistrationObject @ 0x140587340 (EtwpCloseRegistrationObject.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateSessAndProv(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 *a5,
        ULONGLONG a6)
{
  unsigned __int16 v7; // dx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  void *v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  void *v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h]

  v7 = 0;
  if ( a4 == 2 )
  {
    UserData.Ptr = a6;
    v10 = (void *)*((_QWORD *)a5 + 1);
    v11 = *a5;
    v7 = 3;
    v12 = &EtwpNull;
    v13 = 2LL;
LABEL_7:
    *(_QWORD *)&UserData.Size = 16LL;
    return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, v7, &UserData);
  }
  if ( a5 )
  {
    UserData.Ptr = *((_QWORD *)a5 + 1);
    UserData.Size = *a5;
    UserData.Reserved = 0;
    v7 = 2;
    v10 = &EtwpNull;
    v11 = 2LL;
  }
  else if ( a6 )
  {
    UserData.Ptr = a6;
    v7 = 1;
    goto LABEL_7;
  }
  return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, v7, &UserData);
}
