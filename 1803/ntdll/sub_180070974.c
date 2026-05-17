/*
 * XREFs of sub_180070974 @ 0x180070974
 * Callers:
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     sub_180070890 @ 0x180070890 (sub_180070890.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180070974(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  if ( a1 == a2
    || *(_DWORD *)(a2 + 56) == 9 && (*(_DWORD *)(a2 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)a2 - 56LL) & 0x20) != 0) )
  {
    return 1;
  }
  v3 = *(_QWORD **)(a1 + 40);
  if ( v3 )
  {
    v4 = v3;
    while ( 1 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4[1] == a2 )
        break;
      if ( v4 == v3 )
        return 0;
    }
    return 1;
  }
  return 0;
}
