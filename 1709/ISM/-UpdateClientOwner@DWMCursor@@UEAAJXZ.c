/*
 * XREFs of ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x180026CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::UpdateClientOwner(DWMCursor *this)
{
  *((_QWORD *)this + 7) = (unsigned int)++dword_18010EF38;
  return 0LL;
}
