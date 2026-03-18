/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C003A69C
 * Callers:
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C01ACD28 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0036810 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICSWITHMUTEX::ReadDiagnostics(
        DXGDIAGNOSTICSWITHMUTEX *this,
        unsigned __int8 *a2,
        unsigned int *a3,
        __int64 a4)
{
  DXGFASTMUTEX *v6; // rcx
  __int64 v8; // rax
  unsigned int Diagnostics; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v6 = (DXGFASTMUTEX *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    DXGFASTMUTEX::Acquire(v6);
    Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(this, a2, a3);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 5), v11, v12, v13);
    return Diagnostics;
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(0LL, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdWarning(v8);
    return 3223193060LL;
  }
}
