/*
 * XREFs of OutputDuplGetDebugInfo @ 0x1C01C9FAC
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C002AA6C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C002AB38 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0090AB0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00B461C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01C6580 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDebugInfo(struct DXGADAPTER *a1, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER **v5; // rax
  int OutputDuplManager; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int DebugInfo; // edi
  UINT *RemoteOutputDuplMgr; // rax
  DXGADAPTER *v12; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v14; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v16; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  if ( a1 )
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v14);
    v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v12);
    OutputDuplManager = FindOutputDuplManager(a1, 0, v5, &v13, v4, &v15, &v16);
    DebugInfo = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = (UINT *)v16;
  }
  else
  {
    RemoteOutputDuplMgr = (UINT *)FindRemoteOutputDuplMgr(0LL);
  }
  if ( RemoteOutputDuplMgr )
  {
    DebugInfo = OUTPUTDUPL_MGR::GetDebugInfo(RemoteOutputDuplMgr, a2);
  }
  else
  {
    DebugInfo = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = 2940LL;
  }
LABEL_9:
  DXGADAPTER_REFERENCE::Assign(&v12, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v14, 0LL);
  return DebugInfo;
}
