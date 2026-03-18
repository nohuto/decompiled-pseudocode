/*
 * XREFs of DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1C0033FF8
 * Callers:
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0041D40 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 * Callees:
 *     ?DdiWriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C0029B20 (-DdiWriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG.c)
 */

__int64 __fastcall DxgkDdiWriteVirtualFunctionConfigBlock(__int64 a1, __int64 a2, ULONG a3, void *a4, ULONG a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  _DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK v11; // [rsp+20h] [rbp-28h] BYREF

  v11.Data = a4;
  v11.VirtualFunctionIndex = 0;
  v11.BlockId = a3;
  v5 = *(_QWORD *)(a1 + 2288);
  *(&v11.Length + 1) = 0;
  v6 = (unsigned __int16)a2;
  v11.VirtualFunctionIndex = (unsigned __int16)a2;
  v11.Length = a5;
  if ( (unsigned int)(unsigned __int16)a2 < *(_DWORD *)(v5 + 1128)
    && (v7 = 0, (a2 = *(_QWORD *)(*(_QWORD *)(v5 + 1136) + 8LL * (unsigned __int16)a2)) != 0) )
  {
    if ( *(_BYTE *)(a2 + 121) )
    {
      v8 = WdLogNewEntry5_WdWarning(a1, a2, v5, v6);
      *(_QWORD *)(v8 + 24) = v11.VirtualFunctionIndex;
      WdLogEvent5_WdWarning(v8);
    }
    else
    {
      return (unsigned int)ADAPTER_RENDER::DdiWriteVirtualFunctionConfigBlock((ADAPTER_RENDER *)v5, &v11);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = v11.VirtualFunctionIndex;
    WdLogEvent5_WdError(v9);
    return (unsigned int)-1073741811;
  }
  return v7;
}
