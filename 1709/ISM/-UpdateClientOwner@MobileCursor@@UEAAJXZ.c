/*
 * XREFs of ?UpdateClientOwner@MobileCursor@@UEAAJXZ @ 0x180030A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileCursor::UpdateClientOwner(MobileCursor *this)
{
  *((_QWORD *)this + 6) = (unsigned int)++dword_18010EF48;
  return 0LL;
}
