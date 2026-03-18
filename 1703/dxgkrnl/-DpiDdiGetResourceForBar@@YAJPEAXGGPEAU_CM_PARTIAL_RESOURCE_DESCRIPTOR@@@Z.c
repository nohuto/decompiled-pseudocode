/*
 * XREFs of ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00418E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDdiGetResourceForBar @ 0x1C0033AE0 (DxgkDdiGetResourceForBar.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiDdiGetResourceForBar(
        _QWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a4)
{
  unsigned int ResourceForBar; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1, 0LL);
  ResourceForBar = v11;
  if ( v11 >= 0 )
  {
    ResourceForBar = DxgkDdiGetResourceForBar(*(_QWORD *)(v10 + 3704), a2, a3, (__int64)a4);
    v11 = ResourceForBar;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return ResourceForBar;
}
