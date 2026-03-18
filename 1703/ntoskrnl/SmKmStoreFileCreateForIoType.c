/*
 * XREFs of SmKmStoreFileCreateForIoType @ 0x140703078
 * Callers:
 *     SmKmStoreFileCreate @ 0x140702BF0 (SmKmStoreFileCreate.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwSetSecurityObject @ 0x140181280 (ZwSetSecurityObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoCreateFile @ 0x140446D90 (IoCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SmKmFileInfoCleanup @ 0x140701F04 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x140702254 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileDelete @ 0x1407032F4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14070360C (SmKmStoreFileMakeSecurityDescriptor.c)
 */

__int64 __fastcall SmKmStoreFileCreateForIoType(_OWORD *a1, const WCHAR *a2, int *a3, int a4, int a5)
{
  BOOL v8; // edi
  int v9; // r14d
  BOOLEAN v10; // r12
  int IsVolumeIoPossible; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  HANDLE FileHandle[8]; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+110h] [rbp+10h] BYREF
  int v22; // [rsp+198h] [rbp+98h] BYREF

  v22 = a4;
  v8 = 0;
  memset(FileHandle, 0, sizeof(FileHandle));
  if ( a3 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v22 = 0;
    a3 = &v22;
  }
  v10 = IoSetThreadHardErrorMode(0);
  RtlInitUnicodeString(&DestinationString, a2);
  IsVolumeIoPossible = SmKmStoreFileMakeSecurityDescriptor(SecurityDescriptor);
  if ( IsVolumeIoPossible >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    while ( 1 )
    {
      IsVolumeIoPossible = IoCreateFile(
                             FileHandle,
                             0x140003u,
                             &ObjectAttributes,
                             &IoStatusBlock,
                             0LL,
                             0x2000u,
                             0,
                             0,
                             0x800Au,
                             0LL,
                             0,
                             CreateFileTypeNone,
                             0LL,
                             *a3 != 0 ? 264 : 266);
      if ( IsVolumeIoPossible < 0 )
        break;
      IsVolumeIoPossible = ObReferenceObjectByHandle(FileHandle[0], 0x10003u, 0LL, 0, &Object, 0LL);
      FileHandle[1] = Object;
      if ( IsVolumeIoPossible < 0 )
        break;
      v8 = !*a3 || (IoStatusBlock.Information & 0xFFFFFFFFFFFFFFFDuLL) == 0;
      IsVolumeIoPossible = ZwSetSecurityObject(FileHandle[0], 4u, SecurityDescriptor);
      if ( IsVolumeIoPossible < 0 )
        break;
      if ( *a3 )
        goto LABEL_23;
      IsVolumeIoPossible = SmKmIsVolumeIoPossible((__int64)FileHandle, &a5);
      if ( IsVolumeIoPossible < 0 )
        break;
      if ( a5 )
      {
LABEL_23:
        v13 = *(_OWORD *)&FileHandle[2];
        *a1 = *(_OWORD *)FileHandle;
        v14 = *(_OWORD *)&FileHandle[4];
        a1[1] = v13;
        v15 = *(_OWORD *)&FileHandle[6];
        a1[2] = v14;
        a1[3] = v15;
        memset(FileHandle, 0, sizeof(FileHandle));
        IsVolumeIoPossible = 0;
        goto LABEL_22;
      }
      if ( v9 )
      {
        IsVolumeIoPossible = -1073741637;
        break;
      }
      *a3 = 1;
      if ( v8 )
      {
        SmKmStoreFileDelete(FileHandle);
        v8 = 0;
      }
      SmKmFileInfoCleanup((__int64)FileHandle);
      memset(FileHandle, 0, sizeof(FileHandle));
    }
    if ( v8 )
      SmKmStoreFileDelete(FileHandle);
  }
LABEL_22:
  SmKmFileInfoCleanup((__int64)FileHandle);
  IoSetThreadHardErrorMode(v10);
  return (unsigned int)IsVolumeIoPossible;
}
