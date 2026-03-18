/*
 * XREFs of PopWriteHiberImage @ 0x140435DD4
 * Callers:
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopGetNextTable @ 0x140241D08 (PopGetNextTable.c)
 *     PopAddPagesToCompressedPageSet @ 0x1404321C8 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x14043290C (PopCountDataAsProduced.c)
 *     PopHiberCheckForDebugBreak @ 0x14043356C (PopHiberCheckForDebugBreak.c)
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 */

char __fastcall PopWriteHiberImage(ULONG_PTR BugCheckParameter3, char a2)
{
  void *v2; // r13
  __int64 v3; // r14
  int v4; // ebp
  void *v5; // rdi
  char v8; // r12
  __int64 NextTable; // rax
  __int64 v11; // [rsp+20h] [rbp-198h]
  unsigned int v12[4]; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-168h] BYREF
  const void *v14; // [rsp+68h] [rbp-150h]
  _BYTE v15[128]; // [rsp+100h] [rbp-B8h] BYREF

  v2 = qword_140365B98;
  v3 = *(_QWORD *)(BugCheckParameter3 + 272);
  v4 = 0;
  v5 = 0LL;
  do
  {
    PopHiberCheckForDebugBreak();
    v8 = PopRequestWrite(BugCheckParameter3, (__int64)v2, 1);
    if ( !v5 )
    {
      LOBYTE(v11) = a2;
      NextTable = PopGetNextTable(
                    BugCheckParameter3,
                    (__int64)v12,
                    (__int64)v15,
                    (__int64)v13,
                    v11,
                    *(_QWORD *)(v3 + 8));
      v4 = NextTable;
      if ( !NextTable )
        continue;
      *(_QWORD *)(v3 + 56) += NextTable;
      v5 = (void *)PopAddPagesToCompressedPageSet(
                     BugCheckParameter3,
                     v3,
                     v12,
                     v14,
                     a2,
                     NextTable,
                     (__int64)PopCompressCallback);
    }
    LOBYTE(NextTable) = PopCountDataAsProduced(v3, v5, v12, v15, v4, 1u);
    if ( (_BYTE)NextTable )
      v5 = 0LL;
  }
  while ( !v8 );
  return NextTable;
}
