/*
 * XREFs of MiGetHighestPteConsumer @ 0x1402344B0
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x14021A4D4 (MiIssueNoPtesBugcheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetHighestPteConsumer(unsigned __int64 *a1)
{
  unsigned int v3; // eax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rsi
  unsigned __int64 v8; // r10
  __int64 v9; // r13
  void **v10; // r14
  char *v11; // r11
  __int64 v12; // r12
  char *i; // rcx
  int v14; // r9d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // [rsp+30h] [rbp+8h]

  *a1 = 0LL;
  if ( (dword_14040010C & 1) == 0 || byte_14038900D == 1 )
    return 0LL;
  v3 = 0;
  v4 = &unk_140389830;
  do
  {
    if ( (_QWORD *)*v4 != v4 )
      break;
    ++v3;
    v4 += 2;
  }
  while ( v3 < 0x10 );
  if ( v3 == 16 || !PsLoadedModuleList )
    return 0LL;
  v5 = (__int64)*(&PsLoadedModuleList + 1);
  v6 = 0LL;
  v7 = 0LL;
  while ( (PVOID *)v5 != &PsLoadedModuleList )
  {
    v8 = 0LL;
    v18 = v6;
    v9 = v5;
    v10 = (void **)&unk_140389830;
    v11 = (char *)&unk_140389830;
    v12 = 16LL;
    do
    {
      for ( i = (char *)*v10; i != v11; i = *(char **)i )
      {
        v14 = *((_DWORD *)i + 16);
        if ( (v14 & 2) == 0 )
        {
          if ( (v15 = *(_QWORD *)(v5 + 48), v16 = *((_QWORD *)i + 10), v16 >= v15)
            && v16 < v15 + *(unsigned int *)(v5 + 64)
            || (v17 = *((_QWORD *)i + 11), v17 >= v15) && v17 < v15 + *(unsigned int *)(v5 + 64) )
          {
            v8 += *((_QWORD *)i + 3);
            *((_DWORD *)i + 16) = v14 | 2;
          }
        }
      }
      v11 += 16;
      v10 += 2;
      --v12;
    }
    while ( v12 );
    v5 = *(_QWORD *)(v5 + 8);
    if ( v8 > v6 )
      v6 = v8;
    if ( v8 <= v18 )
      v9 = v7;
    v7 = v9;
  }
  *a1 = v6;
  return v7;
}
