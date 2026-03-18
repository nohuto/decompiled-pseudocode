/*
 * XREFs of CmpGetAcpiProfileInformation @ 0x1405C9074
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1405C97A8 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14017E200 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x14017E580 (ZwEnumerateKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140428AD0 (RtlUnicodeStringToInteger.c)
 */

__int64 __fastcall CmpGetAcpiProfileInformation(
        void *a1,
        PVOID *a2,
        PVOID *a3,
        __int64 a4,
        unsigned __int16 *KeyValueInformation)
{
  NTSTATUS v8; // ebx
  PVOID PoolWithTag; // rax
  ULONG v10; // r12d
  ULONG v11; // r15d
  PVOID v12; // rax
  unsigned int v13; // ecx
  size_t v14; // r8
  char *v15; // rdx
  ULONG v16; // ebx
  _DWORD *v17; // r9
  unsigned int v18; // ebx
  unsigned int v19; // eax
  __int64 v20; // rcx
  char *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rcx
  PVOID v24; // rax
  ULONG v25; // r12d
  unsigned int v26; // eax
  PVOID v27; // rcx
  unsigned int v28; // ecx
  unsigned int i; // edi
  void *v31; // rcx
  unsigned int j; // edi
  void *v33; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-B9h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-B1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE v37; // [rsp+50h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  __int128 v39; // [rsp+60h] [rbp-89h]
  ULONG Value[4]; // [rsp+70h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-69h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-39h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C0h] [rbp-29h] BYREF
  ULONG v44; // [rsp+D4h] [rbp-15h]

  *a2 = 0LL;
  v37 = 0LL;
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
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_46;
  }
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v8 < 0 )
    goto LABEL_46;
  ResultLength = 32 * (v44 - 1) + 40;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20204D43u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_53;
  memset(PoolWithTag, 0, ResultLength);
  v10 = 0;
  *(_DWORD *)*a2 = v44;
  for ( *((_DWORD *)*a2 + 1) = 0; v10 < v44; ++v10 )
  {
    if ( ZwEnumerateKey(KeyHandle, v10, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength) < 0 )
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
      v11 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2));
    }
    else
    {
      v11 = -1;
    }
    Value[0] = v11;
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
      v12 = ExAllocatePoolWithTag(PagedPool, *((unsigned int *)KeyValueInformation + 3), 0x20204D43u);
      v13 = *((_DWORD *)KeyValueInformation + 3);
      LODWORD(v39) = v13;
      *((_QWORD *)&v39 + 1) = v12;
      if ( !v12 )
        goto LABEL_60;
      v14 = v13;
      v15 = (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2);
    }
    else
    {
      v42 = *(_OWORD *)L"-------";
      v12 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20204D43u);
      LODWORD(v39) = 16;
      *((_QWORD *)&v39 + 1) = v12;
      if ( !v12 )
      {
LABEL_60:
        v8 = -1073741670;
LABEL_62:
        ZwClose(Handle);
        goto LABEL_46;
      }
      v14 = *((unsigned int *)KeyValueInformation + 3);
      v15 = (char *)&v42;
    }
    memmove(v12, v15, v14);
    v16 = 0;
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
      v16 = 1;
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
        v16 = 4;
      Value[2] = v16;
    }
    if ( !Value[1] )
    {
      v11 = -1;
      Value[2] = 4;
      Value[0] = -1;
    }
    v17 = *a2;
    v18 = 0;
    v19 = *((_DWORD *)*a2 + 1);
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = 8LL * v18;
        if ( v17[v20 + 6] >= v11 )
          break;
        if ( ++v18 >= v19 )
          goto LABEL_27;
      }
      memmove(&v17[8 * v18 + 10], &v17[v20 + 2], 32LL * (*v17 - v18 - 1));
    }
