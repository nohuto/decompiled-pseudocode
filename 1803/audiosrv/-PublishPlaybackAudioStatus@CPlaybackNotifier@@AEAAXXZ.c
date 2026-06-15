/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005937C
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180059134 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x18009CA08 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x1800D4D38 (--1CPlaybackNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800174E4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  __int64 *v2; // r10
  unsigned int v3; // r11d
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+68h] [rbp-98h]
  int v17; // [rsp+6Ch] [rbp-94h]
  _DWORD v18[1024]; // [rsp+70h] [rbp-90h] BYREF

  memset_0(v18, 0, sizeof(v18));
  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = 0;
  v18[0] = 1;
  v4 = *v2;
  v5 = 8;
  v13 = *v2;
  while ( (__int64 *)v4 != v2 )
  {
    v10 = v4 + 32;
    if ( *(_DWORD *)(v4 + 64) )
    {
      if ( v3 >= 0x24 )
        break;
      if ( *(_QWORD *)(v4 + 56) >= 8uLL )
        v10 = *(_QWORD *)v10;
      v11 = v5;
      v5 += 112;
      *(_OWORD *)((char *)v18 + v11) = *(_OWORD *)v10;
      *(_OWORD *)((char *)&v18[4] + v11) = *(_OWORD *)(v10 + 16);
      *(_OWORD *)((char *)&v18[8] + v11) = *(_OWORD *)(v10 + 32);
      *(_OWORD *)((char *)&v18[12] + v11) = *(_OWORD *)(v10 + 48);
      *(_OWORD *)((char *)&v18[16] + v11) = *(_OWORD *)(v10 + 64);
      *(_OWORD *)((char *)&v18[20] + v11) = *(_OWORD *)(v10 + 80);
      *(_OWORD *)((char *)&v18[24] + v11) = *(_OWORD *)(v10 + 96);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>,std::_Iterator_base0>::operator++(&v13);
    v4 = v13;
  }
  v18[1] = v3;
  v12 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, v18, 4096LL, 0LL);
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                    v6,
                                                    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v7 > 4u )
  {
    v17 = 0;
    v15 = &v12;
    v16 = 4;
    TlgWrite(v7, &unk_18014726A, v8, v9, 3u, &pData);
  }
}
