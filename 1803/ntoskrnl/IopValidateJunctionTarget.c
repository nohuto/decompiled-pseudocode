/*
 * XREFs of IopValidateJunctionTarget @ 0x14071B5BC
 * Callers:
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1400697A4 (IopReferenceFileObject.c)
 *     FsRtlValidateReparsePointBuffer @ 0x1400B8AB0 (FsRtlValidateReparsePointBuffer.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IoVolumeDeviceToGuidPath @ 0x140495E00 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140496270 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall IopValidateJunctionTarget(void *Src, ULONG BufferLength, ULONG a3, _QWORD *a4, _DWORD *a5)
{
  char *v7; // r12
  char *PoolWithTag; // rsi
  _REPARSE_DATA_BUFFER *PoolWithQuota_1; // r15
  int appended; // ebx
  _DWORD *v11; // r14
  char v12; // r13
  ULONG v13; // r14d
  int v14; // edx
  unsigned __int16 v15; // bx
  unsigned int v16; // r14d
  ULONG v17; // r14d
  ULONG v18; // eax
  unsigned int Length; // ecx
  UNICODE_STRING v21; // [rsp+40h] [rbp-108h] BYREF
  PVOID Object; // [rsp+50h] [rbp-F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-E8h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-D8h] BYREF
  _REPARSE_DATA_BUFFER *v25; // [rsp+80h] [rbp-C8h]
  char *v26; // [rsp+88h] [rbp-C0h]
  HANDLE FileHandle; // [rsp+90h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-A0h] BYREF
  UNICODE_STRING v30; // [rsp+B0h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+C0h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp-48h] BYREF

  *(_DWORD *)&Source.Length = 1572886;
  Source.Buffer = L"\\??\\Global\\";
  *(_DWORD *)&v30.Length = 2359330;
  v30.Buffer = L"\\??\\Global\\Volume";
  *(_DWORD *)&String1.Length = 1441812;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v25 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  FileHandle = 0LL;
  Object = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PoolWithQuota_1 = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNx, BufferLength);
  v25 = PoolWithQuota_1;
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
          goto LABEL_40;
        }
        v12 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v30, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(v11, &DestinationString), appended < 0) )
        {
          v12 = 1;
        }
        if ( v12 )
          appended = IoVolumeDeviceToGuidPath(*((PDEVICE_OBJECT *)Object + 1), (__int64)&DestinationString);
        if ( appended >= 0 )
        {
          v13 = String2.Length + 8;
          while ( 1 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x65546F49u);
            *(_QWORD *)&v21.Length = PoolWithTag;
            if ( !PoolWithTag )
            {
              appended = -1073741670;
              goto LABEL_40;
            }
            appended = IopQueryXxxInformation(
                         (struct _FILE_OBJECT *)Object,
                         9u,
                         v13,
                         0,
                         (struct _IRP *)PoolWithTag,
                         &v29,
                         1);
            if ( appended != -2147483643 )
              break;
            v13 = *(_DWORD *)PoolWithTag + 8;
            ExFreePoolWithTag(PoolWithTag, 0);
            *(_QWORD *)&v21.Length = 0LL;
          }
          if ( appended < 0 )
            goto LABEL_40;
          if ( !*(_DWORD *)PoolWithTag || *((_WORD *)PoolWithTag + 2) != 92 )
            goto LABEL_5;
          v14 = DestinationString.Length + 22 + *(_DWORD *)PoolWithTag - 8;
          if ( !v12 )
            v14 = DestinationString.Length + 22 + *(_DWORD *)PoolWithTag;
          v15 = v14;
          v16 = v14 - 2;
          if ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92 )
            v15 = v14 - 2;
          else
            v16 = v14;
          if ( v16 >= 0xFFFD )
            goto LABEL_5;
          v17 = BufferLength + v16 - String2.Length;
          v18 = a3;
          if ( v17 > a3 )
            v18 = v17;
          v7 = (char *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNx, v18);
          v26 = v7;
          String1.Buffer = (wchar_t *)(v7 + 16);
          String1.Length = 0;
          String1.MaximumLength = v15;
          appended = RtlAppendUnicodeStringToString(&String1, &Source);
          if ( appended >= 0 )
          {
            v21 = DestinationString;
            if ( v12 )
            {
              v21.Length = DestinationString.Length - 8;
              v21.Buffer += 4;
            }
            if ( v21.Buffer[((unsigned __int64)v21.Length >> 1) - 1] == 92 )
              v21.Length -= 2;
            if ( !v21.Length || v21.Length > DestinationString.Length )
              goto LABEL_5;
            appended = RtlAppendUnicodeStringToString(&String1, &v21);
            if ( appended >= 0 )
            {
              v21.Buffer = (wchar_t *)(PoolWithTag + 4);
              v21.Length = *(_WORD *)PoolWithTag;
              v21.MaximumLength = v21.Length;
              appended = RtlAppendUnicodeStringToString(&String1, &v21);
              if ( appended >= 0 )
              {
                *(_DWORD *)v7 = -1610612733;
                *(_DWORD *)(v7 + 6) = 0;
                *((_WORD *)v7 + 2) = v17 - 8;
                Length = String1.Length;
                *((_WORD *)v7 + 5) = String1.Length;
                *(_WORD *)&v7[2 * ((unsigned __int64)Length >> 1) + 16] = 0;
                LOWORD(Length) = Length + 2;
                *((_WORD *)v7 + 6) = Length;
                memmove(
                  &v7[(unsigned __int16)Length + 16],
                  &PoolWithQuota_1->GenericReparseBuffer
                + PoolWithQuota_1->SymbolicLinkReparseBuffer.PrintNameOffset
                + 8,
                  PoolWithQuota_1->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v7 + 7) = PoolWithQuota_1->SymbolicLinkReparseBuffer.PrintNameLength;
                *a4 = v7;
                *a5 = v17;
                v7 = 0LL;
              }
            }
          }
        }
        else
        {
          DestinationString.Buffer = 0LL;
        }
      }
    }
  }
LABEL_40:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( PoolWithQuota_1 )
    ExFreePoolWithTag(PoolWithQuota_1, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}
