/*
 * XREFs of ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0041B60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C0033DE8 (DxgkDdiReadVirtualFunctionConfigBlock.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiDdiReadVirtualFunctionConfigBlock(_QWORD *a1, unsigned __int16 a2, ULONG a3, void *a4, ULONG a5)
{
  unsigned int VirtualFunctionConfigBlock; // ebx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, a1, 0LL);
  VirtualFunctionConfigBlock = v12;
  if ( v12 >= 0 )
  {
    VirtualFunctionConfigBlock = DxgkDdiReadVirtualFunctionConfigBlock(*(_QWORD *)(v11 + 3704), a2, a3, a4, a5);
    v12 = VirtualFunctionConfigBlock;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  return VirtualFunctionConfigBlock;
}
