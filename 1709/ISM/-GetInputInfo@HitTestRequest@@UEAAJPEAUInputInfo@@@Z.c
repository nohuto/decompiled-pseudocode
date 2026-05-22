/*
 * XREFs of ?GetInputInfo@HitTestRequest@@UEAAJPEAUInputInfo@@@Z @ 0x180022E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HitTestRequest::GetInputInfo(HitTestRequest *this, struct InputInfo *a2)
{
  __int64 result; // rax
  _OWORD *v3; // rcx
  __int128 v4; // xmm1

  result = 22LL;
  v3 = (_OWORD *)((char *)this + 40);
  do
  {
    *(_OWORD *)a2 = *v3;
    *((_OWORD *)a2 + 1) = v3[1];
    *((_OWORD *)a2 + 2) = v3[2];
    *((_OWORD *)a2 + 3) = v3[3];
    *((_OWORD *)a2 + 4) = v3[4];
    *((_OWORD *)a2 + 5) = v3[5];
    *((_OWORD *)a2 + 6) = v3[6];
    a2 = (struct InputInfo *)((char *)a2 + 128);
    v4 = v3[7];
    v3 += 8;
    *((_OWORD *)a2 - 1) = v4;
    --result;
  }
  while ( result );
  *(_OWORD *)a2 = *v3;
  *((_OWORD *)a2 + 1) = v3[1];
  return result;
}
