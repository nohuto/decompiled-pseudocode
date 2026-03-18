/*
 * XREFs of PiDevCfgConfigureSoftwareDevices @ 0x1405896A4
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140589470 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017DF00 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x14055A49C (IopCreateRegistryKeyEx.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PiDevCfgConfigureSoftwareDevices(void *a1, void *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  int v6; // eax
  char *v7; // rsi
  WCHAR *PoolWithTag; // rdi
  int v9; // r15d
  __int64 v10; // r8
  int v11; // eax
  UNICODE_STRING v12; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  ObjectAttributes.RootDirectory = a2;
  *(_DWORD *)&v12.Length = 1048590;
  Handle = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v12;
  v12.Buffer = L"Devices";
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
    *(_DWORD *)&v12.Length = 1048590;
    v12.Buffer = L"Devices";
    v6 = IopCreateRegistryKeyEx(&Handle, a1, &v12, 0xF003Fu, 0, 0LL);
    v7 = (char *)Handle;
    v4 = v6;
    if ( v6 >= 0 )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x220uLL, 0x63647050u);
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
            PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) + 8] = 0;
            if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
              v10 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
            else
              v10 = 0LL;
            RegRtlDeleteTreeInternal(v7, PoolWithTag + 8, v10, 0);
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
