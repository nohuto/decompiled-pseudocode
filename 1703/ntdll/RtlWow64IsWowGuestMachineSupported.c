/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x180084FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformationEx @ 0x1800A7D70 (ZwQuerySystemInformationEx.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 */

NTSTATUS __cdecl RtlWow64IsWowGuestMachineSupported(USHORT NativeMachine, PBOOLEAN IsWowGuestMachineSupported)
{
  BOOLEAN v2; // bl
  int v5; // r8d
  NTSTATUS v6; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  __int64 v11; // rdx
  ULONG v12; // eax
  int v13; // ecx
  ULONG SystemInformation[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v5 = 0;
  if ( NativeMachine == 0x8664 )
  {
LABEL_11:
    *IsWowGuestMachineSupported = v2;
    return v5;
  }
  InputBuffer = 0LL;
  v6 = ZwQuerySystemInformationEx(SystemSupportedProcessorArchitectures, &InputBuffer, 8u, 0LL, 0, SystemInformation);
  v5 = v6;
  if ( v6 == -1073741789 )
  {
    v7 = SystemInformation[0] + 15LL;
    if ( v7 <= SystemInformation[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v5 = ZwQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures,
           &InputBuffer,
           8u,
           SystemInformation,
           SystemInformation[0],
           SystemInformation);
    if ( v5 >= 0 )
    {
      LODWORD(v11) = 0;
      if ( LOWORD(SystemInformation[0]) )
      {
        v12 = SystemInformation[0];
        v13 = LOWORD(SystemInformation[0]);
        while ( v13 != NativeMachine || (v12 & 0x60000) != 0x20000 )
        {
          v11 = (unsigned int)(v11 + 1);
          v12 = SystemInformation[v11];
          v13 = (unsigned __int16)v12;
          if ( !(_WORD)v12 )
            goto LABEL_11;
        }
        v2 = 1;
      }
      goto LABEL_11;
    }
  }
  else if ( v6 >= 0 )
  {
    return -1073741823;
  }
  return v5;
}
