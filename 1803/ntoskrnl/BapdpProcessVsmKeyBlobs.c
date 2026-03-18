/*
 * XREFs of BapdpProcessVsmKeyBlobs @ 0x1408A2EC0
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1408A2DC0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlStringCchCatW @ 0x140161C60 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1401A75C0 (ZwWriteFile.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwCreateFile @ 0x1401A7F60 (ZwCreateFile.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BapdGetISRegistryKey @ 0x1404787BC (BapdGetISRegistryKey.c)
 *     BapdpQueryData @ 0x1408A339C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessVsmKeyBlobs(int a1)
{
  ULONG *PoolWithTag; // rsi
  WCHAR *v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // rcx
  unsigned int v6; // ebx
  PCWSTR *v7; // rdi
  NTSTATUS v8; // eax
  int Data; // eax
  WCHAR *v10; // rax
  __int64 v11; // r8
  char *v12; // r9
  WCHAR *v13; // rdx
  WCHAR v14; // ax
  WCHAR *v15; // rax
  ULONG DataSize[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v22[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v24; // [rsp+F8h] [rbp-10h]
  int v25; // [rsp+FCh] [rbp-Ch]
  int v26; // [rsp+100h] [rbp-8h]
  int v27; // [rsp+104h] [rbp-4h]
  const wchar_t *v28; // [rsp+108h] [rbp+0h]
  const wchar_t *v29; // [rsp+110h] [rbp+8h]

  IoStatusBlock.Pointer = 0LL;
  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  FileHandle = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v22[0] = -937207777;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = 0LL;
  v22[1] = 1254716583;
  v23[0] = L"VsmIdkBlob";
  v4 = 0;
  v22[2] = -1274918465;
  v23[1] = L"system32\\config\\VSMIDK";
  v28 = L"VsmHbkBlob";
  v29 = L"system32\\config\\VSMHBK";
  v22[3] = 1271024649;
  v24 = 1759588193;
  v25 = 1265287039;
  v26 = 1264598702;
  v27 = 1186665675;
  if ( (int)BapdGetISRegistryKey(&KeyHandle) < 0 )
    goto LABEL_13;
  v6 = 0;
  v7 = (PCWSTR *)v23;
  while ( 1 )
  {
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
    DataSize[0] = 0;
    if ( !a1 )
    {
      Data = BapdpQueryData(v5, &v22[8 * v6], 0LL, 0LL, DataSize);
      if ( Data == -1073741789 )
      {
        PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, DataSize[0], 0x64506142u);
        if ( PoolWithTag )
        {
LABEL_20:
          if ( (int)BapdpQueryData(v5, &v22[8 * v6], 0LL, PoolWithTag, DataSize) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, *v7);
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, PoolWithTag, DataSize[0]);
          }
          goto LABEL_8;
        }
      }
      else if ( Data >= 0 )
      {
        goto LABEL_20;
      }
      goto LABEL_8;
    }
    RtlInitUnicodeString(&DestinationString, *v7);
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, DataSize);
    if ( v8 == -1073741789 )
      break;
    if ( v8 >= 0 )
      goto LABEL_23;
LABEL_8:
    ++v6;
    v7 += 4;
    if ( v6 >= 2 )
      goto LABEL_9;
  }
  PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, DataSize[0], 0x64506142u);
  if ( !PoolWithTag )
    goto LABEL_8;
LABEL_23:
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, DataSize[0], DataSize) < 0 )
    goto LABEL_8;
  ZwDeleteValueKey(KeyHandle, &DestinationString);
  if ( v3 )
  {
    v3[v4] = 0;
    goto LABEL_35;
  }
  v10 = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x208uLL, 0x656E6F4Eu);
  v3 = v10;
  if ( v10 )
  {
    v11 = 260LL;
    v12 = (char *)((char *)L"\\SystemRoot\\" - (char *)v10);
    v13 = v10;
    do
    {
      if ( v11 == -2147483386 )
        break;
      v14 = *(WCHAR *)((char *)v13 + (_QWORD)v12);
      if ( !v14 )
        break;
      *v13++ = v14;
      --v11;
    }
    while ( v11 );
    v15 = v13 - 1;
    if ( v11 )
      v15 = v13;
    *v15 = 0;
    if ( v11 )
    {
      v4 = 12;
LABEL_35:
      if ( RtlStringCchCatW(v3, 0x104uLL, v7[1]) >= 0 )
      {
        RtlInitUnicodeStringEx(&DestinationString, v3);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateFile(&FileHandle, 0x40100000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 0, 0x60u, 0LL, 0) >= 0 )
        {
          ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag + 3, PoolWithTag[2], 0LL, 0LL);
          ZwClose(FileHandle);
          FileHandle = 0LL;
        }
      }
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
