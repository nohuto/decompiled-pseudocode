/*
 * XREFs of ?SetClipRect@DWMCursor@@UEAAJPEBUtagRECT@@@Z @ 0x18008B4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::SetClipRect(struct tagRECT *this, const struct tagRECT *a2)
{
  this[7] = *a2;
  return (*(__int64 (__fastcall **)(struct tagRECT *))(*(_QWORD *)&this->left + 64LL))(this);
}
