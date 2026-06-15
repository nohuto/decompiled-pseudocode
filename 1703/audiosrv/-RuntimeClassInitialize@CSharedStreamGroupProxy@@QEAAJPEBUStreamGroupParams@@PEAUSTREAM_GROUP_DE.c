/*
 * XREFs of ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18002BE9C
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18002B8BC (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 * Callees:
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x18000A6B0 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002B320 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18007B26C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800A47C0 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsoft@@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAVWeakRef@12@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800A4948 (--$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsof.c)
 *     WPP_SF_Sddd @ 0x1800A7BDC (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSharedStreamGroupProxy::RuntimeClassInitialize(
        CSharedStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        struct STREAM_GROUP_DESCRIPTOR *a3,
        int a4)
{
  int Instance; // ebx
  IUnknown *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // [rsp+40h] [rbp-30h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 (__fastcall ***v18[3])(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-18h] BYREF

  v18[1] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))-2LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10,
      *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 14LL));
  }
  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_816e5b3e_5523_4efc_9223_98ec4214c3a0,
               (LPVOID *)&pProxy);
  if ( Instance < 0 )
    goto LABEL_33;
  Instance = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  if ( Instance < 0 )
    goto LABEL_33;
  Instance = ((__int64 (__fastcall *)(IUnknown *, struct STREAM_GROUP_DESCRIPTOR *))pProxy->lpVtbl[2].Release)(
               pProxy,
               a3);
  if ( Instance < 0 )
    goto LABEL_33;
  v9 = pProxy;
  if ( *((IUnknown **)this + 10) != pProxy )
  {
    if ( pProxy )
      ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->AddRef)(pProxy);
    v10 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Instance = CBaseStreamGroupProxy::RuntimeClassInitialize((CSharedStreamGroupProxy *)((char *)this + 8), a2, a4);
  if ( Instance < 0 )
    goto LABEL_33;
  v11 = *((_QWORD *)this + 8);
  if ( v11 && !*(_DWORD *)(v11 + 8) && !*(_QWORD *)(v11 + 16) )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>(v18, this);
    v17 = 0LL;
    v15 = &v17;
    v13 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v18[0], v13) >= 0 )
    {
      LODWORD(v15) = 0;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 408);
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
                  (char *)this + 408,
                  &v17,
                  v11 + 24,
                  &v15) >= 0 )
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
                     *(_QWORD *)&g_DeviceEnumerator,
                     *((_QWORD *)this + 51));
    }
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v18);
  }
  if ( Instance < 0 )
  {
LABEL_33:
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids,
        (unsigned int)Instance);
    }
  }
  else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids, this);
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)Instance;
}
