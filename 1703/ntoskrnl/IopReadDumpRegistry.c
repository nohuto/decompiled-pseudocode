/*
 * XREFs of IopReadDumpRegistry @ 0x14015A28C
 * Callers:
 *     IoConfigureCrashDump @ 0x140159F78 (IoConfigureCrashDump.c)
 *     IopInitializeCrashDump @ 0x1405BA68C (IopInitializeCrashDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x14044DB84 (IopOpenRegistryKey.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 */

NTSTATUS __fastcall IopReadDumpRegistry(unsigned int *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  char v4; // [rsp+20h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-10h] BYREF
  const wchar_t *v6; // [rsp+38h] [rbp-8h]
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF

  v5 = 8388734;
  v4 = 0;
  v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  result = IopOpenRegistryKey(&Handle, 0LL, &v5, 131097LL, v4);
  if ( result >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( a1[3] )
        IopAutoReboot = *(unsigned int *)((char *)a1 + a1[2]);
      ExFreePoolWithTag(a1, 0);
    }
    if ( a2 && (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( a1[3] )
        *a2 = *(unsigned int *)((char *)a1 + a1[2]);
      ExFreePoolWithTag(a1, 0);
    }
    return ObCloseHandle(Handle, 0);
  }
  return result;
}
