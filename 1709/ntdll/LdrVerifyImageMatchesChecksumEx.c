/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008A5B0
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800D16B0 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x180081870 (RtlImageRvaToVa.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryInformationFile @ 0x1800A02E0 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800A21B0 (NtMakeTemporaryObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F1C8C (LdrVerifyMappedImageMatchesChecksum.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // eax
  char v6; // r13
  __int64 result; // rax
  int InformationFile; // edi
  __int64 v9; // r8
  int v10; // r13d
  int v11; // eax
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v15; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v17[2]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-80h] BYREF
  __int64 v19; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp-68h]
  _BYTE v22[16]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v23[8]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp-48h]

  v19 = a2;
  if ( *(_DWORD *)a2 != 64 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v4 = (_DWORD *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 4) & 2) == 0 )
    v4 = &unk_180118F90;
  v17[1] = (unsigned __int64)v4;
  v5 = v4[7];
  LODWORD(v17[0]) = v5 & 0x1000000;
  LODWORD(v18) = v5 & 0x1000000;
  v14 = (v5 & 0x1000000) != 0;
  v6 = a1 & 1;
  result = NtCreateSection(&Handle, (unsigned int)v4[2], *((_QWORD *)v4 + 2), 0LL, v4[6], v5, a1);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    v20 = 0LL;
    InformationFile = ZwMapViewOfSection(Handle, -1LL, &v15, 0LL, 0LL, 0LL, &v20, 1, 0, 16);
    if ( InformationFile < 0 )
      goto LABEL_29;
    if ( v6 )
    {
      v10 = v17[0];
    }
    else
    {
      InformationFile = NtQueryInformationFile(a1, v22, v23, 24LL, 5);
      if ( InformationFile < 0 )
        goto LABEL_28;
      if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v15, v20, v24) )
        InformationFile = -1073741279;
      v10 = v17[0];
      if ( InformationFile < 0 )
        goto LABEL_28;
    }
    if ( (*(_BYTE *)(a2 + 4) & 5) != 0 )
    {
      InformationFile = RtlImageNtHeaderEx(0, v15, v20, &v19);
      if ( InformationFile >= 0 )
      {
        if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
          *(_WORD *)(a2 + 56) = *(_WORD *)(v19 + 22);
        if ( (*(_BYTE *)(a2 + 4) & 1) != 0 && *(_QWORD *)(a2 + 8) )
        {
          v11 = RtlpImageDirectoryEntryToDataEx(v15, v14, 1u, &v18, v17);
          v12 = v17[0];
          if ( v11 < 0 )
            v12 = 0LL;
          v17[0] = v12;
          v21 = v12;
          if ( v12 )
          {
            v18 = 0LL;
            while ( 1 )
            {
              v9 = *(unsigned int *)(v12 + 12);
              if ( !(_DWORD)v9 )
                break;
              if ( !v10 )
                RtlImageRvaToVa(v19, v15, v9, &v18);
              _guard_dispatch_icall_fptr();
              v12 += 20LL;
              v21 = v12;
            }
          }
        }
      }
    }
LABEL_28:
    NtUnmapViewOfSection(-1LL, v15, v9);
LABEL_29:
    if ( InformationFile < 0 || v4 == (_DWORD *)&unk_180118F90 )
    {
      v13 = *((_QWORD *)v4 + 2);
      if ( v13 && (*(_BYTE *)(v13 + 24) & 0x10) != 0 )
        NtMakeTemporaryObject(Handle);
      NtClose(Handle);
    }
    else
    {
      *(_QWORD *)v4 = Handle;
    }
    return (unsigned int)InformationFile;
  }
  return result;
}
