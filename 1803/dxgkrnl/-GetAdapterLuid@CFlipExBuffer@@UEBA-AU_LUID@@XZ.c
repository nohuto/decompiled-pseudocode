/*
 * XREFs of ?GetAdapterLuid@CFlipExBuffer@@UEBA?AU_LUID@@XZ @ 0x1C0017080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CFlipExBuffer::GetAdapterLuid(CFlipExBuffer *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 41);
  return (struct _LUID)a2;
}
