/*
 * XREFs of DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C0033DE8
 * Callers:
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0041B60 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 * Callees:
 *     ?DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C0028B38 (-DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBL.c)
 */

__int64 __fastcall DxgkDdiReadVirtualFunctionConfigBlock(__int64 a1, __int64 a2, ULONG a3, void *a4, ULONG a5)
{
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // rax
  _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK v9; // [rsp+20h] [rbp-28h] BYREF

  v9.Data = a4;
  v9.VirtualFunctionIndex = 0;
  v9.BlockId = a3;
  v5 = *(_QWORD *)(a1 + 2288);
  *(&v9.Length + 1) = 0;
  v9.VirtualFunctionIndex = (unsigned __int16)a2;
  v9.Length = a5;
  if ( (unsigned int)(unsigned __int16)a2 < *(_DWORD *)(v5 + 1128)
    && (a2 = *(_QWORD *)(*(_QWORD *)(v5 + 1136) + 8LL * (unsigned __int16)a2)) != 0 )
  {
    if ( *(_BYTE *)(a2 + 121) )
    {
      v6 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v6 + 24) = v9.VirtualFunctionIndex;
      WdLogEvent5_WdError(v6);
      return 3221225659LL;
    }
    else
    {
      return ADAPTER_RENDER::DdiReadVirtualFunctionConfigBlock((ADAPTER_RENDER *)v5, &v9);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v8 + 24) = v9.VirtualFunctionIndex;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
