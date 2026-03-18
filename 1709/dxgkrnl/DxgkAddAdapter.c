/*
 * XREFs of DxgkAddAdapter @ 0x1C01194CC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119870 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 */

__int64 __fastcall DxgkAddAdapter(
        struct _DEVICE_OBJECT *a1,
        struct _DXGK_ADAPTER_CAPS *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  DXGGLOBAL *Global; // rax
  __int64 v8; // rax
  struct DXGADAPTER *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 132LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  return DXGGLOBAL::CreateAdapter(Global, a1, &v9, a2, a3);
}
