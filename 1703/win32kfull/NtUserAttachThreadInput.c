/*
 * XREFs of NtUserAttachThreadInput @ 0x1C00B33F0
 * Callers:
 *     <none>
 * Callees:
 *     DisassociateShellFrameAppThreads2 @ 0x1C0006F28 (DisassociateShellFrameAppThreads2.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx

  EnterCrit(0LL, 1LL);
  v6 = PtiFromThreadId(a1);
  v7 = 0LL;
  v8 = v6;
  if ( !v6 )
    goto LABEL_17;
  v9 = PtiFromThreadId(a2);
  v10 = v9;
  if ( !v9 || !*(_QWORD *)(v8 + 408) || !*(_QWORD *)(v9 + 408) )
    goto LABEL_17;
  if ( a3 )
  {
    if ( (*(_DWORD *)(v8 + 1096) & 0x40000) != 0 || (*(_DWORD *)(v9 + 1096) & 0x40000) != 0 )
    {
      v17 = 5LL;
LABEL_16:
      UserSetLastError(v17);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v8 + 1096) & 0x40000) != 0 && (*(_DWORD *)(v9 + 1096) & 0x40000) != 0 )
  {
LABEL_17:
    v17 = 87LL;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v8 + 1096) & 0x40000) != 0 )
  {
    v18 = v9;
    v19 = v8;
  }
  else
  {
    if ( (*(_DWORD *)(v9 + 1096) & 0x40000) == 0 )
      goto LABEL_9;
    v18 = v8;
    v19 = v9;
  }
  DisassociateShellFrameAppThreads2(v19, v18);
LABEL_9:
  v11 = zzzAttachThreadInput(v8, v10, a3 != 0);
  if ( v11 < 0 )
  {
    v17 = RtlNtStatusToDosError(v11);
    goto LABEL_16;
  }
  v7 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v7;
}
