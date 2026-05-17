/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x180108120
 * Callers:
 *     sub_180058EC0 @ 0x180058EC0 (sub_180058EC0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     sub_18004865C @ 0x18004865C (sub_18004865C.c)
 *     TpSetPoolMaxThreads @ 0x180059670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800596F0 (TpSetPoolMaxThreadsSoftLimit.c)
 */

__int64 __fastcall TpSetDefaultPoolMaxThreads(unsigned int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // edi
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9

  v5 = 8 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
    v5 = 768;
  v6 = 4 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x180 )
    v6 = 384;
  result = (unsigned int)dword_18015D460;
  if ( dword_18015D460 )
  {
    if ( a1 <= dword_18015D460 )
      return result;
    goto LABEL_10;
  }
  if ( a1 <= v6 )
    return result;
  result = v5;
  if ( a1 > v5 )
LABEL_10:
    result = a1;
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3B0, a2, a3, a4);
  v8 = dword_18015D460;
  v9 = 0;
  if ( dword_18015D460 )
  {
    if ( a1 > dword_18015D460 )
      goto LABEL_17;
  }
  else if ( a1 > v6 )
  {
    v9 = v5;
    if ( a1 <= v5 )
    {
LABEL_18:
      if ( v9 )
        v8 = v9;
      dword_18015D460 = v8;
      goto LABEL_21;
    }
LABEL_17:
    v9 = a1;
    goto LABEL_18;
  }
LABEL_21:
  result = RtlReleaseSRWLockExclusive(&qword_18015D3B0);
  if ( v9 )
  {
    result = sub_18004865C(v11, v10, v12, v13);
    v16 = result;
    if ( result )
    {
      TpSetPoolMaxThreads(result, (struct _PEB_LDR_DATA *)v9, v14, v15);
      TpSetPoolMaxThreadsSoftLimit(v16, 0LL, v17, v18);
      return sub_180047198((const void **)&qword_18015D3B8, (unsigned __int64)&qword_18015D3B0, v19, v20);
    }
  }
  return result;
}
