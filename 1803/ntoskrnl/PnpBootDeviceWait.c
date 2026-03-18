/*
 * XREFs of PnpBootDeviceWait @ 0x14017973C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     HeadlessKernelAddLogEntry @ 0x140160D84 (HeadlessKernelAddLogEntry.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x1406343E4 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PnpBootDeviceWait(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, UNICODE_STRING *),
        __int64 a3)
{
  unsigned int v6; // ebx
  int RegistryValue; // esi
  int v8; // edi
  int v9; // eax
  ULONG_PTR v10; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-10h] BYREF
  const wchar_t *v14; // [rsp+48h] [rbp-8h]
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF
  PVOID P; // [rsp+98h] [rbp+48h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v13 = 7209068;
  v14 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v6 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, &v13, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v6 < 0xC8 )
        {
          v6 = 0;
        }
        else if ( v6 > 0x2BF20 )
        {
          v6 = 180000;
        }
      }
      else
      {
        RegistryValue = -1073741823;
      }
    }
    ZwClose(Handle);
  }
  v8 = 0;
  P = (PVOID)-2000000LL;
  if ( RegistryValue >= 0 )
    v8 = v6;
  while ( 1 )
  {
    RtlFreeAnsiString(&DestinationString);
    v9 = a2(a1, a3, &DestinationString);
    v10 = v9;
    if ( v9 >= 0 )
      break;
    if ( v8 <= 0 )
    {
      HeadlessKernelAddLogEntry();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&DestinationString, v10, 0LL, 0LL);
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
    v8 -= 200;
  }
  RtlFreeAnsiString(&DestinationString);
  return 0LL;
}
