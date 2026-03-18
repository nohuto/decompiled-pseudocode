/*
 * XREFs of DeleteNodeFromTree @ 0x14004C96C
 * Callers:
 *     RtlDeleteElementGenericTableAvlEx @ 0x14004C910 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     RebalanceNode @ 0x14004CCF0 (RebalanceNode.c)
 */

char __fastcall DeleteNodeFromTree(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  char v7; // dl
  _BYTE *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _BYTE *v11; // rsi
  _QWORD *v12; // rax
  bool v13; // zf
  _QWORD *i; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax

  v2 = *(_QWORD **)(a2 + 8);
  if ( v2 && (v5 = *(_QWORD **)(a2 + 16)) != 0LL )
  {
    if ( *(char *)(a2 + 24) < 0 )
    {
      do
      {
        v5 = v2;
        v2 = (_QWORD *)v2[2];
      }
      while ( v2 );
    }
    else
    {
      for ( i = (_QWORD *)v5[1]; i; i = (_QWORD *)i[1] )
        v5 = i;
    }
  }
  else
  {
    v5 = (_QWORD *)a2;
  }
  v6 = v5[1];
  v7 = -1;
  v8 = (_BYTE *)*v5;
  if ( v6 )
  {
    if ( *((_QWORD **)v8 + 1) == v5 )
    {
      *((_QWORD *)v8 + 1) = v6;
    }
    else
    {
      *((_QWORD *)v8 + 2) = v6;
      v7 = 1;
    }
    v10 = (_QWORD *)v5[1];
  }
  else
  {
    v9 = v5[2];
    if ( *((_QWORD **)v8 + 1) == v5 )
    {
      *((_QWORD *)v8 + 1) = v9;
    }
    else
    {
      *((_QWORD *)v8 + 2) = v9;
      v7 = 1;
    }
    v10 = (_QWORD *)v5[2];
    if ( !v10 )
      goto LABEL_7;
  }
  *v10 = *v5;
LABEL_7:
  *(_BYTE *)(a1 + 24) = 0;
  v11 = (_BYTE *)*v5;
  while ( 1 )
  {
    LOBYTE(v12) = v11[24];
    if ( (_BYTE)v12 == v7 )
    {
      v11[24] = 0;
      goto LABEL_15;
    }
    if ( !(_BYTE)v12 )
      break;
    LODWORD(v12) = RebalanceNode(v11);
    if ( (_DWORD)v12 )
      goto LABEL_12;
    v11 = *(_BYTE **)v11;
LABEL_15:
    v7 = 1;
    v13 = *(_QWORD *)(*(_QWORD *)v11 + 16LL) == (_QWORD)v11;
    v11 = *(_BYTE **)v11;
    if ( !v13 )
      v7 = -1;
  }
  v11[24] = -v7;
  if ( *(_BYTE *)(a1 + 24) )
    --*(_DWORD *)(a1 + 48);
LABEL_12:
  if ( (_QWORD *)a2 != v5 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *((_OWORD *)v5 + 1) = *(_OWORD *)(a2 + 16);
    v15 = *v5;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 )
      *(_QWORD *)(v15 + 8) = v5;
    else
      *(_QWORD *)(v15 + 16) = v5;
    v16 = (_QWORD *)v5[1];
    if ( v16 )
      *v16 = v5;
    v12 = (_QWORD *)v5[2];
    if ( v12 )
      *v12 = v5;
  }
  return (char)v12;
}