LABEL_27:
    v21 = (char *)*a2;
    v22 = *(_OWORD *)Value;
    v23 = 32LL * v18;
    *(_OWORD *)&v21[v23 + 8] = v39;
    *(_OWORD *)&v21[v23 + 24] = v22;
    ++*((_DWORD *)*a2 + 1);
    ZwClose(Handle);
  }
  RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v37, 0x20019u, &ObjectAttributes) < 0 )
  {
    v8 = 0;
    v37 = 0LL;
    goto LABEL_48;
  }
  v8 = ZwQueryKey(v37, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v8 >= 0 )
  {
    v24 = ExAllocatePoolWithTag(PagedPool, 32LL * (v44 - 1) + 40, 0x20204D43u);
    *a3 = v24;
    if ( v24 )
    {
      v25 = 0;
      *((_DWORD *)v24 + 1) = v44;
      *(_DWORD *)*a3 = v44;
      if ( v44 )
      {
        while ( 1 )
        {
          v8 = ZwEnumerateKey(v37, v25, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
          if ( v8 < 0 )
            break;
          KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
          DestinationString.Length = KeyValueInformation[6];
          DestinationString.MaximumLength = DestinationString.Length + 2;
          DestinationString.Buffer = KeyValueInformation + 8;
          ObjectAttributes.RootDirectory = v37;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v8 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( v8 < 0 )
            break;
          RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || *((_DWORD *)KeyValueInformation + 1) != 4 )
          {
            v8 = -1073741492;
            ZwClose(Handle);
            goto LABEL_46;
          }
          *((_DWORD *)*a3 + 6 * v25 + 2) = *(_DWORD *)((char *)KeyValueInformation
                                                     + *((unsigned int *)KeyValueInformation + 2));
          RtlInitUnicodeString(&DestinationString, L"DockingState");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || *((_DWORD *)KeyValueInformation + 1) != 4
            || (*((_DWORD *)*a3 + 6 * v25 + 3) = *(_DWORD *)((char *)KeyValueInformation
                                                           + *((unsigned int *)KeyValueInformation + 2)),
                RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber"),
                v8 = ZwQueryValueKey(
                       Handle,
                       &DestinationString,
                       KeyValueFullInformation,
                       KeyValueInformation,
                       0x100u,
                       &ResultLength),
                v8 < 0)
            || *((_DWORD *)KeyValueInformation + 1) != 3 )
          {
            v8 = -1073741492;
            goto LABEL_62;
          }
          *((_DWORD *)*a3 + 6 * v25 + 4) = *((_DWORD *)KeyValueInformation + 3);
          v26 = *((_DWORD *)KeyValueInformation + 3);
          if ( v26 )
            v27 = ExAllocatePoolWithTag(PagedPool, v26, 0x20204D43u);
          else
            v27 = 0LL;
          *((_QWORD *)*a3 + 3 * v25 + 3) = v27;
          v28 = *((_DWORD *)KeyValueInformation + 3);
          if ( v28 )
          {
            if ( !*((_QWORD *)*a3 + 3 * v25 + 3) )
              goto LABEL_60;
            memmove(
              *((void **)*a3 + 3 * v25 + 3),
              (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2),
              v28);
          }
          ZwClose(Handle);
          if ( ++v25 >= v44 )
            goto LABEL_46;
        }
      }
      goto LABEL_46;
    }
LABEL_53:
    v8 = -1073741670;
  }
LABEL_46:
  if ( v37 )
    ZwClose(v37);
LABEL_48:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 < 0 )
  {
    if ( *a2 )
    {
      for ( i = 0; i < *((_DWORD *)*a2 + 1); ++i )
      {
        v31 = (void *)*((_QWORD *)*a2 + 4 * i + 2);
        if ( v31 )
          ExFreePoolWithTag(v31, 0);
      }
      ExFreePoolWithTag(*a2, 0);
      *a2 = 0LL;
    }
    if ( *a3 )
    {
      for ( j = 0; j < *((_DWORD *)*a3 + 1); ++j )
      {
        v33 = (void *)*((_QWORD *)*a3 + 3 * j + 3);
        if ( v33 )
          ExFreePoolWithTag(v33, 0);
      }
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
  }
  return (unsigned int)v8;
}
