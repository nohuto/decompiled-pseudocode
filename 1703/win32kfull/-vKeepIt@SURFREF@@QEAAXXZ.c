/*
 * XREFs of ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C019590C
 * Callers:
 *     GreReferenceObject @ 0x1C0105B20 (GreReferenceObject.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vKeepIt(SURFREF *this, __int64 a2)
{
  INC_SHARE_REF_CNT(*(_QWORD *)this, a2);
}
