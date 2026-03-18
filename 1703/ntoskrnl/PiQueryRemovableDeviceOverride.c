/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x1404462B0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PipFindDeviceOverrideEntry @ 0x14044655C (PipFindDeviceOverrideEntry.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceLocationStrings @ 0x1404DC26C (PnpGetDeviceLocationStrings.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404DE504 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140695C74 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  int v7; // r13d
  void *v8; // r15
  NTSTATUS DeviceRegProp; // ebx
  int DeviceOverrideEntry; // ecx
  __int64 v12; // rcx
  PVOID *p_P; // r13
  unsigned int v14; // r14d
  unsigned int i; // r12d
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  PVOID v20; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v27[4]; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-60h] BYREF
  bool *v30; // [rsp+A8h] [rbp-58h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  char KeyValueInformation[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v33; // [rsp+E4h] [rbp-1Ch]
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]

  v30 = a4;
  v7 = 0;
  v8 = 0LL;
  if ( PnpDeviceOverrideHashList )
  {
    memset(v27, 0, sizeof(v27));
    DeviceRegProp = -1073741772;
    DeviceOverrideEntry = -1073741772;
    if ( (*(_BYTE *)(a1 + 680) & 1) == 0 )
    {
      LODWORD(v27[0]) = 2490404;
      v27[1] = L"ChildLocationPaths";
      if ( a2 )
      {
        DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
        if ( DeviceOverrideEntry >= 0 )
          goto LABEL_39;
      }
      if ( a3 )
        DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3);
      if ( DeviceOverrideEntry >= 0 )
      {
LABEL_39:
        ZwClose((HANDLE)v27[2]);
        *(_BYTE *)(a1 + 680) |= 4u;
      }
    }
    if ( (*(_BYTE *)(a1 + 680) & 3) != 1 )
    {
      LODWORD(v27[0]) = 1835034;
      v27[1] = L"LocationPaths";
      if ( a2 )
      {
        DeviceRegProp = PipFindDeviceOverrideEntry(a2);
        if ( DeviceRegProp >= 0 )
          goto LABEL_40;
      }
      if ( a3 )
        DeviceRegProp = PipFindDeviceOverrideEntry(a3);
      if ( DeviceRegProp >= 0 )
LABEL_40:
        *(_BYTE *)(a1 + 680) |= 2u;
    }
    *(_BYTE *)(a1 + 680) |= 1u;
    if ( DeviceRegProp < 0 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v12 + 680) & 5) != 1 )
      {
        LODWORD(v27[0]) = 2490404;
        v27[1] = L"ChildLocationPaths";
        DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v12 + 32), &Handle, 131097LL);
        if ( DeviceRegProp < 0 )
          return (unsigned int)DeviceRegProp;
        P = (PVOID)0x300000002LL;
        p_P = &P;
        v14 = 256;
        LODWORD(NumberOfBytes) = 256;
        for ( i = 0; i < 2; ++i )
        {
          DeviceRegProp = 0;
          if ( !v8 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x6E697050u);
            v14 = NumberOfBytes;
            v8 = PoolWithTag;
            if ( !PoolWithTag )
              DeviceRegProp = -1073741670;
          }
          if ( DeviceRegProp >= 0 )
          {
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
            v24 = *(_DWORD *)p_P;
            DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v17, (__int64)&v23, (__int64)v8, (__int64)&NumberOfBytes, 0);
            if ( DeviceRegProp == -1073741789 )
            {
              ExFreePoolWithTag(v8, 0);
              v20 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E697050u);
              v14 = NumberOfBytes;
              v8 = v20;
              if ( !v20 )
                DeviceRegProp = -1073741670;
            }
            else if ( DeviceRegProp >= 0 )
            {
              if ( v23 == 7 )
                DeviceRegProp = PipFindDeviceOverrideEntry(v8);
              else
                DeviceRegProp = -1073741823;
            }
          }
          LODWORD(NumberOfBytes) = v14;
          if ( DeviceRegProp >= 0 )
            break;
          p_P = (PVOID *)((char *)p_P + 4);
        }
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        ZwClose(Handle);
        v18 = *(_QWORD *)(a1 + 16);
        v19 = *(_BYTE *)(v18 + 680);
        if ( (v19 & 1) == 0 )
        {
          if ( DeviceRegProp >= 0 )
            *(_BYTE *)(v18 + 680) = v19 | 4;
          *(_BYTE *)(*(_QWORD *)(a1 + 16) + 680LL) |= 1u;
        }
        v7 = 0;
      }
      if ( DeviceRegProp < 0 )
        return (unsigned int)DeviceRegProp;
    }
    KeyHandle = 0LL;
    if ( LODWORD(v27[3]) != 1 )
      goto LABEL_49;
    ObjectAttributes.RootDirectory = (HANDLE)v27[2];
    *(_DWORD *)&ValueName.Length = 262146;
    ObjectAttributes.ObjectName = &ValueName;
    ValueName.Buffer = (wchar_t *)L"*";
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp < 0 )
    {
LABEL_49:
      DeviceRegProp = PnpGetDeviceLocationStrings(a1, &P, &v24);
      if ( DeviceRegProp < 0
        || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle), ExFreePoolWithTag(P, 0),
                                                                               DeviceRegProp < 0) )
      {
        if ( LODWORD(v27[3]) > 1 )
        {
          ObjectAttributes.RootDirectory = (HANDLE)v27[2];
          *(_DWORD *)&ValueName.Length = 262146;
          ObjectAttributes.ObjectName = &ValueName;
          ValueName.Buffer = (wchar_t *)L"*";
          KeyHandle = 0LL;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        }
      }
    }
    ZwClose((HANDLE)v27[2]);
    if ( DeviceRegProp >= 0 )
    {
      *(_DWORD *)&ValueName.Length = 1310738;
      ValueName.Buffer = L"Removable";
      DeviceRegProp = ZwQueryValueKey(
                        KeyHandle,
                        &ValueName,
                        KeyValuePartialInformation,
                        KeyValueInformation,
                        0x14u,
                        &ResultLength);
      if ( DeviceRegProp >= 0 )
      {
        if ( v33 == 4 && v34 == 4 )
          v7 = v35;
        else
          DeviceRegProp = -1073741823;
      }
      ZwClose(KeyHandle);
      *v30 = v7 != 0;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)DeviceRegProp;
}
