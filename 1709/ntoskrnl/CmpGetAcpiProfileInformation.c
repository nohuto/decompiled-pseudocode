/*
 * XREFs of CmpGetAcpiProfileInformation @ 0x1405C3C84
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1405C35C0 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14017DB80 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x14017DF00 (ZwEnumerateKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140566A60 (RtlUnicodeStringToInteger.c)
 */

__int64 __fastcall CmpGetAcpiProfileInformation(
        void *a1,
        PVOID *a2,
        PVOID *a3,
        __int64 a4,
        unsigned __int16 *KeyValueInformation)
{
  ULONG v5; // r15d
  NTSTATUS v9; // ebx
  PVOID PoolWithTag; // rax
  ULONG v11; // r12d
  ULONG v12; // r15d
  PVOID v13; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  char *v16; // rdx
  ULONG v17; // ebx
  _DWORD *v18; // r9
  unsigned int v19; // ebx
  unsigned int v20; // eax
  __int64 v21; // rcx
  char *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // rcx
  PVOID v25; // rax
  unsigned int v26; // eax
  PVOID v27; // rcx
  unsigned int v28; // edx
  void *v29; // rcx
  unsigned int i; // edi
  void *v32; // rcx
  unsigned int j; // edi
  void *v34; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-B9h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-B1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE v38; // [rsp+50h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  __int128 v40; // [rsp+60h] [rbp-89h]
  ULONG Value[4]; // [rsp+70h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-69h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-39h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C0h] [rbp-29h] BYREF
  ULONG v45; // [rsp+D4h] [rbp-15h]

  v5 = 0;
  *a2 = 0LL;
  v38 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Hardware Profiles");
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_46;
  }
  v9 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v9 < 0 )
    goto LABEL_46;
  ResultLength = 32 * (v45 - 1) + 40;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20204D43u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_53;
  memset(PoolWithTag, 0, ResultLength);
  v11 = 0;
  *(_DWORD *)*a2 = v45;
  for ( *((_DWORD *)*a2 + 1) = 0; v11 < v45; v5 = 0 )
  {
    if ( ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength) < 0 )
      break;
    KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
    DestinationString.Length = KeyValueInformation[6];
    DestinationString.MaximumLength = DestinationString.Length + 2;
    DestinationString.Buffer = KeyValueInformation + 8;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
      break;
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value[1]);
    RtlInitUnicodeString(&DestinationString, L"PreferenceOrder");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *((_DWORD *)KeyValueInformation + 1) == 4 )
    {
      v12 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2));
    }
    else
    {
      v12 = -1;
    }
    Value[0] = v12;
    RtlInitUnicodeString(&DestinationString, L"FriendlyName");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *((_DWORD *)KeyValueInformation + 1) == 1 )
    {
      v13 = ExAllocatePoolWithTag(PagedPool, *((unsigned int *)KeyValueInformation + 3), 0x20204D43u);
      v14 = *((_DWORD *)KeyValueInformation + 3);
      LODWORD(v40) = v14;
      *((_QWORD *)&v40 + 1) = v13;
      if ( !v13 )
        goto LABEL_60;
      v15 = v14;
      v16 = (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2);
    }
    else
    {
      v43 = *(_OWORD *)L"-------";
      v13 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20204D43u);
      LODWORD(v40) = 16;
      *((_QWORD *)&v40 + 1) = v13;
      if ( !v13 )
      {
LABEL_60:
        v9 = -1073741670;
LABEL_65:
        ZwClose(Handle);
        goto LABEL_46;
      }
      v15 = *((unsigned int *)KeyValueInformation + 3);
      v16 = (char *)&v43;
    }
    memmove(v13, v16, v15);
    v17 = 0;
    Value[2] = 0;
    RtlInitUnicodeString(&DestinationString, L"Aliasable");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) < 0
      || *((_DWORD *)KeyValueInformation + 1) != 4
      || *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
    {
      v17 = 1;
      Value[2] = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"Pristine");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *((_DWORD *)KeyValueInformation + 1) == 4 )
    {
      if ( *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
        v17 = 4;
      Value[2] = v17;
    }
    if ( !Value[1] )
    {
      v12 = -1;
      Value[2] = 4;
      Value[0] = -1;
    }
    v18 = *a2;
    v19 = 0;
    v20 = *((_DWORD *)*a2 + 1);
    if ( v20 )
    {
      while ( 1 )
      {
        v21 = 8LL * v19;
        if ( v18[v21 + 6] >= v12 )
          break;
        if ( ++v19 >= v20 )
          goto LABEL_27;
      }
      memmove(&v18[8 * v19 + 10], &v18[v21 + 2], 32LL * (*v18 - v19 - 1));
    }
LABEL_27:
    v22 = (char *)*a2;
    v23 = *(_OWORD *)Value;
    v24 = 32LL * v19;
    *(_OWORD *)&v22[v24 + 8] = v40;
    *(_OWORD *)&v22[v24 + 24] = v23;
    ++*((_DWORD *)*a2 + 1);
    ZwClose(Handle);
    ++v11;
  }
  RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v38, 0x20019u, &ObjectAttributes) < 0 )
  {
    v9 = 0;
    v38 = 0LL;
    goto LABEL_48;
  }
  v9 = ZwQueryKey(v38, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v9 >= 0 )
  {
    v25 = ExAllocatePoolWithTag(PagedPool, 32LL * (v45 - 1) + 40, 0x20204D43u);
    *a3 = v25;
    if ( v25 )
    {
      *((_DWORD *)v25 + 1) = v45;
      *(_DWORD *)*a3 = v45;
      if ( v45 )
      {
        while ( 1 )
        {
          v9 = ZwEnumerateKey(v38, v5, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
          if ( v9 < 0 )
            break;
          KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
          DestinationString.Length = KeyValueInformation[6];
          DestinationString.MaximumLength = DestinationString.Length + 2;
          DestinationString.Buffer = KeyValueInformation + 8;
          ObjectAttributes.RootDirectory = v38;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( v9 < 0 )
            break;
          RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || *((_DWORD *)KeyValueInformation + 1) != 4
            || (*((_DWORD *)*a3 + 6 * v5 + 2) = *(_DWORD *)((char *)KeyValueInformation
                                                          + *((unsigned int *)KeyValueInformation + 2)),
                RtlInitUnicodeString(&DestinationString, L"DockingState"),
                ZwQueryValueKey(
                  Handle,
                  &DestinationString,
                  KeyValueFullInformation,
                  KeyValueInformation,
                  0x100u,
                  &ResultLength) < 0)
            || *((_DWORD *)KeyValueInformation + 1) != 4
            || (*((_DWORD *)*a3 + 6 * v5 + 3) = *(_DWORD *)((char *)KeyValueInformation
                                                          + *((unsigned int *)KeyValueInformation + 2)),
                RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber"),
                v9 = ZwQueryValueKey(
                       Handle,
                       &DestinationString,
                       KeyValueFullInformation,
                       KeyValueInformation,
                       0x100u,
                       &ResultLength),
                v9 < 0)
            || *((_DWORD *)KeyValueInformation + 1) != 3 )
          {
            v9 = -1073741492;
            goto LABEL_65;
          }
          *((_DWORD *)*a3 + 6 * v5 + 4) = *((_DWORD *)KeyValueInformation + 3);
          v26 = *((_DWORD *)KeyValueInformation + 3);
          if ( v26 )
            v27 = ExAllocatePoolWithTag(PagedPool, v26, 0x20204D43u);
          else
            v27 = 0LL;
          *((_QWORD *)*a3 + 3 * v5 + 3) = v27;
          v28 = *((_DWORD *)KeyValueInformation + 3);
          if ( v28 )
          {
            v29 = (void *)*((_QWORD *)*a3 + 3 * v5 + 3);
            if ( !v29 )
              goto LABEL_60;
            memmove(v29, (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2), v28);
          }
          ZwClose(Handle);
          if ( ++v5 >= v45 )
            goto LABEL_46;
        }
      }
      goto LABEL_46;
    }
LABEL_53:
    v9 = -1073741670;
  }
LABEL_46:
  if ( v38 )
    ZwClose(v38);
LABEL_48:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 < 0 )
  {
    if ( *a2 )
    {
      for ( i = 0; i < *((_DWORD *)*a2 + 1); ++i )
      {
        v32 = (void *)*((_QWORD *)*a2 + 4 * i + 2);
        if ( v32 )
          ExFreePoolWithTag(v32, 0);
      }
      ExFreePoolWithTag(*a2, 0);
      *a2 = 0LL;
    }
    if ( *a3 )
    {
      for ( j = 0; j < *((_DWORD *)*a3 + 1); ++j )
      {
        v34 = (void *)*((_QWORD *)*a3 + 3 * j + 3);
        if ( v34 )
          ExFreePoolWithTag(v34, 0);
      }
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
  }
  return (unsigned int)v9;
}
