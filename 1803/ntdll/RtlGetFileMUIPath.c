/*
 * XREFs of RtlGetFileMUIPath @ 0x18004EF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180036E00 @ 0x180036E00 (sub_180036E00.c)
 *     RtlGetFullPathName_UEx @ 0x18003C1A0 (RtlGetFullPathName_UEx.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     sub_18004F58C @ 0x18004F58C (sub_18004F58C.c)
 *     sub_18004F9D8 @ 0x18004F9D8 (sub_18004F9D8.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E94D4 @ 0x1800E94D4 (sub_1800E94D4.c)
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
  bool v20; // al
  unsigned int v21; // ecx
  ULONG v22; // esi
  SIZE_T v23; // rax
  PVOID v24; // rax
  NTSTATUS v25; // eax
  ULONGLONG v26; // r15
  ULONGLONG v27; // rcx
  const WCHAR *m; // rbx
  const WCHAR *v29; // r12
  char v30; // al
  WCHAR *v31; // r12
  int *v32; // rdi
  unsigned __int64 Length; // rbx
  __int64 v34; // rax
  char v35; // r13
  ULONG v36; // eax
  PCWSTR v37; // rcx
  BOOLEAN v38; // al
  wchar_t *v39; // rbx
  ULONGLONG k; // rcx
  const WCHAR *v41; // r14
  int v42; // eax
  char v43; // al
  ULONGLONG v44; // r10
  unsigned __int16 v45; // r8
  ULONGLONG v46; // rax
  unsigned __int64 i; // r9
  char v48; // cl
  SIZE_T v49; // rax
  PVOID v50; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  __int64 v52; // rax
  ULONGLONG v53; // rcx
  const WCHAR *j; // rbx
  __int64 v55; // rax
  const WCHAR *v56; // r12
  char v57; // al
  __int64 v58; // rax
  char v59; // al
  NTSTATUS v60; // eax
  PVOID v61; // rax
  BOOLEAN v62; // al
  __int64 v63; // rax
  __int64 v64; // rax
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
  DWORD Lcid; // [rsp+88h] [rbp-78h] BYREF
  PWSTR FilePart; // [rsp+90h] [rbp-70h] BYREF
  void *v79; // [rsp+98h] [rbp-68h]
  ULONG BytesRequired; // [rsp+A0h] [rbp-60h] BYREF
  DWORD v81; // [rsp+A4h] [rbp-5Ch] BYREF
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
    goto LABEL_176;
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
    v26 = v71;
    v44 = *Enumerator & 0xF;
    v84 = v44;
    v45 = v16 & 0xF;
    v46 = v16 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v48 = v46;
      v45 ^= v46 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v26 = v46 & 0xFFF;
        }
        else if ( i == 3 )
        {
          v9 = v46 & 0xFFF;
        }
        v48 = v75;
      }
      else
      {
        v75 = v46 & 0xFFF;
      }
      v46 >>= 12;
    }
    v71 = v26;
    if ( (((unsigned __int16)v46 ^ v45) & 0xFFF) != 0 )
    {
      ProcessRegistryInfo = -1073741776;
    }
    else
    {
      if ( v9 <= v26 )
      {
        if ( (v48 & 0x20) != 0 )
          v19 = 2;
        else
          v19 = (v48 & 0x40 | 0x20u) >> 5;
        v10 = (const WCHAR *)BaseAddress;
        v68 = (v48 & 4) == 0;
        v66 = v44 & 1;
LABEL_31:
        if ( v19 != 1 )
        {
          if ( v19 == 2 )
          {
            if ( !v10 )
            {
              sub_1800E94D4(v82[0], &BaseAddress, v88);
              v10 = (const WCHAR *)BaseAddress;
              v7 = 0LL;
            }
            v53 = 0LL;
            for ( j = v10; v53 < v9; j += v55 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v53;
              v55 = -1LL;
              do
                ++v55;
              while ( j[v55] );
            }
            if ( v9 >= v26 )
              goto LABEL_60;
            v56 = FilePart;
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              v91 = DestinationString;
              v57 = sub_18004F58C(&v91, Heap, v56, v66, v79, &v67);
              v7 = 0LL;
              if ( v57 )
                break;
              ++v9;
              v58 = -1LL;
              do
                ++v58;
              while ( j[v58] );
              j += v58 + 1;
            }
            while ( v9 < v26 );
          }
          else
          {
            if ( !String1 )
            {
              v59 = sub_180085824(Heap, v89, &String1);
              v7 = 0LL;
              if ( !v59 )
                v9 = v26;
            }
            v35 = 0;
            if ( !v9 )
            {
              v36 = *v83;
              if ( *v83 )
              {
                if ( SourceString )
                {
                  v37 = SourceString;
                  do
                  {
                    if ( !*v37 )
                      break;
                    ++v37;
                    --v36;
                  }
                  while ( v36 );
                  if ( v36 )
                  {
                    if ( v68 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v38 = RtlCultureNameToLCID(&DestinationString, &Lcid);
                      v7 = 0LL;
                      if ( v38 )
                        v35 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String, SourceString);
                      v60 = RtlUnicodeStringToInteger(&String, 0x10u, &Lcid);
                      v7 = 0LL;
                      if ( v60 >= 0 )
                      {
                        v61 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                        v7 = 0LL;
                        v86 = v61;
                        if ( !v61 )
                          goto LABEL_178;
                        DestinationString.Buffer = (PWCH)v61;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v62 = RtlLCIDToCultureName(Lcid, &DestinationString);
                        v26 = v71;
                        v7 = 0LL;
                        v10 = (const WCHAR *)BaseAddress;
                        if ( v62 )
                          v35 = 1;
                      }
                    }
                  }
                }
              }
            }
            v39 = String1;
            for ( k = 0LL; k < v9; v39 += v63 + 1 )
            {
              if ( !v39 )
                break;
              if ( !*v39 )
                break;
              ++k;
              v63 = -1LL;
              do
                ++v63;
              while ( v39[v63] );
            }
            if ( v9 >= v26 )
              goto LABEL_60;
            v41 = FilePart;
            do
            {
              if ( v35 && (v42 = wcsicmp(v39, DestinationString.Buffer), v7 = 0LL, v42) )
              {
                v64 = -1LL;
                do
                  ++v64;
                while ( v39[v64] );
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, v39);
                v93 = DestinationString;
                v43 = sub_18004F58C(&v93, Heap, v41, v66, v79, &v67);
                v7 = 0LL;
                if ( v43 )
                  break;
                v64 = -1LL;
                do
                  ++v64;
                while ( v39[v64] );
              }
              v39 += v64 + 1;
              ++v9;
            }
            while ( v9 < v26 );
            v10 = (const WCHAR *)BaseAddress;
          }
          goto LABEL_38;
        }
        if ( v10 )
        {
LABEL_33:
          v27 = 0LL;
          for ( m = v10; v27 < v9; m += v52 + 1 )
          {
            if ( !m )
              break;
            if ( !*m )
              break;
            ++v27;
            v52 = -1LL;
            do
              ++v52;
            while ( m[v52] );
          }
          if ( v9 >= v26 )
            goto LABEL_60;
          v29 = FilePart;
          do
          {
            if ( !*m )
              break;
            RtlInitUnicodeString(&DestinationString, m);
            Source = DestinationString;
            v30 = sub_18004F58C(&Source, Heap, v29, v66, v79, &v67);
            v7 = 0LL;
            if ( v30 )
              break;
            ++v9;
            v34 = -1LL;
            do
              ++v34;
            while ( m[v34] );
            m += v34 + 1;
          }
          while ( v9 < v26 );
LABEL_38:
          if ( v9 < v26 )
          {
            v31 = (WCHAR *)SourceString;
            v32 = (int *)v83;
            if ( SourceString || v83 )
            {
              if ( v68 )
                goto LABEL_42;
              v65 = RtlCultureNameToLCID(&DestinationString, &v81);
              if ( v65 )
                v65 = (int)sub_180036E00((unsigned __int16)v81, 0x10u, -4, (char *)v94) >= 0;
              RtlInitUnicodeString(&DestinationString, v94);
              v7 = 0LL;
              if ( v65 )
              {
LABEL_42:
                if ( v31 )
                {
                  if ( v32 )
                  {
                    if ( *v32 <= (unsigned int)(DestinationString.Length >> 1) )
                    {
                      v67 = 1;
                    }
                    else
                    {
                      Length = DestinationString.Length;
                      memmove(v31, DestinationString.Buffer, DestinationString.Length);
                      v7 = 0LL;
                      v31[Length >> 1] = 0;
                    }
                  }
                }
                else if ( v32 )
                {
                  *v32 = 85;
                }
              }
            }
            if ( !v79 || !v31 && v32 )
            {
              ProcessRegistryInfo = 0;
              goto LABEL_176;
            }
            if ( v67 )
            {
              ProcessRegistryInfo = -1073741789;
              goto LABEL_176;
            }
            ProcessRegistryInfo = 0;
LABEL_50:
            *v87 = v84 | (((v9 + 1) ^ v26 ^ v84 ^ v75) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v75 | ((v26 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
LABEL_176:
            if ( !v86 )
              goto LABEL_88;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v86);
            v7 = 0LL;
LABEL_178:
            v10 = (const WCHAR *)BaseAddress;
LABEL_88:
            if ( v10 )
            {
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
              v7 = 0LL;
            }
            goto LABEL_90;
          }
LABEL_60:
          ProcessRegistryInfo = -2147483642;
          goto LABEL_50;
        }
        ReturnLength = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
        v7 = 0LL;
        if ( ReturnLength )
        {
          v49 = sub_18004F9D8(ReturnLength, 2LL);
          if ( !v49 )
          {
            ProcessRegistryInfo = -1073741675;
LABEL_90:
            if ( String1 != v7 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
            goto LABEL_92;
          }
          v50 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v49);
          v7 = 0LL;
          BaseAddress = v50;
          v10 = (const WCHAR *)v50;
          if ( v50 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(
                                           0x30u,
                                           &NumberOfLanguages,
                                           (PZZWSTR)v50,
                                           &ReturnLength);
            v7 = 0LL;
            if ( ThreadPreferredUILanguages >= 0 )
            {
              v26 = v71;
              goto LABEL_33;
            }
          }
          v26 = v71;
        }
        v9 = v26;
        goto LABEL_33;
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
  if ( (v18 & 0x200) == 0 && ((v18 & 0x100) != 0 || (v20 = sub_18004EC98(FilePath), v7 = 0LL, v20)) )
  {
    v66 = 1;
    v84 = 1LL;
  }
  else
  {
    v66 = 0;
  }
  v21 = v19 - 1;
  if ( v19 != 1 )
  {
    if ( v19 == 2 )
    {
      v71 = 0LL;
      sub_1800E94D4(v82[0], &BaseAddress, &v71);
    }
    else
    {
      if ( v19 != 3 )
      {
        v26 = v71;
        v10 = (const WCHAR *)BaseAddress;
        goto LABEL_30;
      }
      v71 = 0LL;
      sub_180085824(v13, &v71, &String1);
    }
    v26 = v71;
    v7 = 0LL;
    v10 = (const WCHAR *)BaseAddress;
LABEL_30:
    v9 = 0LL;
    goto LABEL_31;
  }
  v22 = v21 + 48;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(v21 + 48, &NumberOfLanguages, 0LL, &ReturnLength);
  if ( !ReturnLength )
    goto LABEL_14;
  v23 = sub_18004F9D8(ReturnLength, 2LL);
  if ( v23 )
  {
    v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v22 - 40, v23);
    BaseAddress = v24;
    v10 = (const WCHAR *)v24;
    if ( !v24 )
    {
      ProcessRegistryInfo = -1073741801;
LABEL_92:
      v13 = (WCHAR *)Heap;
      goto LABEL_14;
    }
    v25 = RtlGetThreadPreferredUILanguages(v22, &NumberOfLanguages, (PZZWSTR)v24, &ReturnLength);
    v7 = 0LL;
    if ( v25 < 0 )
    {
      ProcessRegistryInfo = v25;
      goto LABEL_88;
    }
    v26 = NumberOfLanguages;
    v71 = NumberOfLanguages;
    goto LABEL_30;
  }
  ProcessRegistryInfo = -1073741675;
LABEL_14:
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  return ProcessRegistryInfo;
}
