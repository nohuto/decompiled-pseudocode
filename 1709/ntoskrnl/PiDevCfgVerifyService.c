/*
 * XREFs of PiDevCfgVerifyService @ 0x1405A2558
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PipOpenServiceEnumKeys @ 0x14051A2F0 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgVerifyService(PCWSTR SourceString, bool *a2, _DWORD *a3)
{
  int v3; // r12d
  unsigned int v6; // r15d
  NTSTATUS RegistryValue; // ebx
  PVOID v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  LOBYTE(v3) = 0;
  P = 0LL;
  v6 = 4;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 0x20019u, &Handle, 0LL, 0);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &P);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      else
        RegistryValue = -1073741823;
      ExFreePoolWithTag(P, 0);
      if ( RegistryValue >= 0 )
      {
        if ( (v3 & 0xB) == 0 )
          goto LABEL_25;
        RegistryValue = IopGetRegistryValue(Handle, L"Start", 0, &P);
        if ( RegistryValue < 0 )
          goto LABEL_22;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        else
          RegistryValue = -1073741823;
        ExFreePoolWithTag(P, 0);
        if ( RegistryValue < 0 )
          goto LABEL_22;
        if ( v6 > 4 )
        {
LABEL_25:
          RegistryValue = -1073741823;
          goto LABEL_22;
        }
        if ( a2 )
          *a2 = v6 == 0;
        if ( a3 && IopGetRegistryValue(Handle, L"PnpFlags", 0, &P) >= 0 )
        {
          v9 = P;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            *a3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
          ExFreePoolWithTag(v9, 0);
        }
      }
    }
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValue;
}
