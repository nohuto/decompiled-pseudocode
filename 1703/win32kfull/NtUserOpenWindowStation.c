/*
 * XREFs of NtUserOpenWindowStation @ 0x1C0010560
 * Callers:
 *     <none>
 * Callees:
 *     _OpenWindowStation @ 0x1C0011B10 (_OpenWindowStation.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     RtlStringCbPrintfW @ 0x1C01E3350 (RtlStringCbPrintfW.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int128 *v6; // r8
  unsigned __int64 v7; // rcx
  __int128 v8; // xmm6
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  volatile void *Address[2]; // [rsp+30h] [rbp-A8h]
  __int128 v18; // [rsp+58h] [rbp-80h]
  int v19; // [rsp+F0h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+F4h] [rbp+1Ch]
  unsigned __int64 v21; // [rsp+F8h] [rbp+20h]

  EnterCrit(0LL, 1LL);
  v6 = (__int128 *)a1;
  v7 = a1 + 48;
  if ( a1 + 48 < a1 || v7 > W32UserProbeAddress )
    v6 = (__int128 *)W32UserProbeAddress;
  v18 = *v6;
  v8 = v6[1];
  v9 = -PsGetCurrentProcessWow64Process(v7, v4, v6, v5);
  v21 = (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  v10 = (_BYTE *)v8;
  if ( ((v9 != 0 ? 0 : 3) & (unsigned int)v8) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)v8 >= W32UserProbeAddress )
    v10 = (_BYTE *)W32UserProbeAddress;
  *v10 = *v10;
  v10[15] = v10[15];
  *(_OWORD *)Address = *(_OWORD *)v8;
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( Address[1] )
    {
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          GetProcessLuid(0LL, &v19);
          RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Address[1], 0x3AuLL, L"Service-0x%x-%x$", v20, v19);
          RtlInitUnicodeString((PUNICODE_STRING)v8, (PCWSTR)Address[1]);
        }
      }
    }
  }
  v11 = OpenWindowStation(a1, a2);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v11;
}
