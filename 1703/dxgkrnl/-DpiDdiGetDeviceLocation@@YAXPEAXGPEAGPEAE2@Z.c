/*
 * XREFs of ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0041860
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDdiGetDeviceLocation @ 0x1C0033A18 (DxgkDdiGetDeviceLocation.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

void __fastcall DpiDdiGetDeviceLocation(
        _QWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, a1, 0LL);
  if ( v10 >= 0 )
    DxgkDdiGetDeviceLocation(*(_QWORD *)(v9 + 3704), a2, a3, a4, a5);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
}
