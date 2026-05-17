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

signed __int64 __fastcall TpSetDefaultPoolMaxThreads(unsigned int a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  signed __int64 result; // rax
  int v5; // eax
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = 8 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
    v2 = 768;
  v3 = 4 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x180 )
    v3 = 384;
  result = (unsigned int)dword_18015C420;
  if ( dword_18015C420 )
  {
    if ( a1 <= dword_18015C420 )
      return result;
    goto LABEL_10;
  }
  if ( a1 <= v3 )
    return result;
  result = v2;
  if ( a1 > v2 )
LABEL_10:
    result = a1;
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive(&qword_18015C380);
  v5 = dword_18015C420;
  v6 = 0;
  if ( dword_18015C420 )
  {
    if ( a1 > dword_18015C420 )
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
      dword_18015C420 = v5;
      goto LABEL_21;
    }
LABEL_17:
    v6 = a1;
    goto LABEL_18;
  }
LABEL_21:
  result = RtlReleaseSRWLockExclusive(&qword_18015C380);
  if ( v6 )
  {
    result = sub_1800857E8();
    v7 = result;
    if ( result )
    {
      TpSetPoolMaxThreads(result, v6);
      TpSetPoolMaxThreadsSoftLimit(v7, 0LL, v8, v9);
      return sub_180018928((const void **)&qword_18015C378, (__int64)&qword_18015C380);
    }
  }
  return result;
}
