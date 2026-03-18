/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00E2D74
 * Callers:
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009CCCC (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E2198 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E3038 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C010D30C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C010D918 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01569C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     _lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_ @ 0x1C01C7DA0 (_lambda_090d52b4b377212e5b096f8abab319d1_--_lambda_invoker_cdecl_.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01CB4F4 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C01CB570 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01CB5A0 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CB610 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01CB840 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00E2FD4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01CA4AC (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C01D2204 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01D267C (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        OUTPUTDUPL_CONTEXT **a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v7; // r14
  OUTPUTDUPL_CONTEXT *v8; // rcx
  struct _KTHREAD **v11; // rbx
  OUTPUTDUPL_CONTEXT *v12; // rbx
  __int64 v13; // rdi
  OUTPUTDUPL_MGR *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  OUTPUTDUPL_CONTEXT *v23; // rcx
  OUTPUTDUPL_CONTEXT **v24; // rax
  OUTPUTDUPL_CONTEXT *v25; // rdx
  _BYTE v26[16]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v27[8]; // [rsp+30h] [rbp-49h] BYREF
  struct _KTHREAD **v28; // [rsp+38h] [rbp-41h]
  int v29; // [rsp+40h] [rbp-39h]
  _DWORD v30[16]; // [rsp+50h] [rbp-29h] BYREF

  v7 = a2;
  v8 = *a1;
  if ( v8 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v8 + 2)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v19 + 24) = 2330LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v11 = (struct _KTHREAD **)a1[3];
  v28 = v11;
  if ( v11 && v11[1] == KeGetCurrentThread() )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v20 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v20);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v11);
  v12 = a1[2];
  v13 = 3 * v7;
  v29 = 2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, *((struct DXGFASTMUTEX *const *)v12 + 3 * v7), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  memset(v30, 0, sizeof(v30));
  OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v30);
  v30[13] = v7;
  v17 = 0;
  v30[1] = 64;
  v30[12] = 1;
  v30[15] = a6;
  for ( i = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v12 + v13 + 1); v17 < *((_DWORD *)a1 + 2); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v21 + 24) = 2359LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !a4 || (v22 = *((_QWORD *)*i + 3), PsGetCurrentProcess(v16, v15) == v22) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v23 = *i;
            v24 = a1 + 4;
            v25 = a1[4];
            if ( *((OUTPUTDUPL_CONTEXT ***)v25 + 1) != a1 + 4 )
              __fastfail(3u);
            *(_QWORD *)v23 = v25;
            *((_QWORD *)v23 + 1) = v24;
            *((_QWORD *)v25 + 1) = v23;
            *v24 = v23;
            *i = 0LL;
            v30[14] = v17;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics((OUTPUTDUPL_MGR *)a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v30, 1);
          }
        }
      }
    }
    ++v17;
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
}
