/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x180105340
 * Callers:
 *     sub_180012D28 @ 0x180012D28 (sub_180012D28.c)
 * Callees:
 *     TpSetPoolMaxThreads @ 0x18000FE40 (TpSetPoolMaxThreads.c)
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180084DB0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     sub_1800857E8 @ 0x1800857E8 (sub_1800857E8.c)
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
  RtlAcquireSRWLockExclusive(&stru_18015C380);
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
  RtlReleaseSRWLockExclusive(&stru_18015C380);
  if ( v6 )
  {
    v7 = (_TP_POOL *)sub_1800857E8();
    v8 = (__int64)v7;
    if ( v7 )
    {
      TpSetPoolMaxThreads(v7, v6);
      TpSetPoolMaxThreadsSoftLimit(v8, 0);
      sub_180018928((const void **)&qword_18015C378, &stru_18015C380);
    }
  }
}
