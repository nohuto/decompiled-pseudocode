/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x140598050
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PipFindDeviceOverrideEntry @ 0x14044E8AC (PipFindDeviceOverrideEntry.c)
 *     PnpGetDeviceLocationStrings @ 0x140518FFC (PnpGetDeviceLocationStrings.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1405513AC (PnpDeviceObjectToDeviceInstance.c)
 *     PnpOpenFirstMatchingSubKey @ 0x1406C19B0 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, _WORD *a2, _WORD *a3, void *a4)
{
  int v4; // r12d
  _WORD *v5; // r14
  _BYTE *v6; // r13
  int DeviceRegProp; // ebx
  const wchar_t *v12; // rdx
  int DeviceOverrideEntry; // ecx
  __int64 v14; // rcx
  int *v15; // r12
  unsigned int v16; // esi
  unsigned int i; // r15d
  _WORD *PoolWithTag; // rax
  __int64 v19; // rdx
  _WORD *v20; // rax
  __int64 v21; // rcx
  char v22; // al
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  int NumberOfBytes_4; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v29[4]; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v30; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v31[2]; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  char KeyValueInformation[4]; // [rsp+D8h] [rbp-28h] BYREF
  int v35; // [rsp+DCh] [rbp-24h]
  int v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E4h] [rbp-1Ch]

  v4 = 0;
  P = a4;
  v5 = 0LL;
  NumberOfBytes_4 = 0;
  v6 = a4;
  if ( PnpDeviceOverrideHashList )
  {
    memset(v29, 0, sizeof(v29));
    v12 = L"ChildLocationPaths";
    DeviceRegProp = -1073741772;
    DeviceOverrideEntry = -1073741772;
    if ( (*(_BYTE *)(a1 + 680) & 1) == 0 )
    {
      LODWORD(v29[0]) = 2490404;
      v29[1] = L"ChildLocationPaths";
      if ( a2 )
      {
        DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2, (__int64)L"ChildLocationPaths", (__int64)v29);
        if ( DeviceOverrideEntry >= 0 )
          goto LABEL_20;
      }
      if ( a3 )
        DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3, (__int64)v12, (__int64)v29);
      if ( DeviceOverrideEntry >= 0 )
      {
LABEL_20:
        ZwClose((HANDLE)v29[2]);
        *(_BYTE *)(a1 + 680) |= 4u;
      }
    }
    if ( (*(_BYTE *)(a1 + 680) & 3) != 1 )
    {
      LODWORD(v29[0]) = 1835034;
      v29[1] = L"LocationPaths";
      if ( a2 )
      {
        DeviceRegProp = PipFindDeviceOverrideEntry(a2, (__int64)v12, (__int64)v29);
        if ( DeviceRegProp >= 0 )
          goto LABEL_21;
      }
      if ( a3 )
        DeviceRegProp = PipFindDeviceOverrideEntry(a3, (__int64)v12, (__int64)v29);
      if ( DeviceRegProp >= 0 )
LABEL_21:
        *(_BYTE *)(a1 + 680) |= 2u;
    }
    *(_BYTE *)(a1 + 680) |= 1u;
    if ( DeviceRegProp >= 0 )
      goto LABEL_45;
    v14 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v14 + 680) & 5) != 1 )
    {
      LODWORD(v29[0]) = 2490404;
      v29[1] = L"ChildLocationPaths";
      DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v14 + 32), (__int64)&v30, 131097);
      if ( DeviceRegProp < 0 )
        return (unsigned int)DeviceRegProp;
      v31[0] = 2;
      v15 = v31;
      v16 = 256;
      v31[1] = 3;
      NumberOfBytes = 256;
      for ( i = 0; i < 2; ++i )
      {
        DeviceRegProp = 0;
        if ( !v5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x6E697050u);
          v16 = NumberOfBytes;
          v5 = PoolWithTag;
          if ( !PoolWithTag )
            DeviceRegProp = -1073741670;
        }
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                            (__int64)v30,
                            *v15,
                            (__int64)&v26,
                            (__int64)v5,
                            (__int64)&NumberOfBytes,
                            0);
          if ( DeviceRegProp == -1073741789 )
          {
            ExFreePoolWithTag(v5, 0);
            v20 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E697050u);
            v16 = NumberOfBytes;
            v5 = v20;
            if ( !v20 )
              DeviceRegProp = -1073741670;
          }
          else if ( DeviceRegProp >= 0 )
          {
            if ( v26 == 7 )
              DeviceRegProp = PipFindDeviceOverrideEntry(v5, v19, (__int64)v29);
            else
              DeviceRegProp = -1073741823;
          }
        }
        NumberOfBytes = v16;
        if ( DeviceRegProp >= 0 )
          break;
        ++v15;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      ZwClose(v30);
      v21 = *(_QWORD *)(a1 + 16);
      v22 = *(_BYTE *)(v21 + 680);
      if ( (v22 & 1) == 0 )
      {
        if ( DeviceRegProp >= 0 )
          *(_BYTE *)(v21 + 680) = v22 | 4;
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + 680LL) |= 1u;
      }
      v6 = P;
      v4 = NumberOfBytes_4;
    }
    if ( DeviceRegProp >= 0 )
    {
LABEL_45:
      KeyHandle = 0LL;
      if ( LODWORD(v29[3]) != 1 )
        goto LABEL_49;
      KeyHandle = 0LL;
      ObjectAttributes.RootDirectory = (HANDLE)v29[2];
      *(_DWORD *)&ValueName.Length = 262146;
      ObjectAttributes.ObjectName = &ValueName;
      ValueName.Buffer = (wchar_t *)L"*";
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DeviceRegProp < 0 )
      {
LABEL_49:
        DeviceRegProp = PnpGetDeviceLocationStrings(a1, (char **)&P, &NumberOfBytes_4);
        if ( DeviceRegProp < 0
          || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle),
              ExFreePoolWithTag(P, 0),
              DeviceRegProp < 0) )
        {
          if ( LODWORD(v29[3]) > 1 )
          {
            KeyHandle = 0LL;
            ObjectAttributes.RootDirectory = (HANDLE)v29[2];
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
      ZwClose((HANDLE)v29[2]);
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
          if ( v35 == 4 && v36 == 4 )
            v4 = v37;
          else
            DeviceRegProp = -1073741823;
        }
        ZwClose(KeyHandle);
        *v6 = v4 != 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)DeviceRegProp;
}
