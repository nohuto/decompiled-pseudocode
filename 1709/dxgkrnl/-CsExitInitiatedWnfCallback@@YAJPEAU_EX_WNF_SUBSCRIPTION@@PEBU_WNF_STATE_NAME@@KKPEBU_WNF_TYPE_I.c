/*
 * XREFs of ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C01A9A70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C01A9B58 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
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
  unsigned __int8 v17[4]; // [rsp+20h] [rbp-18h] BYREF
  int v18[5]; // [rsp+24h] [rbp-14h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+20h] BYREF

  v19 = a4;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 8014);
  v17[0] = 0;
  v18[0] = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = ((__int64 (__fastcall *)(struct _EX_WNF_SUBSCRIPTION *, unsigned int *, unsigned __int8 *, int *))ExQueryWnfStateData)(
         a1,
         &v19,
         v17,
         v18);
  v12 = v8;
  if ( v8 >= 0 )
  {
    DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(a6, v17[0], PerformanceCounter.QuadPart);
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13[3] = a1;
    v13[4] = v19;
    v13[5] = v12;
    WdLogEvent5_WdWarning(v13);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 8014);
  return (unsigned int)v12;
}
