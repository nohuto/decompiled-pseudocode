/*
 * XREFs of DxgkDdiWriteVirtualFunctionConfig @ 0x1C0033F50
 * Callers:
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0041CB0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 * Callees:
 *     ?DdiWriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0029924 (-DdiWriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z.c)
 */

__int64 __fastcall DxgkDdiWriteVirtualFunctionConfig(__int64 a1, void *a2, unsigned __int16 a3, __int64 a4, ULONG a5)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG v11; // [rsp+20h] [rbp-28h] BYREF

  v11.Data = a2;
  *(_QWORD *)&v11.VirtualFunctionIndex = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 2288);
  v11.VirtualFunctionIndex = v5;
  v11.Offset = a4;
  v11.Length = a5;
  if ( (unsigned int)v5 < *(_DWORD *)(v6 + 1128) && (v7 = 0, (v5 = *(_QWORD *)(*(_QWORD *)(v6 + 1136) + 8 * v5)) != 0) )
  {
    if ( *(_BYTE *)(v5 + 121) )
    {
      v8 = WdLogNewEntry5_WdWarning(a1, v5, v6, a4);
      *(_QWORD *)(v8 + 24) = v11.VirtualFunctionIndex;
      WdLogEvent5_WdWarning(v8);
    }
    else
    {
      return (unsigned int)ADAPTER_RENDER::DdiWriteVirtualFunctionConfig((ADAPTER_RENDER *)v6, &v11);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(a1, v5);
    *(_QWORD *)(v9 + 24) = v11.VirtualFunctionIndex;
    WdLogEvent5_WdError(v9);
    return (unsigned int)-1073741811;
  }
  return v7;
}
