/*
 * XREFs of sub_18002235C @ 0x18002235C
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_18007F390 @ 0x18007F390 (sub_18007F390.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall sub_18002235C(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  BOOLEAN v3; // bl
  unsigned int v4; // r10d
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  BOOLEAN result; // al

  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 128) = v2;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  Root = (unsigned __int64)stru_18015D238.Root;
  if ( ((__int64)stru_18015D238.Min & 1) != 0 )
  {
    if ( stru_18015D238.Root )
      Root = (unsigned __int64)&stru_18015D238 ^ (unsigned __int64)stru_18015D238.Root;
    else
      Root = 0LL;
  }
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( v2 < *(_DWORD *)(Root - 96) || v2 <= *(_DWORD *)(Root - 96) && v4 < *(_DWORD *)(Root - 160) )
      {
        v8 = *(_QWORD *)Root;
        if ( ((__int64)stru_18015D238.Min & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          v8 ^= Root;
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
        v8 = *(_QWORD *)(Root + 8);
        if ( ((__int64)stru_18015D238.Min & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_13;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_13:
          v7 = 1;
          break;
        }
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&stru_18015D238, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)(a1 + 224));
  v9 = (unsigned __int64)stru_18015D228.Root;
  if ( ((__int64)stru_18015D228.Min & 1) != 0 )
  {
    if ( stru_18015D228.Root )
      v9 = (unsigned __int64)&stru_18015D228 ^ (unsigned __int64)stru_18015D228.Root;
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
        if ( ((__int64)stru_18015D228.Min & 1) != 0 )
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
        if ( ((__int64)stru_18015D228.Min & 1) != 0 )
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
  result = RtlRbInsertNodeEx(&stru_18015D228, (PRTL_BALANCED_NODE)v9, v3, (PRTL_BALANCED_NODE)(a1 + 200));
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
