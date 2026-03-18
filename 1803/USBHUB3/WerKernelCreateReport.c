/*
 * XREFs of WerKernelCreateReport @ 0x1C0038C18
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C0075900 (TelemetryData_SubmitReport.c)
 * Callees:
 *     WerpCreateRegistryKey @ 0x1C0038720 (WerpCreateRegistryKey.c)
 *     CheckSpaceAvailable @ 0x1C0038AF0 (CheckSpaceAvailable.c)
 */

__int64 __fastcall WerKernelCreateReport(const WCHAR *a1, const WCHAR *a2, HANDLE *a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r9
  const CHAR *v12; // r8
  __int64 v13; // [rsp+20h] [rbp-40h]
  bool v14; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-10h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v14 = 0;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a1[v7] );
  if ( v7 >= 0x10 )
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Key key length exceeded\n", 578LL);
    return 3221225485LL;
  }
  do
    ++v6;
  while ( a2[v6] );
  if ( v6 >= 0x20 )
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Key id length exceeded\n", 586LL);
    return 3221225485LL;
  }
  v9 = WerpCreateRegistryKey(
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\\\LiveKernelReports",
         0x20004u,
         0,
         &Handle,
         0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 604LL;
    v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x for the root\n";
LABEL_14:
    LODWORD(v13) = v9;
    DbgPrintEx(0x96u, 0, v12, v11, v13);
    goto LABEL_28;
  }
  v9 = WerpCreateRegistryKey(Handle, a1, 0x2001Du, 0, &KeyHandle, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 621LL;
LABEL_18:
    v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x for the report type\n";
    goto LABEL_14;
  }
  if ( (unsigned int)CheckSpaceAvailable(KeyHandle) )
  {
    v9 = WerpCreateRegistryKey(KeyHandle, a2, 0x20004u, 0, &v17, &v14);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 649LL;
      v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x for the report id\n";
      goto LABEL_14;
    }
    if ( v14 )
    {
      v9 = WerpCreateRegistryKey(v17, L"Busy", 0x20004u, 1, &v18, 0LL);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 677LL;
        goto LABEL_18;
      }
      ZwFlushKey(KeyHandle);
      v10 = 0;
    }
    else
    {
      v10 = -2147024713;
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Report id %S already exists\n", 659LL, a2);
    }
  }
  else
  {
    v10 = -1073741671;
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR CheckSpaceAvailable returned no more space available\n", 631);
  }
LABEL_28:
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v17 )
  {
    if ( v10 >= 0 )
    {
      *a3 = v17;
    }
    else
    {
      ZwClose(v17);
      v17 = 0LL;
    }
  }
  if ( v18 )
    ZwClose(v18);
  return (unsigned int)v10;
}
