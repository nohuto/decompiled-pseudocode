/*
 * XREFs of InitFn @ 0x180008C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 */

__int64 __fastcall InitFn(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  void *v3; // rax
  unsigned int v4; // ebx

  v3 = (void *)sub_18000A268(0LL, 0LL, 0LL);
  qword_18015BFE0 = v3;
  if ( !v3 )
    return 0;
  v4 = 1;
  sub_18000D844(v3, 0LL, 1LL);
  if ( !qword_18015BFE0 )
    return 0;
  return v4;
}
