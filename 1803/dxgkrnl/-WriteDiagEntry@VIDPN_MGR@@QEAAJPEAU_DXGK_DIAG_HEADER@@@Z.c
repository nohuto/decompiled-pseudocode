/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000346C
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C00DA978 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0007670 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(DXGDIAGNOSTICS **this, struct _DXGK_DIAG_HEADER *a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx
  DXGDIAGNOSTICS *v6; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+38h] [rbp+10h]

  if ( !a2 || !*((_DWORD *)a2 + 1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a2 && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    *((_OWORD *)a2 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_QWORD *)a2 + 4) = PsGetCurrentThreadId();
    v13 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v13 * KeQueryTimeIncrement();
    v6 = this[63];
    if ( v6 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)this[5] + 1) != CurrentThread )
      {
        v9 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v9);
        v6 = this[63];
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(v6, a2);
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v11 + 24) = a2;
      *(_QWORD *)(v11 + 32) = this;
      WdLogEvent5_WdError(v11);
      return 3221225860LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}
