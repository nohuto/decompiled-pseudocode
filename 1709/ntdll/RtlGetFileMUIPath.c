/*
 * XREFs of RtlGetFileMUIPath @ 0x18001B6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18001BBFC (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpCalcAllocSize @ 0x18001C10C (LdrpCalcAllocSize.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlIntegerToUnicode @ 0x18002D420 (RtlIntegerToUnicode.c)
 *     RtlGetFullPathName_UEx @ 0x1800354C0 (RtlGetFullPathName_UEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800ED438 (RtlpMUIGetAllInstalledLang.c)
 */

NTSTATUS __cdecl RtlGetFileMUIPath(
        ULONG Flags,
        PCWSTR FilePath,
        PWSTR Language,
        PULONG LanguageLength,
        PWSTR FileMUIPath,
        PULONG FileMUIPathLength,
        PULONGLONG Enumerator)
{
  wchar_t *v7; // r11
  ULONGLONG v9; // rsi
  const WCHAR *v10; // r14
  ULONGLONG v11; // rdi
  NTSTATUS ProcessRegistryInfo; // ebx
  WCHAR *v13; // r14
  NTSTATUS FullPathName_UEx; // eax
  ULONG v15; // ecx
  ULONGLONG v16; // rax
  __int16 v18; // cx
  unsigned int v19; // edi
  unsigned int v20; // ecx
  ULONG v21; // esi
  SIZE_T v22; // rax
  PVOID v23; // rax
  NTSTATUS v24; // eax
  ULONGLONG v25; // r15
  ULONGLONG v26; // rcx
  const WCHAR *m; // rbx
  const WCHAR *v28; // r12
  char v29; // al
  WCHAR *v30; // r12
  int *v31; // rdi
  unsigned __int64 Length; // rbx
  __int64 v33; // rax
  bool IsWin32WithRCManifest; // al
  ULONGLONG v35; // r10
  unsigned __int16 v36; // r8
  ULONGLONG v37; // rax
  unsigned __int64 i; // r9
  char v39; // cl
  SIZE_T v40; // rax
  PVOID v41; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  __int64 v43; // rax
  ULONGLONG v44; // rcx
  const WCHAR *j; // rbx
  __int64 v46; // rax
  const WCHAR *v47; // r12
  char MUIRedirectedFilePath; // al
  __int64 v49; // rax
  char v50; // al
  char v51; // r13
  ULONG v52; // eax
  PCWSTR v53; // rcx
  NTSTATUS v54; // eax
  PVOID v55; // rax
  BOOLEAN v56; // al
  BOOLEAN v57; // al
  wchar_t *v58; // rbx
  ULONGLONG k; // rcx
  __int64 v60; // rax
  const WCHAR *v61; // r14
  int v62; // eax
  __int64 v63; // rax
  char v64; // al
  char v65; // bl
  char v66; // [rsp+40h] [rbp-C0h]
  char v67; // [rsp+41h] [rbp-BFh] BYREF
  bool v68; // [rsp+42h] [rbp-BEh]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v71; // [rsp+50h] [rbp-B0h] BYREF
  ULONG NumberOfLanguages; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR Heap; // [rsp+70h] [rbp-90h]
  ULONGLONG v75; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  ULONG Value; // [rsp+88h] [rbp-78h] BYREF
  PWSTR FilePart; // [rsp+90h] [rbp-70h] BYREF
  void *v79; // [rsp+98h] [rbp-68h]
  ULONG BytesRequired; // [rsp+A0h] [rbp-60h] BYREF
  DWORD Lcid; // [rsp+A4h] [rbp-5Ch] BYREF
  _QWORD v82[2]; // [rsp+A8h] [rbp-58h] BYREF
  PULONG v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  PCWSTR SourceString; // [rsp+C8h] [rbp-38h]
  PVOID v86; // [rsp+D0h] [rbp-30h]
  PULONGLONG v87; // [rsp+D8h] [rbp-28h]
  char v88[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v89[8]; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING Source; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v91; // [rsp+100h] [rbp+0h] BYREF
  _UNICODE_STRING String; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v93; // [rsp+120h] [rbp+20h] BYREF
  WCHAR v94[4]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v95; // [rsp+138h] [rbp+38h]

  v7 = 0LL;
  v79 = FileMUIPath;
  v9 = 0LL;
  v10 = 0LL;
  v82[1] = FileMUIPathLength;
  v83 = LanguageLength;
  SourceString = Language;
  v11 = Flags;
  v87 = Enumerator;
  v71 = 0LL;
  v84 = 0LL;
  v75 = 0LL;
  v67 = 0;
  *(_QWORD *)v94 = 0LL;
  v95 = 0;
  BaseAddress = 0LL;
  String1 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v86 = 0LL;
  Heap = 0LL;
  FilePart = 0LL;
  v82[0] = 0LL;
  if ( !FilePath || !Enumerator )
  {
    ProcessRegistryInfo = -1073741811;
    goto LABEL_173;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo(v82);
  if ( ProcessRegistryInfo < 0 )
    return ProcessRegistryInfo;
  Heap = (PCWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
  v13 = (WCHAR *)Heap;
  if ( !Heap )
    return -1073741801;
  FullPathName_UEx = RtlGetFullPathName_UEx(FilePath, 0x208u, (PWSTR)Heap, &FilePart, &BytesRequired);
  v7 = 0LL;
  v15 = 0;
  if ( FullPathName_UEx >= 0 )
    v15 = BytesRequired;
  if ( v15 - 1 > 0x206 || !FilePart || FilePart <= Heap || FilePart >= Heap + 260 )
    goto LABEL_13;
  *(FilePart - 1) = 0;
  v16 = *Enumerator;
  if ( *Enumerator )
  {
    v25 = v71;
    v35 = *Enumerator & 0xF;
    v84 = v35;
    v36 = v16 & 0xF;
    v37 = v16 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v39 = v37;
      v36 ^= v37 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v25 = v37 & 0xFFF;
        }
        else if ( i == 3 )
        {
          v9 = v37 & 0xFFF;
        }
        v39 = v75;
      }
      else
      {
        v75 = v37 & 0xFFF;
      }
      v37 >>= 12;
    }
    v71 = v25;
    if ( (((unsigned __int16)v37 ^ v36) & 0xFFF) != 0 )
    {
      ProcessRegistryInfo = -1073741776;
    }
    else
    {
      if ( v9 <= v25 )
      {
        if ( (v39 & 0x20) != 0 )
          v19 = 2;
        else
          v19 = (v39 & 0x40 | 0x20u) >> 5;
        v10 = (const WCHAR *)BaseAddress;
        v68 = (v39 & 4) == 0;
        v66 = v35 & 1;
LABEL_29:
        if ( v19 != 1 )
        {
          if ( v19 == 2 )
          {
            if ( !v10 )
            {
              RtlpMUIGetAllInstalledLang(v82[0], &BaseAddress, v88);
              v10 = (const WCHAR *)BaseAddress;
              v7 = 0LL;
            }
            v44 = 0LL;
            for ( j = v10; v44 < v9; j += v46 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v44;
              v46 = -1LL;
              do
                ++v46;
              while ( j[v46] );
            }
            if ( v9 >= v25 )
              goto LABEL_55;
            v47 = FilePart;
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              v91 = DestinationString;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(&v91, Heap, v47, v66, v79, &v67);
              v7 = 0LL;
              if ( MUIRedirectedFilePath )
                break;
              ++v9;
              v49 = -1LL;
              do
                ++v49;
              while ( j[v49] );
              j += v49 + 1;
            }
            while ( v9 < v25 );
          }
          else
          {
            if ( !String1 )
            {
              v50 = RtlpMUIEnumerateFolder(Heap, v89, &String1);
              v7 = 0LL;
              if ( !v50 )
                v9 = v25;
            }
            v51 = 0;
            if ( !v9 )
            {
              v52 = *v83;
              if ( *v83 )
              {
                if ( SourceString )
                {
                  v53 = SourceString;
                  do
                  {
                    if ( !*v53 )
                      break;
                    ++v53;
                    --v52;
                  }
                  while ( v52 );
                  if ( v52 )
                  {
                    if ( v68 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v57 = RtlCultureNameToLCID(&DestinationString, &Value);
                      v7 = 0LL;
                      if ( v57 )
                        v51 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String, SourceString);
                      v54 = RtlUnicodeStringToInteger(&String, 0x10u, &Value);
                      v7 = 0LL;
                      if ( v54 >= 0 )
                      {
                        v55 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                        v7 = 0LL;
                        v86 = v55;
                        if ( !v55 )
                          goto LABEL_175;
                        DestinationString.Buffer = (wchar_t *)v55;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v56 = RtlLCIDToCultureName(Value, &DestinationString);
                        v25 = v71;
                        v7 = 0LL;
                        v10 = (const WCHAR *)BaseAddress;
                        if ( v56 )
                          v51 = 1;
                      }
                    }
                  }
                }
              }
            }
            v58 = String1;
            for ( k = 0LL; k < v9; v58 += v60 + 1 )
            {
              if ( !v58 )
                break;
              if ( !*v58 )
                break;
              ++k;
              v60 = -1LL;
              do
                ++v60;
              while ( v58[v60] );
            }
            if ( v9 >= v25 )
              goto LABEL_55;
            v61 = FilePart;
            do
            {
              if ( v51 && (v62 = wcsicmp(v58, DestinationString.Buffer), v7 = 0LL, v62) )
              {
                v63 = -1LL;
                do
                  ++v63;
                while ( v58[v63] );
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, v58);
                v93 = DestinationString;
                v64 = RtlpGetMUIRedirectedFilePath(&v93, Heap, v61, v66, v79, &v67);
                v7 = 0LL;
                if ( v64 )
                  break;
                v63 = -1LL;
                do
                  ++v63;
                while ( v58[v63] );
              }
              v58 += v63 + 1;
              ++v9;
            }
            while ( v9 < v25 );
            v10 = (const WCHAR *)BaseAddress;
          }
          goto LABEL_36;
        }
        if ( v10 )
        {
LABEL_31:
          v26 = 0LL;
          for ( m = v10; v26 < v9; m += v43 + 1 )
          {
            if ( !m )
              break;
            if ( !*m )
              break;
            ++v26;
            v43 = -1LL;
            do
              ++v43;
            while ( m[v43] );
          }
          if ( v9 >= v25 )
            goto LABEL_55;
          v28 = FilePart;
          do
          {
            if ( !*m )
              break;
            RtlInitUnicodeString(&DestinationString, m);
            Source = DestinationString;
            v29 = RtlpGetMUIRedirectedFilePath(&Source, Heap, v28, v66, v79, &v67);
            v7 = 0LL;
            if ( v29 )
              break;
            ++v9;
            v33 = -1LL;
            do
              ++v33;
            while ( m[v33] );
            m += v33 + 1;
          }
          while ( v9 < v25 );
LABEL_36:
          if ( v9 < v25 )
          {
            v30 = (WCHAR *)SourceString;
            v31 = (int *)v83;
            if ( SourceString || v83 )
            {
              if ( v68 )
                goto LABEL_39;
              v65 = RtlCultureNameToLCID(&DestinationString, &Lcid);
              if ( v65 )
                v65 = (int)RtlIntegerToUnicode((unsigned __int16)Lcid, 16LL, 4294967292LL, v94) >= 0;
              RtlInitUnicodeString(&DestinationString, v94);
              v7 = 0LL;
              if ( v65 )
              {
LABEL_39:
                if ( v30 )
                {
                  if ( v31 )
                  {
                    if ( *v31 <= (unsigned int)(DestinationString.Length >> 1) )
                    {
                      v67 = 1;
                    }
                    else
                    {
                      Length = DestinationString.Length;
                      memmove(v30, DestinationString.Buffer, DestinationString.Length);
                      v7 = 0LL;
                      v30[Length >> 1] = 0;
                    }
                  }
                }
                else if ( v31 )
                {
                  *v31 = 85;
                }
              }
            }
            if ( !v79 || !v30 && v31 )
            {
              ProcessRegistryInfo = 0;
              goto LABEL_173;
            }
            if ( v67 )
            {
              ProcessRegistryInfo = -1073741789;
              goto LABEL_173;
            }
            ProcessRegistryInfo = 0;
LABEL_47:
            *v87 = v84 | (((v9 + 1) ^ v25 ^ v84 ^ v75) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v75 | ((v25 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
LABEL_173:
            if ( !v86 )
              goto LABEL_67;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v86);
            v7 = 0LL;
LABEL_175:
            v10 = (const WCHAR *)BaseAddress;
LABEL_67:
            if ( v10 )
            {
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
              v7 = 0LL;
            }
            goto LABEL_69;
          }
LABEL_55:
          ProcessRegistryInfo = -2147483642;
          goto LABEL_47;
        }
        ReturnLength = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
        v7 = 0LL;
        if ( ReturnLength )
        {
          v40 = LdrpCalcAllocSize(ReturnLength, 2LL);
          if ( !v40 )
          {
            ProcessRegistryInfo = -1073741675;
LABEL_69:
            if ( String1 != v7 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
            goto LABEL_71;
          }
          v41 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v40);
          v7 = 0LL;
          BaseAddress = v41;
          v10 = (const WCHAR *)v41;
          if ( v41 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(
                                           0x30u,
                                           &NumberOfLanguages,
                                           (PZZWSTR)v41,
                                           &ReturnLength);
            v7 = 0LL;
            if ( ThreadPreferredUILanguages >= 0 )
            {
              v25 = v71;
              goto LABEL_31;
            }
          }
          v25 = v71;
        }
        v9 = v25;
        goto LABEL_31;
      }
      ProcessRegistryInfo = -2147483642;
    }
    goto LABEL_14;
  }
  if ( (v11 & 0xC) == 0xC
    || (v11 & 0x30) == 0x30
    || (v11 & 0x50) == 0x50
    || (v11 & 0x60) == 0x60
    || (v11 & 0x70) == 112
    || (v11 & 0x300) == 768 )
  {
LABEL_13:
    ProcessRegistryInfo = -1073741811;
    goto LABEL_14;
  }
  v18 = v11;
  v75 = v11;
  if ( (v11 & 0x20) != 0 )
    v19 = 2;
  else
    v19 = (v11 & 0x40 | 0x20) >> 5;
  v68 = (v18 & 4) == 0;
  if ( (v18 & 0x200) == 0
    && ((v18 & 0x100) != 0
     || (IsWin32WithRCManifest = RtlpFileIsWin32WithRCManifest(FilePath), v7 = 0LL, IsWin32WithRCManifest)) )
  {
    v66 = 1;
    v84 = 1LL;
  }
  else
  {
    v66 = 0;
  }
  v20 = v19 - 1;
  if ( v19 != 1 )
  {
    if ( v19 == 2 )
    {
      v71 = 0LL;
      RtlpMUIGetAllInstalledLang(v82[0], &BaseAddress, &v71);
    }
    else
    {
      if ( v19 != 3 )
      {
        v25 = v71;
        v10 = (const WCHAR *)BaseAddress;
LABEL_28:
        v9 = 0LL;
        goto LABEL_29;
      }
      v71 = 0LL;
      RtlpMUIEnumerateFolder(v13, &v71, &String1);
    }
    v25 = v71;
    v7 = 0LL;
    v10 = (const WCHAR *)BaseAddress;
    goto LABEL_28;
  }
  v21 = v20 + 48;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(v20 + 48, &NumberOfLanguages, 0LL, &ReturnLength);
  if ( !ReturnLength )
    goto LABEL_14;
  v22 = LdrpCalcAllocSize(ReturnLength, 2LL);
  if ( v22 )
  {
    v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v21 - 40, v22);
    BaseAddress = v23;
    v10 = (const WCHAR *)v23;
    if ( !v23 )
    {
      ProcessRegistryInfo = -1073741801;
LABEL_71:
      v13 = (WCHAR *)Heap;
      goto LABEL_14;
    }
    v24 = RtlGetThreadPreferredUILanguages(v21, &NumberOfLanguages, (PZZWSTR)v23, &ReturnLength);
    v7 = 0LL;
    if ( v24 < 0 )
    {
      ProcessRegistryInfo = v24;
      goto LABEL_67;
    }
    v25 = NumberOfLanguages;
    v71 = NumberOfLanguages;
    goto LABEL_28;
  }
  ProcessRegistryInfo = -1073741675;
LABEL_14:
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  return ProcessRegistryInfo;
}
