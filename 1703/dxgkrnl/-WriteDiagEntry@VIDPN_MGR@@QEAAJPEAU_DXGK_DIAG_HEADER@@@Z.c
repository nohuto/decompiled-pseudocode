/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000ABB0
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C00A0940 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C04C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(
        DXGDIAGNOSTICS **this,
        struct _DXGK_DIAG_HEADER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+38h] [rbp+10h]

  if ( !a2 || !*((_DWORD *)a2 + 1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a2 && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    *((_OWORD *)a2 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_QWORD *)a2 + 4) = PsGetCurrentThreadId();
    v17 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v17 * KeQueryTimeIncrement();
    if ( this[62] )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)this[5] + 1) != CurrentThread )
      {
        v13 = WdLogNewEntry5_WdAssertion(CurrentThread, v7, v9, v10);
        WdLogEvent5_WdAssertion(v13);
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(this[62], a2);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v15 + 24) = a2;
      *(_QWORD *)(v15 + 32) = this;
      WdLogEvent5_WdError(v15);
      return 3221225860LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v16 + 24) = a2;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
}
