/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C002AB78
 * Callers:
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C01C6780 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0009A80 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICSWITHMUTEX::ReadDiagnostics(
        DXGDIAGNOSTICSWITHMUTEX *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  DXGFASTMUTEX *v5; // rcx
  __int64 v7; // rax
  unsigned int Diagnostics; // ebx

  v5 = (DXGFASTMUTEX *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    DXGFASTMUTEX::Acquire(v5);
    Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(this, a2, a3);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 5));
    return Diagnostics;
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdWarning(v7);
    return 3223193060LL;
  }
}
