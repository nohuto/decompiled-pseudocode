/*
 * XREFs of ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0154704
 * Callers:
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C005332C (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0154654 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessGetProgData(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int16 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r8

  v1 = *((_QWORD *)a1 + 109);
  v2 = 0LL;
  if ( !v1 )
    return 0LL;
  v4 = *(_WORD *)(v1 + 10);
  if ( v4 )
  {
    v5 = *(unsigned __int16 *)(v1 + 8);
    if ( (unsigned int)v5 < *((_DWORD *)qword_1C018E8C8 + 90) )
    {
      v6 = *((_QWORD *)qword_1C018E8C8 + 38) + 176 * v5;
      if ( *(_WORD *)(v6 + 32) == v4 )
      {
        if ( *(_QWORD *)(v6 + 56) != *(_QWORD *)(v1 + 32) )
          return 0LL;
        return (struct _CIT_PROG_DATA *)v6;
      }
    }
  }
  return (struct _CIT_PROG_DATA *)v2;
}
