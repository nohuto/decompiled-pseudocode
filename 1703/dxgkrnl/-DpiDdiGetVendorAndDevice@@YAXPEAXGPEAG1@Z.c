/*
 * XREFs of ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0041960
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDdiGetVendorAndDevice @ 0x1C0033B70 (DxgkDdiGetVendorAndDevice.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

void __fastcall DpiDdiGetVendorAndDevice(_QWORD *a1, unsigned __int16 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, a1, 0LL);
  if ( v9 >= 0 )
    DxgkDdiGetVendorAndDevice(*(_QWORD *)(v8 + 3704), a2, a3, a4);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
}
