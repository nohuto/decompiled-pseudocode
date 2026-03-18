/*
 * XREFs of ?DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z @ 0x1C00F8C98
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 */

__int64 __fastcall DmmPowerOnTargetsFromSourceIfNecessary(PERESOURCE *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  PERESOURCE v5; // rax
  __int64 *Address; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  _BYTE v15[8]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v17[160]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = a2;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdError(0LL);
LABEL_11:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v12);
  }
  v5 = a1[288];
  if ( !v5 )
  {
    v11 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_11;
  }
  Address = (__int64 *)v5->Address;
  if ( Address )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, (__int64)v5->Address);
    memset(v17, 0, 0x94uLL);
    v15[0] = 0;
    v7 = VIDPN_MGR::SetTimingsFromVidPn(Address, 0, 4, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v17, v15, 0, 0LL, 0LL);
    v9 = v7;
    if ( v7 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v14[3] = v2;
      v14[4] = *((int *)a1 + 68);
      v14[5] = *((unsigned int *)a1 + 67);
      v14[6] = v9;
      WdLogEvent5_WdError(v14);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40));
    return (unsigned int)v9;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}
