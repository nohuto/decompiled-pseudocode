/*
 * XREFs of ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0
 * Callers:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C009D910 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C009DAA0 (OutputDuplProcessDestroyDevice.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C009ED80 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     OutputDuplProcessTerminate @ 0x1C00A3D28 (OutputDuplProcessTerminate.c)
 *     DxgkSessionDisconnected @ 0x1C00A6520 (DxgkSessionDisconnected.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00FB9A8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C01AED68 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01AEEF8 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01AF094 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     DxgkProcessLockScreen @ 0x1C01B0170 (DxgkProcessLockScreen.c)
 *     OutputDuplGetDebugInfo @ 0x1C01B01F0 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01B02D0 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C01B06DC (OutputDuplProcessRemoteSessionSetPointerShape.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C01B0738 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct OUTPUTDUPL_MGR *FindRemoteOutputDuplMgr(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( !v2 )
  {
LABEL_12:
    v10 = 0LL;
    goto LABEL_9;
  }
  v17 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  v16 = v2 + 80;
  if ( v2 == -80 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, v3, v5, v6);
    *(_QWORD *)(v13 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v16 + 8) == CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(CurrentThread, v3, v5, v6);
    *(_QWORD *)(v14 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v16);
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 72) )
  {
    if ( v17 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v16, v0, v8, v9);
    goto LABEL_12;
  }
  _mm_lfence();
  v10 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * CurrentProcessSessionId);
  if ( v17 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v16, v0, v8, v9);
LABEL_9:
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
      return *(struct OUTPUTDUPL_MGR **)(v11 + 40);
    v15 = WdLogNewEntry5_WdError(v1, v0);
    *(_QWORD *)(v15 + 24) = 3585LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v1, v0);
    *(_QWORD *)(v15 + 24) = 3578LL;
  }
  WdLogEvent5_WdError(v15);
  return 0LL;
}
