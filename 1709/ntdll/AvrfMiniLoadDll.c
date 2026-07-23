/*
 * XREFs of AvrfMiniLoadDll @ 0x1800DB92C
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x180001314 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002259C (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlInsertInvertedFunctionTable @ 0x180022828 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGenRandom @ 0x180022BB8 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x180022E04 (LdrInitSecurityCookie.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180028E78 (LdrpGetProcedureAddress.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B994 (LdrpCfgProcessLoadConfig.c)
 *     RtlCopyUnicodeString @ 0x18002DA90 (RtlCopyUnicodeString.c)
 *     LdrpCallInitRoutine @ 0x180031254 (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpProtectAndRelocateImage @ 0x180084964 (LdrpProtectAndRelocateImage.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A0720 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1800A0860 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x1800A0AE0 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x1800A0BC0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A2530 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A2B30 (NtQuerySymbolicLinkObject.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  int appended; // esi
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  void *ArbitraryUserPointer; // rbx
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
  signed __int64 v30; // r12
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
  int v55[2]; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v57; // [rsp+D0h] [rbp-30h] BYREF
  ULONG OldProtect; // [rsp+D4h] [rbp-2Ch] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp-28h] BYREF
  __int64 SectionInformation; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+108h] [rbp+8h]
  int (__fastcall *v66)(__int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v67)(); // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]
  PVOID (__cdecl *v69)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+128h] [rbp+28h]
  NTSTATUS (__cdecl *v70)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v71)(__int64, __int64, __int64, __int64, int, __int64); // [rsp+138h] [rbp+38h]
  __int128 v72; // [rsp+140h] [rbp+40h]
  _DWORD *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  signed __int64 v75; // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v76)(unsigned __int16, unsigned __int16); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v77)(); // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v78)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v79)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v80)(_QWORD, _QWORD); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v81)(_QWORD, _QWORD); // [rsp+190h] [rbp+90h]
  _UNICODE_STRING DestinationString; // [rsp+1A0h] [rbp+A0h] BYREF
  _UNICODE_STRING v83; // [rsp+1B0h] [rbp+B0h] BYREF
  _UNICODE_STRING Source; // [rsp+1C0h] [rbp+C0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v86[24]; // [rsp+1E0h] [rbp+E0h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v88[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v89[520]; // [rsp+2D8h] [rbp+1D8h] BYREF

  v62 = a2;
  *(_QWORD *)v55 = a4;
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
    RtlInitUnicodeString(&v83, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v83;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (wchar_t *)v89;
      v88[0] = 4128860;
      v88[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (wchar_t *)v88;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, L"\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
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
            v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v8;
            if ( v8 >= 0 )
            {
              appended = NtCreateSection(&SectionHandle, 0xFu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                LinkTarget.Buffer = (wchar_t *)v89;
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
                  appended = LdrpProtectAndRelocateImage(BaseAddress);
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
                  v24 = NtQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
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
                  v25 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 1u, &v57, &v61);
                  v26 = (unsigned int *)v61;
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
                    memset(v86, 0, sizeof(v86));
                    v86[7] = a5;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v86);
                    if ( appended >= 0 )
                    {
                      if ( v86[13] )
                      {
                        v30 = *(_QWORD *)v55;
                        v31 = v28 - (_QWORD)v27;
                        while ( 1 )
                        {
                          appended = LdrpGetProcedureAddress(
                                       v30,
                                       (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v27 + 2LL),
                                       0,
                                       (_QWORD *)((char *)v27 + v31));
                          if ( appended < 0 )
                            break;
                          if ( !*++v27 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v86[13],
                              &v86[14],
                              v86[17],
                              &OldProtect);
                            if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
                              appended = LdrpUnsuppressAddressTakenIat(*(char **)(v86[7] + 48LL), 0, 0);
                            if ( appended < 0 )
                              break;
                            goto LABEL_63;
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
                    v30 = *(_QWORD *)v55;
LABEL_63:
                    if ( (*(_DWORD *)(a5 + 104) & 0x2004) == 4 )
                    {
                      v56 = 0LL;
                      v32 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v32 ^ LdrSystemDllInitBlock.RngData,
                        &v56);
                      appended = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, v56);
                      if ( appended < 0 )
                        goto LABEL_44;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                    }
                    if ( (*(_DWORD *)(a5 + 104) & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable((unsigned __int64)BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v33 = *(_QWORD *)(a5 + 48);
                    v34 = *(_QWORD *)(a5 + 56);
                    v65 = RtlpGetStackTraceAddress;
                    v64 = 152;
                    v76 = RtlpGetStackTraceAddressEx;
                    v75 = v30;
                    v66 = AVrfInternalHeapFreeNotification;
                    v67 = RtlLogStackTrace;
                    v77 = RtlReleaseStackTrace;
                    v78 = RtlStdInitializeStackDatabase;
                    v79 = RtlStdDeleteStackDatabase;
                    v80 = RtlStdLogStackTrace;
                    v81 = RtlStdReleaseStackTrace;
                    v68 = v62;
                    v74 = v63;
                    v69 = RtlCommitDebugInfo;
                    v70 = RtlSetProcessDebugInformation;
                    v71 = RtlQueryImageFileExecutionOptions;
                    v50 = &v64;
                    v72 = 0LL;
                    v73 = 0LL;
                    if ( LdrpCallInitRoutine(v34, v33, 5)
                      && v50 == &v64
                      && (v35 = v73) != 0LL
                      && *v73 == 80
                      && (v36 = (_OWORD *)*((_QWORD *)&v72 + 1)) != 0LL
                      && **((_DWORD **)&v72 + 1) == 176 )
                    {
                      v37 = *(_OWORD *)(*((_QWORD *)&v72 + 1) + 16LL);
                      unk_1801593F8 = **((_OWORD **)&v72 + 1);
                      v38 = *(_OWORD *)(*((_QWORD *)&v72 + 1) + 32LL);
                      *((_OWORD *)&unk_1801593F8 + 1) = v37;
                      v39 = v36[3];
                      *((_OWORD *)&unk_1801593F8 + 2) = v38;
                      v40 = v36[4];
                      *((_OWORD *)&unk_1801593F8 + 3) = v39;
                      v41 = v36[5];
                      *((_OWORD *)&unk_1801593F8 + 4) = v40;
                      v42 = v36[6];
                      *((_OWORD *)&unk_1801593F8 + 5) = v41;
                      v43 = v36[8];
                      *((_OWORD *)&unk_1801593F8 + 6) = v42;
                      *((_OWORD *)&unk_1801593F8 + 7) = v36[7];
                      v44 = v36[9];
                      *((_OWORD *)&unk_1801593F8 + 8) = v43;
                      v45 = v36[10];
                      *((_OWORD *)&unk_1801593F8 + 9) = v44;
                      *((_OWORD *)&unk_1801593F8 + 10) = v45;
                      RtlpDebugPageHeapTable = (PULONG)v72;
                      v35[10] = AVrfpVerifierFlags;
                      v35[11] = AVrfpDebug;
                      v46 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      LdrpLogDllState(v46, a5 + 72, 0x14AEu);
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
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  if ( LinkHandle )
    NtClose(LinkHandle);
  return (unsigned int)appended;
}
