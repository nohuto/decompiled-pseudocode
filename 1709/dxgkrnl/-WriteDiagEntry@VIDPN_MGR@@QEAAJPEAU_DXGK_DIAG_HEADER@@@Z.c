/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0006C38
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C00F3D24 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009970 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(DXGDIAGNOSTICS **this, struct _DXGK_DIAG_HEADER *a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+38h] [rbp+10h]

  if ( !a2 || !*((_DWORD *)a2 + 1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2 && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    *((_OWORD *)a2 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_QWORD *)a2 + 4) = PsGetCurrentThreadId();
    v12 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v12 * KeQueryTimeIncrement();
    if ( this[63] )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)this[5] + 1) != CurrentThread )
      {
        v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v8);
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(this[63], a2);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v10 + 24) = a2;
      *(_QWORD *)(v10 + 32) = this;
      WdLogEvent5_WdError(v10);
      return 3221225860LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
}
