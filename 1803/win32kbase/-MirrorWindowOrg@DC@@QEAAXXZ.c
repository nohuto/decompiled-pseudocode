/*
 * XREFs of ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0072C18
 * Callers:
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C0025670 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::MirrorWindowOrg(DC *this)
{
  _DWORD *v1; // r8
  int v2; // r9d
  int v3; // eax
  int v4; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  if ( (v1[78] & 1) == 0 )
  {
    v4 = v1[79];
    goto LABEL_5;
  }
  v2 = v1[86];
  if ( v2 )
  {
    v3 = v1[82] * (*((_DWORD *)this + 360) - *((_DWORD *)this + 362) + 1);
    if ( v3 != 0x80000000 || v2 != -1 )
    {
      v4 = v1[79] + v3 / v2;
LABEL_5:
      v1[80] = v4;
    }
  }
}
