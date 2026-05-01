/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x18018C2E0
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x1800A5D80 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
