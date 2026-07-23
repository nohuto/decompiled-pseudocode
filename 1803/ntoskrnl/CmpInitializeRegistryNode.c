/*
 * XREFs of CmpInitializeRegistryNode @ 0x14062E0B4
 * Callers:
 *     CmLogMcUpdateStatus @ 0x140222194 (CmLogMcUpdateStatus.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14062DC9C (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetupConfigurationTree @ 0x1408AF44C (CmpSetupConfigurationTree.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x14053E9C0 (RtlIntegerToChar.c)
 */

NTSTATUS __fastcall CmpInitializeRegistryNode(__int64 a1, void *a2, HANDLE *a3, int a4, int a5, __int64 a6)
{
  ULONG v9; // esi
  int v10; // eax
  NTSTATUS result; // eax
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  HANDLE v14; // rbx
  NTSTATUS v15; // r14d
  NTSTATUS v16; // ebx
  const void *v17; // rdx
  _DWORD *v18; // rcx
  unsigned int v19; // eax
  size_t v20; // r8
  char *v21; // rcx
  char *PoolWithTag; // rbx
  PUNICODE_STRING Class; // [rsp+20h] [rbp-C1h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-A1h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-99h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-91h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-81h] BYREF
  _STRING DestinationString; // [rsp+70h] [rbp-71h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  CHAR String[16]; // [rsp+C0h] [rbp-21h] BYREF
  char v32; // [rsp+D0h] [rbp-11h] BYREF

  v9 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v10 = *(_DWORD *)(a1 + 28);
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 0;
    v10 = 0;
  }
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = &CmTypeName + v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      v12 = *(int *)(a1 + 28);
      if ( (unsigned int)v12 >= 0x2A )
      {
        v13 = 0;
      }
      else
      {
        v13 = *(_WORD *)(a6 + 2 * v12);
        *(_WORD *)(a6 + 2LL * *(int *)(a1 + 28)) = v13 + 1;
      }
      RtlIntegerToChar(v13, 0xAu, 0xCu, String);
      RtlInitAnsiString(&DestinationString, String);
      *(_DWORD *)&v27.Length = 1572864;
      v27.Buffer = (wchar_t *)&v32;
      RtlAnsiStringToUnicodeString(&v27, &DestinationString, 0);
      v14 = KeyHandle;
      ObjectAttributes.ObjectName = &v27;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      ZwClose(v14);
      if ( v15 < 0 )
        return v15;
    }
    RtlInitUnicodeString(&ValueName, L"Component Information");
    v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, (PVOID)(a1 + 32), 0x10u);
    if ( v16 < 0 )
      goto LABEL_24;
    if ( *(_DWORD *)(a1 + 52) )
    {
      RtlInitUnicodeString(&ValueName, L"Identifier");
      RtlInitAnsiString(&DestinationString, *(PCSZ *)(a1 + 56));
      v16 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v16 < 0 )
        goto LABEL_24;
      v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
      RtlFreeAnsiString(&UnicodeString);
      if ( v16 < 0 )
        goto LABEL_24;
    }
    RtlInitUnicodeString(&ValueName, L"Configuration Data");
    v17 = *(const void **)(a1 + 64);
    if ( !v17 )
    {
LABEL_13:
      if ( !*(_QWORD *)(a1 + 64) )
      {
        v9 = 16;
        *((_QWORD *)CmpConfigurationData + 1) = 0LL;
      }
      v18 = CmpConfigurationData;
      Class = (PUNICODE_STRING)CmpConfigurationData;
      *(_DWORD *)CmpConfigurationData = a4;
      v18[1] = a5;
      v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 9u, Class, v9);
      if ( v16 >= 0 )
      {
        *a3 = KeyHandle;
        return 0;
      }
LABEL_24:
      ZwClose(KeyHandle);
      return v16;
    }
    v19 = *(_DWORD *)(a1 + 48);
    v9 = v19 + 8;
    if ( v19 + 8 > (unsigned int)CmpConfigurationAreaSize )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x20204D43u);
      if ( !PoolWithTag )
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
        goto LABEL_13;
      }
      LODWORD(CmpConfigurationAreaSize) = v9;
      ExFreePoolWithTag(CmpConfigurationData, 0);
      v20 = *(unsigned int *)(a1 + 48);
      v21 = PoolWithTag + 8;
      v17 = *(const void **)(a1 + 64);
      CmpConfigurationData = PoolWithTag;
    }
    else
    {
      v20 = v19;
      v21 = (char *)CmpConfigurationData + 8;
    }
    memmove(v21, v17, v20);
    goto LABEL_13;
  }
  return result;
}
