/*
 * XREFs of BiCreateKey @ 0x14058AF50
 * Callers:
 *     BiAddStoreFromFile @ 0x140589778 (BiAddStoreFromFile.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BiCreateObject @ 0x140734C70 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x140735038 (BiSetObjectDescription.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x14013C160 (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x14014CF20 (BiZwOpenKey.c)
 *     BiZwClose @ 0x14014CF3C (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x14014CF48 (BiZwSetSecurityObject.c)
 *     BiZwCreateKey @ 0x14014CF64 (BiZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 */

__int64 __fastcall BiCreateKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, unsigned int a4, HANDLE *a5, bool *a6)
{
  const WCHAR *v7; // rax
  unsigned int i; // r14d
  int v10; // ebx
  ACCESS_MASK v11; // r12d
  char v12; // r15
  ULONG v13; // ebx
  void *KeySecurityDescriptor; // rax
  __int64 v15; // r9
  void *v16; // rsi
  __int64 v17; // rdx
  NTSTATUS v18; // ebx
  int v20; // [rsp+20h] [rbp-B8h]
  ULONG v21; // [rsp+44h] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-70h] BYREF
  void *v26; // [rsp+E0h] [rbp+8h]

  v7 = a2;
  for ( i = 0; ; ++i )
  {
    Handle = 0LL;
    RtlInitUnicodeString(&DestinationString, v7);
    v26 = (void *)BiSanitizeHandle(a1);
    a3 |= 0x40000u;
    v10 = 64;
    v11 = a3;
    v12 = 0;
    if ( (a4 & 1) != 0 )
    {
      v10 = 192;
      if ( (a3 & 0x60019) != a3 )
      {
        v11 = 0x40000;
        v12 = 1;
      }
    }
    v13 = v10 | 0x200;
    KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
    v16 = KeySecurityDescriptor;
    if ( KeySecurityDescriptor )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = v26;
      ObjectAttributes.Attributes = v13;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = KeySecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v18 = BiZwCreateKey(&Handle, v11, &ObjectAttributes, v15, v20, (a4 >> 1) & 1, &v21);
      if ( v18 < 0 )
        goto LABEL_14;
      if ( v12 )
      {
        v18 = BiZwSetSecurityObject(Handle, v17, v16);
        if ( v18 < 0 )
          goto LABEL_14;
        v18 = BiZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
        if ( v18 < 0 )
          goto LABEL_14;
        BiZwClose(Handle);
        Handle = KeyHandle;
      }
      if ( a6 )
        *a6 = v21 == 1;
      *a5 = Handle;
LABEL_14:
      if ( v18 >= 0 )
        goto LABEL_15;
      goto LABEL_20;
    }
    v18 = -1073741703;
LABEL_20:
    if ( Handle )
      BiZwClose(Handle);
LABEL_15:
    if ( v16 )
      ExFreePoolWithTag(v16, 0x4B444342u);
    if ( v18 != -1073741443 )
      break;
    __debugbreak();
    a1 = (__int64)v26;
    if ( i >= 5 )
      break;
    v7 = a2;
  }
  return (unsigned int)v18;
}
