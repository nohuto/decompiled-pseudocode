/*
 * XREFs of ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800CA240
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18001C000 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097428 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180097844 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800C7678 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800CB6A8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSharedStreamGroupProxy::OnEndpointAvailableForUse(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r8d
  wil::details::in1diag3 *v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  TraceLoggingHProvider v16; // r10
  __int64 v17; // rcx
  UINT32 cData; // [rsp+20h] [rbp-98h]
  __int64 v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD **); // [rsp+38h] [rbp-80h] BYREF
  __int64 *v21[4]; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-38h] BYREF
  const char *v24; // [rsp+90h] [rbp-28h]
  __int64 p_pData; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v21[2] = (__int64 *)-2LL;
  try
  {
    v5 = *((_QWORD *)this + 8);
    if ( v5 && !*(_DWORD *)(v5 + 8) )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v20, (__int64)this - 8);
      v19 = 0LL;
      v21[0] = &v19;
      v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v21);
      if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v20, v6) >= 0 )
      {
        v21[0] = (__int64 *)&pData;
        v7 = v19;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        pData.Ptr = (ULONGLONG)off_180122890;
        *(_QWORD *)&pData.Size = v7;
        p_pData = (__int64)&pData;
        v8 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService);
        v11 = CSerialWorkQueue::QueueWorkItem(v8, (__int64)&pData, v9, v10);
        v13 = retaddr;
        if ( v11 < 0 )
          wil::details::in1diag3::_Throw_Hr(retaddr, (void *)0x588, v12, (const char *)(unsigned int)v11, cData);
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v13,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, a2);
          v24 = "OnEndpointAvailableForUse";
          p_pData = 26LL;
          TlgWrite(v16, &unk_180145E88, v14, v15, 4u, &pData);
        }
      }
      v17 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x592,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      a4);
  }
}
