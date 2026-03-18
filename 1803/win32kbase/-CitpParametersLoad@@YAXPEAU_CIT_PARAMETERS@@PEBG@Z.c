/*
 * XREFs of ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C01622DC
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0161D74 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C016427C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0161FD4 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C0162128 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0162248 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 */

void __fastcall CitpParametersLoad(struct _CIT_PARAMETERS *a1, PCWSTR SourceString)
{
  NTSTATUS v4; // eax
  const char *v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // eax
  void *v8; // rcx
  bool v9; // cf
  unsigned int v10; // eax
  void *v11; // rcx
  unsigned int v12; // eax
  void *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  if ( CitpIsInteractiveSession() )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      CitpParameterGetInt32(KeyHandle, L"EntryCount", (unsigned int *)a1);
      v6 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 < 4u )
      {
        *(_DWORD *)a1 = 4;
        v6 = 4;
      }
      if ( v6 > 0x7FFF )
        *(_DWORD *)a1 = 0x7FFF;
      v18 = 60;
      CitpParameterGetInt32(KeyHandle, L"UATO", &v18);
      v7 = v18;
      v8 = KeyHandle;
      v9 = v18 == 0;
      v18 = 3600;
      if ( v9 )
        v7 = 1;
      *((_DWORD *)a1 + 1) = 1000 * v7;
      CitpParameterGetInt32(v8, L"PUUPeriod", &v18);
      v10 = v18;
      v11 = KeyHandle;
      v9 = v18 < 0x3C;
      *((_DWORD *)a1 + 4) = 1;
      if ( v9 )
        v10 = 60;
      *((_DWORD *)a1 + 2) = 1000 * v10;
      CitpParameterGetInt32(v11, L"AggFlags", (unsigned int *)a1 + 4);
      v18 = 60;
      CitpParameterGetInt32(KeyHandle, L"AggPeriod", &v18);
      v12 = 1000 * v18;
      v13 = KeyHandle;
      v18 = 1;
      *((_DWORD *)a1 + 5) = v12;
      CitpParameterGetInt32(v13, L"AggBitPeriod", &v18);
      v14 = 1000 * v18;
      *((_DWORD *)a1 + 6) = 1000 * v18;
      if ( !v14 )
        *((_DWORD *)a1 + 6) = 1;
      v18 = 34;
      CitpParameterGetInt32(KeyHandle, L"DPFlags", &v18);
      v15 = v18;
      if ( (v18 & 0xFF0000) == 0 )
        v15 = v18 & 0xFF00FFFF | 0x80000;
      if ( (v15 & 0xFF000000) == 0 )
        v15 = v15 & 0xFFFFFF | 0x40000000;
      *((_DWORD *)a1 + 8) = v15;
    }
    else
    {
      CitpLogFailureWorker((unsigned int)v4, v5, 0x812u);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  CitpParametersCompute(a1);
}
