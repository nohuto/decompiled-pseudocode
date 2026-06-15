/*
 * XREFs of ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180059268
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180059134 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x18009CA08 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x1800D4F7C (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F20E8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdI.c)
 */

void __fastcall CCaptureNotifier::PublishCaptureAudioStatus(CCaptureNotifier *this)
{
  __int64 *v2; // r10
  unsigned int v3; // r11d
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rdx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+68h] [rbp-98h]
  int v16; // [rsp+6Ch] [rbp-94h]
  _DWORD v17[1024]; // [rsp+70h] [rbp-90h] BYREF

  memset_0(v17, 0, sizeof(v17));
  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = 0;
  v17[0] = 1;
  v4 = *v2;
  v5 = 8;
  v12 = *v2;
  while ( (__int64 *)v4 != v2 )
  {
    if ( *(_DWORD *)(v4 + 32) )
    {
      if ( v3 >= 0x3FE )
        break;
      v10 = v5;
      v5 += 4;
      *(_DWORD *)((char *)v17 + v10) = *(_DWORD *)(v4 + 28);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>,std::_Iterator_base0>::operator++(&v12);
    v4 = v12;
  }
  v17[1] = v3;
  v11 = RtlPublishWnfStateData(WNF_AUDC_CAPTURE, 0LL, v17, 4096LL, 0LL);
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                    v6,
                                                    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v7 > 4u )
  {
    v16 = 0;
    v14 = &v11;
    v15 = 4;
    TlgWrite(v7, &unk_180147237, v8, v9, 3u, &pData);
  }
}
