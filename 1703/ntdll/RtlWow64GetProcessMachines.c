/*
 * XREFs of RtlWow64GetProcessMachines @ 0x180068580
 * Callers:
 *     sub_180067A7C @ 0x180067A7C (sub_180067A7C.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformationEx @ 0x1800A7D70 (ZwQuerySystemInformationEx.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 */

NTSTATUS __cdecl RtlWow64GetProcessMachines(HANDLE ProcessHandle, PUSHORT ProcessMachine, PUSHORT NativeMachine)
{
  int v5; // r9d
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  USHORT v10; // r10
  USHORT v11; // r8
  __int64 v12; // r11
  ULONG v13; // ecx
  ULONG *v14; // rdx
  ULONG SystemInformation[2]; // [rsp+30h] [rbp+0h] BYREF
  HANDLE InputBuffer; // [rsp+60h] [rbp+30h] BYREF

  InputBuffer = ProcessHandle;
  v5 = ZwQuerySystemInformationEx(SystemSupportedProcessorArchitectures, &InputBuffer, 8u, 0LL, 0, SystemInformation);
  if ( v5 == -1073741789 )
  {
    v6 = SystemInformation[0] + 15LL;
    if ( v6 <= SystemInformation[0] )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = alloca(v7);
    v9 = alloca(v7);
    v5 = ZwQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures,
           &InputBuffer,
           8u,
           SystemInformation,
           SystemInformation[0],
           SystemInformation);
    if ( v5 >= 0 )
    {
      v10 = 0;
      v11 = 0;
      LODWORD(v12) = 0;
      if ( LOWORD(SystemInformation[0]) )
      {
        v13 = SystemInformation[0];
        v14 = SystemInformation;
        do
        {
          if ( (v13 & 0xC0000) == 0x80000 )
            v10 = *(_WORD *)v14;
          if ( (v13 & 0x40000) != 0 )
            v11 = *(_WORD *)v14;
          v12 = (unsigned int)(v12 + 1);
          v14 = &SystemInformation[v12];
          v13 = *v14;
        }
        while ( (unsigned __int16)*v14 );
      }
      *ProcessMachine = v10;
      if ( NativeMachine )
        *NativeMachine = v11;
    }
  }
  return v5;
}
