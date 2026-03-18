/*
 * XREFs of CmpAddRemoveRMLogContainer @ 0x1406F9D80
 * Callers:
 *     CmpTransWriteLog @ 0x1405DE890 (CmpTransWriteLog.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     CmpQueryNameString @ 0x140561CB8 (CmpQueryNameString.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 */

__int64 __fastcall CmpAddRemoveRMLogContainer(__int64 a1)
{
  ULONG_PTR v2; // rax
  UNICODE_STRING *v3; // r15
  int v4; // ebx
  int i; // esi
  int v6; // eax
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v9; // [rsp+50h] [rbp-10h] BYREF

  *(_DWORD *)&v9.Length = 0;
  v9.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( (PVOID)a1 == CmRmSystem )
  {
    v2 = qword_140396A80;
    v3 = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v4 = CmpQueryNameString(*(void **)(*(_QWORD *)(a1 + 80) + 1536LL), &v9);
    if ( v4 < 0 )
      goto LABEL_14;
    v2 = *(_QWORD *)(a1 + 80);
    v3 = &v9;
  }
  v4 = RtlStringFromGUIDEx((unsigned int *)(*(_QWORD *)(v2 + 64) + 112LL), (__int64)&UnicodeString, 1);
  if ( v4 >= 0 )
  {
    for ( i = *(_DWORD *)(a1 + 68); ; ++i )
    {
      v6 = CmpAddRemoveContainerToCLFSLog(
             *(PLOG_FILE_OBJECT *)(a1 + 88),
             v3,
             &UnicodeString,
             &CmpLogExt,
             &CmpContainerSuffix,
             i,
             (PULONGLONG)(a1 + 72),
             1);
      v4 = v6;
      if ( v6 != -1073741771 && v6 != -1073741635 )
        break;
    }
    if ( v6 >= 0 )
      ++*(_DWORD *)(a1 + 68);
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
LABEL_14:
  if ( v9.Buffer )
    RtlFreeAnsiString(&v9);
  return (unsigned int)v4;
}
