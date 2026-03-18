/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00DDD20
 * Callers:
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C00DDE5C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DE020 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C00DE0B0 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E75EC (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00E801C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E8F9C (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01010E4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     _lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_ @ 0x1C01AB9F0 (_lambda_090d52b4b377212e5b096f8abab319d1_--_lambda_invoker_cdecl_.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01AE804 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01AE880 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01AE8F0 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00DDFBC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01AD890 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C01B220C (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01B2680 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        OUTPUTDUPL_CONTEXT **a1,
        __int64 a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v7; // r14
  OUTPUTDUPL_CONTEXT *v8; // rcx
  int v9; // r12d
  struct _KTHREAD **v11; // rbx
  OUTPUTDUPL_CONTEXT *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  OUTPUTDUPL_MGR *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r14d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  OUTPUTDUPL_CONTEXT *v27; // rcx
  OUTPUTDUPL_CONTEXT **v28; // rax
  OUTPUTDUPL_CONTEXT *v29; // rdx
  _BYTE v30[16]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v31[8]; // [rsp+30h] [rbp-49h] BYREF
  struct _KTHREAD **v32; // [rsp+38h] [rbp-41h]
  int v33; // [rsp+40h] [rbp-39h]
  _DWORD v34[16]; // [rsp+50h] [rbp-29h] BYREF

  v7 = (unsigned int)a2;
  v8 = *a1;
  v9 = a4;
  if ( v8 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v8 + 2)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 2249LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v11 = (struct _KTHREAD **)a1[3];
  v32 = v11;
  if ( v11 && v11[1] == KeGetCurrentThread() )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v24);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v11);
  v12 = a1[2];
  v13 = 3 * v7;
  v33 = 2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, *((struct DXGFASTMUTEX *const *)v12 + 3 * v7), v14, v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  memset(v34, 0, sizeof(v34));
  OUTPUTDUPL_MGR::InitializePacketHeader(v16, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v34);
  v34[13] = v7;
  v21 = 0;
  v34[1] = 64;
  v34[12] = 1;
  v34[15] = a6;
  for ( i = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v12 + v13 + 1); v21 < *((_DWORD *)a1 + 2); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        *(_QWORD *)(v25 + 24) = 2278LL;
        WdLogEvent5_WdAssertion(v25);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !v9 || (v26 = *((_QWORD *)*i + 3), PsGetCurrentProcess(v18) == v26) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v27 = *i;
            v28 = a1 + 4;
            v29 = a1[4];
            if ( *((OUTPUTDUPL_CONTEXT ***)v29 + 1) != a1 + 4 )
              __fastfail(3u);
            *(_QWORD *)v27 = v29;
            *((_QWORD *)v27 + 1) = v28;
            *((_QWORD *)v29 + 1) = v27;
            *v28 = v27;
            *i = 0LL;
            v34[14] = v21;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics((OUTPUTDUPL_MGR *)a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v34, 1);
          }
        }
      }
    }
    ++v21;
  }
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v17, v19, v20);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
}
