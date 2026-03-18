/*
 * XREFs of DxgkDdiQueryProbedBars @ 0x1C0033D54
 * Callers:
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0041A40 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 * Callees:
 *     ?DdiQueryProbedBars@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1C00285AC (-DdiQueryProbedBars@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z.c)
 */

__int64 __fastcall DxgkDdiQueryProbedBars(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  _DXGKARG_QUERYPROBEDBARS v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 2288);
  *(&v6.VirtualFunctionIndex + 1) = 0;
  v6.VirtualFunctionIndex = (unsigned __int16)a2;
  v6.BaseRegisterValues = (PULONG)a3;
  if ( (unsigned int)(unsigned __int16)a2 < *(_DWORD *)(v3 + 1128)
    && (a2 = *(_QWORD *)(*(_QWORD *)(v3 + 1136) + 8LL * (unsigned __int16)a2), a1 = 0LL, a2) )
  {
    if ( *(_BYTE *)(a2 + 121) )
    {
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)(a3 + 16) = 0LL;
      *v6.BaseRegisterValues = -268435456;
    }
    else
    {
      LODWORD(a1) = ADAPTER_RENDER::DdiQueryProbedBars((ADAPTER_RENDER *)v3, &v6);
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v4 + 24) = v6.VirtualFunctionIndex;
    WdLogEvent5_WdError(v4);
    LODWORD(a1) = -1073741811;
  }
  return (unsigned int)a1;
}
