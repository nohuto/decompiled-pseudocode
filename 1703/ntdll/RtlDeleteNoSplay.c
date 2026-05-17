/*
 * XREFs of RtlDeleteNoSplay @ 0x180066000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800660A8 @ 0x1800660A8 (sub_1800660A8.c)
 *     RtlSubtreePredecessor @ 0x1800661D0 (RtlSubtreePredecessor.c)
 */

void __fastcall RtlDeleteNoSplay(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rax

  if ( a1[1] && a1[2] )
  {
    v7 = RtlSubtreePredecessor();
    if ( (_QWORD *)*a1 == a1 )
      *a2 = v7;
    sub_1800660A8(v7, a1);
  }
  v4 = (_QWORD *)a1[1];
  if ( v4 )
    goto LABEL_4;
  if ( a1[2] )
  {
    v4 = (_QWORD *)a1[2];
LABEL_4:
    v5 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      *v4 = v4;
      *a2 = (__int64)v4;
    }
    else
    {
      v8 = v5 + 1;
      if ( (_QWORD *)v5[1] != a1 )
        v8 = v5 + 2;
      *v8 = v4;
      *v4 = *a1;
    }
    return;
  }
  v6 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
  {
    *a2 = 0LL;
  }
  else
  {
    v9 = v6 + 1;
    if ( (_QWORD *)v6[1] != a1 )
      v9 = v6 + 2;
    *v9 = 0LL;
  }
}
