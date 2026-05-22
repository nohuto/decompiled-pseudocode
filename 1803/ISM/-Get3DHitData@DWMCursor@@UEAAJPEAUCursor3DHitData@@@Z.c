/*
 * XREFs of ?Get3DHitData@DWMCursor@@UEAAJPEAUCursor3DHitData@@@Z @ 0x18008B620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::Get3DHitData(DWMCursor *this, struct Cursor3DHitData *a2)
{
  _OWORD *v2; // rcx
  _OWORD *v3; // rdx
  __int64 result; // rax

  v2 = (_OWORD *)((char *)this + 160);
  *(_OWORD *)a2 = *v2;
  *((_OWORD *)a2 + 1) = v2[1];
  *((_OWORD *)a2 + 2) = v2[2];
  *((_OWORD *)a2 + 3) = v2[3];
  *((_OWORD *)a2 + 4) = v2[4];
  *((_OWORD *)a2 + 5) = v2[5];
  *((_OWORD *)a2 + 6) = v2[6];
  v3 = (_OWORD *)((char *)a2 + 128);
  *(v3 - 1) = v2[7];
  *v3 = v2[8];
  v3[1] = v2[9];
  result = 0LL;
  v3[2] = v2[10];
  return result;
}
