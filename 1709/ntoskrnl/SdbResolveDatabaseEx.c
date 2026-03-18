/*
 * XREFs of SdbResolveDatabaseEx @ 0x140770970
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1407706E0 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140770590 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x1407708A0 (SdbGetPathCustomSdb.c)
 *     SdbpGetSystemSdbFilePath @ 0x14077128C (SdbpGetSystemSdbFilePath.c)
 *     AslGuidToString_UStr @ 0x140771DCC (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x140772204 (AslUnicodeStringFree.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x1407725D8 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall SdbResolveDatabaseEx(__int64 a1, _QWORD *a2, int *a3, int *a4, _WORD *a5, int a6)
{
  __int64 result; // rax
  __int64 v12; // rbx
  wchar_t *v13; // r12
  GUID **v14; // r8
  unsigned int v15; // edx
  GUID *v16; // r9
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int16 v23; // r15
  wchar_t *v24; // rax
  __int64 v25; // rdx
  int v26; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  int v32; // [rsp+E8h] [rbp+77h]

  result = 0LL;
  a6 = 0;
  v26 = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  LODWORD(v12) = 0;
  Source.Buffer = 0LL;
  v13 = 0LL;
  if ( !a5 )
    return result;
  *a5 = 0;
  v14 = &off_1403565A0;
  v15 = 0;
  while ( 1 )
  {
    v16 = *v14;
    v17 = *(_QWORD *)&(*v14)->Data1 - *a2;
    if ( !v17 )
      v17 = *(_QWORD *)v16->Data4 - a2[1];
    if ( !v17 )
      break;
    ++v15;
    v14 += 3;
    if ( v15 >= 3 )
      goto LABEL_19;
  }
  v14 = (GUID **)*((unsigned int *)&off_1403565A0 + 6 * (int)v15 + 4);
  v18 = *((_DWORD *)&off_1403565A0 + 6 * (int)v15 + 2);
  v19 = *((_DWORD *)&off_1403565A0 + 6 * (int)v15 + 3);
  a6 = v18;
  v32 = v19;
  if ( !(_DWORD)v14 )
  {
LABEL_19:
    if ( (int)AslGuidToString_UStr(&Source, a2, v14) >= 0 )
    {
      v23 = Source.Length + 184;
      v24 = (wchar_t *)AslAlloc(v22, (unsigned int)Source.Length + 184);
      v13 = v24;
      if ( v24 )
      {
        Destination.MaximumLength = v23;
        Destination.Buffer = v24;
        Destination.Length = 0;
        RtlAppendUnicodeToString(
          &Destination,
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes) >= 0 )
        {
          if ( a3 )
          {
            if ( (int)AslRegistryGetUInt32_UStr(&a6, KeyHandle, &g_ustrDatabaseType) < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbResolveDatabaseEx",
                2032,
                (unsigned int)"Failed to get database type [%x]");
              *a3 = 0;
              goto LABEL_37;
            }
            *a3 = a6 & 0x7FFFFFFF;
          }
          if ( a4 )
          {
            if ( (int)AslRegistryGetUInt32_UStr(&v26, KeyHandle, L".0") < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbResolveDatabaseEx",
                2048,
                (unsigned int)"Failed to get runtime platform [%x]");
              *a4 = 0;
              goto LABEL_37;
            }
            *a4 = v26;
          }
          if ( SdbGetPathCustomSdb((int)a5, v25, (__int64)a2, a1 + 576) )
          {
            v12 = -1LL;
            do
              ++v12;
            while ( a5[v12] );
          }
          else
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbResolveDatabaseEx",
              2057,
              (unsigned int)"SdbGetPathCustomSdb failed to get the database path.");
          }
          goto LABEL_37;
        }
        AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 2020, (unsigned int)"Failed to open Key \"%ws\" [%x]");
      }
      else
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbResolveDatabaseEx",
          2004,
          (unsigned int)"Failed to allocate %ld bytes for key path");
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbResolveDatabaseEx",
        1983,
        (unsigned int)"Failed to convert guid to string [%x]");
    }
LABEL_37:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( v13 )
      ExFreePoolWithTag(v13, 0x74705041u);
    if ( Source.Buffer )
      AslUnicodeStringFree(&Source);
    return (unsigned int)v12;
  }
  if ( (int)SdbpGetSystemSdbFilePath((_DWORD)a5, v15, (_DWORD)v14, (_DWORD)v16, 0LL, a1 + 576) < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 1960, (unsigned int)"SdbGetPathSystemSdb failed.");
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a5[v12] );
  }
  if ( a3 )
    *a3 = v18;
  if ( a4 )
  {
    v21 = SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(v20);
    *a4 = v21;
    if ( v32 )
      *a4 = v21 & 0x1B;
  }
  return (unsigned int)v12;
}
