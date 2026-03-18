/*
 * XREFs of ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0086590
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0086350 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0154F8C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     WinSqmIsOptedInEx @ 0x1C006D5A0 (WinSqmIsOptedInEx.c)
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C00868C0 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0086A0C (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0086B40 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C0086B70 (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpParametersLoad(struct _CIT_PARAMETERS *a1, const unsigned __int16 *a2)
{
  NTSTATUS v3; // eax
  const char *v4; // rdx
  _DWORD *v5; // rbx
  unsigned int v6; // ebx
  bool v7; // cf
  unsigned int v8; // edx
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  void *v13; // rcx
  int v14; // eax
  void *v15; // rcx
  void *v16; // rcx
  int v17; // eax
  int v18; // eax
  void *v19; // rcx
  int v20; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  const unsigned __int16 *v23; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v23 = a2;
  KeyHandle = 0LL;
  if ( CitpIsInteractiveSession() )
  {
    *((_BYTE *)a1 + 95) = WinSqmIsOptedInEx(4);
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
      CitpLogFailureWorker(v3, v4, 0xB59u);
    }
    else
    {
      CitpParameterGetInt32(KeyHandle, L"Override", (unsigned int *)a1);
      v5 = (_DWORD *)((char *)a1 + 4);
      CitpParameterGetInt32(KeyHandle, L"EntryCount", (unsigned int *)a1 + 1);
      if ( *((_DWORD *)a1 + 1) < 4u )
        *v5 = 4;
      if ( *v5 > 0x7FFFu )
        *v5 = 0x7FFF;
      LODWORD(v23) = 604800;
      CitpParameterGetInt32(KeyHandle, L"PerSpan", (unsigned int *)&v23);
      v6 = (unsigned int)v23;
      v7 = (unsigned int)v23 < 0xE10;
      LODWORD(v23) = 3600;
      if ( v7 )
        v6 = 3600;
      if ( v6 > 0x24EA00 )
        v6 = 2419200;
      CitpParameterGetInt32(KeyHandle, L"BitSpan", (unsigned int *)&v23);
      v8 = (unsigned int)v23;
      if ( (unsigned int)v23 > v6 || !(_DWORD)v23 )
        v8 = v6;
      *((_QWORD *)a1 + 3) = 10000000LL * v6;
      LODWORD(v23) = 14400;
      *((_QWORD *)a1 + 4) = 10000000LL * v8;
      v9 = KeyHandle;
      *((_DWORD *)a1 + 10) = 1000 * v8;
      CitpParameterGetInt32(v9, L"FlUSpan", (unsigned int *)&v23);
      v10 = (unsigned int)v23;
      LODWORD(v23) = 86400;
      if ( (unsigned int)v10 < 0x384 )
        v10 = 900LL;
      *((_QWORD *)a1 + 1) = 10000000 * v10;
      CitpParameterGetInt32(KeyHandle, L"FlUSpan", (unsigned int *)&v23);
      v11 = (unsigned int)v23;
      if ( (unsigned int)v23 < 0x384 )
        v11 = 900LL;
      *((_QWORD *)a1 + 2) = 10000000 * v11;
      CitpParameterGetInt32(KeyHandle, L"DTCnt", (unsigned int *)a1 + 11);
      CitpParameterGetInt32(KeyHandle, L"DTAge", (unsigned int *)a1 + 12);
      CitpParameterGetInt32(KeyHandle, L"DTTot", (unsigned int *)a1 + 13);
      LODWORD(v23) = 60;
      CitpParameterGetInt32(KeyHandle, L"UATO", (unsigned int *)&v23);
      v12 = (int)v23;
      v13 = KeyHandle;
      v7 = (_DWORD)v23 == 0;
      LODWORD(v23) = 3600;
      if ( v7 )
        v12 = 1;
      *((_DWORD *)a1 + 14) = 1000 * v12;
      CitpParameterGetInt32(v13, L"PUUPeriod", (unsigned int *)&v23);
      v14 = (int)v23;
      v15 = KeyHandle;
      if ( (unsigned int)v23 < 0x3C )
        v14 = 60;
      *((_DWORD *)a1 + 15) = 1000 * v14;
      CitpParameterGetString(v15, L"HPList", (const unsigned __int16 **)a1 + 8);
      v16 = KeyHandle;
      *((_DWORD *)a1 + 18) = 1;
      CitpParameterGetInt32(v16, L"AggFlags", (unsigned int *)a1 + 18);
      LODWORD(v23) = 60;
      CitpParameterGetInt32(KeyHandle, L"AggPeriod", (unsigned int *)&v23);
      v17 = 1000 * (_DWORD)v23;
      LODWORD(v23) = 1;
      *((_DWORD *)a1 + 19) = v17;
      CitpParameterGetInt32(KeyHandle, L"AggBitPeriod", (unsigned int *)&v23);
      v18 = 1000 * (_DWORD)v23;
      v19 = KeyHandle;
      LODWORD(v23) = 2;
      if ( !v18 )
        v18 = 1;
      *((_DWORD *)a1 + 20) = v18;
      CitpParameterGetInt32(v19, L"DPFlags", (unsigned int *)&v23);
      v20 = (int)v23;
      if ( ((unsigned int)v23 & 0xFF0000) == 0 )
        v20 = (unsigned int)v23 & 0xFF00FFFF | 0x80000;
      if ( (v20 & 0xFF000000) == 0 )
        v20 = v20 & 0xFFFFFF | 0x40000000;
      *((_DWORD *)a1 + 22) = v20;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  CitpParametersCompute(a1);
}
