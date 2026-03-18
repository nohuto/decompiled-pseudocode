/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017A3F8
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     DpiFdoHandleDevicePower @ 0x1C0102F30 (DpiFdoHandleDevicePower.c)
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoHandleStartDevice @ 0x1C01165E0 (DpiFdoHandleStartDevice.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     DpiInitializeEx @ 0x1C011FF5C (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0121BA4 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0036094 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // rcx
  void *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax

  v5 = 0;
  v8 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5);
  if ( v8 )
  {
    v11 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v12 = operator new((unsigned int)v11, 0x4B677844u, PagedPool);
    v14 = v12;
    if ( v12 )
    {
      v15 = TdrCollectBugcheckSecondaryDumpData(v12, v11, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v8, v14, v15) )
      {
        v18 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v18 + 24) = 8267LL;
        WdLogEvent5_WdError(v18);
        v5 = -1073741823;
      }
      ExFreePoolWithTag(v14, 0);
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v19 + 24) = v11;
      WdLogEvent5_WdLowResource(v19);
      v5 = -1073741801;
    }
    WdDbgReportComplete(v8);
    return v5;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 8254LL;
    WdLogEvent5_WdError(v9);
    return 3221225473LL;
  }
}
