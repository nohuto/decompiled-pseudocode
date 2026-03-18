/*
 * XREFs of DxgkDdiGetResourceForBar @ 0x1C0033AE0
 * Callers:
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00418E0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?DdiGetResourceForBar@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETRESOURCEFORBAR@@@Z @ 0x1C0027A10 (-DdiGetResourceForBar@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETRESOURCEFORBAR@@@Z.c)
 */

__int64 __fastcall DxgkDdiGetResourceForBar(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  ULONG v4; // eax
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rax
  _DXGKARG_GETRESOURCEFORBAR v8; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v8.VirtualFunctionIndex = 0LL;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 2288);
  v8.VirtualFunctionIndex = (unsigned __int16)a2;
  v8.BarIndex = v4;
  v8.pResource = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)a4;
  if ( (unsigned int)(unsigned __int16)a2 < *(_DWORD *)(v5 + 1128)
    && (a2 = *(_QWORD *)(*(_QWORD *)(v5 + 1136) + 8LL * (unsigned __int16)a2), result = 0LL, a2) )
  {
    if ( *(_BYTE *)(a2 + 121) )
    {
      *(_QWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 8) = 0LL;
      *(_DWORD *)(a4 + 16) = 0;
    }
    else
    {
      return ADAPTER_RENDER::DdiGetResourceForBar((ADAPTER_RENDER *)v5, &v8);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = v8.VirtualFunctionIndex;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  return result;
}
