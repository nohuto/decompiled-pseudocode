/*
 * XREFs of RtlSplay @ 0x180069120
 * Callers:
 *     RtlEnumerateGenericTable @ 0x180068E30 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x180068FA0 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x1800690A0 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x1800693C0 (RtlDelete.c)
 *     RtlpTpIoLookup @ 0x1800900AC (RtlpTpIoLookup.c)
 *     PfxFindPrefix @ 0x1800E47A0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800E48A0 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x1800F39F0 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlSplay(_QWORD *a1)
{
  _QWORD **v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  while ( (_QWORD *)*a1 != a1 )
  {
    v2 = (_QWORD **)*a1;
    v3 = *(_QWORD **)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) == a1 )
    {
      if ( v3 != v2 )
      {
        if ( (_QWORD **)v3[1] != v2 )
        {
          v11 = (_QWORD *)a1[1];
          v3[2] = v11;
          if ( v11 )
            *v11 = v3;
          v12 = (_QWORD *)a1[2];
          v2[1] = v12;
          if ( v12 )
            *v12 = v2;
          if ( (_QWORD *)*v3 == v3 )
          {
            *a1 = a1;
          }
          else
          {
            *a1 = *v3;
            v17 = 8LL;
            if ( *(_QWORD **)(*v3 + 8LL) != v3 )
              v17 = 16LL;
            *(_QWORD *)(v17 + *v3) = a1;
          }
          a1[1] = v3;
          *v3 = a1;
          a1[2] = v2;
          *v2 = a1;
          continue;
        }
        v5 = (_QWORD *)a1[2];
        v2[1] = v5;
        if ( v5 )
          *v5 = v2;
        v6 = v2[2];
        v3[1] = v6;
        if ( v6 )
          *v6 = v3;
        if ( (_QWORD *)*v3 == v3 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v3;
          v13 = 8LL;
          if ( *(_QWORD **)(*v3 + 8LL) != v3 )
            v13 = 16LL;
          *(_QWORD *)(v13 + *v3) = a1;
        }
        a1[2] = v2;
        v2[2] = v3;
LABEL_20:
        *v2 = a1;
        *v3 = v2;
        continue;
      }
      v7 = (_QWORD *)a1[2];
      v2[1] = v7;
      if ( v7 )
        *v7 = v2;
      a1[2] = v2;
    }
    else
    {
      if ( v3 != v2 )
      {
        if ( (_QWORD **)v3[2] != v2 )
        {
          v14 = (_QWORD *)a1[1];
          v2[2] = v14;
          if ( v14 )
            *v14 = v2;
          v15 = (_QWORD *)a1[2];
          v3[1] = v15;
          if ( v15 )
            *v15 = v3;
          if ( (_QWORD *)*v3 == v3 )
          {
            *a1 = a1;
          }
          else
          {
            *a1 = *v3;
            v16 = 8LL;
            if ( *(_QWORD **)(*v3 + 8LL) != v3 )
              v16 = 16LL;
            *(_QWORD *)(v16 + *v3) = a1;
          }
          a1[1] = v2;
          *v2 = a1;
          a1[2] = v3;
          *v3 = a1;
          continue;
        }
        v8 = v2[1];
        v3[2] = v8;
        if ( v8 )
          *v8 = v3;
        v9 = (_QWORD *)a1[1];
        v2[2] = v9;
        if ( v9 )
          *v9 = v2;
        if ( (_QWORD *)*v3 == v3 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v3;
          v10 = 8LL;
          if ( *(_QWORD **)(*v3 + 8LL) != v3 )
            v10 = 16LL;
          *(_QWORD *)(v10 + *v3) = a1;
        }
        a1[1] = v2;
        v2[1] = v3;
        goto LABEL_20;
      }
      v4 = (_QWORD *)a1[1];
      v2[2] = v4;
      if ( v4 )
        *v4 = v2;
      a1[1] = v2;
    }
    *v2 = a1;
    *a1 = a1;
  }
  return a1;
}
