/*
 * XREFs of ?WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C002ABEC
 * Callers:
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01C7388 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009970 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICSWITHMUTEX::WriteDiagnosticEntry(
        DXGDIAGNOSTICSWITHMUTEX *this,
        struct _DXGK_DIAG_HEADER *a2,
        __int64 a3)
{
  DXGFASTMUTEX *v5; // rcx
  __int64 v6; // rax
  unsigned int v8; // ebx

  v5 = (DXGFASTMUTEX *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    DXGFASTMUTEX::Acquire(v5);
    v8 = DXGDIAGNOSTICS::WriteDiagnosticEntry(this, a2);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 5));
    return v8;
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdWarning(v6);
    return 3223193060LL;
  }
}
