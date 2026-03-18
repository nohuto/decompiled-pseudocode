/*
 * XREFs of ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F6B60
 * Callers:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C009D910 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C009ED80 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00FB9A8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C01AED68 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01AEEF8 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01AF094 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     DxgkCreateOutputDupl @ 0x1C01AF450 (DxgkCreateOutputDupl.c)
 *     OutputDuplGetDebugInfo @ 0x1C01B01F0 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01B02D0 (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall FindOutputDuplManager(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        struct OUTPUTDUPL_MGR **a7)
{
  __int64 v9; // rbp
  int PairingAdapters; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rax

  v9 = a2;
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2, a3, a4, a5, a6);
  v15 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v17[3] = a1;
    v17[4] = v9;
    v17[5] = v15;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v15;
  }
  else
  {
    if ( a3 && !*a3 || a5 && !*a5 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v18 + 24) = 2998LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *a7 = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)*a5 + 285) + 104LL);
    return 0LL;
  }
}
