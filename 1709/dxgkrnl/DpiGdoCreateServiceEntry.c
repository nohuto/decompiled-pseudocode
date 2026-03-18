/*
 * XREFs of DpiGdoCreateServiceEntry @ 0x1C010F754
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C0110C48 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     wcsrchr_0 @ 0x1C0014FDD (wcsrchr_0.c)
 */

__int64 __fastcall DpiGdoCreateServiceEntry(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  wchar_t *v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // rax
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
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = v6;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    v6 = wcsrchr_0(*(const wchar_t **)(a1 + 8), 0x5Cu) + 1;
    RtlInitUnicodeString(&ValueName, L"Service");
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    LODWORD(v6) = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v6, 2 * v7 + 2);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v6;
}
