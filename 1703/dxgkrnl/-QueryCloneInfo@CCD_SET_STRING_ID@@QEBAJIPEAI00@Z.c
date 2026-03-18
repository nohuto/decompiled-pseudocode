/*
 * XREFs of ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00B11C0
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00AFC34 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B0984 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B0C90 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryCloneInfo(
        CCD_SET_STRING_ID *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 v6; // rdi
  __int64 v9; // r9
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // r8

  v6 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((unsigned __int16 *)this + 16) || !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (unsigned int)v6 >= *((unsigned __int16 *)this + 16) || !a3 )
    return 3221225485LL;
  v9 = *((_QWORD *)this + 3);
  *a3 = *(unsigned __int16 *)(v9 + 8 * v6 + 2);
  if ( a5 || a4 )
  {
    v10 = 0;
    v11 = v6 - 1;
    if ( (int)v6 - 1 >= 0 )
    {
      v14 = v11;
      do
      {
        if ( *(_WORD *)(v9 + 8 * v14 + 2) != *(_WORD *)(v9 + 8 * v6 + 2) )
          break;
        ++v10;
        --v11;
        --v14;
      }
      while ( v14 >= 0 );
    }
    if ( a5 )
      *a5 = v10;
    if ( a4 )
      *a4 = v11 + 1;
  }
  return 0LL;
}
