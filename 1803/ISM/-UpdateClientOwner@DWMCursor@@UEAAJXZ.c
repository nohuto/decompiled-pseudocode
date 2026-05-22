/*
 * XREFs of ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x18008B120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::UpdateClientOwner(DWMCursor *this)
{
  *((_QWORD *)this + 6) = (unsigned int)++dword_1801362F8;
  return 0LL;
}
