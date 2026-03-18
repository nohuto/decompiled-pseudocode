/*
 * XREFs of ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B09C8
 * Callers:
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C009D82C (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B0500 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00B08EC (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_BTL::ResolveTopologySetId(CCD_BTL *this, struct CCD_TOPOLOGY *a2, char a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp-18h]

  v12[1] = *((_QWORD *)a2 + 8);
  v12[0] = a2;
  v13 = a3;
  v4 = CCD_BTL_CLONE_GROUP_RESOLVER::operator()((__int64)v12);
  v8 = v4;
  if ( v4 == -1073741275 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
    v10[3] = -1073741275LL;
    v10[4] = a2;
    v10[5] = *((_QWORD *)a2 + 8);
    v10[6] = a2;
    WdLogEvent5_WdWarning(v10);
    return 3221226021LL;
  }
  else if ( v4 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v11[3] = v8;
    v11[4] = a2;
    v11[5] = *((_QWORD *)a2 + 8);
    v11[6] = a2;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v8;
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = *((_WORD *)a2 + 16);
    return 0LL;
  }
}
