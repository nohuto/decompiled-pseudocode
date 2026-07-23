/*
 * XREFs of CmpOpenHiveFile @ 0x1404D7AAC
 * Callers:
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1404D6800 (CmpInitHiveFromFile.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017E160 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14017E420 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14017E660 (ZwFsControlFile.c)
 *     ZwCreateFile @ 0x14017E9E0 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsReferenceImpersonationToken @ 0x140430AA0 (PsReferenceImpersonationToken.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x14045A2A8 (CmpGetVolumeLogFileSizeCap.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     CmpCreateEvent @ 0x1404D7FF8 (CmpCreateEvent.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404D809C (CmpQueryFileSecurityDescriptor.c)
 *     CmpGetVolumeClusterSize @ 0x1404D8B8C (CmpGetVolumeClusterSize.c)
 *     SeTokenImpersonationLevel @ 0x140572350 (SeTokenImpersonationLevel.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140669F1C (CmpOpenFileWithExtremePrejudice.c)
 *     PsRevertToSelf @ 0x1406E0B40 (PsRevertToSelf.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        UNICODE_STRING *Source,
        unsigned int a2,
        HANDLE *a3,
        int *a4,
        char a5,
        void *a6,
        __int64 a7,
        void *a8,
        __int64 a9)
{
  ULONG ShareAccess; // r13d
  char v10; // di
  PACCESS_TOKEN v12; // r15
  __int64 v13; // rsi
  __int64 result; // rax
  NTSTATUS Status; // ebx
  const WCHAR *v16; // r14
  __int64 v17; // rsi
  unsigned __int16 v18; // si
  PVOID v19; // r14
  ACCESS_MASK v20; // r14d
  int v21; // esi
  ULONG CreateOptions; // r12d
  SECURITY_IMPERSONATION_LEVEL v23; // eax
  ULONG v24; // esi
  int Information; // esi
  HANDLE v26; // rcx
  __int64 v27; // rdi
  int VolumeClusterSize; // eax
  ULONG CreateDisposition; // [rsp+38h] [rbp-C8h]
  char v30; // [rsp+60h] [rbp-A0h]
  BOOLEAN EffectiveOnly; // [rsp+61h] [rbp-9Fh] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v36; // [rsp+78h] [rbp-88h]
  int InputBuffer; // [rsp+7Ch] [rbp-84h] BYREF
  PACCESS_TOKEN Token; // [rsp+80h] [rbp-80h]
  PETHREAD Thread; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h]
  HANDLE Event; // [rsp+98h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-50h] BYREF
  void *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  HANDLE *v47; // [rsp+D8h] [rbp-28h]
  int *v48; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *v49; // [rsp+E8h] [rbp-18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD FileInformation[2]; // [rsp+120h] [rbp+20h] BYREF
  int v52; // [rsp+140h] [rbp+40h]
  char v53[8]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v54; // [rsp+150h] [rbp+50h]

  ShareAccess = 0;
  v10 = a5;
  Token = a6;
  v12 = 0LL;
  v45 = a7;
  v44 = a8;
  v46 = a9;
  ImpersonationLevel = SecurityImpersonation;
  v13 = a2;
  v48 = a4;
  v47 = a3;
  v36 = a2;
  v49 = Source;
  CopyOnOpen[0] = 0;
  Thread = 0LL;
  EffectiveOnly = 0;
  *a3 = 0LL;
  v30 = 0;
  FileAttributes = 6;
  if ( a2 >= 6 )
    return 3221225485LL;
  result = CmpCreateEvent(NotificationEvent, &Event);
  Status = result;
  if ( (int)result >= 0 )
  {
    v16 = (const WCHAR *)CmFileNameExtensions[v13];
    if ( v16 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v16[v17] );
      v18 = Source->Length + 2 * (v17 + 1);
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x62774D43u);
      if ( !Destination.Buffer )
      {
        v19 = Object;
        Status = -1073741670;
LABEL_62:
        ZwClose(Event);
        ObfDereferenceObject(v19);
        return (unsigned int)Status;
      }
      Destination.Length = 0;
      Destination.MaximumLength = v18;
      RtlAppendUnicodeStringToString(&Destination, Source);
      RtlAppendUnicodeToString(&Destination, v16);
      LODWORD(v13) = v36;
    }
    else
    {
      Destination = *Source;
    }
    if ( (a5 & 0x20) != 0 )
    {
      v20 = 1;
      ShareAccess = (unsigned __int8)~a5 >> 7;
    }
    else
    {
      v20 = (a5 & 8) == 0 ? 3 : 0;
      if ( !(_DWORD)v13 )
        v20 |= 0x20000u;
    }
    if ( (_DWORD)v13 )
    {
      if ( (a5 & 0x20) != 0 )
        v21 = 1;
      else
        v21 = (a5 & 0x10) == 0 ? 3 : 0;
      CreateOptions = 32780;
    }
    else
    {
      FileAttributes = 128;
      v21 = 1;
      CreateOptions = 49188;
      if ( (a5 & 0x21) == 1 )
        v21 = 3;
    }
    if ( Token )
    {
      Thread = KeGetCurrentThread();
      v12 = PsReferenceImpersonationToken(Thread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v23 = (unsigned int)SeTokenImpersonationLevel(Token);
      if ( PsImpersonateClient(Thread, Token, 0, 0, v23) < 0 )
        goto LABEL_56;
      v10 = a5 | 0x40;
      v30 = 1;
    }
    CreateDisposition = v21;
    v24 = FileAttributes;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.Attributes = (16 * (v10 & 0x40)) | 0x240;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.SecurityDescriptor = v44;
    ObjectAttributes.Length = 48;
    Status = ZwCreateFile(
               &FileHandle,
               v20,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               FileAttributes,
               ShareAccess,
               CreateDisposition,
               CreateOptions,
               0LL,
               0);
    if ( Status == -1073741790 )
      Status = CmpOpenFileWithExtremePrejudice(&FileHandle, &ObjectAttributes, &IoStatusBlock, v24, CreateOptions);
    if ( v30 )
    {
      if ( v12 )
      {
        if ( PsImpersonateClient(Thread, v12, CopyOnOpen[0], EffectiveOnly, ImpersonationLevel) < 0 )
          KeBugCheckEx(0x51u, 0x26uLL, (ULONG_PTR)v12, 0LL, 0LL);
      }
      else
      {
        PsRevertToSelf();
      }
    }
    if ( Status >= 0 )
    {
      Information = IoStatusBlock.Information;
      if ( (v10 & 0x28) == 0 )
      {
        v52 = 0;
        FileInformation[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        FileInformation[1] = FileInformation[0];
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      }
      v19 = Object;
      if ( (v10 & 0x22) == 2 )
      {
        Status = ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
          goto LABEL_41;
      }
      InputBuffer = 0;
      if ( ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
        KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
      if ( !v36 )
      {
        if ( Information != 2
          && ZwQueryInformationFile(FileHandle, &IoStatusBlock, v53, 0x18u, FileStandardInformation) >= 0
          && !v54 )
        {
          Information = 2;
        }
        v27 = v45;
        if ( v45 )
        {
          VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle);
          v26 = FileHandle;
          Status = VolumeClusterSize;
          if ( VolumeClusterSize < 0 )
            goto LABEL_42;
          *(_DWORD *)(v27 + 4) = CmpGetVolumeLogFileSizeCap(FileHandle);
        }
        if ( v46 )
        {
          Status = CmpQueryFileSecurityDescriptor(FileHandle);
          if ( Status < 0 )
          {
LABEL_41:
            v26 = FileHandle;
LABEL_42:
            ZwClose(v26);
            goto LABEL_57;
          }
        }
      }
      Status = 0;
      *v47 = FileHandle;
      *v48 = Information;
LABEL_57:
      if ( Destination.Buffer && Destination.Buffer != v49->Buffer )
        ExFreePoolWithTag(Destination.Buffer, 0);
      if ( v12 )
        ObfDereferenceObject(v12);
      goto LABEL_62;
    }
LABEL_56:
    v19 = Object;
    goto LABEL_57;
  }
  return result;
}
