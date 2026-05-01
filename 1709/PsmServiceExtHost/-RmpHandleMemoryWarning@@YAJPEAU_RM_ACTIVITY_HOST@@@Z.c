/*
 * XREFs of ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B3D4
 * Callers:
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180025990 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

NTSTATUS __fastcall RmpHandleMemoryWarning(struct _RM_ACTIVITY_HOST *a1)
{
  void *v1; // rdi
  NTSTATUS result; // eax
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *cData; // r9
  NTSTATUS v7; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[56]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE JobInformation[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ProcessInformation[96]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  NTSTATUS *v12; // [rsp+140h] [rbp+40h]
  int v13; // [rsp+148h] [rbp+48h]
  int v14; // [rsp+14Ch] [rbp+4Ch]
  const char *v15; // [rsp+150h] [rbp+50h]
  int v16; // [rsp+158h] [rbp+58h]
  int v17; // [rsp+15Ch] [rbp+5Ch]

  v1 = (void *)*((_QWORD *)a1 + 117);
  result = NtQueryInformationJobObject(
             v1,
             MaxJobObjectInfoClass|JobObjectBasicAccountingInformation,
             JobInformation,
             0x50u,
             0LL);
  v7 = result;
  if ( result >= 0 )
  {
    result = NtQueryInformationProcess(*((HANDLE *)a1 + 116), ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
    v7 = result;
    if ( result >= 0 )
    {
      memset_0(v8, 0, 0x30uLL);
      v7 = NtSetInformationJobObject(v1, MaxJobObjectInfoClass, v8, 0x30u);
      if ( v7 < 0 && hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v14 = 0;
          v17 = 0;
          v12 = &v7;
          v15 = "SetJobNotificationLimit";
          v13 = (int)cData;
          v16 = 24;
          TlgWrite(v4, &unk_180058A7B, v5, cData, (UINT32)cData, &pData);
        }
      }
      return 0;
    }
  }
  return result;
}
