/*
 * XREFs of PiDevCfgConfigureSoftwareDevices @ 0x1405930D4
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140592E90 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017E580 (ZwEnumerateKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     IopCreateRegistryKeyEx @ 0x1405B27F4 (IopCreateRegistryKeyEx.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PiDevCfgConfigureSoftwareDevices(__int64 a1, void *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  int v6; // eax
  HANDLE v7; // rsi
  unsigned int *PoolWithTag; // rdi
  int v9; // r15d
  __int64 v10; // r8
  int v11; // eax
  int v12; // [rsp+40h] [rbp-40h] BYREF
  const wchar_t *v13; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  ObjectAttributes.RootDirectory = a2;
  v12 = 1048590;
  Handle = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  v13 = L"Devices";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v3;
  if ( v3 == -1073741772 )
  {
    v4 = 0;
  }
  else if ( v3 >= 0 )
  {
    v12 = 1048590;
    v13 = L"Devices";
    v6 = IopCreateRegistryKeyEx(&Handle, a1, &v12, 983103LL, 0, 0LL);
    v7 = Handle;
    v4 = v6;
    if ( v6 >= 0 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x220uLL, 0x63647050u);
      if ( PoolWithTag )
      {
        v9 = 0;
        v4 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, PoolWithTag, 0x220u, &ResultLength);
        if ( v4 < 0 )
        {
LABEL_21:
          if ( v4 == -2147483622 )
          {
            v4 = 0;
          }
          else if ( v4 == -2147483643 )
          {
            v4 = -1073741773;
          }
        }
        else
        {
          while ( 1 )
          {
            *((_WORD *)PoolWithTag + ((unsigned __int64)PoolWithTag[3] >> 1) + 8) = 0;
            if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
              v10 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
            else
              v10 = 0LL;
            RegRtlDeleteTreeInternal(v7, PoolWithTag + 4, v10, 0LL);
            if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
              v11 = RegRtlCopyTreeInternal(
                      (_DWORD)KeyHandle,
                      (int)PoolWithTag + 16,
                      (_DWORD)v7,
                      (int)PoolWithTag + 16,
                      0,
                      *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL),
                      0);
            else
              v11 = RegRtlCopyTreeInternal(
                      (_DWORD)KeyHandle,
                      (int)PoolWithTag + 16,
                      (_DWORD)v7,
                      (int)PoolWithTag + 16,
                      0,
                      0LL,
                      0);
            v4 = v11;
            if ( v11 < 0 )
              break;
            v4 = ZwEnumerateKey(KeyHandle, ++v9, KeyBasicInformation, PoolWithTag, 0x220u, &ResultLength);
            if ( v4 < 0 )
              goto LABEL_21;
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        v4 = -1073741670;
      }
    }
    if ( v7 )
      ZwClose(v7);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
