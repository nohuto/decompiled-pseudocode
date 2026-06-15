/*
 * XREFs of ?Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z @ 0x1800D59D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAecAttributes::Clone(CAecAttributes *this, struct CStreamGroupAttributes **a2)
{
  return CAecAttributes::CreateInstance(*((_QWORD *)this + 2), *((unsigned int *)this + 6));
}
