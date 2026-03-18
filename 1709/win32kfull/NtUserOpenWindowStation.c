/*
 * XREFs of NtUserOpenWindowStation @ 0x1C00D8890
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _OpenWindowStation @ 0x1C00D9E44 (_OpenWindowStation.c)
 *     RtlStringCbPrintfW @ 0x1C01EF360 (RtlStringCbPrintfW.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int128 *v5; // rdx
  ULONG64 v6; // rcx
  __int128 v7; // xmm6
  __int64 v8; // rax
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  NTSTATUS ProcessLuid; // eax
  bool v13; // [rsp+30h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+38h] [rbp-B0h]
  __int128 v15; // [rsp+60h] [rbp-88h]
  __int64 v16; // [rsp+100h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+108h] [rbp+20h]

  v16 = 0LL;
  v13 = 1;
  v4 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (__int128 *)a1;
  v6 = a1 + 48;
  if ( a1 + 48 < a1 || v6 > MmUserProbeAddress )
    v5 = (__int128 *)MmUserProbeAddress;
  v15 = *v5;
  v7 = v5[1];
  v8 = -PsGetCurrentProcessWow64Process(v6);
  v17 = (-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  v9 = v7;
  if ( ((v8 != 0 ? 0 : 3) & (unsigned int)v7) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = MmUserProbeAddress;
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_BYTE *)v9 = *(_BYTE *)v9;
  *(_BYTE *)(v9 + 15) = *(_BYTE *)(v9 + 15);
  *(_OWORD *)Address = *(_OWORD *)v7;
  if ( *((_QWORD *)&v15 + 1) )
  {
    if ( Address[1] )
    {
      v9 = 58LL;
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          ProcessLuid = GetProcessLuid(0LL, &v16);
          v13 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v16), v16);
            RtlInitUnicodeString((PUNICODE_STRING)v7, (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v13 )
    v4 = OpenWindowStation(a1, a2);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v4;
}
