/*
 * XREFs of ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C019D4D0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C019D5D8 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 */

__int64 __fastcall CsExitInitiatedWnfCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        DXGGLOBAL *a6)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int8 v17[4]; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+24h] [rbp-1Ch] BYREF
  int v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  unsigned int v21; // [rsp+68h] [rbp+28h] BYREF

  v21 = a4;
  v20 = 0LL;
  v19 = 8014;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 8014);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 8014);
  v17[0] = 0;
  v18 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = ExQueryWnfStateData(a1, &v21, v17, &v18);
  v12 = v8;
  if ( v8 >= 0 )
  {
    DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(a6, v17[0], PerformanceCounter.QuadPart);
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13[3] = a1;
    v13[4] = v21;
    v13[5] = v12;
    WdLogEvent5_WdWarning(v13);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v19);
  return (unsigned int)v12;
}
