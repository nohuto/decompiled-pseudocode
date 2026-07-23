/*
 * XREFs of CmpOpenHiveFile @ 0x1404E0664
 * Callers:
 *     CmpInitHiveFromFile @ 0x1404DE1EC (CmpInitHiveFromFile.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017DAE0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14017DFE0 (ZwFsControlFile.c)
 *     ZwCreateFile @ 0x14017E360 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 *     CmpCreateEvent @ 0x1404E0BA8 (CmpCreateEvent.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404E1304 (CmpQueryFileSecurityDescriptor.c)
 *     CmpGetVolumeClusterSize @ 0x1404E4280 (CmpGetVolumeClusterSize.c)
 *     PsReferenceImpersonationToken @ 0x14056C670 (PsReferenceImpersonationToken.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x140599750 (CmpGetVolumeLogFileSizeCap.c)
 *     SeTokenImpersonationLevel @ 0x1405CD0A0 (SeTokenImpersonationLevel.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140694600 (CmpOpenFileWithExtremePrejudice.c)
 *     PsRevertToSelf @ 0x140716E40 (PsRevertToSelf.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        UNICODE_STRING *Source,
        unsigned int a2,
        HANDLE *a3,
        int *a4,
        unsigned int a5,
        void *a6,
        __int64 a7,
        void *a8,
        __int64 a9)
{
  char v10; // si
  __int64 v11; // r12
  PACCESS_TOKEN v12; // r15
  __int64 result; // rax
  NTSTATUS Status; // ebx
  const WCHAR *v15; // r14
  __int64 v16; // rdi
  unsigned __int16 v17; // di
  PVOID v18; // r14
  int v19; // edi
  ACCESS_MASK v20; // r13d
  ULONG ShareAccess; // r14d
  ULONG CreateOptions; // r12d
  SECURITY_IMPERSONATION_LEVEL v23; // eax
  ULONG v24; // edi
  int Information; // edi
  HANDLE v26; // rcx
  __int64 v27; // rsi
  int VolumeClusterSize; // eax
  ULONG CreateDisposition; // [rsp+38h] [rbp-C8h]
  char v30; // [rsp+60h] [rbp-A0h]
  BOOLEAN EffectiveOnly; // [rsp+61h] [rbp-9Fh] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+74h] [rbp-8Ch] BYREF
  int InputBuffer; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+7Ch] [rbp-84h]
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

  v10 = a5;
  Token = a6;
  v45 = a7;
  v44 = a8;
  v46 = a9;
  v49 = Source;
  v11 = a2;
  v12 = 0LL;
  v48 = a4;
  v47 = a3;
  v37 = a2;
  ImpersonationLevel = SecurityImpersonation;
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
    v15 = (const WCHAR *)CmFileNameExtensions[v11];
    if ( v15 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      v17 = Source->Length + 2 * (v16 + 1);
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x62774D43u);
      if ( !Destination.Buffer )
      {
        v18 = Object;
        Status = -1073741670;
LABEL_62:
        ZwClose(Event);
        ObfDereferenceObject(v18);
        return (unsigned int)Status;
      }
      Destination.Length = 0;
      Destination.MaximumLength = v17;
      RtlAppendUnicodeStringToString(&Destination, Source);
      RtlAppendUnicodeToString(&Destination, v15);
    }
    else
    {
      Destination = *Source;
    }
    v19 = 3;
    if ( (a5 & 0x20) != 0 )
    {
      v20 = 1;
      ShareAccess = ((a5 >> 7) & 1) == 0;
    }
    else
    {
      ShareAccess = 0;
      v20 = ((a5 & 8) == 0 ? 3 : 0) | 0x20000;
      if ( (_DWORD)v11 )
        v20 = (a5 & 8) == 0 ? 3 : 0;
    }
    if ( (_DWORD)v11 )
    {
      if ( (a5 & 0x20) != 0 )
        v19 = 1;
      else
        v19 = (a5 & 0x10) == 0 ? 3 : 0;
      CreateOptions = 32780;
    }
    else
    {
      FileAttributes = 128;
      CreateOptions = 49188;
      if ( (a5 & 0x21) != 1 )
        v19 = 1;
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
    CreateDisposition = v19;
    v24 = FileAttributes;
    ObjectAttributes.Attributes = 16 * (v10 & 0x40 | 0x24);
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
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
      v18 = Object;
      if ( (v10 & 0x22) == 2 )
      {
        Status = ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
          goto LABEL_41;
      }
      InputBuffer = 0;
      if ( ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
        KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
      if ( !v37 )
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
    v18 = Object;
    goto LABEL_57;
  }
  return result;
}
