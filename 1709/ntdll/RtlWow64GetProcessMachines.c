/*
 * XREFs of RtlWow64GetProcessMachines @ 0x180016520
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     LdrpGetModuleName @ 0x1800170B8 (LdrpGetModuleName.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A2B90 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800A4DD0 (_alloca_probe.c)
 */

NTSTATUS __cdecl RtlWow64GetProcessMachines(HANDLE ProcessHandle, PUSHORT ProcessMachine, PUSHORT NativeMachine)
{
  int v5; // r10d
  USHORT v6; // cx
  USHORT v7; // dx
  ULONG *p_ReturnLength; // rbx
  ULONG v10; // r8d
  __int64 v11; // r11
  USHORT *v12; // r9
  struct _TEB *v13; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  ULONG ReturnLength; // [rsp+30h] [rbp+0h] BYREF
  HANDLE InputBuffer; // [rsp+38h] [rbp+8h] BYREF
  _BYTE SystemInformation[16]; // [rsp+40h] [rbp+10h] BYREF

  InputBuffer = ProcessHandle;
  v5 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    if ( !NtCurrentTeb()->WowTebOffset )
    {
      v6 = 0;
      v7 = -31132;
      goto LABEL_4;
    }
    v13 = NtCurrentTeb();
    WowTebOffset = v13->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v13 = (struct _TEB *)((char *)v13 + WowTebOffset);
    if ( (_DWORD)v13 == LODWORD(v13->NtTib.SubSystemTib) )
      v15 = (_WORD *)LODWORD(v13->glDispatchTable[137]);
    else
      v15 = v13->TlsSlots[10];
    if ( v15 )
    {
      v6 = v15[17];
      if ( v6 )
      {
        if ( v15[16] )
        {
          v7 = v15[16];
LABEL_4:
          *ProcessMachine = v6;
          if ( NativeMachine )
            *NativeMachine = v7;
          return v5;
        }
      }
    }
  }
  ReturnLength = 16;
  p_ReturnLength = (ULONG *)SystemInformation;
  v5 = NtQuerySystemInformationEx(
         SystemSupportedProcessorArchitectures,
         &InputBuffer,
         8u,
         SystemInformation,
         0x10u,
         &ReturnLength);
  if ( v5 == -1073741789 )
  {
    v16 = ReturnLength + 15LL;
    if ( v16 <= ReturnLength )
      v16 = 0xFFFFFFFFFFFFFF0LL;
    v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
    v18 = alloca(v17);
    v19 = alloca(v17);
    p_ReturnLength = &ReturnLength;
    v5 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures,
           &InputBuffer,
           8u,
           &ReturnLength,
           ReturnLength,
           &ReturnLength);
  }
  if ( v5 >= 0 )
  {
    v10 = *p_ReturnLength;
    v6 = 0;
    v7 = 0;
    LODWORD(v11) = 0;
    if ( (unsigned __int16)*p_ReturnLength )
    {
      v12 = (USHORT *)p_ReturnLength;
      do
      {
        if ( (v10 & 0xC0000) == 0x80000 )
          v6 = *v12;
        if ( (v10 & 0x40000) != 0 )
          v7 = *v12;
        v11 = (unsigned int)(v11 + 1);
        v12 = (USHORT *)&p_ReturnLength[v11];
        v10 = *(_DWORD *)v12;
      }
      while ( (unsigned __int16)*(_DWORD *)v12 );
    }
    goto LABEL_4;
  }
  return v5;
}
