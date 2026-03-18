/*
 * XREFs of SdbpInitializeMatchers @ 0x1405FFC58
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405FFBD0 (SdbInitDatabaseInMemory.c)
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

  v1 = (char *)&unk_1402F2EC0 - a1;
  v2 = (char *)&off_1402F2EC8 - a1;
  v3 = (char *)&unk_1402F2ED0 - a1;
  v4 = (_QWORD *)(a1 + 592);
  v5 = 10LL;
  do
  {
    *((_DWORD *)v4 - 2) = *(_DWORD *)((char *)v4 + (_QWORD)v1 - 592);
    *v4 = *(_QWORD *)((char *)v4 + (_QWORD)v2 - 592);
    result = *(_QWORD *)((char *)v4 + (_QWORD)v3 - 592);
    v4[1] = result;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  return result;
}
