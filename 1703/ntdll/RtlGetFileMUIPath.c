/*
 * XREFs of RtlGetFileMUIPath @ 0x180056E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlGetFullPathName_UEx @ 0x18003BAA0 (RtlGetFullPathName_UEx.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180044560 @ 0x180044560 (sub_180044560.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     sub_180057888 @ 0x180057888 (sub_180057888.c)
 *     sub_1800584C8 @ 0x1800584C8 (sub_1800584C8.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     sub_1800ED770 @ 0x1800ED770 (sub_1800ED770.c)
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
  wchar_t *v8; // r9
  ULONGLONG v9; // rsi
  ULONGLONG v10; // rdi
  ULONGLONG v11; // r13
  const WCHAR *v12; // r14
  NTSTATUS ProcessRegistryInfo; // ebx
  WCHAR *v14; // r14
  NTSTATUS FullPathName_UEx; // eax
  ULONG v16; // ecx
  ULONGLONG v17; // rax
  __int16 v19; // r13
  int v20; // edi
  SIZE_T v21; // rax
  PVOID v22; // rax
  NTSTATUS v23; // eax
  ULONGLONG v24; // r15
  ULONGLONG v25; // rcx
  const WCHAR *k; // rbx
  const WCHAR *v27; // r13
  char v28; // al
  WCHAR *v29; // r13
  int *v30; // rdi
  unsigned __int64 Length; // rbx
  __int64 v32; // rax
  bool v33; // al
  ULONGLONG v34; // rcx
  const WCHAR *j; // rbx
  __int64 v36; // rax
  const WCHAR *v37; // r13
  char v38; // al
  char v39; // r13
  ULONG v40; // eax
  PCWSTR v41; // rcx
  NTSTATUS v42; // eax
  PVOID v43; // rax
  BOOLEAN v44; // al
  wchar_t *v45; // rbx
  ULONGLONG i; // rcx
  __int64 v47; // rax
  const WCHAR *v48; // r12
  int v49; // eax
  __int64 v50; // rax
  SIZE_T v51; // rax
  PVOID v52; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  char v54; // bl
  ULONGLONG v55; // r11
  unsigned __int16 v56; // r8
  ULONGLONG v57; // rax
  __int64 v58; // rax
  char v59; // al
  char v60; // al
  BOOLEAN v61; // al
  __int64 v62; // rax
  bool v63; // [rsp+40h] [rbp-C0h]
  char v64; // [rsp+41h] [rbp-BFh]
  _BYTE v65[2]; // [rsp+42h] [rbp-BEh] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  PVOID v67; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v68; // [rsp+50h] [rbp-B0h] BYREF
  ULONG NumberOfLanguages; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR Heap; // [rsp+70h] [rbp-90h]
  wchar_t *String1; // [rsp+78h] [rbp-88h] BYREF
  ULONG Value; // [rsp+80h] [rbp-80h] BYREF
  PWSTR FilePart; // [rsp+88h] [rbp-78h] BYREF
  void *v75; // [rsp+90h] [rbp-70h]
  ULONG BytesRequired; // [rsp+98h] [rbp-68h] BYREF
  DWORD Lcid; // [rsp+9Ch] [rbp-64h] BYREF
  _QWORD v78[2]; // [rsp+A0h] [rbp-60h] BYREF
  PULONG v79; // [rsp+B0h] [rbp-50h]
  ULONGLONG v80; // [rsp+B8h] [rbp-48h]
  __int64 v81; // [rsp+C0h] [rbp-40h]
  PCWSTR SourceString; // [rsp+C8h] [rbp-38h]
  PVOID BaseAddress; // [rsp+D0h] [rbp-30h]
  PULONGLONG v84; // [rsp+D8h] [rbp-28h]
  char v85[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v86[8]; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING Source; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v88; // [rsp+100h] [rbp+0h] BYREF
  _UNICODE_STRING String; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v90; // [rsp+120h] [rbp+20h] BYREF
  WCHAR v91[4]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v92; // [rsp+138h] [rbp+38h]

  v75 = FileMUIPath;
  v78[1] = FileMUIPathLength;
  v79 = LanguageLength;
  v8 = 0LL;
  SourceString = Language;
  v9 = 0LL;
  v10 = Flags;
  v11 = 0LL;
  v84 = Enumerator;
  v12 = 0LL;
  v68 = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  v65[0] = 0;
  *(_QWORD *)v91 = 0LL;
  v92 = 0;
  v67 = 0LL;
  String1 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  BaseAddress = 0LL;
  Heap = 0LL;
  FilePart = 0LL;
  v78[0] = 0LL;
  if ( !FilePath || !Enumerator )
  {
    ProcessRegistryInfo = -1073741811;
    goto LABEL_63;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo(v78);
  if ( ProcessRegistryInfo < 0 )
    return ProcessRegistryInfo;
  Heap = (PCWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
  v14 = (WCHAR *)Heap;
  if ( !Heap )
    return -1073741801;
  FullPathName_UEx = RtlGetFullPathName_UEx(FilePath, 0x208u, (PWSTR)Heap, &FilePart, &BytesRequired);
  v8 = 0LL;
  v16 = 0;
  if ( FullPathName_UEx >= 0 )
    v16 = BytesRequired;
  if ( v16 - 1 > 0x206 || !FilePart || FilePart <= Heap || FilePart >= Heap + 260 )
    goto LABEL_13;
  *(FilePart - 1) = 0;
  v17 = *Enumerator;
  if ( *Enumerator )
  {
    v24 = v68;
    v55 = *Enumerator & 0xF;
    v81 = v55;
    v56 = v17 & 0xF;
    v57 = v17 >> 4;
    do
    {
      v56 ^= v57 & 0xFFF;
      if ( v8 )
      {
        if ( v8 == (wchar_t *)2 )
        {
          v24 = v57 & 0xFFF;
          v68 = v24;
        }
        else if ( v8 == (wchar_t *)3 )
        {
          v9 = v57 & 0xFFF;
        }
      }
      else
      {
        v11 = v57 & 0xFFF;
      }
      v57 >>= 12;
      v8 = (wchar_t *)((char *)v8 + 1);
    }
    while ( (unsigned __int64)v8 < 4 );
    v80 = v11;
    if ( (((unsigned __int16)v57 ^ v56) & 0xFFF) != 0 )
    {
      ProcessRegistryInfo = -1073741776;
    }
    else
    {
      if ( v9 <= v24 )
      {
        if ( (v11 & 0x20) != 0 )
          v20 = 2;
        else
          v20 = (v11 & 0x40 | 0x20) >> 5;
        v12 = (const WCHAR *)v67;
        v64 = v55 & 1;
        v63 = (v11 & 4) == 0;
        v8 = 0LL;
LABEL_32:
        if ( v20 != 1 )
        {
          if ( v20 != 2 )
          {
            if ( !String1 )
            {
              v59 = sub_1800ED3D0(Heap, v86, &String1);
              v8 = 0LL;
              if ( !v59 )
                v9 = v24;
            }
            v39 = 0;
            if ( !v9 )
            {
              v40 = *v79;
              if ( *v79 )
              {
                if ( SourceString )
                {
                  v41 = SourceString;
                  do
                  {
                    if ( !*v41 )
                      break;
                    ++v41;
                    --v40;
                  }
                  while ( v40 );
                  if ( v40 )
                  {
                    if ( v63 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v44 = RtlCultureNameToLCID(&DestinationString, &Value);
                      v8 = 0LL;
                      if ( v44 )
                        v39 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String, SourceString);
                      v42 = RtlUnicodeStringToInteger(&String, 0x10u, &Value);
                      v8 = 0LL;
                      if ( v42 >= 0 )
                      {
                        v43 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                        v8 = 0LL;
                        BaseAddress = v43;
                        if ( !v43 )
                        {
LABEL_93:
                          v12 = (const WCHAR *)v67;
                          goto LABEL_94;
                        }
                        DestinationString.Buffer = (PWCH)v43;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v61 = RtlLCIDToCultureName(Value, &DestinationString);
                        v24 = v68;
                        v8 = 0LL;
                        v12 = (const WCHAR *)v67;
                        if ( v61 )
                          v39 = 1;
                      }
                    }
                  }
                }
              }
            }
            v45 = String1;
            for ( i = 0LL; i < v9; v45 += v47 + 1 )
            {
              if ( !v45 )
                break;
              if ( !*v45 )
                break;
              ++i;
              v47 = -1LL;
              do
                ++v47;
              while ( v45[v47] );
            }
            if ( v9 < v24 )
            {
              v48 = FilePart;
              while ( 1 )
              {
                if ( v39 && (v49 = wcsicmp(v45, DestinationString.Buffer), v8 = 0LL, v49) )
                {
                  v50 = -1LL;
                  do
                    ++v50;
                  while ( v45[v50] );
                }
                else
                {
                  RtlInitUnicodeString(&DestinationString, v45);
                  v90 = DestinationString;
                  v60 = sub_180057888(&v90, Heap, v48, v64, v75, v65);
                  v8 = 0LL;
                  if ( v60 )
                  {
LABEL_114:
                    v12 = (const WCHAR *)v67;
                    goto LABEL_39;
                  }
                  v50 = -1LL;
                  do
                    ++v50;
                  while ( v45[v50] );
                }
                v45 += v50 + 1;
                if ( ++v9 >= v24 )
                  goto LABEL_114;
              }
            }
            goto LABEL_58;
          }
          if ( !v12 )
          {
            sub_1800ED770(v78[0], &v67, v85);
            v12 = (const WCHAR *)v67;
            v8 = 0LL;
          }
          v34 = 0LL;
          for ( j = v12; v34 < v9; j += v36 + 1 )
          {
            if ( !j )
              break;
            if ( !*j )
              break;
            ++v34;
            v36 = -1LL;
            do
              ++v36;
            while ( j[v36] );
          }
          if ( v9 >= v24 )
          {
LABEL_58:
            ProcessRegistryInfo = -2147483642;
            goto LABEL_50;
          }
          v37 = FilePart;
          do
          {
            if ( !j )
              break;
            if ( !*j )
              break;
            RtlInitUnicodeString(&DestinationString, j);
            v88 = DestinationString;
            v38 = sub_180057888(&v88, Heap, v37, v64, v75, v65);
            v8 = 0LL;
            if ( v38 )
              break;
            ++v9;
            v62 = -1LL;
            do
              ++v62;
            while ( j[v62] );
            j += v62 + 1;
          }
          while ( v9 < v24 );
LABEL_39:
          if ( v9 < v24 )
          {
            v29 = (WCHAR *)SourceString;
            v30 = (int *)v79;
            if ( SourceString || v79 )
            {
              if ( v63 )
                goto LABEL_42;
              v54 = RtlCultureNameToLCID(&DestinationString, &Lcid);
              if ( v54 )
                v54 = (int)sub_180044560((unsigned __int16)Lcid, 0x10u, -4, (char *)v91) >= 0;
              RtlInitUnicodeString(&DestinationString, v91);
              v8 = 0LL;
              if ( v54 )
              {
LABEL_42:
                if ( v29 )
                {
                  if ( v30 )
                  {
                    if ( *v30 <= (unsigned int)(DestinationString.Length >> 1) )
                    {
                      v65[0] = 1;
                    }
                    else
                    {
                      Length = DestinationString.Length;
                      memmove(v29, DestinationString.Buffer, DestinationString.Length);
                      v8 = 0LL;
                      v29[Length >> 1] = 0;
                    }
                  }
                }
                else if ( v30 )
                {
                  *v30 = 85;
                }
              }
            }
            if ( !v75 || !v29 && v30 )
            {
              ProcessRegistryInfo = 0;
              goto LABEL_63;
            }
            if ( v65[0] )
            {
              ProcessRegistryInfo = -1073741789;
              goto LABEL_63;
            }
            ProcessRegistryInfo = 0;
LABEL_50:
            *v84 = v81 | (((v9 + 1) ^ v24 ^ v81 ^ v80) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v80 | ((v24 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
LABEL_63:
            if ( !BaseAddress )
              goto LABEL_94;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            v8 = 0LL;
            goto LABEL_93;
          }
          goto LABEL_58;
        }
        if ( v12 )
        {
LABEL_34:
          v25 = 0LL;
          for ( k = v12; v25 < v9; k += v58 + 1 )
          {
            if ( !k )
              break;
            if ( !*k )
              break;
            ++v25;
            v58 = -1LL;
            do
              ++v58;
            while ( k[v58] );
          }
          if ( v9 >= v24 )
            goto LABEL_58;
          v27 = FilePart;
          do
          {
            if ( !*k )
              break;
            RtlInitUnicodeString(&DestinationString, k);
            Source = DestinationString;
            v28 = sub_180057888(&Source, Heap, v27, v64, v75, v65);
            v8 = 0LL;
            if ( v28 )
              break;
            ++v9;
            v32 = -1LL;
            do
              ++v32;
            while ( k[v32] );
            k += v32 + 1;
          }
          while ( v9 < v24 );
          goto LABEL_39;
        }
        ReturnLength = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
        v8 = 0LL;
        if ( ReturnLength )
        {
          v51 = sub_1800584C8(ReturnLength, 2LL);
          if ( !v51 )
          {
            ProcessRegistryInfo = -1073741675;
LABEL_96:
            if ( String1 != v8 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
            goto LABEL_98;
          }
          v52 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (int)v8 + 8, v51);
          v8 = 0LL;
          v67 = v52;
          v12 = (const WCHAR *)v52;
          if ( v52 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(
                                           0x30u,
                                           &NumberOfLanguages,
                                           (PZZWSTR)v52,
                                           &ReturnLength);
            v8 = 0LL;
            if ( ThreadPreferredUILanguages >= 0 )
            {
              v24 = v68;
              goto LABEL_34;
            }
          }
          v24 = v68;
        }
        v9 = v24;
        goto LABEL_34;
      }
      ProcessRegistryInfo = -2147483642;
    }
    goto LABEL_14;
  }
  if ( (v10 & 0xC) == 0xC
    || (v10 & 0x30) == 0x30
    || (v10 & 0x50) == 0x50
    || (v10 & 0x60) == 0x60
    || (v10 & 0x70) == 112
    || (v10 & 0x300) == 768 )
  {
LABEL_13:
    ProcessRegistryInfo = -1073741811;
    goto LABEL_14;
  }
  v80 = v10;
  v19 = v10;
  if ( (v10 & 0x20) != 0 )
    v20 = 2;
  else
    v20 = (v10 & 0x40 | 0x20) >> 5;
  v63 = (v19 & 4) == 0;
  if ( (v19 & 0x200) == 0 && ((v19 & 0x100) != 0 || (v33 = sub_1800546DC(FilePath), v8 = 0LL, v33)) )
  {
    v64 = 1;
    v81 = 1LL;
  }
  else
  {
    v64 = 0;
  }
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      v68 = 0LL;
      sub_1800ED770(v78[0], &v67, &v68);
    }
    else
    {
      if ( v20 != 3 )
      {
        v24 = v68;
        v12 = (const WCHAR *)v67;
LABEL_31:
        v9 = 0LL;
        goto LABEL_32;
      }
      v68 = 0LL;
      sub_1800ED3D0(v14, &v68, &String1);
    }
    v24 = v68;
    v8 = 0LL;
    v12 = (const WCHAR *)v67;
    goto LABEL_31;
  }
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
  if ( !ReturnLength )
    goto LABEL_14;
  v21 = sub_1800584C8(ReturnLength, 2LL);
  if ( v21 )
  {
    v22 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v21);
    v67 = v22;
    v12 = (const WCHAR *)v22;
    if ( !v22 )
    {
      ProcessRegistryInfo = -1073741801;
LABEL_98:
      v14 = (WCHAR *)Heap;
      goto LABEL_14;
    }
    v23 = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, (PZZWSTR)v22, &ReturnLength);
    v8 = 0LL;
    if ( v23 < 0 )
    {
      ProcessRegistryInfo = v23;
LABEL_94:
      if ( v12 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v67);
        v8 = 0LL;
      }
      goto LABEL_96;
    }
    v24 = NumberOfLanguages;
    v68 = NumberOfLanguages;
    goto LABEL_31;
  }
  ProcessRegistryInfo = -1073741675;
LABEL_14:
  if ( v14 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
  return ProcessRegistryInfo;
}
