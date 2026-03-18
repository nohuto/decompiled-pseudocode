/*
 * XREFs of ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00AE610
 * Callers:
 *     ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00AE230 (-ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BBFE4 (-WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BC07C (-WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00AEBE4 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall WriteDwordToParticularRegValue(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const unsigned __int16 *a4,
        unsigned int ValueData)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rbx
  HANDLE v12; // r8
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  WCHAR *v16; // rdx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  NTSTATUS v20; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-18h] BYREF
  PCWSTR Path; // [rsp+40h] [rbp-10h] BYREF
  const unsigned __int16 *v29; // [rsp+88h] [rbp+38h] BYREF

  v29 = a4;
  Handle = 0LL;
  KeyHandle = 0LL;
  Path = 0LL;
  v7 = OpenRegistrySubkey(&Handle, (unsigned int)a2, 0LL, a1, 0LL);
  v11 = v7;
  if ( v7 >= 0 )
  {
    v12 = Handle;
    if ( !Handle )
    {
      v22 = WdLogNewEntry5_WdAssertion(v9, v8, 0LL, v10);
      *(_QWORD *)(v22 + 24) = 699LL;
      WdLogEvent5_WdAssertion(v22);
      v12 = Handle;
    }
    v13 = OpenRegistrySubkey(&KeyHandle, v8, v12, a2, (unsigned int *)&v29);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v16 = (WCHAR *)KeyHandle;
      if ( !KeyHandle )
      {
        v23 = WdLogNewEntry5_WdAssertion(v9, 0LL, v14, v15);
        *(_QWORD *)(v23 + 24) = 714LL;
        WdLogEvent5_WdAssertion(v23);
        v16 = (WCHAR *)KeyHandle;
      }
      if ( !a3->Length )
      {
LABEL_11:
        v20 = RtlWriteRegistryValue(0x40000000u, v16, L"DpiValue", 4u, &ValueData, 4u);
        v11 = v20;
        if ( v20 >= 0 )
          goto LABEL_12;
        goto LABEL_19;
      }
      v17 = OpenRegistrySubkey((PHANDLE)&Path, (unsigned int)v16, v16, a3, (unsigned int *)&v29);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v16 = (WCHAR *)Path;
        if ( !Path )
        {
          v24 = WdLogNewEntry5_WdAssertion(v9, 0LL, v18, v19);
          *(_QWORD *)(v24 + 24) = 731LL;
          WdLogEvent5_WdAssertion(v24);
          v16 = (WCHAR *)Path;
        }
        goto LABEL_11;
      }
    }
  }
LABEL_19:
  v25 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v25 + 24) = v11;
  WdLogEvent5_WdError(v25);
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v11;
}
