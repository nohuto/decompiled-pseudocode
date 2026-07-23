/*
 * XREFs of PipInitComputerIds @ 0x1408B3A10
 * Callers:
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PnpUnicodeStringToWstrFree @ 0x140509650 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     RtlUpcaseUnicodeString @ 0x140539150 (RtlUpcaseUnicodeString.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     IopCreateRegistryKeyEx @ 0x1405F7BC4 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x1406340C4 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegCloseKey @ 0x1406342AC (_PnpCtxRegCloseKey.c)
 *     PipHardwareConfigOpenKey @ 0x140634328 (PipHardwareConfigOpenKey.c)
 *     PipCreateComputerId @ 0x1408B498C (PipCreateComputerId.c)
 *     PipSmBiosGetString @ 0x1408B4BA8 (PipSmBiosGetString.c)
 *     PipSmBiosFindStruct @ 0x1408B4CF0 (PipSmBiosFindStruct.c)
 */

__int64 __fastcall PipInitComputerIds(__int64 a1)
{
  void *v2; // r15
  void *v3; // rsi
  unsigned __int8 v4; // r13
  __int64 v5; // rcx
  int v6; // eax
  HANDLE v7; // rdi
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 Struct; // rax
  __int64 v16; // rdx
  unsigned __int8 *v17; // rbx
  unsigned __int8 *v18; // rdi
  int String; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int8 *v26; // rdi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  unsigned __int8 *v30; // rcx
  unsigned __int8 *v31; // rbx
  unsigned __int8 *v32; // rdi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // ecx
  HANDLE v39; // r15
  unsigned int v40; // edi
  UNICODE_STRING *v41; // rbx
  unsigned int v42; // edi
  UNICODE_STRING *v43; // rsi
  PCWSTR *v44; // r14
  PVOID v45; // rbx
  __int64 v46; // rax
  wchar_t *Buffer; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  UNICODE_STRING *v51; // rcx
  UNICODE_STRING **v52; // rax
  int v53; // r15d
  int v54; // eax
  int v55; // r15d
  int v56; // eax
  unsigned int v57; // r15d
  __int64 v58; // rdx
  UNICODE_STRING *v59; // rcx
  UNICODE_STRING **v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  UNICODE_STRING *v63; // rcx
  int v64; // eax
  __int64 v65; // rdx
  UNICODE_STRING *v66; // rcx
  UNICODE_STRING **v67; // rax
  int v68; // eax
  int v69; // eax
  __int64 v70; // rdx
  UNICODE_STRING *v71; // rcx
  UNICODE_STRING **v72; // rax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  __int64 v77; // rdx
  UNICODE_STRING *v78; // rcx
  UNICODE_STRING **v79; // rax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  UNICODE_STRING *v83; // rcx
  UNICODE_STRING **v84; // rax
  int v85; // eax
  int v86; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v88; // r13
  unsigned __int16 v89; // cx
  unsigned int v90; // edi
  wchar_t *v91; // rbx
  unsigned __int64 v92; // r11
  __int64 v93; // r9
  const wchar_t *v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // r8
  UNICODE_STRING *v97; // rbx
  __int64 v98; // rdi
  __int64 v99; // rcx
  PVOID Data; // [rsp+28h] [rbp-E0h]
  int v102; // [rsp+58h] [rbp-B0h]
  void *v103; // [rsp+60h] [rbp-A8h]
  unsigned __int8 v104; // [rsp+68h] [rbp-A0h]
  unsigned int v105; // [rsp+6Ch] [rbp-9Ch]
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-98h] BYREF
  int v107; // [rsp+80h] [rbp-88h]
  int v108; // [rsp+84h] [rbp-84h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  void *v110; // [rsp+90h] [rbp-78h] BYREF
  __int64 v111; // [rsp+98h] [rbp-70h] BYREF
  PVOID v112; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v114; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING *v115; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING *v116; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING *v117; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING *v118; // [rsp+E0h] [rbp-28h]
  _QWORD v119[4]; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString[10]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v121[15]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t SourceString; // [rsp+298h] [rbp+190h] BYREF
  wchar_t pszDest[8]; // [rsp+2A0h] [rbp+198h] BYREF

  v2 = 0LL;
  KeyHandle = 0LL;
  v3 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v4 = 0;
  v105 = 0;
  v104 = 0;
  v108 = 0;
  v107 = 0;
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v6 = PipHardwareConfigOpenKey(v5, 0xF003Fu, &KeyHandle);
  v7 = KeyHandle;
  v8 = v6;
  if ( v6 >= 0 )
  {
    PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)KeyHandle, L"ComputerIds");
    *(_DWORD *)&ValueName.Length = 1572886;
    ValueName.Buffer = L"ComputerIds";
    v8 = IopCreateRegistryKeyEx(&v110, v7, &ValueName, 0xF003Fu, 0, 0LL);
    if ( v8 < 0 )
      goto LABEL_163;
    PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (char *)v7, L"ProductIds");
    *(_DWORD *)&ValueName.Length = 1441812;
    ValueName.Buffer = L"ProductIds";
    v102 = IopCreateRegistryKeyEx(&v111, v7, &ValueName, 0xF003Fu, 0, 0LL);
    v8 = v102;
    if ( v102 < 0 )
      goto LABEL_163;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 56LL);
    if ( !v9 )
    {
      v3 = v110;
      v8 = -1073741637;
      goto LABEL_150;
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( !v10 )
    {
      v8 = -1073741637;
      goto LABEL_163;
    }
    v11 = *(_DWORD *)(v9 + 12);
    v12 = 2LL;
    v105 = v11;
    v13 = MmMapIoSpaceEx(v10, v11, 2u);
    v103 = (void *)v13;
    v2 = (void *)v13;
    if ( !v13 )
    {
      v3 = v110;
      v8 = -1073741670;
      v2 = 0LL;
      goto LABEL_150;
    }
    LOBYTE(v14) = 1;
    Struct = PipSmBiosFindStruct(v14, 0LL, v13, v11);
    v17 = (unsigned __int8 *)Struct;
    if ( Struct )
    {
      v18 = (unsigned __int8 *)(Struct + 5);
      if ( Struct + 5 <= Struct + (unsigned __int64)*(unsigned __int8 *)(Struct + 1) )
      {
        String = PipSmBiosGetString(Struct, *(unsigned __int8 *)(Struct + 4), v2, v11, UnicodeString);
        v102 = String;
        v8 = String;
        if ( String == -1073741275 )
        {
          v102 = 0;
        }
        else if ( String < 0 )
        {
          goto LABEL_163;
        }
      }
      if ( v17 + 27 <= &v17[v17[1]] )
      {
        v20 = PipSmBiosGetString(v17, v17[26], v2, v11, &UnicodeString[1]);
        v102 = v20;
        v8 = v20;
        if ( v20 == -1073741275 )
        {
          v102 = 0;
        }
        else if ( v20 < 0 )
        {
          goto LABEL_163;
        }
      }
      if ( v17 + 6 <= &v17[v17[1]] )
      {
        v21 = PipSmBiosGetString(v17, *v18, v2, v11, &UnicodeString[2]);
        v102 = v21;
        v8 = v21;
        if ( v21 == -1073741275 )
        {
          v102 = 0;
        }
        else if ( v21 < 0 )
        {
          goto LABEL_163;
        }
      }
      if ( v17 + 26 <= &v17[v17[1]] )
      {
        v22 = PipSmBiosGetString(v17, v17[25], v2, v11, &UnicodeString[3]);
        v102 = v22;
        v8 = v22;
        if ( v22 == -1073741275 )
        {
          v102 = 0;
        }
        else if ( v22 < 0 )
        {
          goto LABEL_163;
        }
      }
      if ( v17 + 7 <= &v17[v17[1]] )
      {
        v23 = PipSmBiosGetString(v17, v17[6], v2, v11, &UnicodeString[9]);
        v102 = v23;
        v8 = v23;
        if ( v23 == -1073741275 )
        {
          v102 = 0;
        }
        else if ( v23 < 0 )
        {
          goto LABEL_163;
        }
      }
    }
    LOBYTE(v16) = 10;
    v24 = PipSmBiosFindStruct(2LL, v16, v2, v11);
    v25 = v24;
    if ( v24 )
    {
      v26 = (unsigned __int8 *)(v24 + 5);
      if ( v24 + 5 <= v24 + (unsigned __int64)*(unsigned __int8 *)(v24 + 1) )
      {
        v27 = PipSmBiosGetString(v24, *(unsigned __int8 *)(v24 + 4), v2, v11, &UnicodeString[6]);
        v102 = v27;
        v8 = v27;
        if ( v27 == -1073741275 )
        {
          v102 = 0;
        }
        else if ( v27 < 0 )
        {
          goto LABEL_163;
        }
      }
      if ( v25 + 6 <= v25 + (unsigned __int64)*(unsigned __int8 *)(v25 + 1) )
      {
        v28 = PipSmBiosGetString(v25, *v26, v2, v11, &UnicodeString[7]);
        v102 = v28;
        v8 = v28;
        if ( v28 == -1073741275 )
        {
          v102 = 0;
        }
        else if ( v28 < 0 )
        {
          goto LABEL_163;
        }
      }
    }
    v29 = PipSmBiosFindStruct(0LL, 0LL, v2, v11);
    v31 = (unsigned __int8 *)v29;
    if ( !v29 )
      goto LABEL_44;
    v32 = (unsigned __int8 *)(v29 + 5);
    if ( v29 + 5 <= v29 + (unsigned __int64)*(unsigned __int8 *)(v29 + 1) )
    {
      v33 = PipSmBiosGetString(v29, *(unsigned __int8 *)(v29 + 4), v2, v11, &UnicodeString[4]);
      v102 = v33;
      v8 = v33;
      if ( v33 == -1073741275 )
      {
        v102 = 0;
      }
      else if ( v33 < 0 )
      {
        goto LABEL_163;
      }
    }
    if ( v31 + 6 <= &v31[v31[1]] )
    {
      v34 = PipSmBiosGetString(v31, *v32, v2, v11, &UnicodeString[5]);
      v102 = v34;
      v8 = v34;
      if ( v34 == -1073741275 )
      {
        v102 = 0;
      }
      else if ( v34 < 0 )
      {
        goto LABEL_163;
      }
    }
    if ( v31 + 9 > &v31[v31[1]] )
      goto LABEL_40;
    v35 = PipSmBiosGetString(v31, v31[8], v2, v11, &UnicodeString[8]);
    v102 = v35;
    v8 = v35;
    if ( v35 == -1073741275 )
    {
      v102 = 0;
      goto LABEL_40;
    }
    if ( v35 >= 0 )
    {
LABEL_40:
      v30 = v31 + 21;
      v36 = (unsigned __int64)&v31[v31[1]];
      if ( (unsigned __int64)(v31 + 21) <= v36 )
        v104 = v31[20];
      if ( (unsigned __int64)(v31 + 22) <= v36 )
        v4 = *v30;
LABEL_44:
      LOBYTE(v30) = 3;
      v37 = PipSmBiosFindStruct(v30, 0LL, v2, v11);
      if ( v37 && v37 + 6 <= v37 + (unsigned __int64)*(unsigned __int8 *)(v37 + 1) )
      {
        v38 = *(_BYTE *)(v37 + 5) & 0x7F;
        v108 = v38;
      }
      else
      {
        v38 = v108;
      }
      v39 = KeyHandle;
      if ( v38 )
      {
        ValueName.Buffer = L"EnclosureType";
        *(_DWORD *)&ValueName.Length = 1835034;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v108, 4u);
      }
      v40 = 0;
      v41 = UnicodeString;
      do
      {
        if ( v41->Buffer && !v41->Length )
          RtlFreeAnsiString(&UnicodeString[v40]);
        ++v40;
        ++v41;
      }
      while ( v40 < 0xA );
      v42 = 0;
      v43 = UnicodeString;
      v44 = (PCWSTR *)off_1402F31E0;
      do
      {
        RtlInitUnicodeString(&ValueName, *v44);
        if ( v43->Length )
        {
          if ( (int)PnpUnicodeStringToWstr((__int16 **)&v112, 0LL, &UnicodeString[v42].Length) >= 0 )
          {
            v45 = v112;
            v46 = -1LL;
            while ( *((_WORD *)v112 + ++v46) != 0 )
              ;
            ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v112, 2 * v46 + 2);
            PnpUnicodeStringToWstrFree(v45, (__int64)&UnicodeString[v42]);
          }
          v39 = KeyHandle;
        }
        else
        {
          ZwDeleteValueKey(v39, &ValueName);
        }
        ++v42;
        ++v44;
        ++v43;
      }
      while ( v42 < 0xA );
      Buffer = UnicodeString[0].Buffer;
      v3 = v110;
      if ( !UnicodeString[0].Buffer )
      {
        v8 = v102;
        v57 = v107;
        goto LABEL_126;
      }
      v49 = v111;
      if ( UnicodeString[2].Buffer && UnicodeString[4].Buffer && UnicodeString[5].Buffer )
      {
        LODWORD(Data) = v4;
        v8 = RtlStringCchPrintfW(pszDest, 8uLL, L"%02x&%02x", v104, Data);
        if ( v8 < 0 )
          goto LABEL_149;
        RtlInitUnicodeString(&DestinationString, pszDest);
        if ( UnicodeString[3].Buffer )
        {
          v50 = 4LL;
          v115 = UnicodeString;
          v51 = &UnicodeString[2];
          v116 = &UnicodeString[1];
          v52 = &v117;
          do
          {
            *v52++ = v51++;
            --v50;
          }
          while ( v50 );
          v119[2] = &DestinationString;
          v8 = PipCreateComputerId(v3, v49, &v115, 7LL, v121);
          v53 = 1;
          if ( v8 < 0 )
            goto LABEL_149;
        }
        else
        {
          v53 = v107;
        }
        v115 = UnicodeString;
        v116 = &UnicodeString[1];
        v117 = &UnicodeString[2];
        v118 = &UnicodeString[4];
        v119[0] = &UnicodeString[5];
        v119[1] = &DestinationString;
        v54 = PipCreateComputerId(v3, v49, &v115, 6LL, &v121[v53]);
        v55 = v53 + 1;
        v8 = v54;
        if ( v54 < 0 )
          goto LABEL_149;
        v115 = UnicodeString;
        v116 = &UnicodeString[2];
        v117 = &UnicodeString[4];
        v118 = &UnicodeString[5];
        v119[0] = &DestinationString;
        v56 = PipCreateComputerId(v3, v49, &v115, 5LL, &v121[v55]);
        v57 = v55 + 1;
        v8 = v56;
        if ( v56 < 0 )
          goto LABEL_149;
        Buffer = UnicodeString[0].Buffer;
      }
      else
      {
        v8 = v102;
        v57 = v107;
      }
      if ( !Buffer )
        goto LABEL_126;
      if ( UnicodeString[2].Buffer )
      {
        if ( UnicodeString[3].Buffer )
        {
          if ( UnicodeString[6].Buffer )
          {
            if ( UnicodeString[7].Buffer )
            {
              v58 = 2LL;
              v115 = UnicodeString;
              v59 = &UnicodeString[2];
              v116 = &UnicodeString[1];
              v60 = &v117;
              do
              {
                *v60++ = v59++;
                --v58;
              }
              while ( v58 );
              v61 = v119;
              v62 = 2LL;
              v63 = &UnicodeString[6];
              do
              {
                *v61++ = v63++;
                --v62;
              }
              while ( v62 );
              v64 = PipCreateComputerId(v3, v49, &v115, 6LL, &v121[v57++]);
              v8 = v64;
              if ( v64 < 0 )
                goto LABEL_149;
            }
          }
          v65 = 2LL;
          v115 = UnicodeString;
          v66 = &UnicodeString[2];
          v116 = &UnicodeString[1];
          v67 = &v117;
          do
          {
            *v67++ = v66++;
            --v65;
          }
          while ( v65 );
          v68 = PipCreateComputerId(v3, v49, &v115, 4LL, &v121[v57++]);
          v8 = v68;
          if ( v68 < 0 )
            goto LABEL_149;
        }
        v115 = UnicodeString;
        v116 = &UnicodeString[1];
        v117 = &UnicodeString[2];
        v69 = PipCreateComputerId(v3, v49, &v115, 3LL, &v121[v57++]);
        v8 = v69;
        if ( v69 < 0 )
          goto LABEL_149;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_126;
      if ( UnicodeString[3].Buffer )
      {
        if ( UnicodeString[6].Buffer )
        {
          if ( UnicodeString[7].Buffer )
          {
            v70 = 2LL;
            v115 = UnicodeString;
            v71 = &UnicodeString[6];
            v116 = &UnicodeString[3];
            v72 = &v117;
            do
            {
              *v72++ = v71++;
              --v70;
            }
            while ( v70 );
            v73 = PipCreateComputerId(v3, v49, &v115, 4LL, &v121[v57++]);
            v8 = v73;
            if ( v73 < 0 )
              goto LABEL_149;
          }
        }
        v115 = UnicodeString;
        v116 = &UnicodeString[3];
        v74 = PipCreateComputerId(v3, v49, &v115, 2LL, &v121[v57++]);
        v8 = v74;
        if ( v74 < 0 )
          goto LABEL_149;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_126;
      if ( UnicodeString[2].Buffer )
      {
        if ( UnicodeString[6].Buffer )
        {
          if ( UnicodeString[7].Buffer )
          {
            v115 = UnicodeString;
            v116 = &UnicodeString[2];
            v117 = &UnicodeString[6];
            v118 = &UnicodeString[7];
            v75 = PipCreateComputerId(v3, v49, &v115, 4LL, &v121[v57++]);
            v8 = v75;
            if ( v75 < 0 )
              goto LABEL_149;
          }
        }
        v115 = UnicodeString;
        v116 = &UnicodeString[2];
        v76 = PipCreateComputerId(v3, v49, &v115, 2LL, &v121[v57++]);
        v8 = v76;
        if ( v76 < 0 )
          goto LABEL_149;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_126;
      if ( UnicodeString[1].Buffer )
      {
        if ( UnicodeString[7].Buffer )
        {
          if ( UnicodeString[6].Buffer )
          {
            v77 = 2LL;
            v115 = UnicodeString;
            v78 = &UnicodeString[6];
            v116 = &UnicodeString[1];
            v79 = &v117;
            do
            {
              *v79++ = v78++;
              --v77;
            }
            while ( v77 );
            v80 = PipCreateComputerId(v3, v49, &v115, 4LL, &v121[v57++]);
            v8 = v80;
            if ( v80 < 0 )
              goto LABEL_149;
          }
        }
        v115 = UnicodeString;
        v116 = &UnicodeString[1];
        v81 = PipCreateComputerId(v3, v49, &v115, 2LL, &v121[v57++]);
        v8 = v81;
        if ( v81 < 0 )
          goto LABEL_149;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_126;
      if ( v108 )
      {
        v8 = RtlStringCchPrintfW(&SourceString, 4uLL, L"%x");
        if ( v8 < 0 )
          goto LABEL_149;
        RtlInitUnicodeString(&v114, &SourceString);
        v115 = UnicodeString;
        v116 = &v114;
        v82 = PipCreateComputerId(v3, 0LL, &v115, 2LL, &v121[v57++]);
        v8 = v82;
        if ( v82 < 0 )
          goto LABEL_149;
        Buffer = UnicodeString[0].Buffer;
      }
      if ( !Buffer )
        goto LABEL_126;
      if ( !UnicodeString[7].Buffer )
        goto LABEL_192;
      if ( !UnicodeString[6].Buffer )
        goto LABEL_192;
      v115 = UnicodeString;
      v83 = &UnicodeString[6];
      v84 = &v116;
      do
      {
        *v84++ = v83++;
        --v12;
      }
      while ( v12 );
      v85 = PipCreateComputerId(v3, 0LL, &v115, 3LL, &v121[v57++]);
      v8 = v85;
      if ( v85 >= 0 )
      {
LABEL_192:
        v115 = UnicodeString;
        v86 = PipCreateComputerId(v3, 0LL, &v115, 1LL, &v121[v57++]);
        v8 = v86;
        if ( v86 >= 0 )
        {
LABEL_126:
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 112 * v57 + 2, 0x6E697050u);
          v88 = PoolWithTag;
          if ( PoolWithTag )
          {
            ValueName.Buffer = PoolWithTag;
            v89 = 112 * v57 + 2;
            v90 = 0;
            ValueName.MaximumLength = v89;
            if ( v57 )
            {
              while ( 1 )
              {
                ValueName.Length = 0;
                v91 = 0LL;
                v92 = 0LL;
                v8 = 0;
                if ( (ValueName.MaximumLength & 1) != 0 || v89 == 0xFFFF || !PoolWithTag && v89 )
                {
                  v8 = -1073741811;
                }
                else
                {
                  v91 = PoolWithTag;
                  v92 = (unsigned __int64)v89 >> 1;
                }
                if ( v8 < 0 )
                  break;
                v93 = 0LL;
                if ( v92 )
                {
                  v8 = 0;
                  v94 = L"ComputerMetadata\\";
                  v95 = 0x7FFFLL;
                  v3 = v110;
                  v96 = v92;
                  while ( v95 && *v94 )
                  {
                    *(const wchar_t *)((char *)v94 + (char *)v91 - (char *)L"ComputerMetadata\\") = *v94;
                    --v95;
                    ++v94;
                    ++v93;
                    if ( !--v96 )
                    {
                      if ( v95 && *v94 )
                        v8 = -2147483643;
                      break;
                    }
                  }
                  LOWORD(v92) = v92 - v93;
                  v91 += v93;
                }
                else
                {
                  if ( !v91 )
                  {
                    v8 = -1073741811;
                    ValueName.Length = 0;
                    break;
                  }
                  v8 = -2147483643;
                }
                ValueName.Length = 2 * v93;
                if ( ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -2147483643 )
                {
                  ValueName.Length = 0;
                  ValueName.MaximumLength = 2 * v92;
                  ValueName.Buffer = v91;
                }
                if ( v8 < 0 )
                  break;
                v8 = RtlStringFromGUIDEx((PGUID)&v121[v90], &ValueName, 0);
                if ( v8 < 0 )
                  break;
                v8 = RtlUpcaseUnicodeString(&ValueName, &ValueName, 0);
                if ( v8 < 0 )
                  break;
                PoolWithTag = ValueName.Buffer + 39;
                v89 = ValueName.MaximumLength - 78;
                ValueName.Buffer += 39;
                ++v90;
                ValueName.MaximumLength -= 78;
                if ( v90 >= v57 )
                  goto LABEL_146;
              }
            }
            else
            {
LABEL_146:
              if ( v8 >= 0 )
              {
                *PoolWithTag = 0;
                ++ValueName.Buffer;
                v8 = PnpSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                       5u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       8210,
                       (__int64)v88,
                       112 * v57 + 2,
                       0);
              }
            }
            ExFreePoolWithTag(v88, 0);
          }
          else
          {
            v8 = -1073741670;
          }
        }
      }
LABEL_149:
      v2 = v103;
      goto LABEL_150;
    }
LABEL_163:
    v3 = v110;
  }
LABEL_150:
  v97 = UnicodeString;
  v98 = 10LL;
  do
  {
    RtlFreeAnsiString(v97++);
    --v98;
  }
  while ( v98 );
  if ( v2 )
    MmUnmapIoSpace(v2, v105);
  if ( v3 )
    ZwClose(v3);
  if ( KeyHandle )
    PnpCtxRegCloseKey(v99, KeyHandle);
  return (unsigned int)v8;
}
