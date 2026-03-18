/*
 * XREFs of SdbResolveDatabaseEx @ 0x1407D7C4C
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1407D79BC (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1407D786C (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x1407D7B7C (SdbGetPathCustomSdb.c)
 *     SdbpGetSystemSdbFilePath @ 0x1407D856C (SdbpGetSystemSdbFilePath.c)
 *     AslGuidToString_UStr @ 0x1407D8E24 (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x1407D9274 (AslUnicodeStringFree.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x1407D9518 (AslRegistryGetUInt32_UStr.c)
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
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r15d
  wchar_t *v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  int UInt32_UStr; // eax
  int v29; // eax
  int v30; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  int v36; // [rsp+E8h] [rbp+77h]

  result = 0LL;
  a6 = 0;
  v30 = 0;
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
  v14 = &off_140399BD0;
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
  v14 = (GUID **)*((unsigned int *)&off_140399BD0 + 6 * (int)v15 + 4);
  v18 = *((_DWORD *)&off_140399BD0 + 6 * (int)v15 + 2);
  v19 = *((_DWORD *)&off_140399BD0 + 6 * (int)v15 + 3);
  a6 = v18;
  v36 = v19;
  if ( !(_DWORD)v14 )
  {
LABEL_19:
    v22 = AslGuidToString_UStr(&Source, a2, v14);
    if ( v22 >= 0 )
    {
      v24 = Source.Length + 184;
      v25 = (wchar_t *)AslAlloc(v23, v24);
      v13 = v25;
      if ( v25 )
      {
        Destination.MaximumLength = v24;
        Destination.Buffer = v25;
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
        v26 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
        if ( v26 >= 0 )
        {
          if ( a3 )
          {
            UInt32_UStr = AslRegistryGetUInt32_UStr(&a6, KeyHandle, &g_ustrDatabaseType);
            if ( UInt32_UStr < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbResolveDatabaseEx",
                2053,
                (unsigned int)"Failed to get database type [%x]",
                UInt32_UStr);
              *a3 = 0;
              goto LABEL_37;
            }
            *a3 = a6 & 0x7FFFFFFF;
          }
          if ( a4 )
          {
            v29 = AslRegistryGetUInt32_UStr(&v30, KeyHandle, L".0");
            if ( v29 < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbResolveDatabaseEx",
                2069,
                (unsigned int)"Failed to get runtime platform [%x]",
                v29);
              *a4 = 0;
              goto LABEL_37;
            }
            *a4 = v30;
          }
          if ( SdbGetPathCustomSdb((int)a5, v27, (__int64)a2, a1 + 576) )
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
              2078,
              (unsigned int)"SdbGetPathCustomSdb failed to get the database path.");
          }
          goto LABEL_37;
        }
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbResolveDatabaseEx",
          2041,
          (unsigned int)"Failed to open Key \"%ws\" [%x]",
          Destination.Buffer,
          v26);
      }
      else
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbResolveDatabaseEx",
          2025,
          (unsigned int)"Failed to allocate %ld bytes for key path",
          v24);
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbResolveDatabaseEx",
        2004,
        (unsigned int)"Failed to convert guid to string [%x]",
        v22);
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
    AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 1981, (unsigned int)"SdbGetPathSystemSdb failed.");
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
    if ( v36 )
      *a4 = v21 & 0x1B;
  }
  return (unsigned int)v12;
}
