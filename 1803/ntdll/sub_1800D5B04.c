/*
 * XREFs of sub_1800D5B04 @ 0x1800D5B04
 * Callers:
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_18002AE58 @ 0x18002AE58 (sub_18002AE58.c)
 *     sub_18002B1E8 @ 0x18002B1E8 (sub_18002B1E8.c)
 *     sub_18002B488 @ 0x18002B488 (sub_18002B488.c)
 *     sub_18002B540 @ 0x18002B540 (sub_18002B540.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     sub_1800828E0 @ 0x1800828E0 (sub_1800828E0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18009B260 (ZwQueryAttributesFile.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     ZwQuerySection @ 0x18009B4E0 (ZwQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18009B5C0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009CF70 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x18009D570 (ZwQuerySymbolicLinkObject.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800D5B04(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5)
{
  int appended; // esi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  struct _TEB *v8; // rdi
  PVOID ArbitraryUserPointer; // rbx
  NTSTATUS v10; // eax
  PIMAGE_NT_HEADERS v11; // rax
  PIMAGE_NT_HEADERS v12; // r15
  char *v13; // r10
  __int128 v14; // xmm0
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // r8
  _WORD *i; // rdx
  __int16 v18; // ax
  _WORD *v19; // rdx
  __int16 v20; // cx
  char *v21; // rax
  __int64 v22; // rax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  unsigned int *v27; // rdx
  _DWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  _OWORD *v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rcx
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  DWORD v52; // [rsp+70h] [rbp-90h] BYREF
  int *v53; // [rsp+78h] [rbp-88h]
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE LinkHandle; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-38h] BYREF
  PVOID BaseOfImage; // [rsp+D0h] [rbp-30h]
  DWORD v60; // [rsp+D8h] [rbp-28h] BYREF
  ULONG OldProtect; // [rsp+DCh] [rbp-24h] BYREF
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp-20h] BYREF
  __int64 SectionInformation; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+118h] [rbp+18h]
  int (__fastcall *v70)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v71)(); // [rsp+128h] [rbp+28h]
  __int64 v72; // [rsp+130h] [rbp+30h]
  PVOID (__cdecl *v73)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+138h] [rbp+38h]
  NTSTATUS (__cdecl *v74)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+140h] [rbp+40h]
  NTSTATUS (__cdecl *v75)(PUNICODE_STRING, PCWSTR, ULONG, PVOID, ULONG, PULONG, BOOLEAN); // [rsp+148h] [rbp+48h]
  __int128 v76; // [rsp+150h] [rbp+50h]
  _DWORD *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  PVOID v79; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v80)(unsigned __int16, unsigned __int16); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v81)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v82)(); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v83)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v84)(_QWORD, _QWORD); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v85)(_QWORD, _QWORD); // [rsp+1A0h] [rbp+A0h]
  _UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  _UNICODE_STRING v87; // [rsp+1C0h] [rbp+C0h] BYREF
  _UNICODE_STRING Source; // [rsp+1D0h] [rbp+D0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v90[24]; // [rsp+1F0h] [rbp+F0h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+2B0h] [rbp+1B0h] BYREF
  _DWORD v92[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v93[520]; // [rsp+2E8h] [rbp+1E8h] BYREF

  v66 = a2;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v53 = 0LL;
  BaseOfImage = a4;
  v67 = a3;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v87, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v87;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (PWCH)v93;
      v92[0] = 4128860;
      v92[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (PWCH)v92;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, "\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &stru_180111318);
          if ( appended >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &LinkTarget;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
            if ( v6 < 0 && v6 != -1073741757 && v6 != -1073741790 )
              goto LABEL_9;
            v7 = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v7;
            if ( v7 >= 0 )
            {
              appended = ZwCreateSection(&SectionHandle, 0xFu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                LinkTarget.Buffer = (PWCH)v93;
                LinkTarget.Length -= 8;
                LinkTarget.MaximumLength -= 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 368), &LinkTarget);
                v8 = NtCurrentTeb();
                ArbitraryUserPointer = v8->NtTib.ArbitraryUserPointer;
                v8->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
                v10 = ZwMapViewOfSection(
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
                v8->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                appended = v10;
                if ( v10 == 1073741827 )
                  appended = sub_1800828E0(BaseAddress);
                if ( appended >= 0 )
                {
                  v11 = RtlImageNtHeader(BaseAddress);
                  v12 = v11;
                  if ( !v11 )
                    goto LABEL_18;
                  v13 = (char *)BaseAddress;
                  *(_QWORD *)(a5 + 48) = BaseAddress;
                  *(_DWORD *)(a5 + 64) = v11->OptionalHeader.SizeOfImage;
                  *(_DWORD *)(a5 + 128) = v11->FileHeader.TimeDateStamp;
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v14 = *(_OWORD *)(a5 + 368);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v14;
                  v15 = *(_WORD *)(a5 + 72);
                  v16 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v16 + 2 * (((unsigned __int64)v15 >> 1) - 1)); (unsigned __int64)i > v16; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_24;
                  }
                  if ( *i == 92 )
                  {
LABEL_24:
                    v18 = *(_WORD *)(a5 + 74);
                    v19 = i + 1;
                    *(_QWORD *)(a5 + 96) = v19;
                    v20 = 2 * ((__int64)((__int64)v19 - v16) >> 1);
                    *(_WORD *)(a5 + 88) = v15 - v20;
                    *(_WORD *)(a5 + 90) = v18 - v20;
                    goto LABEL_26;
                  }
                  *(_OWORD *)(a5 + 88) = v14;
LABEL_26:
                  if ( v12->OptionalHeader.AddressOfEntryPoint )
                    v21 = &v13[v12->OptionalHeader.AddressOfEntryPoint];
                  else
                    v21 = 0LL;
                  *(_QWORD *)(a5 + 56) = v21;
                  *(_QWORD *)(a5 + 248) = v12->OptionalHeader.ImageBase;
                  *(_QWORD *)(a5 + 152) = a5 + 288;
                  memset((void *)(a5 + 288), 0, 0x50uLL);
                  *(_QWORD *)(a5 + 160) = a5 + 288;
                  *(_QWORD *)(a5 + 168) = a5 + 288;
                  *(_QWORD *)(a5 + 288) = a5 + 160;
                  *(_QWORD *)(a5 + 296) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  v22 = *(_QWORD *)(a5 + 288);
                  *(_DWORD *)(a5 + 312) = -1;
                  *(_WORD *)(v22 - 52) = -1;
                  v23 = ZwQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                  if ( v23 < 0 )
                  {
                    appended = v23;
                    goto LABEL_49;
                  }
                  if ( SectionInformation )
                    *(_QWORD *)(a5 + 248) -= SectionInformation;
                  if ( (v12->FileHeader.Characteristics & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v24 = sub_18001014C(*(_QWORD *)(a5 + 48), 1, 9u, &v52, (char **)&v64);
                  v25 = v64;
                  if ( v24 < 0 )
                    v25 = 0LL;
                  if ( v25 && v52 )
                  {
                    DbgPrintEx(0x5Du, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v26 = sub_18001014C(*(_QWORD *)(a5 + 48), 1, 1u, &v60, (char **)&v65);
                  v27 = (unsigned int *)v65;
                  if ( v26 < 0 )
                    v27 = 0LL;
                  if ( !v27 )
                  {
LABEL_18:
                    appended = -1073741701;
                    goto LABEL_49;
                  }
                  v28 = (_DWORD *)(*(_QWORD *)(a5 + 48) + *v27);
                  v29 = *(_QWORD *)(a5 + 48) + v27[4];
                  if ( *(_QWORD *)v28 )
                  {
                    memset(v90, 0, sizeof(v90));
                    v90[7] = a5;
                    appended = sub_18002B540((__int64)v90);
                    if ( appended >= 0 )
                    {
                      if ( v90[13] )
                      {
                        LODWORD(v31) = *v28;
                        v32 = v29 - (_QWORD)v28;
                        while ( 1 )
                        {
                          appended = sub_18000FA60(
                                       (unsigned __int64)BaseOfImage,
                                       (const char *)(*(_QWORD *)(a5 + 48) + (unsigned int)v31 + 2LL),
                                       0,
                                       (char **)((char *)v28 + v32));
                          if ( appended < 0 )
                            break;
                          v28 += 2;
                          v31 = *(_QWORD *)v28;
                          if ( !*(_QWORD *)v28 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v90[13],
                              &v90[14],
                              v90[17],
                              &OldProtect);
                            if ( (unsigned int)sub_18001F704() )
                              appended = sub_18004FEB8(*(char **)(v90[7] + 48LL), 0, 0);
                            if ( appended < 0 )
                              break;
                            goto LABEL_66;
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
LABEL_66:
                    v33 = *(_DWORD *)(a5 + 104);
                    if ( (v33 & 0x2004) == 4 )
                    {
                      v58 = 0LL;
                      v34 = sub_18002B488();
                      sub_18002B1E8(
                        *(void **)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v34 ^ LdrSystemDllInitBlock.RngData,
                        &v58);
                      appended = sub_180023700(a5, (unsigned __int16 *)v12, v58);
                      if ( appended < 0 )
                        goto LABEL_49;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v33 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v33 & 0x200) == 0 )
                    {
                      sub_18002AE58((unsigned __int64)BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v35 = *(_QWORD *)(a5 + 48);
                    v36 = *(_QWORD *)(a5 + 56);
                    v69 = sub_1800F6B90;
                    v68 = 152;
                    v80 = sub_180029E80;
                    v76 = 0LL;
                    v70 = sub_1800D4850;
                    v71 = sub_1800F6780;
                    v81 = sub_1800F67A0;
                    v82 = sub_1800F6800;
                    v83 = sub_1800F67C0;
                    v84 = sub_1800F6A30;
                    v85 = sub_1800F6A80;
                    v72 = v66;
                    v78 = v67;
                    v73 = RtlCommitDebugInfo;
                    v74 = RtlSetProcessDebugInformation;
                    v75 = LdrQueryImageFileExecutionOptionsEx;
                    v79 = BaseOfImage;
                    v53 = &v68;
                    v77 = 0LL;
                    if ( sub_18003B518(v36, v35, 5)
                      && v53 == &v68
                      && (v37 = v77) != 0LL
                      && *v77 == 80
                      && (v38 = (_OWORD *)*((_QWORD *)&v76 + 1)) != 0LL
                      && **((_DWORD **)&v76 + 1) == 176 )
                    {
                      v39 = *(_OWORD *)(*((_QWORD *)&v76 + 1) + 16LL);
                      unk_1801563F8 = **((_OWORD **)&v76 + 1);
                      v40 = *(_OWORD *)(*((_QWORD *)&v76 + 1) + 32LL);
                      *((_OWORD *)&unk_1801563F8 + 1) = v39;
                      v41 = v38[3];
                      *((_OWORD *)&unk_1801563F8 + 2) = v40;
                      v42 = v38[4];
                      *((_OWORD *)&unk_1801563F8 + 3) = v41;
                      v43 = v38[5];
                      *((_OWORD *)&unk_1801563F8 + 4) = v42;
                      v44 = v38[6];
                      *((_OWORD *)&unk_1801563F8 + 5) = v43;
                      v45 = v38[8];
                      *((_OWORD *)&unk_1801563F8 + 6) = v44;
                      *((_OWORD *)&unk_1801563F8 + 7) = v38[7];
                      v46 = v38[9];
                      *((_OWORD *)&unk_1801563F8 + 8) = v45;
                      v47 = v38[10];
                      *((_OWORD *)&unk_1801563F8 + 9) = v46;
                      *((_OWORD *)&unk_1801563F8 + 10) = v47;
                      Value = (PULONG)v76;
                      v37[10] = dword_18015B300;
                      v37[11] = dword_18015D498;
                      v48 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      sub_18003BC9C(v48, a5 + 72, 0x14AEu);
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
            else if ( v7 == -1073741772 )
            {
LABEL_9:
              appended = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_49:
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
