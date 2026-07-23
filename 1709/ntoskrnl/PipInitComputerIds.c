/*
 * XREFs of PipInitComputerIds @ 0x1408470D0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x14054A990 (RtlUpcaseUnicodeString.c)
 *     IopCreateRegistryKeyEx @ 0x14055A49C (IopCreateRegistryKeyEx.c)
 *     IopOpenRegistryKeyEx @ 0x1405C9264 (IopOpenRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x1405CB5A4 (_PnpCtxRegDeleteTree.c)
 *     PipCreateComputerId @ 0x140847C04 (PipCreateComputerId.c)
 *     PipSmBiosGetString @ 0x140847E20 (PipSmBiosGetString.c)
 *     PipSmBiosFindStruct @ 0x140847F4C (PipSmBiosFindStruct.c)
 */

__int64 __fastcall PipInitComputerIds(__int64 a1)
{
  unsigned __int8 v2; // r14
  unsigned __int8 v3; // si
  unsigned int v4; // r13d
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r15
  void *v10; // rax
  __int64 v11; // rcx
  __int64 Struct; // rax
  __int64 v13; // rdx
  unsigned __int8 *v14; // rbx
  unsigned __int8 *v15; // rdi
  int String; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int8 *v23; // rcx
  unsigned __int8 *v24; // rbx
  unsigned __int8 *v25; // rdi
  int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // edi
  UNICODE_STRING *v32; // rbx
  wchar_t *Buffer; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  UNICODE_STRING *v36; // rcx
  UNICODE_STRING **v37; // rax
  void *v38; // rdi
  int v39; // eax
  unsigned int v40; // r13d
  int v41; // eax
  __int64 v42; // rdx
  UNICODE_STRING *v43; // rcx
  UNICODE_STRING **v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v52; // r14
  unsigned __int16 v53; // cx
  unsigned int v54; // edi
  wchar_t *v55; // rbx
  unsigned __int64 v56; // r11
  __int64 v57; // r9
  const wchar_t *v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // r8
  UNICODE_STRING *v61; // rbx
  __int64 v62; // rdi
  void *v63; // rdi
  unsigned __int8 *v65; // rdi
  int v66; // eax
  int v67; // eax
  __int64 v68; // rdx
  UNICODE_STRING *v69; // rcx
  UNICODE_STRING **v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  UNICODE_STRING *v73; // rcx
  int v74; // eax
  __int64 v75; // rdx
  UNICODE_STRING *v76; // rcx
  UNICODE_STRING **v77; // rax
  int v78; // eax
  int v79; // eax
  __int64 v80; // rdx
  UNICODE_STRING *v81; // rcx
  UNICODE_STRING **v82; // rax
  int v83; // eax
  int v84; // eax
  UNICODE_STRING *v85; // rcx
  UNICODE_STRING **v86; // rax
  int v87; // eax
  PVOID Data; // [rsp+28h] [rbp-E0h]
  unsigned int NumberOfBytes; // [rsp+58h] [rbp-B0h]
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-98h]
  __int64 v92; // [rsp+78h] [rbp-90h] BYREF
  void *v93; // [rsp+80h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  __int64 v95; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v97; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING *v98; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING *v99; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING *v100; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING *v101; // [rsp+D0h] [rbp-38h]
  _QWORD v102[4]; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString[8]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v104[15]; // [rsp+178h] [rbp+70h] BYREF
  wchar_t SourceString; // [rsp+268h] [rbp+160h] BYREF
  wchar_t pszDest[8]; // [rsp+270h] [rbp+168h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  v93 = 0LL;
  v3 = 0;
  v95 = 0LL;
  v4 = 0;
  BaseAddress = 0LL;
  NumberOfBytes = 0;
  LODWORD(v92) = 0;
  memset(UnicodeString, 0, sizeof(UnicodeString));
  *(_DWORD *)&ValueName.Length = 6291550;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\HardwareConfig\\Current";
  v5 = IopOpenRegistryKeyEx(&KeyHandle, 0LL, &ValueName, 0xF003Fu);
  if ( v5 < 0 )
    goto LABEL_106;
  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)KeyHandle, L"ComputerIds");
  *(_DWORD *)&ValueName.Length = 1572886;
  ValueName.Buffer = L"ComputerIds";
  v5 = IopCreateRegistryKeyEx(&v93, KeyHandle, &ValueName, 0xF003Fu, 0, 0LL);
  if ( v5 < 0 )
    goto LABEL_106;
  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)KeyHandle, L"ProductIds");
  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = L"ProductIds";
  v5 = IopCreateRegistryKeyEx(&v95, KeyHandle, &ValueName, 0xF003Fu, 0, 0LL);
  if ( v5 < 0 )
    goto LABEL_106;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 56LL);
  if ( !v6 )
  {
    v5 = -1073741637;
    goto LABEL_106;
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( !v7 )
  {
    v5 = -1073741637;
    goto LABEL_106;
  }
  v8 = *(_DWORD *)(v6 + 12);
  v9 = 2LL;
  NumberOfBytes = v8;
  v10 = (void *)MmMapIoSpaceEx(v7, v8, 2u);
  BaseAddress = v10;
  if ( !v10 )
  {
    v5 = -1073741670;
    goto LABEL_106;
  }
  LOBYTE(v11) = 1;
  Struct = PipSmBiosFindStruct(v11, 0LL, v10, v8);
  v14 = (unsigned __int8 *)Struct;
  if ( Struct )
  {
    v15 = (unsigned __int8 *)(Struct + 5);
    if ( Struct + 5 <= Struct + (unsigned __int64)*(unsigned __int8 *)(Struct + 1) )
    {
      String = PipSmBiosGetString(Struct, *(unsigned __int8 *)(Struct + 4), BaseAddress, NumberOfBytes, UnicodeString);
      v5 = String;
      if ( String == -1073741275 )
      {
        v5 = 0;
      }
      else if ( String < 0 )
      {
        goto LABEL_106;
      }
    }
    if ( v14 + 27 <= &v14[v14[1]] )
    {
      v17 = PipSmBiosGetString(v14, v14[26], BaseAddress, NumberOfBytes, &UnicodeString[1]);
      v5 = v17;
      if ( v17 == -1073741275 )
      {
        v5 = 0;
      }
      else if ( v17 < 0 )
      {
        goto LABEL_106;
      }
    }
    if ( v14 + 6 <= &v14[v14[1]] )
    {
      v18 = PipSmBiosGetString(v14, *v15, BaseAddress, NumberOfBytes, &UnicodeString[2]);
      v5 = v18;
      if ( v18 == -1073741275 )
      {
        v5 = 0;
      }
      else if ( v18 < 0 )
      {
        goto LABEL_106;
      }
    }
    if ( v14 + 26 <= &v14[v14[1]] )
    {
      v19 = PipSmBiosGetString(v14, v14[25], BaseAddress, NumberOfBytes, &UnicodeString[3]);
      v5 = v19;
      if ( v19 == -1073741275 )
      {
        v5 = 0;
      }
      else if ( v19 < 0 )
      {
        goto LABEL_106;
      }
    }
  }
  LOBYTE(v13) = 10;
  v20 = PipSmBiosFindStruct(2LL, v13, BaseAddress, NumberOfBytes);
  v21 = v20;
  if ( v20 )
  {
    v65 = (unsigned __int8 *)(v20 + 5);
    if ( v20 + 5 <= v20 + (unsigned __int64)*(unsigned __int8 *)(v20 + 1) )
    {
      v66 = PipSmBiosGetString(v20, *(unsigned __int8 *)(v20 + 4), BaseAddress, NumberOfBytes, &UnicodeString[6]);
      v5 = v66;
      if ( v66 == -1073741275 )
      {
        v5 = 0;
      }
      else if ( v66 < 0 )
      {
        goto LABEL_106;
      }
    }
    if ( v21 + 6 <= v21 + (unsigned __int64)*(unsigned __int8 *)(v21 + 1) )
    {
      v67 = PipSmBiosGetString(v21, *v65, BaseAddress, NumberOfBytes, &UnicodeString[7]);
      v5 = v67;
      if ( v67 == -1073741275 )
      {
        v5 = 0;
      }
      else if ( v67 < 0 )
      {
        goto LABEL_106;
      }
    }
  }
  v22 = PipSmBiosFindStruct(0LL, 0LL, BaseAddress, NumberOfBytes);
  v24 = (unsigned __int8 *)v22;
  if ( v22 )
  {
    v25 = (unsigned __int8 *)(v22 + 5);
    if ( v22 + 5 <= v22 + (unsigned __int64)*(unsigned __int8 *)(v22 + 1) )
    {
      v26 = PipSmBiosGetString(v22, *(unsigned __int8 *)(v22 + 4), BaseAddress, NumberOfBytes, &UnicodeString[4]);
      v5 = v26;
      if ( v26 == -1073741275 )
      {
        v5 = 0;
      }
      else if ( v26 < 0 )
      {
        goto LABEL_106;
      }
    }
    if ( v24 + 6 <= &v24[v24[1]] )
    {
      v27 = PipSmBiosGetString(v24, *v25, BaseAddress, NumberOfBytes, &UnicodeString[5]);
      v5 = v27;
      if ( v27 == -1073741275 )
      {
        v5 = 0;
      }
      else if ( v27 < 0 )
      {
        goto LABEL_106;
      }
    }
    v23 = v24 + 21;
    v28 = (unsigned __int64)&v24[v24[1]];
    if ( (unsigned __int64)(v24 + 21) <= v28 )
      v2 = v24[20];
    if ( (unsigned __int64)(v24 + 22) <= v28 )
      v3 = *v23;
  }
  LOBYTE(v23) = 3;
  v29 = PipSmBiosFindStruct(v23, 0LL, BaseAddress, NumberOfBytes);
  if ( v29 && v29 + 6 <= v29 + (unsigned __int64)*(unsigned __int8 *)(v29 + 1) )
  {
    v30 = *(_BYTE *)(v29 + 5) & 0x7F;
    LODWORD(v92) = v30;
  }
  else
  {
    v30 = v92;
  }
  if ( v30 )
  {
    ValueName.Buffer = L"EnclosureType";
    *(_DWORD *)&ValueName.Length = 1835034;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v92, 4u);
  }
  v31 = 0;
  v32 = UnicodeString;
  do
  {
    if ( v32->Buffer && !v32->Length )
      RtlFreeUnicodeString(&UnicodeString[v31]);
    ++v31;
    ++v32;
  }
  while ( v31 < 8 );
  Buffer = UnicodeString[0].Buffer;
  if ( !UnicodeString[0].Buffer )
    goto LABEL_83;
  v34 = v95;
  if ( UnicodeString[2].Buffer && UnicodeString[4].Buffer && UnicodeString[5].Buffer )
  {
    LODWORD(Data) = v3;
    v5 = RtlStringCchPrintfW(pszDest, 8uLL, L"%02x&%02x", v2, Data);
    if ( v5 < 0 )
      goto LABEL_106;
    RtlInitUnicodeString(&DestinationString, pszDest);
    if ( UnicodeString[3].Buffer )
    {
      v35 = 4LL;
      v98 = UnicodeString;
      v36 = &UnicodeString[2];
      v99 = &UnicodeString[1];
      v37 = &v100;
      do
      {
        *v37++ = v36++;
        --v35;
      }
      while ( v35 );
      v38 = v93;
      v102[2] = &DestinationString;
      v5 = PipCreateComputerId(v93, v34, &v98, 7LL, v104);
      v4 = 1;
      if ( v5 < 0 )
        goto LABEL_106;
    }
    else
    {
      v38 = v93;
    }
    v98 = UnicodeString;
    v99 = &UnicodeString[1];
    v100 = &UnicodeString[2];
    v101 = &UnicodeString[4];
    v102[0] = &UnicodeString[5];
    v102[1] = &DestinationString;
    v39 = PipCreateComputerId(v38, v34, &v98, 6LL, &v104[v4]);
    v40 = v4 + 1;
    v5 = v39;
    if ( v39 < 0 )
      goto LABEL_106;
    v98 = UnicodeString;
    v99 = &UnicodeString[2];
    v100 = &UnicodeString[4];
    v101 = &UnicodeString[5];
    v102[0] = &DestinationString;
    v41 = PipCreateComputerId(v38, v34, &v98, 5LL, &v104[v40]);
    v4 = v40 + 1;
    v5 = v41;
    if ( v41 < 0 )
      goto LABEL_106;
    Buffer = UnicodeString[0].Buffer;
  }
  else
  {
    v38 = v93;
  }
  if ( !Buffer )
    goto LABEL_83;
  if ( UnicodeString[2].Buffer )
  {
    if ( UnicodeString[3].Buffer )
    {
      if ( UnicodeString[6].Buffer )
      {
        if ( UnicodeString[7].Buffer )
        {
          v68 = 2LL;
          v98 = UnicodeString;
          v69 = &UnicodeString[2];
          v99 = &UnicodeString[1];
          v70 = &v100;
          do
          {
            *v70++ = v69++;
            --v68;
          }
          while ( v68 );
          v71 = v102;
          v72 = 2LL;
          v73 = &UnicodeString[6];
          do
          {
            *v71++ = v73++;
            --v72;
          }
          while ( v72 );
          v74 = PipCreateComputerId(v38, v34, &v98, 6LL, &v104[v4++]);
          v5 = v74;
          if ( v74 < 0 )
            goto LABEL_106;
        }
      }
      v42 = 2LL;
      v98 = UnicodeString;
      v43 = &UnicodeString[2];
      v99 = &UnicodeString[1];
      v44 = &v100;
      do
      {
        *v44++ = v43++;
        --v42;
      }
      while ( v42 );
      v45 = PipCreateComputerId(v38, v34, &v98, 4LL, &v104[v4++]);
      v5 = v45;
      if ( v45 < 0 )
        goto LABEL_106;
    }
    v98 = UnicodeString;
    v99 = &UnicodeString[1];
    v100 = &UnicodeString[2];
    v46 = PipCreateComputerId(v38, v34, &v98, 3LL, &v104[v4++]);
    v5 = v46;
    if ( v46 < 0 )
      goto LABEL_106;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_83;
  if ( UnicodeString[3].Buffer )
  {
    if ( UnicodeString[6].Buffer )
    {
      if ( UnicodeString[7].Buffer )
      {
        v75 = 2LL;
        v98 = UnicodeString;
        v76 = &UnicodeString[6];
        v99 = &UnicodeString[3];
        v77 = &v100;
        do
        {
          *v77++ = v76++;
          --v75;
        }
        while ( v75 );
        v78 = PipCreateComputerId(v38, v34, &v98, 4LL, &v104[v4++]);
        v5 = v78;
        if ( v78 < 0 )
          goto LABEL_106;
      }
    }
    v98 = UnicodeString;
    v99 = &UnicodeString[3];
    v47 = PipCreateComputerId(v38, v34, &v98, 2LL, &v104[v4++]);
    v5 = v47;
    if ( v47 < 0 )
      goto LABEL_106;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_83;
  if ( UnicodeString[2].Buffer )
  {
    if ( UnicodeString[6].Buffer )
    {
      if ( UnicodeString[7].Buffer )
      {
        v98 = UnicodeString;
        v99 = &UnicodeString[2];
        v100 = &UnicodeString[6];
        v101 = &UnicodeString[7];
        v79 = PipCreateComputerId(v38, v34, &v98, 4LL, &v104[v4++]);
        v5 = v79;
        if ( v79 < 0 )
          goto LABEL_106;
      }
    }
    v98 = UnicodeString;
    v99 = &UnicodeString[2];
    v48 = PipCreateComputerId(v38, v34, &v98, 2LL, &v104[v4++]);
    v5 = v48;
    if ( v48 < 0 )
      goto LABEL_106;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_83;
  if ( UnicodeString[1].Buffer )
  {
    if ( UnicodeString[7].Buffer )
    {
      if ( UnicodeString[6].Buffer )
      {
        v80 = 2LL;
        v98 = UnicodeString;
        v81 = &UnicodeString[6];
        v99 = &UnicodeString[1];
        v82 = &v100;
        do
        {
          *v82++ = v81++;
          --v80;
        }
        while ( v80 );
        v83 = PipCreateComputerId(v38, v34, &v98, 4LL, &v104[v4++]);
        v5 = v83;
        if ( v83 < 0 )
          goto LABEL_106;
      }
    }
    v98 = UnicodeString;
    v99 = &UnicodeString[1];
    v84 = PipCreateComputerId(v38, v34, &v98, 2LL, &v104[v4++]);
    v5 = v84;
    if ( v84 < 0 )
      goto LABEL_106;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_83;
  if ( (_DWORD)v92 )
  {
    v5 = RtlStringCchPrintfW(&SourceString, 4uLL, L"%x");
    if ( v5 < 0 )
      goto LABEL_106;
    RtlInitUnicodeString(&v97, &SourceString);
    v98 = UnicodeString;
    v99 = &v97;
    v49 = PipCreateComputerId(v38, 0LL, &v98, 2LL, &v104[v4++]);
    v5 = v49;
    if ( v49 < 0 )
      goto LABEL_106;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_83;
  if ( !UnicodeString[7].Buffer )
    goto LABEL_178;
  if ( !UnicodeString[6].Buffer )
    goto LABEL_178;
  v98 = UnicodeString;
  v85 = &UnicodeString[6];
  v86 = &v99;
  do
  {
    *v86++ = v85++;
    --v9;
  }
  while ( v9 );
  v87 = PipCreateComputerId(v38, 0LL, &v98, 3LL, &v104[v4++]);
  v5 = v87;
  if ( v87 >= 0 )
  {
LABEL_178:
    v98 = UnicodeString;
    v50 = PipCreateComputerId(v38, 0LL, &v98, 1LL, &v104[v4++]);
    v5 = v50;
    if ( v50 >= 0 )
    {
LABEL_83:
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 112 * v4 + 2, 0x6E697050u);
      v52 = PoolWithTag;
      if ( PoolWithTag )
      {
        ValueName.Buffer = PoolWithTag;
        v53 = 112 * v4 + 2;
        v54 = 0;
        ValueName.MaximumLength = v53;
        if ( v4 )
        {
          while ( 1 )
          {
            ValueName.Length = 0;
            v55 = 0LL;
            v56 = 0LL;
            v5 = 0;
            if ( (ValueName.MaximumLength & 1) != 0 || v53 == 0xFFFF || !PoolWithTag && v53 )
            {
              v5 = -1073741811;
            }
            else
            {
              v55 = PoolWithTag;
              v56 = (unsigned __int64)v53 >> 1;
            }
            if ( v5 < 0 )
              break;
            v57 = 0LL;
            if ( v56 )
            {
              v5 = 0;
              v58 = L"ComputerMetadata\\";
              v59 = 0x7FFFLL;
              v60 = v56;
              while ( v59 && *v58 )
              {
                *(const wchar_t *)((char *)v58 + (char *)v55 - (char *)L"ComputerMetadata\\") = *v58;
                --v59;
                ++v58;
                ++v57;
                if ( !--v60 )
                {
                  if ( v59 && *v58 )
                    v5 = -2147483643;
                  break;
                }
              }
              LOWORD(v56) = v56 - v57;
              v55 += v57;
            }
            else
            {
              if ( !v55 )
              {
                v5 = -1073741811;
                ValueName.Length = 0;
                break;
              }
              v5 = -2147483643;
            }
            ValueName.Length = 2 * v57;
            if ( ((v5 + 0x80000000) & 0x80000000) != 0 || v5 == -2147483643 )
            {
              ValueName.Length = 0;
              ValueName.MaximumLength = 2 * v56;
              ValueName.Buffer = v55;
            }
            if ( v5 < 0 )
              break;
            v5 = RtlStringFromGUIDEx((PGUID)&v104[v54], &ValueName, 0);
            if ( v5 < 0 )
              break;
            v5 = RtlUpcaseUnicodeString(&ValueName, &ValueName, 0);
            if ( v5 < 0 )
              break;
            PoolWithTag = ValueName.Buffer + 39;
            v53 = ValueName.MaximumLength - 78;
            ValueName.Buffer += 39;
            ++v54;
            ValueName.MaximumLength -= 78;
            if ( v54 >= v4 )
              goto LABEL_103;
          }
        }
        else
        {
LABEL_103:
          if ( v5 >= 0 )
          {
            *PoolWithTag = 0;
            ++ValueName.Buffer;
            v5 = PnpSetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                   5u,
                   0LL,
                   0LL,
                   (__int64)&DEVPKEY_Device_HardwareIds,
                   8210,
                   (__int64)v52,
                   112 * v4 + 2,
                   0);
          }
        }
        ExFreePoolWithTag(v52, 0);
      }
      else
      {
        v5 = -1073741670;
      }
    }
  }
LABEL_106:
  v61 = UnicodeString;
  v62 = 8LL;
  do
  {
    RtlFreeUnicodeString(v61++);
    --v62;
  }
  while ( v62 );
  v63 = v93;
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
  if ( v63 )
    ZwClose(v63);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
