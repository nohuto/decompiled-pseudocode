/*
 * XREFs of DmmPowerOnTargetsFromSourceIfNecessary @ 0x1C00A5B08
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 */

__int64 __fastcall DmmPowerOnTargetsFromSourceIfNecessary(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD v21[19]; // [rsp+48h] [rbp-B0h] BYREF

  v2 = (unsigned int)a2;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL, a2);
LABEL_11:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v18);
  }
  v8 = *(_QWORD *)(a1 + 2280);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v21, *(_QWORD *)(v8 + 88), v6, v7);
    memset(&v21[1], 0, 0x8CuLL);
    v10 = VIDPN_MGR::SetTimingsFromVidPn(v9, 0LL, 4LL);
    v15 = v10;
    if ( v10 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v20[3] = v2;
      v20[4] = *(int *)(a1 + 272);
      v20[5] = *(unsigned int *)(a1 + 268);
      v20[6] = v15;
      WdLogEvent5_WdError(v20);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21[0] + 40LL), v11, v13, v14);
    return (unsigned int)v15;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
