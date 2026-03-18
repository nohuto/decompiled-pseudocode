/*
 * XREFs of ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0194EA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C0194F88 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
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
  __int64 v12; // r9
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 v18[4]; // [rsp+20h] [rbp-18h] BYREF
  int v19[5]; // [rsp+24h] [rbp-14h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+20h] BYREF

  v20 = a4;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 8014);
  v18[0] = 0;
  v19[0] = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = ExQueryWnfStateData(a1, &v20, v18, v19);
  v13 = v8;
  if ( v8 >= 0 )
  {
    DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(a6, v18[0], PerformanceCounter.QuadPart);
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    v14[3] = a1;
    v14[4] = v20;
    v14[5] = v13;
    WdLogEvent5_WdWarning(v14);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 8014);
  return (unsigned int)v13;
}
