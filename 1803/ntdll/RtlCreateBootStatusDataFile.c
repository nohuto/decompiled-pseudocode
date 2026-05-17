/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800E6A70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E6DA0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800E6F44 @ 0x1800E6F44 (sub_1800E6F44.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(const WCHAR *a1)
{
  char v1; // bl
  const WCHAR *v2; // rdx
  int File; // edi
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  int v6; // [rsp+80h] [rbp+17h]
  __int64 v7; // [rsp+88h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp+27h]
  int v9; // [rsp+98h] [rbp+2Fh]
  __int128 v10; // [rsp+A0h] [rbp+37h]
  const WCHAR *v11; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = 0;
  v11 = 0LL;
  if ( a1 )
  {
    v2 = a1;
  }
  else if ( (int)sub_1800E6F44(&v11) < 0 )
  {
    v2 = L"\\SystemRoot\\bootstat.dat";
    v1 = 0;
    v11 = L"\\SystemRoot\\bootstat.dat";
  }
  else
  {
    v2 = v11;
    v1 = 1;
  }
  RtlInitUnicodeString(&DestinationString, v2);
  v7 = 0LL;
  p_DestinationString = &DestinationString;
  v6 = 48;
  v9 = 64;
  v10 = 0LL;
  File = ZwCreateFile();
  if ( File >= 0 )
  {
    File = ZwWriteFile();
    if ( File >= 0 )
      File = RtlRestoreBootStatusDefaults(0LL);
  }
  if ( v1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11);
  return (unsigned int)File;
}
