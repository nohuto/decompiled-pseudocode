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

void __fastcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  unsigned int v4; // eax
  ULONG v5; // eax
  ULONG v6; // edi
  _TP_POOL *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8

  v2 = 8 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
    v2 = 768;
  v3 = 4 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x180 )
    v3 = 384;
  if ( MaxThreads )
  {
    if ( a1 <= MaxThreads )
      return;
    goto LABEL_10;
  }
  if ( a1 <= v3 )
    return;
  v4 = v2;
  if ( a1 > v2 )
LABEL_10:
    v4 = a1;
  if ( !v4 )
    return;
  RtlAcquireSRWLockExclusive(&stru_18015D3B0);
  v5 = MaxThreads;
  v6 = 0;
  if ( MaxThreads )
  {
    if ( a1 > MaxThreads )
      goto LABEL_17;
  }
  else if ( a1 > v3 )
  {
    v6 = v2;
    if ( a1 <= v2 )
    {
LABEL_18:
      if ( v6 )
        v5 = v6;
      MaxThreads = v5;
      goto LABEL_21;
    }
LABEL_17:
    v6 = a1;
    goto LABEL_18;
  }
LABEL_21:
  RtlReleaseSRWLockExclusive(&stru_18015D3B0);
  if ( v6 )
  {
    v7 = (_TP_POOL *)sub_18004865C();
    v8 = (__int64)v7;
    if ( v7 )
    {
      TpSetPoolMaxThreads(v7, v6);
      TpSetPoolMaxThreadsSoftLimit(v8, 0LL, v9);
      sub_180047198((const void **)&qword_18015D3B8, &stru_18015D3B0);
    }
  }
}
