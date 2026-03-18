/*
 * XREFs of ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00D7318
 * Callers:
 *     DxgkShareObjects @ 0x1C009D2D0 (DxgkShareObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::GetEntryType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 16) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 211LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return *(_DWORD *)(*(_QWORD *)a1 + 16 * v5 + 8) & 0xF;
}
