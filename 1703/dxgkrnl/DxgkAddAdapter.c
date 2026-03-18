/*
 * XREFs of DxgkAddAdapter @ 0x1C0111404
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 */

__int64 __fastcall DxgkAddAdapter(
        struct _DEVICE_OBJECT *a1,
        struct _DXGK_ADAPTER_CAPS *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v9; // rax
  struct DXGADAPTER *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 130LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, (__int64)a3, a4);
  return DXGGLOBAL::CreateAdapter(Global, a1, &v10, a2, a3);
}
