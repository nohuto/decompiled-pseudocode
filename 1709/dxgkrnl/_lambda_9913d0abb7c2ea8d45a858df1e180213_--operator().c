/*
 * XREFs of _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1C01F4814
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F48C8 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v4; // r10d
  __int64 v5; // r11
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  __int64 v8; // rbx

  v2 = 0LL;
  v4 = **(_DWORD **)a1;
  if ( v4 )
  {
    v5 = **(_QWORD **)(a1 + 16);
    while ( (*(_DWORD *)(v5 + 4 * v2) & 0x7FFFFFFF) != (a2 & 0x7FFFFFFF) )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v4 )
        goto LABEL_5;
    }
    *(_DWORD *)(v5 + 4 * v2) |= a2 & 0x80000000;
  }
  else
  {
LABEL_5:
    v6 = **(_DWORD **)(a1 + 24);
    v7 = **(_DWORD **)(a1 + 32);
    if ( v6 >= v7 )
      return 0;
    v8 = **(_QWORD **)(a1 + 16);
    while ( (*(_DWORD *)(v8 + 4LL * v6) & 0x7FFFFFFF) != (a2 & 0x7FFFFFFF) )
    {
      if ( ++v6 >= v7 )
        return 0;
    }
    *(_DWORD *)(v8 + 4LL * v6) |= a2 & 0x80000000;
  }
  return 1;
}
