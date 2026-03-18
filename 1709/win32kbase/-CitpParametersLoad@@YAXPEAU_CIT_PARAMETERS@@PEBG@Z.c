/*
 * XREFs of ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0082630
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0082410 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01559B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C0082800 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C008288C (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0082914 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpParametersLoad(struct _CIT_PARAMETERS *a1, const unsigned __int16 *a2)
{
  NTSTATUS v3; // eax
  const char *v4; // rdx
  int v5; // eax
  void *v6; // rcx
  bool v7; // cf
  int v8; // eax
  void *v9; // rcx
  int v10; // eax
  void *v11; // rcx
  int v12; // eax
  int v13; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  const unsigned __int16 *v16; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v16 = a2;
  KeyHandle = 0LL;
  if ( CitpIsInteractiveSession() )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v3 < 0 )
    {
      CitpLogFailureWorker(v3, v4, 0x808u);
    }
    else
    {
      CitpParameterGetInt32(KeyHandle, L"EntryCount", (unsigned int *)a1);
      if ( *(_DWORD *)a1 < 4u )
        *(_DWORD *)a1 = 4;
      if ( *(_DWORD *)a1 > 0x7FFFu )
        *(_DWORD *)a1 = 0x7FFF;
      LODWORD(v16) = 60;
      CitpParameterGetInt32(KeyHandle, L"UATO", (unsigned int *)&v16);
      v5 = (int)v16;
      v6 = KeyHandle;
      v7 = (_DWORD)v16 == 0;
      LODWORD(v16) = 3600;
      if ( v7 )
        v5 = 1;
      *((_DWORD *)a1 + 1) = 1000 * v5;
      CitpParameterGetInt32(v6, L"PUUPeriod", (unsigned int *)&v16);
      v8 = (int)v16;
      v9 = KeyHandle;
      v7 = (unsigned int)v16 < 0x3C;
      *((_DWORD *)a1 + 3) = 1;
      if ( v7 )
        v8 = 60;
      *((_DWORD *)a1 + 2) = 1000 * v8;
      CitpParameterGetInt32(v9, L"AggFlags", (unsigned int *)a1 + 3);
      LODWORD(v16) = 60;
      CitpParameterGetInt32(KeyHandle, L"AggPeriod", (unsigned int *)&v16);
      v10 = 1000 * (_DWORD)v16;
      v11 = KeyHandle;
      LODWORD(v16) = 1;
      *((_DWORD *)a1 + 4) = v10;
      CitpParameterGetInt32(v11, L"AggBitPeriod", (unsigned int *)&v16);
      v12 = 1000 * (_DWORD)v16;
      *((_DWORD *)a1 + 5) = 1000 * (_DWORD)v16;
      if ( !v12 )
        *((_DWORD *)a1 + 5) = 1;
      LODWORD(v16) = 34;
      CitpParameterGetInt32(KeyHandle, L"DPFlags", (unsigned int *)&v16);
      v13 = (int)v16;
      if ( ((unsigned int)v16 & 0xFF0000) == 0 )
        v13 = (unsigned int)v16 & 0xFF00FFFF | 0x80000;
      if ( (v13 & 0xFF000000) == 0 )
        v13 = v13 & 0xFFFFFF | 0x40000000;
      *((_DWORD *)a1 + 7) = v13;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  CitpParametersCompute(a1);
}
