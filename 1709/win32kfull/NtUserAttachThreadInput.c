/*
 * XREFs of NtUserAttachThreadInput @ 0x1C00C8F70
 * Callers:
 *     <none>
 * Callees:
 *     DisassociateShellFrameAppThreads2 @ 0x1C000C188 (DisassociateShellFrameAppThreads2.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

  EnterCrit(0LL, 1LL);
  v6 = PtiFromThreadId(a1);
  v8 = 0LL;
  v9 = v6;
  if ( !v6 )
    goto LABEL_20;
  v10 = PtiFromThreadId(a2);
  v11 = v10;
  if ( !v10 || !*(_QWORD *)(v9 + 432) || !*(_QWORD *)(v10 + 432) )
    goto LABEL_20;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(v9 + 1184) & 0x40000) == 0 )
    {
      if ( (*(_DWORD *)(v10 + 1184) & 0x40000) == 0 )
        goto LABEL_8;
      v17 = v9;
      v18 = v10;
      goto LABEL_19;
    }
    if ( (*(_DWORD *)(v10 + 1184) & 0x40000) == 0 )
    {
      v17 = v10;
      v18 = v9;
LABEL_19:
      DisassociateShellFrameAppThreads2(v18, v17);
      goto LABEL_8;
    }
LABEL_20:
    v16 = 87LL;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(v9 + 1184) & 0x40000) != 0 || (*(_DWORD *)(v10 + 1184) & 0x40000) != 0 )
  {
    v16 = 5LL;
    goto LABEL_15;
  }
LABEL_8:
  v12 = zzzAttachThreadInput(v9, v11, a3 != 0);
  if ( v12 < 0 )
  {
    v16 = RtlNtStatusToDosError(v12);
LABEL_15:
    UserSetLastError(v16, v7);
    goto LABEL_10;
  }
  v8 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v8;
}
