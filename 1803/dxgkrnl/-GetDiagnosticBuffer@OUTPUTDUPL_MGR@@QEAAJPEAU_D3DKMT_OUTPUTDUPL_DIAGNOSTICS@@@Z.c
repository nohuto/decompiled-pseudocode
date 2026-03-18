/*
 * XREFs of ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C01C95A8
 * Callers:
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01CD60C (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C0035A90 (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     ?GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z @ 0x1C01C9618 (-GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C01C9F0C (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDiagnosticBuffer(
        OUTPUTDUPL_MGR **this,
        struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  OUTPUTDUPL_MGR *v5; // rcx
  unsigned int DiagnosticBufferSize; // eax
  DXGDIAGNOSTICSWITHMUTEX *v7; // rcx
  unsigned int *v8; // r8

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  if ( *(_DWORD *)a2 )
    v5 = this[7];
  else
    v5 = this[8];
  if ( v5 )
  {
    DiagnosticBufferSize = OUTPUTDUPL_MGR::GetDiagnosticBufferSize(v5, *(_DWORD *)a2);
    if ( *v8 < DiagnosticBufferSize )
    {
      *v8 = DiagnosticBufferSize;
      return 1075707914LL;
    }
    DXGDIAGNOSTICSWITHMUTEX::ReadDiagnostics(v7, (unsigned __int8 *)a2 + 8, v8);
  }
  else
  {
    *((_DWORD *)a2 + 1) = 0;
  }
  return 0LL;
}
