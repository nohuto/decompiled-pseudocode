/*
 * XREFs of WheapCommitPolicy @ 0x140763548
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x14028A9A8 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x14058C9E0 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x140590C30 (RtlCheckRegistryKey.c)
 *     RtlCreateRegistryKey @ 0x1405F2820 (RtlCreateRegistryKey.c)
 *     WheapPfaReset @ 0x1407640B0 (WheapPfaReset.c)
 */

__int64 WheapCommitPolicy()
{
  NTSTATUS RegistryKey; // ebx
  char v1; // bp
  _BYTE *v2; // rdi
  unsigned int v3; // esi
  wchar_t **i; // r14

  RegistryKey = RtlCheckRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  if ( RegistryKey < 0 )
  {
    RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA");
    if ( RegistryKey >= 0 )
      RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  }
  if ( RegistryKey >= 0 )
  {
    v1 = 0;
    v2 = WheaRegPolicyTableChanged;
    v3 = 0;
    for ( i = &WheaRegPolicyTable; ; i += 3 )
    {
      if ( *v2 )
      {
        v1 = 1;
        RegistryKey = RtlWriteRegistryValue(2u, L"WHEA\\Policy", *i, 4u, i[1], 4u);
        if ( RegistryKey < 0 )
          break;
      }
      ++v3;
      ++v2;
      if ( v3 >= 7 )
      {
        if ( v1 )
          WheapPfaReset();
        return (unsigned int)RegistryKey;
      }
    }
  }
  return (unsigned int)RegistryKey;
}
