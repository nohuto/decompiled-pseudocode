/*
 * XREFs of ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C00D7354
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::BuildEntryHandle(HMGRTABLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 4) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 195LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return (*(_DWORD *)(*(_QWORD *)this + 16 * v5 + 8) >> 6) & 0x3F | (((*(_DWORD *)(*(_QWORD *)this + 16 * v5 + 8) << 20) ^ ((unsigned int)v5 ^ (*(_DWORD *)(*(_QWORD *)this + 16 * v5 + 8) << 20)) & 0xFFFFFF) << 6);
}
