/*
 * XREFs of ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C016B2F0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall HMGRTABLE::GetEntryObject(HMGRTABLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 4) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 227LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 2 * v5;
  v8 = *(unsigned int *)(*(_QWORD *)this + 8 * v7 + 8);
  if ( (v8 & 0xF) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(*(_QWORD *)this, v8, a3, a4);
    *(_QWORD *)(v9 + 24) = 228LL;
    WdLogEvent5_WdAssertion(v9);
  }
  return *(void **)(*(_QWORD *)this + 8 * v7);
}
