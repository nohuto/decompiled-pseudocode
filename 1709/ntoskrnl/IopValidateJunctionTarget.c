/*
 * XREFs of IopValidateJunctionTarget @ 0x1406B68DC
 * Callers:
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     FsRtlValidateReparsePointBuffer @ 0x1400FE8F0 (FsRtlValidateReparsePointBuffer.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400FEBE0 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     IoVolumeDeviceToGuidPath @ 0x140560690 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140560B00 (IoVolumeDeviceToDosName.c)
 */

__int64 __fastcall IopValidateJunctionTarget(void *Src, ULONG BufferLength, ULONG a3, _QWORD *a4, _DWORD *a5)
{
  char *v7; // r12
  wchar_t *PoolWithTag; // rsi
  _REPARSE_DATA_BUFFER *PoolWithQuota_1; // r14
  int appended; // ebx
  _DWORD *v11; // r13
  char v12; // r15
  unsigned int v13; // r15d
  unsigned __int16 Length; // r13
  unsigned int v15; // ebx
  ULONG v16; // r15d
  ULONG v17; // eax
  unsigned int v18; // ecx
  char v20; // [rsp+40h] [rbp-118h]
  UNICODE_STRING v21; // [rsp+50h] [rbp-108h] BYREF
  PVOID Object; // [rsp+60h] [rbp-F8h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-F0h] BYREF
  _REPARSE_DATA_BUFFER *v24; // [rsp+78h] [rbp-E0h]
  char *v25; // [rsp+80h] [rbp-D8h]
  HANDLE FileHandle; // [rsp+88h] [rbp-D0h] BYREF
  UNICODE_STRING String2; // [rsp+90h] [rbp-C8h] BYREF
  UNICODE_STRING DosName; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-A8h] BYREF
  UNICODE_STRING v30; // [rsp+B8h] [rbp-A0h] BYREF
  UNICODE_STRING Source; // [rsp+C8h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp-50h] BYREF

  *(_DWORD *)&Source.Length = 1572886;
  Source.Buffer = L"\\??\\Global\\";
  *(_DWORD *)&v30.Length = 2359330;
  v30.Buffer = L"\\??\\Global\\Volume";
  *(_DWORD *)&String1.Length = 1441812;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v7 = 0LL;
  v25 = 0LL;
  FileHandle = 0LL;
  Object = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DosName, 0LL);
  PoolWithQuota_1 = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNx, BufferLength);
  v24 = PoolWithQuota_1;
  memmove(PoolWithQuota_1, Src, BufferLength);
  appended = FsRtlValidateReparsePointBuffer(BufferLength, PoolWithQuota_1);
  if ( appended >= 0 )
  {
    String2.Buffer = PoolWithQuota_1->MountPointReparseBuffer.PathBuffer;
    String2.Length = PoolWithQuota_1->SymbolicLinkReparseBuffer.SubstituteNameLength & 0xFFFE;
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( appended >= 0 )
    {
      appended = IopReferenceFileObject(FileHandle, 0, 0, &Object, 0LL);
      if ( appended >= 0 )
      {
        v11 = (_DWORD *)*((_QWORD *)Object + 1);
        if ( (v11[13] & 0x10) != 0 )
        {
LABEL_5:
          appended = -1073741811;
          goto LABEL_39;
        }
        v12 = 0;
        v20 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v30, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(v11, &DosName), appended < 0) )
        {
          v12 = 1;
          v20 = 1;
        }
        if ( v12 )
          appended = IoVolumeDeviceToGuidPath(*((PDEVICE_OBJECT *)Object + 1), (__int64)&DosName);
        if ( appended >= 0 )
        {
          v13 = String2.Length + 8;
          while ( 1 )
          {
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x65546F49u);
            *(_QWORD *)&v21.Length = PoolWithTag;
            if ( !PoolWithTag )
            {
              appended = -1073741670;
              goto LABEL_39;
            }
            appended = IopQueryXxxInformation((struct _FILE_OBJECT *)Object, 9, v13, 0, (__int64)PoolWithTag, &v29, 1);
            if ( appended != -2147483643 )
              break;
            v13 = *(_DWORD *)PoolWithTag + 8;
            ExFreePoolWithTag(PoolWithTag, 0);
            *(_QWORD *)&v21.Length = 0LL;
          }
          if ( appended < 0 )
            goto LABEL_39;
          if ( !*(_DWORD *)PoolWithTag || PoolWithTag[2] != 92 )
            goto LABEL_5;
          Length = DosName.Length;
          v15 = *(_DWORD *)PoolWithTag + DosName.Length + 22;
          if ( v20 )
            v15 -= 8;
          if ( DosName.Buffer[((unsigned __int64)DosName.Length >> 1) - 1] == 92 )
            v15 -= 2;
          if ( v15 >= 0xFFFD )
            goto LABEL_5;
          v16 = BufferLength + v15 - String2.Length;
          v17 = a3;
          if ( v16 > a3 )
            v17 = BufferLength + v15 - String2.Length;
          v7 = (char *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNx, v17);
          v25 = v7;
          String1.Buffer = (wchar_t *)(v7 + 16);
          String1.Length = 0;
          String1.MaximumLength = v15;
          appended = RtlAppendUnicodeStringToString(&String1, &Source);
          if ( appended >= 0 )
          {
            v21 = DosName;
            if ( v20 )
            {
              v21.Length = Length - 8;
              v21.Buffer += 4;
            }
            if ( v21.Buffer[((unsigned __int64)v21.Length >> 1) - 1] == 92 )
              v21.Length -= 2;
            if ( !v21.Length || v21.Length > Length )
              goto LABEL_5;
            appended = RtlAppendUnicodeStringToString(&String1, &v21);
            if ( appended >= 0 )
            {
              v21.Buffer = PoolWithTag + 2;
              v21.Length = *PoolWithTag;
              v21.MaximumLength = v21.Length;
              appended = RtlAppendUnicodeStringToString(&String1, &v21);
              if ( appended >= 0 )
              {
                *(_DWORD *)v7 = -1610612733;
                *(_DWORD *)(v7 + 6) = 0;
                *((_WORD *)v7 + 2) = v16 - 8;
                v18 = String1.Length;
                *((_WORD *)v7 + 5) = String1.Length;
                *(_WORD *)&v7[2 * ((unsigned __int64)v18 >> 1) + 16] = 0;
                LOWORD(v18) = v18 + 2;
                *((_WORD *)v7 + 6) = v18;
                memmove(
                  &v7[(unsigned __int16)v18 + 16],
                  &PoolWithQuota_1->GenericReparseBuffer
                + PoolWithQuota_1->SymbolicLinkReparseBuffer.PrintNameOffset
                + 8,
                  PoolWithQuota_1->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v7 + 7) = PoolWithQuota_1->SymbolicLinkReparseBuffer.PrintNameLength;
                *a4 = v7;
                *a5 = v16;
                v7 = 0LL;
              }
            }
          }
        }
        else
        {
          DosName.Buffer = 0LL;
        }
      }
    }
  }
LABEL_39:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( PoolWithQuota_1 )
    ExFreePoolWithTag(PoolWithQuota_1, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DosName.Buffer )
    ExFreePoolWithTag(DosName.Buffer, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}
