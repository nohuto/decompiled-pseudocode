/*
 * XREFs of IoOpenDriverRegistryKey @ 0x140648B50
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x1405F7868 (PipOpenServiceEnumKeys.c)
 *     PiCreateRedirectedStateRoot @ 0x140648D7C (PiCreateRedirectedStateRoot.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140729BE0 (PiAuGetServiceStateSecurityObject.c)
 */

__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  HANDLE v8; // rsi
  void *v9; // r12
  HANDLE v10; // r14
  __int64 v11; // rax
  int v12; // eax
  NTSTATUS v13; // ebx
  NTSTATUS RegistryValue; // eax
  int RedirectedStateRoot; // eax
  HANDLE v16; // rax
  NTSTATUS v18; // eax
  int ServiceStateSecurityObject; // eax
  void *v20; // [rsp+48h] [rbp-21h] BYREF
  void *v21; // [rsp+50h] [rbp-19h]
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+5Fh] BYREF

  KeyHandle = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  v9 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  if ( !a1 )
    goto LABEL_39;
  v11 = *(_QWORD *)(a1 + 48);
  if ( !v11 || !*(_QWORD *)(v11 + 32) || !*(_WORD *)(v11 + 24) || a4 || !a5 )
    goto LABEL_39;
  v12 = PipOpenServiceEnumKeys((UNICODE_STRING *)(v11 + 24), 0x2001Du, &Handle, 0LL, 0);
  v10 = Handle;
  v13 = v12;
  if ( v12 < 0 )
    goto LABEL_40;
  RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &v23);
  v13 = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_39;
  if ( RegistryValue < 0 )
    goto LABEL_40;
  if ( v23[1] != 4 || v23[3] != 4 )
  {
    v13 = -1073741492;
    goto LABEL_40;
  }
  if ( (*(_DWORD *)((char *)v23 + (unsigned int)v23[2]) & 0xB) == 0 )
    goto LABEL_39;
  if ( !a2 )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xFDFDFFE6 | 0x20019;
    if ( (a3 & 0x7FFDFFE6) != 0 )
    {
      v13 = -1073741790;
      goto LABEL_40;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyParametersName;
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v18 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    goto LABEL_32;
  }
  if ( a2 != 1 )
  {
LABEL_39:
    v13 = -1073741811;
    goto LABEL_40;
  }
  RedirectedStateRoot = PiCreateRedirectedStateRoot((unsigned int)*(_QWORD *)(a1 + 48) + 24);
  v13 = RedirectedStateRoot;
  if ( RedirectedStateRoot == -1073741772 )
  {
    v8 = v10;
  }
  else
  {
    v8 = v21;
    if ( RedirectedStateRoot < 0 )
      goto LABEL_40;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v8;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyPersistentStateName;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  if ( v13 != -1073741772 )
    goto LABEL_18;
  ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(&v20);
  v9 = v20;
  v13 = ServiceStateSecurityObject;
  if ( ServiceStateSecurityObject < 0 )
    goto LABEL_40;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v8;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyPersistentStateName;
  ObjectAttributes.SecurityDescriptor = v20;
  v18 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, 0LL);
LABEL_32:
  v13 = v18;
LABEL_18:
  if ( v13 >= 0 )
  {
    v16 = KeyHandle;
    KeyHandle = 0LL;
    *a5 = v16;
    goto LABEL_20;
  }
LABEL_40:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_20:
  if ( v8 && v8 != v10 )
    ZwClose(v8);
  if ( v10 )
    ZwClose(v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v13;
}
