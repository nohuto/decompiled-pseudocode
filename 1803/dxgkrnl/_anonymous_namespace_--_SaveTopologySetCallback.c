/*
 * XREFs of _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C00DF230
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B1FC8 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall anonymous_namespace_::_SaveTopologySetCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a1,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v7; // rax

  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(a1, a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v7[3] = v5;
    v7[4] = a2;
    v7[5] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v5;
}
