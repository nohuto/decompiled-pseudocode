/*
 * XREFs of RtlWow64GetProcessMachines @ 0x18007BFC0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_180077824 @ 0x180077824 (sub_180077824.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformationEx @ 0x18009D5D0 (ZwQuerySystemInformationEx.c)
 *     __chkstk @ 0x18009F810 (__chkstk.c)
 */

NTSTATUS __cdecl RtlWow64GetProcessMachines(HANDLE ProcessHandle, PUSHORT ProcessMachine, PUSHORT NativeMachine)
{
  int v5; // r9d
  USHORT v6; // cx
  USHORT v7; // dx
  ULONG *p_ReturnLength; // rbx
  ULONG v10; // r8d
  __int64 v11; // rsi
  USHORT v12; // r10
  USHORT v13; // r11
  struct _TEB *v14; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  void *v20; // rsp
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
    v14 = NtCurrentTeb();
    WowTebOffset = v14->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v14 = (struct _TEB *)((char *)v14 + WowTebOffset);
    if ( (_DWORD)v14 == LODWORD(v14->NtTib.SubSystemTib) )
      v16 = (_WORD *)LODWORD(v14->glDispatchTable[137]);
    else
      v16 = v14->TlsSlots[10];
    if ( v16 )
    {
      v6 = v16[17];
      if ( v6 )
      {
        if ( v16[16] )
        {
          v7 = v16[16];
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
  v5 = ZwQuerySystemInformationEx(
         SystemSupportedProcessorArchitectures,
         &InputBuffer,
         8u,
         SystemInformation,
         0x10u,
         &ReturnLength);
  if ( v5 == -1073741789 )
  {
    v17 = ReturnLength + 15LL;
    if ( v17 <= ReturnLength )
      v17 = 0xFFFFFFFFFFFFFF0LL;
    v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
    v19 = alloca(v18);
    v20 = alloca(v18);
    p_ReturnLength = &ReturnLength;
    v5 = ZwQuerySystemInformationEx(
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
    for ( LODWORD(v11) = 0; (_WORD)v10; v10 = p_ReturnLength[v11] )
    {
      v12 = v10;
      v13 = v10;
      if ( (v10 & 0xC0000) == 0x80000 )
        v12 = v10;
      else
        v13 = v6;
      v6 = v13;
      if ( (v10 & 0x40000) == 0 )
        v12 = v7;
      v11 = (unsigned int)(v11 + 1);
      v7 = v12;
    }
    goto LABEL_4;
  }
  return v5;
}
