/*
 * XREFs of OutputDuplGetDiagnosticBuffer @ 0x1C01B02D0
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C003A590 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C003A65C (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F6B60 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C01ACD28 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDiagnosticBuffer(
        struct DXGADAPTER *a1,
        struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGADAPTER **v10; // rax
  int OutputDuplManager; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int DiagnosticBuffer; // edi
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  DXGADAPTER *v19; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v21; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v23; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    v6 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v21, (__int64)a2, a3, a4);
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v19, v7, v8, v9);
    OutputDuplManager = FindOutputDuplManager(a1, 0, v10, &v20, v6, &v22, &v23);
    DiagnosticBuffer = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = v23;
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  }
  if ( RemoteOutputDuplMgr )
  {
    DiagnosticBuffer = OUTPUTDUPL_MGR::GetDiagnosticBuffer((OUTPUTDUPL_MGR **)RemoteOutputDuplMgr, a2);
  }
  else
  {
    DiagnosticBuffer = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = 2826LL;
  }
LABEL_9:
  DXGADAPTER_REFERENCE::Assign(&v19, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v21, 0LL);
  return DiagnosticBuffer;
}
