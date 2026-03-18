/*
 * XREFs of MoveObjData @ 0x1C0047124
 * Callers:
 *     Name @ 0x1C004F230 (Name.c)
 *     CopyObject @ 0x1C0050550 (CopyObject.c)
 *     RefOf @ 0x1C0052E00 (RefOf.c)
 *     Store @ 0x1C0052E20 (Store.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

void *__fastcall MoveObjData(_OWORD *a1, _OWORD *a2)
{
  void *result; // rax

  result = a2;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
    return memset(a2, 0, 0x28uLL);
  }
  return result;
}
