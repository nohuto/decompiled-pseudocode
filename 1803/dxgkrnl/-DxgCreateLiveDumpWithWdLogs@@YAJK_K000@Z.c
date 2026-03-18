/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 *     DxgkSetDisplayMode @ 0x1C0194F30 (DxgkSetDisplayMode.c)
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleStartDevice @ 0x1C01F5800 (DpiFdoHandleStartDevice.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 *     DpiInitializeEx @ 0x1C0205138 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0209E98 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C00312F0 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  void *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = 0;
  v7 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5);
  if ( v7 )
  {
    v10 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v11 = operator new[]((unsigned int)v10, 0x4B677844u, PagedPool);
    v13 = v11;
    if ( v11 )
    {
      v14 = TdrCollectBugcheckSecondaryDumpData(v11, v10, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v7, v13, v14) )
      {
        v16 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v16 + 24) = 9322LL;
        WdLogEvent5_WdError(v16);
        v5 = -1073741823;
      }
      operator delete[](v13);
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v17 + 24) = v10;
      WdLogEvent5_WdLowResource(v17);
      v5 = -1073741801;
    }
    WdDbgReportComplete(v7);
    return v5;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 9309LL;
    WdLogEvent5_WdError(v8);
    return 3221225473LL;
  }
}
