/*
 * XREFs of ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0030930
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall WnfScreenOnCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 (__fastcall *v6)(struct DXGADAPTER *, void *, __int64); // rdx
  int v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v10[4]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v11[20]; // [rsp+34h] [rbp-24h] BYREF

  v9 = a4;
  v8 = 20;
  if ( (int)ExQueryWnfStateData(a1, &v9, v10, &v8) >= 0 && v8 == 20 )
  {
    if ( v10[0] )
    {
      Global = DXGGLOBAL::GetGlobal(v4);
      v6 = ScreenOnStudyStartCallback;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v4);
      v6 = ScreenOnStudyStopCallback;
    }
    DXGGLOBAL::IterateAdaptersWithCallback(Global, v6, v11, 1LL);
  }
  return 0LL;
}
