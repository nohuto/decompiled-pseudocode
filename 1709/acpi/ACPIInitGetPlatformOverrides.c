/*
 * XREFs of ACPIInitGetPlatformOverrides @ 0x1C00ADDD0
 * Callers:
 *     DriverEntry @ 0x1C00AC84C (DriverEntry.c)
 * Callees:
 *     OSOpenHandle @ 0x1C0087914 (OSOpenHandle.c)
 *     OSGetRegistryValue @ 0x1C008AF4C (OSGetRegistryValue.c)
 *     OSCloseHandle @ 0x1C008F8C8 (OSCloseHandle.c)
 *     ACPIIsSystemStartOptionPresent @ 0x1C00AE358 (ACPIIsSystemStartOptionPresent.c)
 */

__int64 ACPIInitGetPlatformOverrides()
{
  int v0; // ebx
  NTSTATUS v1; // eax
  wchar_t *v2; // rdi
  unsigned __int64 v3; // rax
  const wchar_t *v4; // rcx
  HANDLE KeyHandle; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  P = 0LL;
  v0 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control", 0LL, &KeyHandle);
  if ( v0 >= 0 )
  {
    v1 = OSGetRegistryValue(KeyHandle, L"SystemStartOptions", &P);
    v2 = (wchar_t *)P;
    v0 = v1;
    if ( v1 >= 0 )
    {
      v3 = *((unsigned int *)P + 1);
      if ( (_DWORD)v3 )
      {
        if ( *(_DWORD *)P == 1 && (unsigned int)v3 >= 2 )
        {
          v4 = (const wchar_t *)((char *)P + 8);
          *((_WORD *)P + (v3 >> 1) + 3) = 0;
          if ( wcsstr(v4, L"PCIEXPRESSPOLICY=FORCEDISABLE") )
            AcpiOverrideAttributes |= 0x2000u;
          if ( wcsstr(v2 + 4, L"SBOSCEVALPOLICY=FORCEDISABLE") )
            AcpiOverrideAttributes |= 0x4000u;
          if ( (unsigned __int8)ACPIIsSystemStartOptionPresent(v2 + 4) )
            AcpiOverrideAttributes |= 0x10000u;
          if ( (AcpiOverrideAttributes & 0x10000) == 0 )
            AcpiOverrideAttributes &= ~0x40000u;
        }
        else
        {
          v0 = -1073741788;
        }
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)v0;
}
