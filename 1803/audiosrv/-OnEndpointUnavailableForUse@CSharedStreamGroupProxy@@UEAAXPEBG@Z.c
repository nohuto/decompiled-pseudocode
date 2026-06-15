/*
 * XREFs of ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800CA450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18001C000 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180097070 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097428 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180097844 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800C7678 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     _lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_ @ 0x1800C7E28 (_lambda_b2f72c50110305d9aa06d2931c2147e0_--__lambda_b2f72c50110305d9aa06d2931c2147e0_.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800CB6A8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CSharedStreamGroupProxy::OnEndpointUnavailableForUse(
        CSharedStreamGroupProxy *this,
        unsigned __int16 *a2)
{
  unsigned __int16 *v2; // rsi
  char *v3; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // r14
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // r8d
  wil::details::in1diag3 *v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  TraceLoggingHProvider v17; // r10
  __int64 v18; // rcx
  const char *v19; // r9
  UINT32 cData; // [rsp+20h] [rbp-118h]
  __int64 v21; // [rsp+30h] [rbp-108h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD **); // [rsp+38h] [rbp-100h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-F8h] BYREF
  const unsigned __int16 *v24; // [rsp+48h] [rbp-F0h]
  _QWORD *v25; // [rsp+50h] [rbp-E8h]
  volatile signed __int32 *v26; // [rsp+58h] [rbp-E0h]
  volatile signed __int32 *v27; // [rsp+60h] [rbp-D8h]
  __int64 v28; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-C8h]
  __int64 v30; // [rsp+80h] [rbp-B8h]
  _QWORD v31[8]; // [rsp+90h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-48h] BYREF
  const char *v34; // [rsp+100h] [rbp-38h]
  int v35; // [rsp+108h] [rbp-30h]
  int v36; // [rsp+10Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v30 = -2LL;
  v2 = a2;
  v24 = a2;
  try
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v22, (__int64)this - 8);
    v21 = 0LL;
    v3 = (char *)operator new(0x30uLL);
    v5 = (volatile signed __int32 *)v3;
    v23 = (__int64 *)v3;
    if ( v3 )
    {
      *((_DWORD *)v3 + 2) = 1;
      *((_DWORD *)v3 + 3) = 1;
      *(_QWORD *)v3 = &std::_Ref_count_obj<std::wstring>::`vftable';
      v25 = v3 + 16;
      std::wstring::wstring(v3 + 16, v2, v4);
    }
    else
    {
      v5 = 0LL;
    }
    v6 = v5 + 4;
    v26 = v5 + 4;
    v27 = v5;
    v23 = &v21;
    v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v23);
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v22, v7) >= 0 )
    {
      v25 = v31;
      v8 = v21;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      if ( v5 )
      {
        _InterlockedIncrement(v5 + 2);
        v6 = v26;
        v2 = (unsigned __int16 *)v24;
      }
      v31[0] = off_1801228C0;
      v31[1] = v8;
      v28 = 0LL;
      v31[2] = v6;
      v31[3] = v5;
      v29 = 0LL;
      v31[7] = v31;
      lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_(&v28);
      v9 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService);
      v12 = CSerialWorkQueue::QueueWorkItem(v9, (__int64)v31, v10, v11);
      v14 = retaddr;
      if ( v12 < 0 )
        wil::details::in1diag3::_Throw_Hr(retaddr, (void *)0x568, v13, (const char *)(unsigned int)v12, cData);
      if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           (__int64)v14,
                           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
            + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, v2);
        v34 = "OnEndpointUnavailableForUse";
        v35 = 28;
        v36 = 0;
        TlgWrite(v17, &unk_180145ED4, v15, v16, 4u, &pData);
      }
    }
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    v18 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x571,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      v19);
  }
}
