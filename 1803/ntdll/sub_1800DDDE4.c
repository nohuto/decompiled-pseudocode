/*
 * XREFs of sub_1800DDDE4 @ 0x1800DDDE4
 * Callers:
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseRelativeName @ 0x18002E200 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003FAA0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 *     sub_1800DDC78 @ 0x1800DDC78 (sub_1800DDC78.c)
 */

NTSTATUS __fastcall sub_1800DDDE4(WCHAR *DosFileName, PVOID *BaseModule, PSIZE_T Size, int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  PWCH Buffer; // r15
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS result; // eax
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-88h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h] BYREF
  int v21; // [rsp+90h] [rbp-78h] BYREF
  const wchar_t *v22; // [rsp+98h] [rbp-70h]
  _UNICODE_STRING NtFileName; // [rsp+A0h] [rbp-68h] BYREF
  int v24; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v25; // [rsp+B8h] [rbp-50h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+C0h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp+8h] BYREF
  HANDLE FileHandle; // [rsp+158h] [rbp+50h] BYREF

  v21 = 2752552;
  v22 = L"LdrpResMapFile Enter";
  v24 = 2621478;
  v25 = L"LdrpResMapFile Exit";
  v8 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v11 = 2147353476LL;
    sub_1800DBCC0((unsigned __int16 *)&v21, *(unsigned __int8 *)v11);
  }
  if ( !DosFileName || !BaseModule || !Size )
    goto LABEL_36;
  *BaseModule = 0LL;
  if ( LdrRemoveLoadAsDataTable(DosFileName, BaseModule, Size, a4 | 0x200000) < 0 )
  {
    if ( (a4 & 0x400) != 0 )
    {
      if ( !RtlDosPathNameToRelativeNtPathName_U(DosFileName, &NtFileName, 0LL, &RelativeName) )
      {
        v12 = -1073020927;
        goto LABEL_37;
      }
      Buffer = NtFileName.Buffer;
      if ( RelativeName.RelativeName.Length )
      {
        ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
        NtFileName = RelativeName.RelativeName;
      }
      else
      {
        ContainingDirectory = 0LL;
        RelativeName.ContainingDirectory = 0LL;
      }
      ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(Buffer != 0LL));
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = &NtFileName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
      if ( Buffer )
      {
        RtlReleaseRelativeName(&RelativeName);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
      }
      if ( v12 < 0 )
        goto LABEL_37;
      DosFileName = (WCHAR *)FileHandle;
LABEL_26:
      if ( (a4 & 0x20000) != 0 )
      {
        result = sub_1800DDC78((char *)DosFileName, &v20);
        if ( result < 0 )
          return result;
        if ( (unsigned int)v20 > *Size )
        {
          v12 = -1073741793;
          goto LABEL_37;
        }
        DosFileName = (WCHAR *)FileHandle;
      }
      v12 = ZwCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, DosFileName);
      if ( (~(_WORD)a4 & 0x800) != 0 )
        ZwClose(FileHandle);
      if ( v12 >= 0 )
      {
        SectionOffset.QuadPart = 0LL;
        ViewSize = 0LL;
        BaseAddress = 0LL;
        v12 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                &SectionOffset,
                &ViewSize,
                ViewShare,
                0,
                2u);
        ZwClose(SectionHandle);
        if ( v12 >= 0 )
        {
          *BaseModule = (PVOID)((unsigned __int64)BaseAddress | 1);
          *Size = ViewSize;
        }
      }
      goto LABEL_37;
    }
    if ( (a4 & 0x800) != 0 )
    {
      FileHandle = DosFileName;
      goto LABEL_26;
    }
LABEL_36:
    v12 = -1073741811;
    goto LABEL_37;
  }
  v12 = -1073741302;
LABEL_37:
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    sub_1800DBCC0((unsigned __int16 *)&v24, *(unsigned __int8 *)v10);
  }
  return v12;
}
