/*
 * XREFs of ExpTranslateEfiPath @ 0x1407C1B1C
 * Callers:
 *     NtTranslateFilePath @ 0x1407C51D4 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     swprintf_s @ 0x14018D230 (swprintf_s.c)
 *     wcscpy_s @ 0x14018EC10 (wcscpy_s.c)
 *     wcsncat_s @ 0x14018ECB0 (wcsncat_s.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     ExpCreateOutputARC @ 0x1407BF2D8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1407BF5A4 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BF674 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1407BFAFC (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1407BFF48 (ExpGetDriveGeometry.c)
 *     ExpParseEfiPath @ 0x1407C0470 (ExpParseEfiPath.c)
 *     ExpTranslateSymbolicLink @ 0x1407C24A4 (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpTranslateEfiPath(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v4; // r12
  __int64 result; // rax
  unsigned int *v7; // rdi
  unsigned int v8; // r14d
  unsigned int v9; // esi
  unsigned int *v10; // r13
  int DiskSignature; // ebx
  wchar_t *v12; // rbx
  int v13; // ebx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ecx
  wchar_t *v18; // rbx
  int v19; // r12d
  PVOID v20; // rbx
  int OutputNT; // eax
  int DriveGeometry; // esi
  __int64 v23; // [rsp+20h] [rbp-79h]
  char v24; // [rsp+40h] [rbp-59h] BYREF
  char v25; // [rsp+41h] [rbp-58h]
  rsize_t SizeInWords; // [rsp+48h] [rbp-51h] BYREF
  PVOID v27; // [rsp+50h] [rbp-49h] BYREF
  PVOID PoolWithTag; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-39h] BYREF
  __int64 v30; // [rsp+68h] [rbp-31h] BYREF
  PVOID P; // [rsp+70h] [rbp-29h]
  int v32[2]; // [rsp+78h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-19h] BYREF
  _DWORD *v34; // [rsp+90h] [rbp-9h]
  _DWORD v35[5]; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v36; // [rsp+ACh] [rbp+13h]

  PoolWithTag = 0LL;
  v4 = a3;
  *(_QWORD *)v32 = a4;
  v34 = a3;
  result = ExpParseEfiPath((char *)(a1 + 12), &PoolWithTag, &v27, &v24);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v7 = (unsigned int *)PoolWithTag;
    v8 = 0;
    v29 = 0;
    v25 = 0;
    v9 = 1;
    if ( v24 == 1 && a2 != 2 )
    {
      v10 = (unsigned int *)((char *)PoolWithTag + 24);
      DiskSignature = RtlStringFromGUIDEx((unsigned int *)PoolWithTag + 6, (__int64)&v30, 1);
      if ( DiskSignature < 0 )
        goto LABEL_12;
      SizeInWords = (unsigned int)(unsigned __int16)v30 + 22;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, SizeInWords, 0x72766E45u);
      v12 = (wchar_t *)PoolWithTag;
      if ( !PoolWithTag )
      {
        ExFreePoolWithTag(P, 0);
LABEL_7:
        if ( v27 )
          ExFreePoolWithTag(v27, 0);
        DiskSignature = -1073741670;
LABEL_43:
        ExFreePoolWithTag(v7, 0);
        return (unsigned int)DiskSignature;
      }
      SizeInWords >>= 1;
      wcscpy_s((wchar_t *)PoolWithTag, SizeInWords, L"\\??\\Volume");
      wcsncat_s(v12, SizeInWords, (const wchar_t *)P, (unsigned __int16)v30);
      ExFreePoolWithTag(P, 0);
      v13 = ExpTranslateSymbolicLink(v12);
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v13 >= 0 )
      {
LABEL_28:
        v20 = v27;
        if ( a2 == 3 )
        {
          OutputNT = ExpCreateOutputNT(
                       (__int64)v4,
                       *(unsigned int **)v32,
                       (const wchar_t **)&DestinationString,
                       (const wchar_t *)v27);
        }
        else if ( a2 == 2 )
        {
          if ( v25 == 1 )
          {
            DriveGeometry = ExpGetDriveGeometry(v8, v35);
            if ( DriveGeometry < 0 )
            {
LABEL_37:
              ExFreePoolWithTag(DestinationString.Buffer, 0);
              if ( v20 )
                ExFreePoolWithTag(v20, 0);
              DiskSignature = DriveGeometry;
              goto LABEL_43;
            }
            v9 = v36;
          }
          LODWORD(SizeInWords) = v7[1];
          PoolWithTag = (PVOID)(v9 * *((_QWORD *)v7 + 1));
          v30 = v9 * *((_QWORD *)v7 + 2);
          OutputNT = ExpCreateOutputSIGNATURE(
                       (__int64)v4,
                       *(unsigned int **)v32,
                       v10,
                       (unsigned int *)&SizeInWords,
                       &PoolWithTag,
                       &v30,
                       (wchar_t *)v20,
                       v24);
        }
        else
        {
          OutputNT = ExpCreateOutputARC(v4, *(unsigned int **)v32, (__int64)&DestinationString, (const wchar_t *)v27);
        }
        DriveGeometry = OutputNT;
        goto LABEL_37;
      }
    }
    v10 = v7 + 6;
    LODWORD(SizeInWords) = v7[1];
    DiskSignature = ExpFindDiskSignature((__int64)(v7 + 6), &SizeInWords, &v29, &PoolWithTag, &v30, v24);
    if ( DiskSignature < 0 )
    {
LABEL_12:
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      goto LABEL_43;
    }
    if ( v7[1] == (_DWORD)SizeInWords )
    {
      v14 = (unsigned __int64)PoolWithTag;
      v8 = v29;
      v15 = v30;
      if ( *((PVOID *)v7 + 1) == PoolWithTag && *((_QWORD *)v7 + 2) == v30 )
        goto LABEL_22;
      v16 = ExpGetDriveGeometry(v29, v35);
      v17 = v36;
      if ( v16 < 0 )
        v17 = 1;
      v36 = v17;
      if ( *((_QWORD *)v7 + 1) == v14 / v17 && *((_QWORD *)v7 + 2) == v15 / v17 )
      {
        v25 = 1;
LABEL_22:
        v18 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5EuLL, 0x72766E45u);
        if ( !v18 )
          goto LABEL_7;
        LODWORD(v23) = SizeInWords;
        swprintf_s(v18, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v8, v23);
        v19 = ExpTranslateSymbolicLink(v18);
        ExFreePoolWithTag(v18, 0);
        if ( v19 < 0 )
        {
          if ( v27 )
            ExFreePoolWithTag(v27, 0);
          DiskSignature = v19;
          goto LABEL_43;
        }
        v4 = v34;
        goto LABEL_28;
      }
    }
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    DiskSignature = -1073741811;
    goto LABEL_43;
  }
  return result;
}
