/*
 * XREFs of ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0041CB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x1C0033F50 (DxgkDdiWriteVirtualFunctionConfig.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiDdiWriteVirtualFunctionConfig(
        _QWORD *a1,
        void *a2,
        unsigned __int16 a3,
        unsigned int a4,
        ULONG a5)
{
  unsigned int v8; // ebx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, a1, 0LL);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v8 = DxgkDdiWriteVirtualFunctionConfig(*(_QWORD *)(v11 + 3704), a2, a3, a4, a5);
    v12 = v8;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  return v8;
}
