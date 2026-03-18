/*
 * XREFs of ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E6420
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00A4AB0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9148 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPartOfDesktop(PERESOURCE **this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PERESOURCE *v10; // rax
  __int64 v11; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGGLOBAL *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v19 + 24) = 8663LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v20 + 24) = 8664LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v10 = this[14];
  v11 = 401 * v4;
  if ( BYTE2(v10[401 * v4 + 90]) != a3 )
  {
    BYTE2(v10[v11 + 90]) = a3;
    Global = DXGGLOBAL::GetGlobal(v7, v6, v8, v9);
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)Global + 130);
    }
    else
    {
      v14 = *((unsigned int *)Global + 130);
      v15 = Global;
      if ( (int)v14 <= 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v14, v13, v8, v9);
        *(_QWORD *)(v21 + 24) = 989LL;
        WdLogEvent5_WdAssertion(v21);
      }
      _InterlockedDecrement((volatile signed __int32 *)v15 + 130);
    }
  }
  if ( !a3 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(this + 50), v8, v9);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    DISPLAY_SOURCE::ClearAllDisplayState((DISPLAY_SOURCE *)&this[14][v11]);
    if ( v22[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v16, v17, v18);
  }
}
