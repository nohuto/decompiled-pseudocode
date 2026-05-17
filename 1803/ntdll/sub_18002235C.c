/*
 * XREFs of sub_18002235C @ 0x18002235C
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_18007F390 @ 0x18007F390 (sub_18007F390.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 */

char __fastcall sub_18002235C(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  bool v3; // bl
  unsigned int v4; // r10d
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  char result; // al

  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 128) = v2;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  v6 = qword_18015D238;
  if ( (qword_18015D240 & 1) != 0 )
  {
    if ( qword_18015D238 )
      v6 = (unsigned __int64)&qword_18015D238 ^ qword_18015D238;
    else
      v6 = 0LL;
  }
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( v2 < *(_DWORD *)(v6 - 96) || v2 <= *(_DWORD *)(v6 - 96) && v4 < *(_DWORD *)(v6 - 160) )
      {
        v8 = *(_QWORD *)v6;
        if ( (qword_18015D240 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_19:
          v7 = 0;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (qword_18015D240 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_13;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_13:
          v7 = 1;
          break;
        }
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)&qword_18015D238, v6, v7, a1 + 224);
  v9 = qword_18015D228;
  if ( (qword_18015D230 & 1) != 0 )
  {
    if ( qword_18015D228 )
      v9 = (unsigned __int64)&qword_18015D228 ^ qword_18015D228;
    else
      v9 = 0LL;
  }
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 48) < *(_QWORD *)(v9 - 152) )
      {
        v10 = *(_QWORD *)v9;
        if ( (qword_18015D230 & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v9;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( (qword_18015D230 & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_30;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_30:
          v3 = 1;
          break;
        }
      }
      v9 = v10;
    }
  }
  result = RtlRbInsertNodeEx((unsigned __int64)&qword_18015D228, v9, v3, a1 + 200);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
