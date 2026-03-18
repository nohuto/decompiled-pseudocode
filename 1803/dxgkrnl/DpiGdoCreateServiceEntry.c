/*
 * XREFs of DpiGdoCreateServiceEntry @ 0x1C020E42C
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C020E84C (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     wcsrchr_0 @ 0x1C001B029 (wcsrchr_0.c)
 */

__int64 __fastcall DpiGdoCreateServiceEntry(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  wchar_t *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Video");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v6 = (wchar_t *)v4;
  if ( v4 >= 0 )
  {
    v6 = wcsrchr_0(*(const wchar_t **)(a1 + 8), 0x5Cu) + 1;
    RtlInitUnicodeString(&ValueName, L"Service");
    v8 = -1LL;
    do
      ++v8;
    while ( v6[v8] );
    LODWORD(v6) = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v6, 2 * v8 + 2);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v6;
}
