/*
 * XREFs of PipInitComputerIds @ 0x14080F160
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x140156F2C (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x14059C8A8 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x1405B27F4 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x1405D4C78 (_PnpCtxRegDeleteTree.c)
 *     PipCreateComputerId @ 0x14080FDB0 (PipCreateComputerId.c)
 *     PipSmBiosGetString @ 0x14080FF34 (PipSmBiosGetString.c)
 *     PipSmBiosFindStruct @ 0x140810064 (PipSmBiosFindStruct.c)
 */

__int64 __fastcall PipInitComputerIds(__int64 a1)
{
  unsigned __int8 v2; // r14
  unsigned __int8 v3; // si
  unsigned __int8 v4; // r12
  int ComputerId; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r15
  __int64 v10; // rax
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
  unsigned int v30; // edi
  UNICODE_STRING *v31; // rbx
  wchar_t *Buffer; // rax
  __int64 v33; // rdx
  UNICODE_STRING *v34; // rcx
  UNICODE_STRING **v35; // rax
  HANDLE v36; // rdi
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  __int64 v40; // rdx
  UNICODE_STRING *v41; // rcx
  UNICODE_STRING **v42; // rax
  unsigned int v43; // ebx
  unsigned int v44; // esi
  wchar_t *PoolWithTag; // rax
  size_t *v46; // r9
  wchar_t *v47; // r14
  unsigned int v48; // edi
  __int16 v49; // r11
  __int64 v50; // r9
  wchar_t *v51; // rbx
  const wchar_t *v52; // rax
  signed __int64 v53; // r10
  __int64 v54; // rdx
  size_t v55; // r8
  UNICODE_STRING *v56; // rbx
  __int64 v57; // rdi
  HANDLE v58; // rdi
  __int64 v60; // rdx
  UNICODE_STRING *v61; // rcx
  UNICODE_STRING **v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  UNICODE_STRING *v65; // rcx
  __int64 v66; // rdx
  UNICODE_STRING *v67; // rcx
  UNICODE_STRING **v68; // rax
  UNICODE_STRING *v69; // rcx
  UNICODE_STRING **v70; // rax
  unsigned __int8 *v71; // rdi
  int v72; // eax
  int v73; // eax
  __int64 v74; // rdx
  UNICODE_STRING *v75; // rcx
  UNICODE_STRING **v76; // rax
  UNICODE_STRING *cchMax; // [rsp+20h] [rbp-E0h]
  int v78; // [rsp+50h] [rbp-B0h]
  unsigned int NumberOfBytes; // [rsp+54h] [rbp-ACh]
  void *NumberOfBytes_4; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING GuidString; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v83; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *ppszDest; // [rsp+80h] [rbp-80h] BYREF
  size_t pcchDest; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v87; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING *v88; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING *v89; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING *v90; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING *v91; // [rsp+C8h] [rbp-38h]
  _QWORD v92[4]; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString[23]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t SourceString; // [rsp+260h] [rbp+160h] BYREF
  wchar_t pszDest[8]; // [rsp+268h] [rbp+168h] BYREF

  v83 = 0LL;
  Handle = 0LL;
  NumberOfBytes_4 = 0LL;
  NumberOfBytes = 0;
  v2 = 0;
  v78 = 0;
  v3 = 0;
  v4 = 0;
  memset(UnicodeString, 0, 0x80uLL);
  *(_DWORD *)&GuidString.Length = 6291550;
  GuidString.Buffer = L"\\Registry\\Machine\\System\\HardwareConfig\\Current";
  ComputerId = IopOpenRegistryKeyEx(&v83, 0LL, &GuidString, 0xF003Fu);
  if ( ComputerId < 0 )
    goto LABEL_100;
  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)v83, L"ComputerIds");
  *(_DWORD *)&GuidString.Length = 1572886;
  GuidString.Buffer = L"ComputerIds";
  ComputerId = IopCreateRegistryKeyEx(&Handle, v83, &GuidString, 0xF003Fu, 0, 0LL);
  if ( ComputerId < 0 )
    goto LABEL_100;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 56LL);
  if ( !v6 )
  {
    ComputerId = -1073741637;
    goto LABEL_100;
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( !v7 )
  {
    ComputerId = -1073741637;
    goto LABEL_100;
  }
  v8 = *(_DWORD *)(v6 + 12);
  v9 = 2LL;
  NumberOfBytes = v8;
  v10 = MmMapIoSpaceEx(v7, v8, 2u);
  NumberOfBytes_4 = (void *)v10;
  if ( !v10 )
  {
    ComputerId = -1073741670;
    goto LABEL_100;
  }
  LOBYTE(v11) = 1;
  Struct = PipSmBiosFindStruct(v11, 0LL, v10, v8);
  v14 = (unsigned __int8 *)Struct;
  if ( Struct )
  {
    v15 = (unsigned __int8 *)(Struct + 5);
    if ( Struct + 5 <= Struct + (unsigned __int64)*(unsigned __int8 *)(Struct + 1) )
    {
      cchMax = UnicodeString;
      String = PipSmBiosGetString(Struct, *(unsigned __int8 *)(Struct + 4), NumberOfBytes_4, NumberOfBytes);
      ComputerId = String;
      if ( String == -1073741275 )
      {
        ComputerId = 0;
      }
      else if ( String < 0 )
      {
        goto LABEL_100;
      }
    }
    if ( v14 + 27 <= &v14[v14[1]] )
    {
      cchMax = &UnicodeString[1];
      v17 = PipSmBiosGetString(v14, v14[26], NumberOfBytes_4, NumberOfBytes);
      ComputerId = v17;
      if ( v17 == -1073741275 )
      {
        ComputerId = 0;
      }
      else if ( v17 < 0 )
      {
        goto LABEL_100;
      }
    }
    if ( v14 + 6 <= &v14[v14[1]] )
    {
      cchMax = &UnicodeString[2];
      v18 = PipSmBiosGetString(v14, *v15, NumberOfBytes_4, NumberOfBytes);
      ComputerId = v18;
      if ( v18 == -1073741275 )
      {
        ComputerId = 0;
      }
      else if ( v18 < 0 )
      {
        goto LABEL_100;
      }
    }
    if ( v14 + 26 <= &v14[v14[1]] )
    {
      cchMax = &UnicodeString[3];
      v19 = PipSmBiosGetString(v14, v14[25], NumberOfBytes_4, NumberOfBytes);
      ComputerId = v19;
      if ( v19 == -1073741275 )
      {
        ComputerId = 0;
      }
      else if ( v19 < 0 )
      {
        goto LABEL_100;
      }
    }
  }
  LOBYTE(v13) = 10;
  v20 = PipSmBiosFindStruct(2LL, v13, NumberOfBytes_4, NumberOfBytes);
  v21 = v20;
  if ( v20 )
  {
    v71 = (unsigned __int8 *)(v20 + 5);
    if ( v20 + 5 <= v20 + (unsigned __int64)*(unsigned __int8 *)(v20 + 1) )
    {
      cchMax = &UnicodeString[6];
      v72 = PipSmBiosGetString(v20, *(unsigned __int8 *)(v20 + 4), NumberOfBytes_4, NumberOfBytes);
      ComputerId = v72;
      if ( v72 == -1073741275 )
      {
        ComputerId = 0;
      }
      else if ( v72 < 0 )
      {
        goto LABEL_100;
      }
    }
    if ( v21 + 6 <= v21 + (unsigned __int64)*(unsigned __int8 *)(v21 + 1) )
    {
      cchMax = &UnicodeString[7];
      v73 = PipSmBiosGetString(v21, *v71, NumberOfBytes_4, NumberOfBytes);
      ComputerId = v73;
      if ( v73 == -1073741275 )
      {
        ComputerId = 0;
      }
      else if ( v73 < 0 )
      {
        goto LABEL_100;
      }
    }
  }
  v22 = PipSmBiosFindStruct(0LL, 0LL, NumberOfBytes_4, NumberOfBytes);
  v24 = (unsigned __int8 *)v22;
  if ( v22 )
  {
    v25 = (unsigned __int8 *)(v22 + 5);
    if ( v22 + 5 <= v22 + (unsigned __int64)*(unsigned __int8 *)(v22 + 1) )
    {
      cchMax = &UnicodeString[4];
      v26 = PipSmBiosGetString(v22, *(unsigned __int8 *)(v22 + 4), NumberOfBytes_4, NumberOfBytes);
      ComputerId = v26;
      if ( v26 == -1073741275 )
      {
        ComputerId = 0;
      }
      else if ( v26 < 0 )
      {
        goto LABEL_100;
      }
    }
    if ( v24 + 6 <= &v24[v24[1]] )
    {
      cchMax = &UnicodeString[5];
      v27 = PipSmBiosGetString(v24, *v25, NumberOfBytes_4, NumberOfBytes);
      ComputerId = v27;
      if ( v27 == -1073741275 )
      {
        ComputerId = 0;
      }
      else if ( v27 < 0 )
      {
        goto LABEL_100;
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
  v29 = PipSmBiosFindStruct(v23, 0LL, NumberOfBytes_4, NumberOfBytes);
  if ( v29 && v29 + 6 <= v29 + (unsigned __int64)*(unsigned __int8 *)(v29 + 1) )
    v4 = *(_BYTE *)(v29 + 5) & 0x7F;
  v30 = 0;
  v31 = UnicodeString;
  do
  {
    if ( v31->Buffer && !v31->Length )
      RtlFreeUnicodeString(&UnicodeString[v30]);
    ++v30;
    ++v31;
  }
  while ( v30 < 8 );
  Buffer = UnicodeString[0].Buffer;
  if ( !UnicodeString[0].Buffer )
    goto LABEL_80;
  if ( UnicodeString[2].Buffer && UnicodeString[4].Buffer && UnicodeString[5].Buffer )
  {
    LODWORD(cchMax) = v3;
    ComputerId = RtlStringCchPrintfW(pszDest, 8uLL, L"%02x&%02x", v2);
    if ( ComputerId < 0 )
      goto LABEL_100;
    RtlInitUnicodeString(&DestinationString, pszDest);
    if ( UnicodeString[3].Buffer )
    {
      v33 = 4LL;
      v88 = UnicodeString;
      v34 = &UnicodeString[2];
      v89 = &UnicodeString[1];
      v35 = &v90;
      do
      {
        *v35++ = v34++;
        --v33;
      }
      while ( v33 );
      v36 = Handle;
      v92[2] = &DestinationString;
      ComputerId = PipCreateComputerId(Handle);
      v37 = 1;
      if ( ComputerId < 0 )
        goto LABEL_100;
    }
    else
    {
      v37 = 0;
      v36 = Handle;
    }
    v88 = UnicodeString;
    v89 = &UnicodeString[1];
    v90 = &UnicodeString[2];
    v91 = &UnicodeString[4];
    v92[0] = &UnicodeString[5];
    v92[1] = &DestinationString;
    v38 = v37 + 1;
    ComputerId = PipCreateComputerId(v36);
    if ( ComputerId < 0 )
      goto LABEL_100;
    v88 = UnicodeString;
    v89 = &UnicodeString[2];
    v90 = &UnicodeString[4];
    v91 = &UnicodeString[5];
    v92[0] = &DestinationString;
    v39 = v38 + 1;
    ComputerId = PipCreateComputerId(v36);
    v78 = v39;
    if ( ComputerId < 0 )
      goto LABEL_100;
    Buffer = UnicodeString[0].Buffer;
  }
  else
  {
    v39 = 0;
    v36 = Handle;
  }
  if ( !Buffer )
    goto LABEL_80;
  if ( UnicodeString[2].Buffer )
  {
    if ( UnicodeString[3].Buffer )
    {
      if ( UnicodeString[6].Buffer )
      {
        if ( UnicodeString[7].Buffer )
        {
          v60 = 2LL;
          v88 = UnicodeString;
          v61 = &UnicodeString[2];
          v89 = &UnicodeString[1];
          v62 = &v90;
          do
          {
            *v62++ = v61++;
            --v60;
          }
          while ( v60 );
          v63 = v92;
          v64 = 2LL;
          v65 = &UnicodeString[6];
          do
          {
            *v63++ = v65++;
            --v64;
          }
          while ( v64 );
          ++v39;
          ComputerId = PipCreateComputerId(v36);
          if ( ComputerId < 0 )
            goto LABEL_100;
        }
      }
      v40 = 2LL;
      v88 = UnicodeString;
      v41 = &UnicodeString[2];
      v89 = &UnicodeString[1];
      v42 = &v90;
      do
      {
        *v42++ = v41++;
        --v40;
      }
      while ( v40 );
      ++v39;
      ComputerId = PipCreateComputerId(v36);
      if ( ComputerId < 0 )
        goto LABEL_100;
    }
    v88 = UnicodeString;
    v89 = &UnicodeString[1];
    v90 = &UnicodeString[2];
    ++v39;
    ComputerId = PipCreateComputerId(v36);
    v78 = v39;
    if ( ComputerId < 0 )
      goto LABEL_100;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_80;
  if ( UnicodeString[3].Buffer )
  {
    if ( UnicodeString[6].Buffer )
    {
      if ( UnicodeString[7].Buffer )
      {
        v66 = 2LL;
        v88 = UnicodeString;
        v67 = &UnicodeString[6];
        v89 = &UnicodeString[3];
        v68 = &v90;
        do
        {
          *v68++ = v67++;
          --v66;
        }
        while ( v66 );
        ++v39;
        ComputerId = PipCreateComputerId(v36);
        if ( ComputerId < 0 )
          goto LABEL_100;
      }
    }
    v88 = UnicodeString;
    v89 = &UnicodeString[3];
    ++v39;
    ComputerId = PipCreateComputerId(v36);
    v78 = v39;
    if ( ComputerId < 0 )
      goto LABEL_100;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_80;
  if ( UnicodeString[2].Buffer )
  {
    if ( UnicodeString[6].Buffer )
    {
      if ( UnicodeString[7].Buffer )
      {
        v88 = UnicodeString;
        v89 = &UnicodeString[2];
        v90 = &UnicodeString[6];
        v91 = &UnicodeString[7];
        ++v39;
        ComputerId = PipCreateComputerId(v36);
        if ( ComputerId < 0 )
          goto LABEL_100;
      }
    }
    v88 = UnicodeString;
    v89 = &UnicodeString[2];
    ++v39;
    ComputerId = PipCreateComputerId(v36);
    v78 = v39;
    if ( ComputerId < 0 )
      goto LABEL_100;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_80;
  if ( UnicodeString[1].Buffer )
  {
    if ( UnicodeString[7].Buffer )
    {
      if ( UnicodeString[6].Buffer )
      {
        v74 = 2LL;
        v88 = UnicodeString;
        v75 = &UnicodeString[6];
        v89 = &UnicodeString[1];
        v76 = &v90;
        do
        {
          *v76++ = v75++;
          --v74;
        }
        while ( v74 );
        ++v39;
        ComputerId = PipCreateComputerId(v36);
        if ( ComputerId < 0 )
          goto LABEL_100;
      }
    }
    v88 = UnicodeString;
    v89 = &UnicodeString[1];
    ++v39;
    ComputerId = PipCreateComputerId(v36);
    v78 = v39;
    if ( ComputerId < 0 )
      goto LABEL_100;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_80;
  if ( v4 )
  {
    ComputerId = RtlStringCchPrintfW(&SourceString, 4uLL, L"%x", v4);
    if ( ComputerId < 0 )
      goto LABEL_100;
    RtlInitUnicodeString(&v87, &SourceString);
    v88 = UnicodeString;
    v89 = &v87;
    ++v39;
    ComputerId = PipCreateComputerId(v36);
    v78 = v39;
    if ( ComputerId < 0 )
      goto LABEL_100;
    Buffer = UnicodeString[0].Buffer;
  }
  if ( !Buffer )
    goto LABEL_80;
  if ( !UnicodeString[7].Buffer )
    goto LABEL_169;
  if ( !UnicodeString[6].Buffer )
    goto LABEL_169;
  v88 = UnicodeString;
  v69 = &UnicodeString[6];
  v70 = &v89;
  do
  {
    *v70++ = v69++;
    --v9;
  }
  while ( v9 );
  ++v39;
  ComputerId = PipCreateComputerId(v36);
  if ( ComputerId >= 0 )
  {
LABEL_169:
    v88 = UnicodeString;
    ComputerId = PipCreateComputerId(v36);
    v78 = v39 + 1;
    if ( ComputerId >= 0 )
    {
LABEL_80:
      v43 = v78;
      v44 = 112 * v78 + 2;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v44, 0x6E697050u);
      v47 = PoolWithTag;
      if ( PoolWithTag )
      {
        GuidString.Buffer = PoolWithTag;
        GuidString.MaximumLength = v44;
        v48 = 0;
        if ( v78 )
        {
          do
          {
            GuidString.Length = 0;
            ComputerId = RtlUnicodeStringValidateDestWorker(
                           &GuidString,
                           &ppszDest,
                           &pcchDest,
                           v46,
                           (const size_t)cchMax,
                           0);
            if ( ComputerId >= 0 )
            {
              v49 = pcchDest;
              v50 = 0LL;
              v51 = ppszDest;
              if ( pcchDest )
              {
                v52 = L"ComputerMetadata\\";
                v53 = (char *)ppszDest - (char *)L"ComputerMetadata\\";
                v54 = 0x7FFFLL;
                v55 = pcchDest;
                ComputerId = 0;
                while ( v54 && *v52 )
                {
                  *(const wchar_t *)((char *)v52 + v53) = *v52;
                  --v54;
                  ++v52;
                  ++v50;
                  if ( !--v55 )
                  {
                    if ( v54 && *v52 )
                      ComputerId = -2147483643;
                    break;
                  }
                }
                v51 += v50;
                v49 -= v50;
              }
              else
              {
                if ( !ppszDest )
                {
                  ComputerId = -1073741811;
                  GuidString.Length = 0;
                  goto LABEL_99;
                }
                ComputerId = -2147483643;
              }
              GuidString.Length = 2 * v50;
              if ( ((ComputerId + 0x80000000) & 0x80000000) != 0 || ComputerId == -2147483643 )
              {
                GuidString.Length = 0;
                GuidString.MaximumLength = 2 * v49;
                GuidString.Buffer = v51;
              }
              v43 = v78;
            }
            if ( ComputerId < 0 )
              goto LABEL_99;
            ComputerId = RtlStringFromGUIDEx((PGUID)&UnicodeString[v48 + 8], &GuidString, 0);
            if ( ComputerId < 0 )
              goto LABEL_99;
            ComputerId = RtlUpcaseUnicodeString(&GuidString, &GuidString, 0);
            if ( ComputerId < 0 )
              goto LABEL_99;
            GuidString.MaximumLength -= 78;
            PoolWithTag = GuidString.Buffer + 39;
            ++v48;
            GuidString.Buffer += 39;
          }
          while ( v48 < v43 );
        }
        if ( ComputerId >= 0 )
        {
          *PoolWithTag = 0;
          ++GuidString.Buffer;
          ComputerId = PnpSetObjectProperty(
                         *(__int64 **)&PiPnpRtlCtx,
                         (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                         5u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_HardwareIds,
                         8210,
                         (__int64)v47,
                         v44,
                         0);
        }
LABEL_99:
        ExFreePoolWithTag(v47, 0);
      }
      else
      {
        ComputerId = -1073741670;
      }
    }
  }
LABEL_100:
  v56 = UnicodeString;
  v57 = 8LL;
  do
  {
    RtlFreeUnicodeString(v56++);
    --v57;
  }
  while ( v57 );
  v58 = Handle;
  if ( NumberOfBytes_4 )
    MmUnmapIoSpace(NumberOfBytes_4, NumberOfBytes);
  if ( v58 )
    ZwClose(v58);
  if ( v83 )
    ZwClose(v83);
  return (unsigned int)ComputerId;
}
