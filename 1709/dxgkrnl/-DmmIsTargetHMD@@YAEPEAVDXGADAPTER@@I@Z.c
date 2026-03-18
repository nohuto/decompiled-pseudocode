/*
 * XREFs of ?DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z @ 0x1C00B5588
 * Callers:
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C00AD5FC (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00F771C (-DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00FCB10 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C3E48 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01C40D0 (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DmmIsTargetHMD(struct DXGADAPTER *a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  char v9; // di
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v17; // [rsp+40h] [rbp+18h]

  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 288) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v13 + 24) = 14545LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v5 = *((_QWORD *)a1 + 288);
  v6 = *(_QWORD *)(v5 + 88);
  if ( v6 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, *(_QWORD *)(v5 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 80) + 72LL));
    v7 = *(volatile signed __int32 **)(v6 + 80);
    v17 = v7;
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, a2);
    if ( TargetById )
      v9 = *((_BYTE *)TargetById + 404);
    else
      v9 = 0;
    if ( v7 )
    {
      v10 = (void (__fastcall ***)(_QWORD, __int64))(v7 + 16);
      v11 = _InterlockedDecrement(v7 + 18);
      if ( v11 )
      {
        if ( v11 < 0 )
        {
          v15 = WdLogNewEntry5_WdError(v10);
          *(_QWORD *)(v15 + 24) = v11;
          WdLogEvent5_WdError(v15);
        }
      }
      else if ( v10 )
      {
        (**v10)(v10, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40));
    return v9;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 0;
  }
}
