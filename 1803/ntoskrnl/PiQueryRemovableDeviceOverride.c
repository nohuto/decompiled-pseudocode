/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x1405DE074
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceLocationStrings @ 0x1405C4AF8 (PnpGetDeviceLocationStrings.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1405CDBC8 (PnpDeviceObjectToDeviceInstance.c)
 *     PipFindDeviceOverrideEntry @ 0x1405DE35C (PipFindDeviceOverrideEntry.c)
 *     PnpOpenFirstMatchingSubKey @ 0x1407277A4 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, void *a4)
{
  int v4; // r12d
  void *v5; // r14
  _BYTE *v6; // r13
  char v10; // cl
  int DeviceRegProp; // ebx
  char v12; // dl
  int DeviceOverrideEntry; // eax
  char v14; // r8
  __int64 v15; // rcx
  int *v16; // r12
  int v17; // esi
  unsigned int v18; // eax
  unsigned int i; // r15d
  PVOID PoolWithTag; // rax
  __int64 v21; // rax
  char v22; // cl
  int v24; // eax
  int v25; // eax
  PVOID v26; // rax
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  int NumberOfBytes_4; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[4]; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v35[2]; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D8h] [rbp-28h] BYREF
  int v39; // [rsp+DCh] [rbp-24h]
  int v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E4h] [rbp-1Ch]

  v4 = 0;
  P = a4;
  v5 = 0LL;
  NumberOfBytes_4 = 0;
  v6 = a4;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)-1073741772;
  memset(v33, 0, sizeof(v33));
  v10 = *(_BYTE *)(a1 + 680);
  DeviceRegProp = -1073741772;
  v12 = v10;
  DeviceOverrideEntry = -1073741772;
  if ( (v10 & 1) == 0 )
  {
    LODWORD(v33[0]) = 2490404;
    v14 = v10;
    v33[1] = L"ChildLocationPaths";
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
      v12 = *(_BYTE *)(a1 + 680);
      v14 = v12;
    }
    v10 = v14;
    if ( DeviceOverrideEntry >= 0 )
      goto LABEL_41;
    if ( a3 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3);
      v10 = *(_BYTE *)(a1 + 680);
      v12 = v10;
    }
    if ( DeviceOverrideEntry >= 0 )
    {
LABEL_41:
      ZwClose((HANDLE)v33[2]);
      *(_BYTE *)(a1 + 680) |= 4u;
      v10 = *(_BYTE *)(a1 + 680);
      v12 = v10;
    }
  }
  if ( (v10 & 3) != 1 )
  {
    LODWORD(v33[0]) = 1835034;
    v33[1] = L"LocationPaths";
    if ( a2 )
    {
      v24 = PipFindDeviceOverrideEntry(a2);
      v10 = *(_BYTE *)(a1 + 680);
      DeviceRegProp = v24;
      v12 = v10;
    }
    if ( DeviceRegProp >= 0 )
      goto LABEL_42;
    if ( a3 )
    {
      v25 = PipFindDeviceOverrideEntry(a3);
      v10 = *(_BYTE *)(a1 + 680);
      DeviceRegProp = v25;
      v12 = v10;
    }
    if ( DeviceRegProp >= 0 )
    {
LABEL_42:
      v10 = v12 | 2;
      *(_BYTE *)(a1 + 680) = v12 | 2;
    }
  }
  *(_BYTE *)(a1 + 680) = v10 | 1;
  if ( DeviceRegProp < 0 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v15 + 680) & 5) != 1 )
    {
      LODWORD(v33[0]) = 2490404;
      v33[1] = L"ChildLocationPaths";
      DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v15 + 32), (__int64)&Handle, 131097);
      if ( DeviceRegProp < 0 )
        return (unsigned int)DeviceRegProp;
      v35[0] = 2;
      v16 = v35;
      v17 = 256;
      v35[1] = 3;
      NumberOfBytes = 256;
      v18 = 256;
      for ( i = 0; i < 2; ++i )
      {
        DeviceRegProp = 0;
        if ( !v5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x6E697050u);
          v17 = NumberOfBytes;
          v5 = PoolWithTag;
          if ( !PoolWithTag )
            DeviceRegProp = -1073741670;
        }
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                            (__int64)Handle,
                            *v16,
                            (__int64)&v30,
                            (__int64)v5,
                            (__int64)&NumberOfBytes,
                            0);
          if ( DeviceRegProp == -1073741789 )
          {
            ExFreePoolWithTag(v5, 0);
            v26 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E697050u);
            v17 = NumberOfBytes;
            v5 = v26;
            if ( !v26 )
              DeviceRegProp = -1073741670;
          }
          else if ( DeviceRegProp >= 0 )
          {
            if ( v30 == 7 )
              DeviceRegProp = PipFindDeviceOverrideEntry(v5);
            else
              DeviceRegProp = -1073741823;
          }
        }
        NumberOfBytes = v17;
        if ( DeviceRegProp >= 0 )
          break;
        ++v16;
        v18 = v17;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      ZwClose(Handle);
      v21 = *(_QWORD *)(a1 + 16);
      v22 = *(_BYTE *)(v21 + 680);
      if ( (v22 & 1) == 0 )
      {
        if ( DeviceRegProp >= 0 )
        {
          *(_BYTE *)(v21 + 680) = v22 | 4;
          v21 = *(_QWORD *)(a1 + 16);
        }
        *(_BYTE *)(v21 + 680) |= 1u;
      }
      v6 = P;
      v4 = NumberOfBytes_4;
    }
    if ( DeviceRegProp < 0 )
      return (unsigned int)DeviceRegProp;
  }
  KeyHandle = 0LL;
  if ( LODWORD(v33[3]) != 1 )
    goto LABEL_51;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = (HANDLE)v33[2];
  *(_DWORD *)&ValueName.Length = 262146;
  ObjectAttributes.ObjectName = &ValueName;
  ValueName.Buffer = (wchar_t *)L"*";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( DeviceRegProp < 0 )
  {
LABEL_51:
    DeviceRegProp = PnpGetDeviceLocationStrings(a1, (char **)&P, &NumberOfBytes_4);
    if ( DeviceRegProp < 0
      || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle), ExFreePoolWithTag(P, 0), DeviceRegProp < 0) )
    {
      if ( LODWORD(v33[3]) > 1 )
      {
        KeyHandle = 0LL;
        ObjectAttributes.RootDirectory = (HANDLE)v33[2];
        *(_DWORD *)&ValueName.Length = 262146;
        ObjectAttributes.ObjectName = &ValueName;
        ValueName.Buffer = (wchar_t *)L"*";
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      }
    }
  }
  ZwClose((HANDLE)v33[2]);
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
      if ( v39 == 4 && v40 == 4 )
        v4 = v41;
      else
        DeviceRegProp = -1073741823;
    }
    ZwClose(KeyHandle);
    *v6 = v4 != 0;
  }
  return (unsigned int)DeviceRegProp;
}
