/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800D5B10 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x180081E30 (RtlImageRvaToVa.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1800A5520 (ZwQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwMakeTemporaryObject @ 0x1800A73D0 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F13DC @ 0x1800F13DC (sub_1800F13DC.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksumEx(HANDLE ImageFileHandle, PLDR_VERIFY_IMAGE_INFO VerifyInfo)
{
  LDR_SECTION_INFO *p_SectionInfo; // rsi
  ULONG AllocationAttributes; // eax
  char v6; // r13
  NTSTATUS result; // eax
  int v8; // edi
  int v9; // r13d
  NTSTATUS v10; // eax
  __int64 v11; // r15
  ULONG v12; // r8d
  POBJECT_ATTRIBUTES ObjA; // rax
  char v14; // [rsp+50h] [rbp-A8h]
  PVOID BaseAddress; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-98h] BYREF
  __int64 v17[2]; // [rsp+68h] [rbp-90h] BYREF
  PIMAGE_SECTION_HEADER LastRvaSection; // [rsp+78h] [rbp-80h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp-78h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp-70h] BYREF
  __int64 v21; // [rsp+90h] [rbp-68h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-60h] BYREF
  _BYTE FileInformation[8]; // [rsp+A8h] [rbp-50h] BYREF

  OutHeaders = (PIMAGE_NT_HEADERS)VerifyInfo;
  if ( VerifyInfo->Size != 64 || (VerifyInfo->Flags & 0xFFFFFFF8) != 0 )
    return -1073741584;
  p_SectionInfo = &VerifyInfo->SectionInfo;
  if ( (VerifyInfo->Flags & 2) == 0 )
    p_SectionInfo = (LDR_SECTION_INFO *)&unk_180116198;
  v17[1] = (__int64)p_SectionInfo;
  AllocationAttributes = p_SectionInfo->AllocationAttributes;
  LODWORD(v17[0]) = AllocationAttributes & 0x1000000;
  LODWORD(LastRvaSection) = AllocationAttributes & 0x1000000;
  v14 = (AllocationAttributes & 0x1000000) != 0;
  v6 = (unsigned __int8)ImageFileHandle & 1;
  result = ZwCreateSection(
             &SectionHandle,
             p_SectionInfo->DesiredAccess,
             p_SectionInfo->ObjA,
             0LL,
             p_SectionInfo->SectionPageProtection,
             AllocationAttributes,
             ImageFileHandle);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v8 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           0x10u);
    if ( v8 < 0 )
      goto LABEL_29;
    if ( v6 )
    {
      v9 = v17[0];
    }
    else
    {
      v8 = ZwQueryInformationFile(ImageFileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      if ( v8 < 0 )
        goto LABEL_28;
      if ( !(unsigned __int8)sub_1800F13DC(BaseAddress, ViewSize) )
        v8 = -1073741279;
      v9 = v17[0];
      if ( v8 < 0 )
        goto LABEL_28;
    }
    if ( (VerifyInfo->Flags & 5) != 0 )
    {
      v8 = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
      if ( v8 >= 0 )
      {
        if ( (VerifyInfo->Flags & 4) != 0 )
          VerifyInfo->ImageCharacteristics = OutHeaders->FileHeader.Characteristics;
        if ( (VerifyInfo->Flags & 1) != 0 && VerifyInfo->CallbackInfo.ImportCallbackRoutine )
        {
          v10 = sub_180032C0C((unsigned __int64)BaseAddress, v14, 1u, (DWORD *)&LastRvaSection, (char **)v17);
          v11 = v17[0];
          if ( v10 < 0 )
            v11 = 0LL;
          v17[0] = v11;
          v21 = v11;
          if ( v11 )
          {
            LastRvaSection = 0LL;
            while ( 1 )
            {
              v12 = *(_DWORD *)(v11 + 12);
              if ( !v12 )
                break;
              if ( !v9 )
                RtlImageRvaToVa(OutHeaders, BaseAddress, v12, &LastRvaSection);
              _guard_dispatch_icall_fptr();
              v11 += 20LL;
              v21 = v11;
            }
          }
        }
      }
    }
LABEL_28:
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_29:
    if ( v8 < 0 || p_SectionInfo == (LDR_SECTION_INFO *)&unk_180116198 )
    {
      ObjA = p_SectionInfo->ObjA;
      if ( ObjA && (ObjA->Attributes & 0x10) != 0 )
        ZwMakeTemporaryObject(SectionHandle);
      ZwClose(SectionHandle);
    }
    else
    {
      p_SectionInfo->SectionHandle = SectionHandle;
    }
    return v8;
  }
  return result;
}
