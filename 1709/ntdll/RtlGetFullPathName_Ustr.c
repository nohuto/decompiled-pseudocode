/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x180033160
 * Callers:
 *     RtlGetFullPathName_UstrEx @ 0x180031520 (RtlGetFullPathName_UstrEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180032C90 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_UEx @ 0x1800354C0 (RtlGetFullPathName_UEx.c)
 *     LdrpGetFullPath @ 0x18004DD58 (LdrpGetFullPath.c)
 *     RtlSetCurrentDirectory_U @ 0x18007A610 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x180033BC0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004C800 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUpcaseUnicodeChar @ 0x180050700 (RtlUpcaseUnicodeChar.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18006E308 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x18006E504 (RtlUnicodeStringCopy.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007A934 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCheckRelativeDrive @ 0x18007BAE8 (RtlpCheckRelativeDrive.c)
 *     RtlpComputeBackupIndex @ 0x1800819CC (RtlpComputeBackupIndex.c)
 *     RtlpCheckDeviceName @ 0x18008F218 (RtlpCheckDeviceName.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1800CF9C8 (RtlUnicodeStringCopyString.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        _WORD *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  _WORD *v6; // rsi
  unsigned __int16 v8; // r12
  unsigned int v9; // r13d
  unsigned int v10; // edi
  _WORD *v11; // rdx
  unsigned int i; // ecx
  __int16 v13; // ax
  unsigned int IsDosDeviceName_Ustr; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  volatile signed __int32 *v20; // rdx
  unsigned int j; // ebx
  unsigned int v22; // r11d
  unsigned int Length; // r15d
  unsigned int v24; // edx
  unsigned int k; // ecx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // ecx
  int v29; // ecx
  __int16 v30; // ax
  __int64 v31; // r8
  unsigned int v32; // ebx
  _WORD *v33; // rcx
  unsigned int m; // ecx
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int16 v37; // r9
  __int64 v38; // rax
  __int16 v39; // cx
  unsigned __int16 v40; // cx
  unsigned __int16 v41; // cx
  int v42; // r8d
  __int16 v43; // dx
  __int64 v44; // rax
  _CURDIR *v45; // rcx
  __int64 v46; // rax
  _CURDIR *p_CurrentDirectory; // rsi
  WCHAR v48; // ax
  WCHAR v49; // r15
  __int64 v50; // rax
  _CURDIR *v51; // rsi
  int v52; // eax
  __int16 v53; // ax
  int v54; // eax
  __int16 v55; // cx
  unsigned __int64 v56; // rax
  unsigned __int16 v57; // dx
  unsigned __int64 v58; // rax
  __int64 result; // rax
  unsigned int v60; // edi
  __int64 v61; // rsi
  char v62; // [rsp+20h] [rbp-E8h]
  bool v63; // [rsp+21h] [rbp-E7h]
  unsigned int v64; // [rsp+28h] [rbp-E0h]
  unsigned int v65; // [rsp+2Ch] [rbp-DCh]
  unsigned int v66; // [rsp+30h] [rbp-D8h]
  _WORD v67[4]; // [rsp+40h] [rbp-C8h] BYREF
  _WORD *v68; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v69; // [rsp+50h] [rbp-B8h]
  volatile signed __int32 *v70; // [rsp+58h] [rbp-B0h]
  int v71; // [rsp+60h] [rbp-A8h]
  __int64 v72; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+70h] [rbp-98h] BYREF
  _CURDIR *v74; // [rsp+80h] [rbp-88h]
  __int16 v75; // [rsp+88h] [rbp-80h]
  WCHAR v76; // [rsp+8Ch] [rbp-7Ch]
  int v77; // [rsp+90h] [rbp-78h]
  unsigned int v78; // [rsp+94h] [rbp-74h]
  unsigned int v79; // [rsp+98h] [rbp-70h]
  int v80; // [rsp+9Ch] [rbp-6Ch]
  _QWORD *v81; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v84[6]; // [rsp+BAh] [rbp-4Eh]

  v81 = a4;
  v6 = a3;
  v8 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v9 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v9 = a2;
  *(_QWORD *)a6 = 0LL;
  v78 = *a1;
  v10 = v78 >> 1;
  if ( !(v78 >> 1) )
    return 0LL;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v11 )
    return 0LL;
  for ( i = v78 >> 1; i && v11[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v13 = v11[v10 - 1];
  v63 = v13 != 92 && v13 != 47;
  v66 = v9 >> 1;
  v79 = v9 >> 1;
  memset(a3, 0, v9);
  v67[0] = 0;
  v69 = 2 * (v9 >> 1);
  v67[1] = v69;
  v68 = v6;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v60 = HIWORD(IsDosDeviceName_Ustr);
    v61 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v60 || (int)RtlpCheckDeviceName(a1, v60, a5) >= 0 && !*a5 )
    {
      if ( (int)v61 + 8 >= (unsigned int)v69 )
      {
        result = 0LL;
        if ( (unsigned int)(v61 + 10) <= 0xFFFF )
          return (unsigned int)(v61 + 10);
      }
      else
      {
        RtlUnicodeStringCopy(v67, L"\b\n");
        RtlUnicodeStringCbCatStringN(v67, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v60 >> 1), v61);
        return (unsigned int)(v61 + 8);
      }
      return result;
    }
    return 0LL;
  }
  v18 = RtlDetermineDosPathNameType_Ustr(a1, v15, v16, v17);
  *(_DWORD *)a6 = v18;
  *(_DWORD *)&DosPath.Length = 0;
  DosPath.Buffer = 0LL;
  v20 = 0LL;
  v70 = 0LL;
  v72 = 0LL;
  v62 = 0;
  j = 0;
  if ( v18 != 2 )
  {
    switch ( v18 )
    {
      case 1:
        v42 = 0;
        v77 = 0;
        for ( j = 2; j < v10; ++j )
        {
          v43 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v43 == 92 || v43 == 47 )
          {
            v77 = ++v42;
            if ( v42 == 2 )
              break;
          }
        }
        v65 = j;
        v71 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_95;
      case 3:
        v46 = RtlpReferenceCurrentDirectory(0LL, 0LL);
        v70 = (volatile signed __int32 *)v46;
        v72 = v46;
        v62 = 1;
        if ( v46 )
        {
          p_CurrentDirectory = (_CURDIR *)(v46 + 24);
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v70 = 0LL;
        }
        v74 = p_CurrentDirectory;
        v75 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v48 = RtlUpcaseUnicodeChar(**((unsigned __int16 **)a1 + 1));
        v49 = v48;
        v76 = v48;
        if ( v75 == v48 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          RtlUnicodeStringCopy(v67, &DosPath);
          v6 = v68;
          v8 = v67[0];
        }
        else
        {
          RtlpCheckRelativeDrive(v48);
          SourceString = 61;
          *(_WORD *)v84 = v49;
          *(_DWORD *)&v84[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, v67);
          v80 = v54;
          if ( v54 < 0 )
          {
            if ( v54 == -1073741789 )
            {
              v8 = v67[0];
              if ( (unsigned int)v67[0] + 2 > 0xFFFF )
              {
                Length = 0;
                v64 = 0;
                v6 = v68;
                v32 = v9 >> 1;
                goto LABEL_52;
              }
              DosPath.Length = v67[0] + 2;
              v6 = v68;
            }
            else
            {
              v67[0] = 0;
              SourceString = v49;
              *(_DWORD *)v84 = 6029370;
              *(_WORD *)&v84[4] = 0;
              RtlUnicodeStringCopyString(v67, &SourceString);
              DosPath.Length = 8;
              v6 = v68;
              v8 = v67[0];
            }
          }
          else
          {
            v8 = v67[0];
            v55 = v67[0];
            v56 = (unsigned __int64)v67[0] >> 1;
            if ( (unsigned int)v56 <= 3 || (unsigned int)v56 >= v66 )
            {
              v6 = v68;
            }
            else
            {
              v6 = v68;
              v68[(unsigned int)v56] = 92;
              v8 = v55 + 2;
              v67[0] = v55 + 2;
            }
            DosPath.Length = v8;
          }
        }
        v22 = 3;
        v71 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v19) = 1;
        v50 = RtlpReferenceCurrentDirectory(v19, 0LL);
        v70 = (volatile signed __int32 *)v50;
        v72 = v50;
        v62 = 1;
        if ( v50 )
        {
          v51 = (_CURDIR *)(v50 + 24);
        }
        else
        {
          v51 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v70 = 0LL;
          j = 0;
        }
        v74 = v51;
        v52 = RtlpComputeBackupIndex(v51);
        v65 = v52;
        v71 = v52;
        DosPath = v51->DosPath;
        if ( v52 == 3 )
          v53 = 4;
        else
          v53 = 2 * v52;
        DosPath.Length = v53;
        goto LABEL_95;
      case 5:
        v44 = RtlpReferenceCurrentDirectory(0LL, 0LL);
        v70 = (volatile signed __int32 *)v44;
        v72 = v44;
        v62 = 1;
        if ( v44 )
        {
          v45 = (_CURDIR *)(v44 + 24);
          *(_DWORD *)(a6 + 4) = *(_DWORD *)(v44 + 40);
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v70 = 0LL;
          j = 0;
        }
        v74 = v45;
        DosPath = v45->DosPath;
        v65 = RtlpComputeBackupIndex(v45);
        v71 = v65;
LABEL_95:
        RtlUnicodeStringCopy(v67, &DosPath);
        v6 = v68;
        v8 = v67[0];
        v22 = v65;
        goto LABEL_19;
      case 6:
      case 7:
        v71 = 4;
        j = 4;
        if ( v10 < 4 )
          j = v10;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(v67, &DosPath);
        v8 = v67[0];
        v6 = v68;
        if ( v67[0] >= 6u )
          v68[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v22 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v63 = 0;
        goto LABEL_19;
      default:
        Length = 0;
        v64 = 0;
        v32 = v9 >> 1;
        goto LABEL_147;
    }
  }
  v22 = 3;
  v71 = 3;
LABEL_19:
  Length = DosPath.Length;
  v24 = v78 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v24 + 2 > v9 )
  {
    if ( v10 > 1 || **((_WORD **)a1 + 1) != 46 )
    {
      v35 = v24 + 2;
      if ( v35 > 0xFFFF )
        v35 = 0;
      Length = v35;
      v64 = v35;
      v32 = v9 >> 1;
      goto LABEL_52;
    }
    if ( v10 != 1 )
    {
      Length = 0;
      if ( v24 <= 0xFFFF )
        Length = v78 + DosPath.Length - 2 * j;
      v32 = v9 >> 1;
      goto LABEL_51;
    }
    if ( DosPath.Length == 8 )
    {
      if ( v9 <= 8 )
      {
        Length = 10;
        v32 = v9 >> 1;
        goto LABEL_51;
      }
    }
    else
    {
      if ( v9 < DosPath.Length )
      {
        v32 = v9 >> 1;
        goto LABEL_51;
      }
      v57 = v8;
      v58 = (unsigned __int64)v8 >> 1;
      if ( (_DWORD)v58 && v6[(unsigned int)(v58 - 1)] == 92 )
      {
        v8 -= 2;
        v67[0] = v57 - 2;
      }
    }
  }
  for ( k = 0; k < v8 >> 1; ++k )
  {
    if ( v6[k] == 47 )
      v6[k] = 92;
  }
  v26 = v8 >> 1;
  while ( j < v10 )
  {
    v27 = *((_QWORD *)a1 + 1);
    v28 = *(unsigned __int16 *)(v27 + 2LL * j);
    if ( v28 == 92 )
      goto LABEL_36;
    v29 = v28 - 46;
    if ( v29 )
    {
      if ( v29 != 1 )
        goto LABEL_27;
LABEL_36:
      if ( !(_DWORD)v26 || v6[(unsigned int)(v26 - 1)] != 92 )
      {
        v6[v26] = 92;
        v26 = (unsigned int)(v26 + 1);
      }
      goto LABEL_35;
    }
    v36 = j + 1;
    if ( (_DWORD)v36 != v10 )
    {
      v37 = *(_WORD *)(v27 + 2 * v36);
      if ( v37 == 92 || v37 == 47 )
      {
        ++j;
      }
      else if ( v37 == 46
             && ((v38 = j + 2, (_DWORD)v38 == v10) || (v39 = *(_WORD *)(v27 + 2 * v38), v39 == 92) || v39 == 47) )
      {
        while ( (unsigned int)v26 >= v22 )
        {
          v69 = v6[v26];
          v40 = v69;
          v6[v26] = 0;
          if ( v40 == 92 )
          {
            while ( (unsigned int)v26 >= v22 )
            {
              v69 = v6[v26];
              v41 = v69;
              v6[v26] = 0;
              if ( v41 == 92 )
              {
                if ( (unsigned int)v26 < v22 )
                  goto LABEL_84;
                goto LABEL_80;
              }
              v26 = (unsigned int)(v26 - 1);
            }
            break;
          }
          v26 = (unsigned int)(v26 - 1);
        }
LABEL_84:
        v26 = (unsigned int)(v26 + 1);
LABEL_80:
        ++j;
      }
      else
      {
LABEL_27:
        while ( j < v10 )
        {
          v30 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v30 == 92 || v30 == 47 )
          {
            if ( j < v10 && (unsigned int)v26 >= 2 )
            {
              v31 = (unsigned int)(v26 - 1);
              if ( v6[v31] == 46 && v6[(unsigned int)(v26 - 2)] != 46 )
                v26 = (unsigned int)v31;
            }
            break;
          }
          v6[v26] = v30;
          v26 = (unsigned int)(v26 + 1);
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v63 && (unsigned int)v26 > v22 && v6[(unsigned int)(v26 - 1)] == 92 )
    LODWORD(v26) = v26 - 1;
  v32 = v9 >> 1;
  if ( (unsigned int)v26 < v66 )
    v6[(unsigned int)v26] = 0;
  while ( (_DWORD)v26 )
  {
    v26 = (unsigned int)(v26 - 1);
    v33 = &v6[v26];
    if ( *v33 != 32 && *v33 != 46 )
    {
      LODWORD(v26) = v26 + 1;
      break;
    }
    *v33 = 0;
  }
  v67[0] = 2 * v26;
  if ( v81 )
  {
    for ( m = v26; m && v6[m - 1] != 92; --m )
      ;
    if ( m >= (unsigned int)v26 || m < v22 )
      *v81 = 0LL;
    else
      *v81 = &v6[m];
  }
  Length = (unsigned __int16)(2 * v26);
LABEL_51:
  v64 = Length;
LABEL_52:
  v20 = v70;
LABEL_147:
  if ( v62 )
  {
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v72 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v72);
      }
      Length = v64;
      v6 = v68;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( Length >= 2 * (unsigned __int64)v32 && v32 )
    *v6 = 0;
  return Length;
}
