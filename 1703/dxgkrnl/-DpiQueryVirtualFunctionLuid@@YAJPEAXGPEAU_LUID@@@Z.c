/*
 * XREFs of ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0041E70
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C0028774 (-DdiQueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiQueryVirtualFunctionLuid(_QWORD *a1, unsigned __int16 a2, struct _LUID *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  _DXGKARG_QUERYVIRTUALFUNCTIONLUID v11; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v12, a1, 0LL);
  v5 = v14;
  if ( v14 >= 0 )
  {
    *(&v11.VirtualFunctionIndex + 1) = 0;
    v11.VirtualFunctionIndex = a2;
    v11.pLuid = a3;
    v6 = *(_QWORD *)(v13 + 3704);
    v7 = *(_QWORD *)(v6 + 2288);
    if ( (unsigned int)a2 < *(_DWORD *)(v7 + 1128) && (v8 = *(_QWORD *)(*(_QWORD *)(v7 + 1136) + 8LL * a2)) != 0 )
    {
      if ( *(_BYTE *)(v8 + 121) )
        *a3 = *(struct _LUID *)(v8 + 20);
      else
        ADAPTER_RENDER::DdiQueryVirtualFunctionLuid(*(ADAPTER_RENDER **)(v6 + 2288), &v11);
      v5 = 0;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v6, a2);
      *(_QWORD *)(v9 + 24) = v11.VirtualFunctionIndex;
      WdLogEvent5_WdError(v9);
      v5 = -1073741811;
    }
    v14 = v5;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v12);
  return v5;
}
