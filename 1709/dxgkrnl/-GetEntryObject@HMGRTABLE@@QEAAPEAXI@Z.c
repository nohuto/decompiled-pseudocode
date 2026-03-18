/*
 * XREFs of ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C016EF70
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall HMGRTABLE::GetEntryObject(HMGRTABLE *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 227LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = 2 * v3;
  if ( (*(_DWORD *)(*(_QWORD *)this + 8 * v5 + 8) & 0x1F) == 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(*(_QWORD *)this);
    *(_QWORD *)(v6 + 24) = 228LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return *(void **)(*(_QWORD *)this + 8 * v5);
}
