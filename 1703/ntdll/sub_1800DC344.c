/*
 * XREFs of sub_1800DC344 @ 0x1800DC344
 * Callers:
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     sub_18003999C @ 0x18003999C (sub_18003999C.c)
 *     sub_180039AE0 @ 0x180039AE0 (sub_180039AE0.c)
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 *     sub_18003A4FC @ 0x18003A4FC (sub_18003A4FC.c)
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800867F4 @ 0x1800867F4 (sub_1800867F4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     ZwQuerySection @ 0x1800A5D20 (ZwQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x1800A5E00 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A7730 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1800A7D10 (ZwQuerySymbolicLinkObject.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800DC344(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5)
{
  __int64 *v5; // r13
  int appended; // esi
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  PVOID ArbitraryUserPointer; // rbx
  NTSTATUS v11; // eax
  PIMAGE_NT_HEADERS v12; // rax
  PIMAGE_NT_HEADERS v13; // r15
  char *v14; // r10
  __int128 v15; // xmm0
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // r8
  _WORD *i; // rdx
  __int16 v19; // ax
  _WORD *v20; // rdx
  __int16 v21; // cx
  char *v22; // rax
  __int64 v23; // rax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  unsigned int *v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  PVOID v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _DWORD *v35; // rdx
  _OWORD *v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rcx
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  int *v50; // [rsp+70h] [rbp-90h]
  HANDLE FileHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE DirectoryHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE LinkHandle; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  DWORD v56; // [rsp+C8h] [rbp-38h] BYREF
  ULONG OldProtect; // [rsp+CCh] [rbp-34h] BYREF
  ULONG_PTR ViewSize; // [rsp+D0h] [rbp-30h] BYREF
  __int64 SectionInformation; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-20h] BYREF
  PVOID BaseOfImage; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+108h] [rbp+8h]
  int (__fastcall *v66)(__int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v67)(); // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]
  PVOID (__cdecl *v69)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+128h] [rbp+28h]
  NTSTATUS (__cdecl *v70)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+130h] [rbp+30h]
  NTSTATUS (__cdecl *v71)(PUNICODE_STRING, PCWSTR, ULONG, PVOID, ULONG, PULONG, BOOLEAN); // [rsp+138h] [rbp+38h]
  __int128 v72; // [rsp+140h] [rbp+40h]
  _DWORD *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v75)(unsigned __int16, unsigned __int16); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v76)(); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v77)(); // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v78)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v79)(_QWORD, _QWORD); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v80)(_QWORD, _QWORD); // [rsp+188h] [rbp+88h]
  _UNICODE_STRING DestinationString; // [rsp+190h] [rbp+90h] BYREF
  _UNICODE_STRING v82; // [rsp+1A0h] [rbp+A0h] BYREF
  _UNICODE_STRING Source; // [rsp+1B0h] [rbp+B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v85[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+270h] [rbp+170h] BYREF
  _DWORD v87[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v88[520]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v62 = a2;
  BaseOfImage = a4;
  v63 = a3;
  v5 = (__int64 *)(a5 + 288);
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v50 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v82, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v82;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (PWCH)v88;
      v87[0] = 4128860;
      v87[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (PWCH)v87;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, L"\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &stru_180111408);
          if ( appended >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &LinkTarget;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v7 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
            if ( v7 != -1073741757 && v7 != -1073741790 && v7 < 0 )
              goto LABEL_9;
            v8 = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v8;
            if ( v8 >= 0 )
            {
              appended = ZwCreateSection(&SectionHandle, 0xFu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                LinkTarget.Buffer = (PWCH)v88;
                LinkTarget.Length -= 8;
                LinkTarget.MaximumLength -= 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 368), &LinkTarget);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
                v11 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        0LL,
                        0LL,
                        &ViewSize,
                        ViewShare,
                        0,
                        4u);
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                appended = v11;
                if ( v11 == 1073741827 )
                  appended = sub_1800867F4(BaseAddress);
                if ( appended >= 0 )
                {
                  v12 = RtlImageNtHeader(BaseAddress);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = (char *)BaseAddress;
                  *(_QWORD *)(a5 + 48) = BaseAddress;
                  *(_DWORD *)(a5 + 64) = v12->OptionalHeader.SizeOfImage;
                  *(_DWORD *)(a5 + 128) = v12->FileHeader.TimeDateStamp;
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v15 = *(_OWORD *)(a5 + 368);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v15;
                  v16 = *(_WORD *)(a5 + 72);
                  v17 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v17 + 2 * (((unsigned __int64)v16 >> 1) - 1)); (unsigned __int64)i > v17; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_24;
                  }
                  if ( *i == 92 )
                  {
LABEL_24:
                    v19 = *(_WORD *)(a5 + 74);
                    v20 = i + 1;
                    *(_QWORD *)(a5 + 96) = v20;
                    v21 = 2 * ((__int64)((__int64)v20 - v17) >> 1);
                    *(_WORD *)(a5 + 88) = v16 - v21;
                    *(_WORD *)(a5 + 90) = v19 - v21;
                    goto LABEL_26;
                  }
                  *(_OWORD *)(a5 + 88) = v15;
LABEL_26:
                  if ( v13->OptionalHeader.AddressOfEntryPoint )
                    v22 = &v14[v13->OptionalHeader.AddressOfEntryPoint];
                  else
                    v22 = 0LL;
                  *(_QWORD *)(a5 + 56) = v22;
                  *(_QWORD *)(a5 + 248) = v13->OptionalHeader.ImageBase;
                  *(_QWORD *)(a5 + 152) = v5;
                  memset(v5, 0, 0x50uLL);
                  *(_QWORD *)(a5 + 296) = a5 + 288;
                  *v5 = (__int64)v5;
                  *(_QWORD *)(a5 + 160) = v5;
                  *(_QWORD *)(a5 + 168) = v5;
                  *v5 = a5 + 160;
                  *(_QWORD *)(a5 + 296) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  v23 = *v5;
                  *(_DWORD *)(a5 + 312) = -1;
                  *(_WORD *)(v23 - 52) = -1;
                  v24 = ZwQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                  if ( v24 < 0 )
                  {
                    appended = v24;
                    goto LABEL_44;
                  }
                  if ( SectionInformation )
                    *(_QWORD *)(a5 + 248) -= SectionInformation;
                  if ( (v13->FileHeader.Characteristics & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v25 = sub_180032C0C(*(_QWORD *)(a5 + 48), 1, 1u, &v56, (char **)&v60);
                  v26 = (unsigned int *)v60;
                  if ( v25 < 0 )
                    v26 = 0LL;
                  if ( !v26 )
                  {
LABEL_18:
                    appended = -1073741701;
                    goto LABEL_44;
                  }
                  v27 = (_QWORD *)(*(_QWORD *)(a5 + 48) + *v26);
                  v28 = *(_QWORD *)(a5 + 48) + v26[4];
                  if ( *v27 )
                  {
                    memset(v85, 0, sizeof(v85));
                    v85[6] = a5;
                    appended = sub_18003999C((__int64)v85);
                    if ( appended >= 0 )
                    {
                      if ( v85[12] )
                      {
                        v30 = BaseOfImage;
                        v31 = v28 - (_QWORD)v27;
                        while ( 1 )
                        {
                          appended = sub_180030914(
                                       (signed __int64)v30,
                                       (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v27 + 2LL),
                                       0,
                                       (char **)((char *)v27 + v31));
                          if ( appended < 0 )
                            break;
                          if ( !*++v27 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v85[12],
                              &v85[13],
                              v85[16],
                              &OldProtect);
                            if ( sub_180030138() )
                              appended = sub_180001328(*(char **)(v85[6] + 48LL), 0, 0);
                            if ( appended < 0 )
                              break;
                            goto LABEL_61;
                          }
                        }
                      }
                      else
                      {
                        appended = -1073741701;
                      }
                    }
                  }
                  else
                  {
LABEL_61:
                    if ( (*(_DWORD *)(a5 + 104) & 0x2004) == 4 )
                    {
                      v55 = 0LL;
                      v32 = sub_18003A4FC();
                      sub_18003A528(
                        *(void **)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v32 ^ LdrSystemDllInitBlock.RngData,
                        &v55);
                      appended = sub_180039F38(a5, (unsigned __int16 *)v13, v55);
                      if ( appended < 0 )
                        goto LABEL_44;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                    }
                    if ( (*(_DWORD *)(a5 + 104) & 0x200) == 0 )
                    {
                      sub_180039AE0((unsigned __int64)BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v33 = *(_QWORD *)(a5 + 48);
                    v34 = *(_QWORD *)(a5 + 56);
                    v65 = sub_1800F9090;
                    v64 = 144;
                    v75 = sub_180008E00;
                    v72 = 0LL;
                    v66 = sub_1800DB0B0;
                    v67 = sub_1800F8C80;
                    v76 = sub_1800F8CA0;
                    v77 = sub_1800F8D00;
                    v78 = sub_1800F8CC0;
                    v79 = sub_1800F8F30;
                    v80 = sub_1800F8F80;
                    v68 = v62;
                    v74 = v63;
                    v69 = RtlCommitDebugInfo;
                    v70 = RtlSetProcessDebugInformation;
                    v71 = LdrQueryImageFileExecutionOptionsEx;
                    v50 = &v64;
                    v73 = 0LL;
                    if ( sub_180043C64(v34, v33, 5)
                      && v50 == &v64
                      && (v35 = v73) != 0LL
                      && *v73 == 80
                      && (v36 = (_OWORD *)*((_QWORD *)&v72 + 1)) != 0LL
                      && **((_DWORD **)&v72 + 1) == 176 )
                    {
                      v37 = *(_OWORD *)(*((_QWORD *)&v72 + 1) + 16LL);
                      unk_180155408 = **((_OWORD **)&v72 + 1);
                      v38 = *(_OWORD *)(*((_QWORD *)&v72 + 1) + 32LL);
                      *((_OWORD *)&unk_180155408 + 1) = v37;
                      v39 = v36[3];
                      *((_OWORD *)&unk_180155408 + 2) = v38;
                      v40 = v36[4];
                      *((_OWORD *)&unk_180155408 + 3) = v39;
                      v41 = v36[5];
                      *((_OWORD *)&unk_180155408 + 4) = v40;
                      v42 = v36[6];
                      *((_OWORD *)&unk_180155408 + 5) = v41;
                      v43 = v36[8];
                      *((_OWORD *)&unk_180155408 + 6) = v42;
                      *((_OWORD *)&unk_180155408 + 7) = v36[7];
                      v44 = v36[9];
                      *((_OWORD *)&unk_180155408 + 8) = v43;
                      v45 = v36[10];
                      *((_OWORD *)&unk_180155408 + 9) = v44;
                      *((_OWORD *)&unk_180155408 + 10) = v45;
                      Value = (PULONG)v72;
                      v35[10] = dword_18015AE48;
                      v35[11] = dword_18015C494;
                      v46 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      sub_18003CA5C(v46, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 344) = 9;
                    }
                    else
                    {
                      appended = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v8 == -1073741772 )
            {
LABEL_9:
              appended = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_44:
  if ( BaseAddress )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( LinkHandle )
    ZwClose(LinkHandle);
  return (unsigned int)appended;
}
