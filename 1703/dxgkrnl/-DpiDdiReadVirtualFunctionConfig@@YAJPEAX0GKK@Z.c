/*
 * XREFs of ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0041AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C002A89C (-ReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiDdiReadVirtualFunctionConfig(_QWORD *a1, void *a2, unsigned __int16 a3, ULONG a4, ULONG a5)
{
  unsigned int v8; // ebx
  struct _DXGKARG_READVIRTUALFUNCTIONCONFIG v10; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+48h] [rbp-8h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v11, a1, 0LL);
  v8 = v13;
  if ( v13 >= 0 )
  {
    v10.Data = a2;
    *(&v10.Length + 1) = 0;
    v10.VirtualFunctionIndex = a3;
    v10.Length = a5;
    v10.Offset = a4;
    v8 = ADAPTER_RENDER::ReadVirtualFunctionConfig(*(_QWORD *)(*(_QWORD *)(v12 + 3704) + 2288LL), &v10);
    v13 = v8;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v11);
  return v8;
}
