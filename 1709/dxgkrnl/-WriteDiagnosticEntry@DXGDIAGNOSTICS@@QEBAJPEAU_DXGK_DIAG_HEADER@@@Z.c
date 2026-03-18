/*
 * XREFs of ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009970
 * Callers:
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0006C38 (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C002ABEC (-WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C0182154 (DxgkWriteUserModeDiagEntry.c)
 * Callees:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009748 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntry(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  __int64 result; // rax

  do
    result = DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(this, a2);
  while ( (_DWORD)result == -1073741267 );
  return result;
}
