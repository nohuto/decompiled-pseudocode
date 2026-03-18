/*
 * XREFs of ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C00D51D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall CForegroundInfo::HasForeground(int *this, __int64 a2)
{
  return CInputDest::operator==(this, a2);
}
