/*
 * XREFs of CmpCloneHwProfile @ 0x1406FC0D0
 * Callers:
 *     CmSetAcpiHwProfile @ 0x14062CD80 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x1408AE8A8 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wtoi @ 0x140188BB0 (_wtoi.c)
 *     swprintf_s @ 0x14018D230 (swprintf_s.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401A7780 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1401A7B00 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x1401A9F20 (ZwQuerySecurityObject.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpRebuildKcbCache @ 0x1404985B8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x14052FD70 (ExUuidCreate.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406FC834 (CmpCreateHwProfileFriendlyName.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpCloneHwProfile(
        void *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        unsigned __int16 a5,
        PHANDLE KeyHandle,
        unsigned int *a7)
{
  void *v7; // r12
  NTSTATUS v10; // ebx
  PVOID PoolWithTag; // rdi
  ULONG v12; // edi
  int v13; // eax
  ULONG v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v27; // [rsp+80h] [rbp-80h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+8Ch] [rbp-74h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD KeyInformation[2]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v34; // [rsp+E8h] [rbp-18h]
  unsigned int v35; // [rsp+ECh] [rbp-14h]
  wchar_t Str[2]; // [rsp+F0h] [rbp-10h] BYREF
  ULONG v37; // [rsp+F4h] [rbp-Ch]
  wchar_t Dst[64]; // [rsp+1E0h] [rbp+E0h] BYREF

  v7 = a3;
  *(_QWORD *)&UnicodeString.Length = a3;
  v23 = 0LL;
  *KeyHandle = 0LL;
  *a7 = a4;
  v27 = 0LL;
  Handle = 0LL;
  if ( a4 >= 0xC8 )
    goto LABEL_8;
  while ( 1 )
  {
    *a7 = a4 + 1;
    swprintf_s(Dst, 0x40uLL, L"%04d");
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    if ( v10 < 0 )
      break;
    ZwClose(*KeyHandle);
    a4 = *a7;
    if ( *a7 >= 0xC8 )
      goto LABEL_7;
  }
  if ( v10 == -1073741772 )
    v10 = 0;
LABEL_7:
  if ( v10 >= 0 )
  {
LABEL_8:
    if ( ZwQuerySecurityObject(v7, 4u, 0LL, 0, &Length) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x20204D43u);
      if ( !PoolWithTag || ZwQuerySecurityObject(v7, 4u, PoolWithTag, Length, &Length) >= 0 )
        goto LABEL_13;
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    PoolWithTag = 0LL;
LABEL_13:
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = PoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v10 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v10 >= 0 )
    {
      if ( Disposition == 1 )
      {
        swprintf_s(Dst, 0x40uLL, L"Hardware Profiles\\%04d", *a7);
        RtlInitUnicodeString(&ValueName, Dst);
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v10 = ZwCreateKey(&v23, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v10 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.RootDirectory = a1;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v10 = ZwOpenKey(&v27, 0x20019u, &ObjectAttributes);
          if ( v10 >= 0 )
          {
            v10 = ZwQueryKey(v27, KeyFullInformation, KeyInformation, 0x100u, &ResultLength);
            if ( v10 >= 0 )
            {
              v12 = v37;
              v13 = -1;
              Data = -1;
              v14 = 0;
              if ( v37 )
              {
                do
                {
                  if ( ZwEnumerateKey(v27, v14, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength) < 0 )
                    break;
                  Str[(unsigned __int64)v35 >> 1] = 0;
                  if ( wtoi(Str) && wtoi(Str) != *a7 )
                  {
                    ValueName.Length = v35;
                    ObjectAttributes.Length = 48;
                    ValueName.MaximumLength = v35 + 2;
                    ObjectAttributes.Attributes = 576;
                    ValueName.Buffer = Str;
                    ObjectAttributes.RootDirectory = v27;
                    ObjectAttributes.ObjectName = &ValueName;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                    {
                      RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                      if ( ZwQueryValueKey(
                             Handle,
                             &ValueName,
                             KeyValueFullInformation,
                             KeyInformation,
                             0x100u,
                             &ResultLength) >= 0
                        && KeyInformation[1] == 4
                        && (*(_DWORD *)((char *)KeyInformation + v34) > Data || Data == -1) )
                      {
                        Data = *(_DWORD *)((char *)KeyInformation + v34);
                      }
                      ZwClose(Handle);
                    }
                    Handle = 0LL;
                  }
                  ++v14;
                }
                while ( v14 < v12 );
                v13 = Data;
                v7 = *(void **)&UnicodeString.Length;
              }
              Data = v13 + 1;
              RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
              ZwSetValueKey(v23, &ValueName, 0, 4u, &Data, 4u);
              if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, &UnicodeString) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"FriendlyName");
                ZwSetValueKey(v23, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
                RtlFreeAnsiString(&UnicodeString);
              }
              Data = 0;
              RtlInitUnicodeString(&ValueName, L"Aliasable");
              ZwSetValueKey(v23, &ValueName, 0, 4u, &Data, 4u);
              Data = 1;
              RtlInitUnicodeString(&ValueName, L"Cloned");
              ZwSetValueKey(v23, &ValueName, 0, 4u, &Data, 4u);
              if ( ExUuidCreate(&Uuid) >= 0 && RtlStringFromGUIDEx(&Uuid, &UnicodeString, 1u) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v23, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.MaximumLength);
                RtlFreeAnsiString(&UnicodeString);
              }
              v10 = ObReferenceObjectByHandle(v7, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, (PVOID *)&Uuid, 0LL);
              if ( v10 >= 0 )
              {
                v10 = ObReferenceObjectByHandle(
                        *KeyHandle,
                        0x20006u,
                        (POBJECT_TYPE)CmKeyObjectType,
                        0,
                        (PVOID *)&UnicodeString,
                        0LL);
                if ( v10 >= 0 )
                {
                  CmpLockRegistryExclusive();
                  v15 = *(_QWORD *)&UnicodeString.Length;
                  v16 = *(_QWORD *)&Uuid.Data1;
                  if ( (unsigned __int8)CmpCopySyncTree(
                                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&Uuid.Data1 + 8LL) + 24LL),
                                          2,
                                          0) )
                  {
                    *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
                    *(_DWORD *)&Uuid.Data2 = 0;
                    v17 = *(_QWORD *)(v16 + 8);
                    *(_DWORD *)&UnicodeString.Length = -1;
                    Uuid.Data1 = -1;
                    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UNICODE_STRING *))(*(_QWORD *)(v17 + 24) + 8LL))(
                            *(_QWORD *)(v17 + 24),
                            *(unsigned int *)(v17 + 32),
                            &UnicodeString);
                    if ( v18 )
                    {
                      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UUID *))(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 24LL)
                                                                              + 8LL))(
                              *(_QWORD *)(*(_QWORD *)(v15 + 8) + 24LL),
                              *(unsigned int *)(*(_QWORD *)(v15 + 8) + 32LL),
                              &Uuid);
                      if ( v19 )
                      {
                        *(_WORD *)(v19 + 52) = *(_WORD *)(v18 + 52);
                        *(_DWORD *)(v19 + 56) = *(_DWORD *)(v18 + 56);
                        CmpRebuildKcbCache(*(_QWORD *)(v15 + 8));
                        (*(void (__fastcall **)(_QWORD, UUID *))(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 24LL) + 16LL))(
                          *(_QWORD *)(*(_QWORD *)(v15 + 8) + 24LL),
                          &Uuid);
                        v10 = 0;
                      }
                      else
                      {
                        v10 = -1073741670;
                      }
                      (*(void (__fastcall **)(_QWORD, UNICODE_STRING *))(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL) + 16LL))(
                        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL),
                        &UnicodeString);
                    }
                    else
                    {
                      v10 = -1073741670;
                    }
                  }
                  else
                  {
                    v10 = -1073741492;
                  }
                  CmpUnlockRegistry();
                }
              }
            }
          }
          else
          {
            v27 = 0LL;
          }
        }
        else
        {
          v23 = 0LL;
        }
      }
      else
      {
        v10 = 0;
      }
    }
  }
  ZwClose(v7);
  if ( v23 )
    ZwClose(v23);
  if ( v27 )
    ZwClose(v27);
  if ( v10 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  return (unsigned int)v10;
}
