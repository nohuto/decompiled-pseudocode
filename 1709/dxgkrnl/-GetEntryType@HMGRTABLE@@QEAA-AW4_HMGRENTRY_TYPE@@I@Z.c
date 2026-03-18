/*
 * XREFs of ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C008A318
 * Callers:
 *     DxgkShareObjects @ 0x1C00BEEE0 (DxgkShareObjects.c)
 *     DxgkCreateBundleObject @ 0x1C01AF0A0 (DxgkCreateBundleObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::GetEntryType(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 211LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(_DWORD *)(*(_QWORD *)a1 + 16 * v3 + 8) & 0x1F;
}
