/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x1400AF604
 * Callers:
 *     MiInvalidatePageFileBitmapsCache @ 0x14007E0DC (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400AC1E0 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, unsigned __int64 a2, int a3)
{
  bool v3; // bl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 j; // r9
  unsigned int v8; // eax
  _QWORD *i; // rax
  unsigned __int64 k; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 m; // r9

  v3 = 0;
  v5 = a2;
  if ( a3 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      for ( i = *(_QWORD **)v6; i; i = (_QWORD *)*i )
        v6 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 16); ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)v6 == v5 )
          break;
        v5 = v6;
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      for ( k = *(_QWORD *)(v6 + 8); k; k = *(_QWORD *)(k + 8) )
        v6 = k;
    }
    else
    {
      for ( m = *(_QWORD *)(a2 + 16); ; m = *(_QWORD *)(v6 + 16) )
      {
        v6 = m & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == v5 )
          break;
        v5 = v6;
      }
    }
    if ( !v6 )
      return;
  }
  v8 = *(_DWORD *)(a2 + 52);
  if ( a3 )
  {
    if ( *(_DWORD *)(v6 + 52) > v8 )
      return;
  }
  else if ( *(_DWORD *)(v6 + 52) < v8 )
  {
    return;
  }
  v11 = a1 + 144;
  RtlRbRemoveNode(a1 + 144, (unsigned __int64 *)a2);
  v12 = *(_QWORD *)v11;
  if ( !*(_QWORD *)v11 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( *(_QWORD *)(a2 + 48) < *(_QWORD *)(v12 + 48) )
    {
      v13 = *(_QWORD *)v12;
      if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_29;
        v13 ^= v12;
      }
      if ( !v13 )
        goto LABEL_29;
      goto LABEL_23;
    }
    v13 = *(_QWORD *)(v12 + 8);
    if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
      break;
LABEL_22:
    if ( !v13 )
      goto LABEL_28;
LABEL_23:
    v12 = v13;
  }
  if ( v13 )
  {
    v13 ^= v12;
    goto LABEL_22;
  }
LABEL_28:
  v3 = 1;
LABEL_29:
  RtlRbInsertNodeEx(v11, v12, v3, a2);
}
