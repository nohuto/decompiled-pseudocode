/*
 * XREFs of PiRearrangeDeviceInstances @ 0x1405F6A14
 * Callers:
 *     PiProcessDriverInstance @ 0x1405F7090 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1401A7780 (ZwQueryKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

void __fastcall PiRearrangeDeviceInstances(HANDLE KeyHandle, int a2, int a3)
{
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  PVOID v8; // rbx
  PVOID v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-59h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-41h] BYREF
  PVOID P; // [rsp+58h] [rbp-31h] BYREF
  ULONG dwFlags; // [rsp+60h] [rbp-29h] BYREF
  _BYTE KeyInformation[48]; // [rsp+68h] [rbp-21h] BYREF
  wchar_t pszDest[12]; // [rsp+98h] [rbp+Fh] BYREF

  P = 0LL;
  ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &dwFlags);
  ppszDestEnd = pszDest;
  RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", a2);
  v6 = ppszDestEnd - pszDest;
  ValueName.MaximumLength = 20;
  if ( (_DWORD)v6 == -1 )
    ValueName.Length = 20;
  else
    ValueName.Length = 2 * v6;
  ValueName.Buffer = pszDest;
  if ( IopGetRegistryValue(KeyHandle, pszDest, 0, &P) < 0 )
  {
    v9 = P;
  }
  else
  {
    ZwDeleteValueKey(KeyHandle, &ValueName);
    LODWORD(v10) = a3;
    ppszDestEnd = pszDest;
    RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v10);
    ValueName.MaximumLength = 20;
    v7 = ppszDestEnd - pszDest;
    if ( (_DWORD)v7 == -1 )
      ValueName.Length = 20;
    else
      ValueName.Length = 2 * v7;
    v8 = P;
    ValueName.Buffer = pszDest;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3));
    ExFreePoolWithTag(v8, 0);
    v9 = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
