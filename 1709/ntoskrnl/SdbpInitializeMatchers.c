/*
 * XREFs of SdbpInitializeMatchers @ 0x1404F59D0
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1404F5948 (SdbInitDatabaseInMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpInitializeMatchers(__int64 a1)
{
  char *v1; // r8
  char *v2; // r9
  char *v3; // r10
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = (char *)&unk_1402B9870 - a1;
  v2 = (char *)&off_1402B9878 - a1;
  v3 = (char *)&unk_1402B9880 - a1;
  v4 = (_QWORD *)(a1 + 592);
  v5 = 8LL;
  do
  {
    *((_DWORD *)v4 - 2) = *(_DWORD *)&v1[(_QWORD)v4 - 592];
    *v4 = *(_QWORD *)((char *)v4 + (_QWORD)v2 - 592);
    result = *(_QWORD *)((char *)v4 + (_QWORD)v3 - 592);
    v4[1] = result;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  return result;
}
