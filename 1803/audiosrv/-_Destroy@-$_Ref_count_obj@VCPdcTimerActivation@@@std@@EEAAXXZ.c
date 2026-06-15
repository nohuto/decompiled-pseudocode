/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180048D00
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x180049100 (-_Destroy@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180047F80 (Pdcv2ActivationClientDeactivate.c)
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x1800481F4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Ref_count_obj<CPdcTimerActivation>::_Destroy(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  int v4; // eax
  char *v5; // r8
  char *v6; // rcx
  int v7; // eax
  PVOID **v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // [rsp+38h] [rbp-59h] BYREF
  int v12; // [rsp+3Ch] [rbp-55h] BYREF
  CVADServer *v13; // [rsp+40h] [rbp-51h] BYREF
  __int64 UniqueStreamIdentifier; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v15[2]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v16; // [rsp+58h] [rbp-39h]
  __int64 v17; // [rsp+60h] [rbp-31h]
  unsigned __int16 *v18; // [rsp+68h] [rbp-29h] BYREF
  int v19; // [rsp+70h] [rbp-21h]
  int v20; // [rsp+74h] [rbp-1Dh]
  void *v21; // [rsp+78h] [rbp-19h]
  int v22; // [rsp+80h] [rbp-11h]
  int v23; // [rsp+84h] [rbp-Dh]
  CVADServer **v24; // [rsp+88h] [rbp-9h]
  __int64 v25; // [rsp+90h] [rbp-1h]
  int *v26; // [rsp+98h] [rbp+7h]
  __int64 v27; // [rsp+A0h] [rbp+Fh]
  __int64 *p_UniqueStreamIdentifier; // [rsp+A8h] [rbp+17h]
  __int64 v29; // [rsp+B0h] [rbp+1Fh]
  int *v30; // [rsp+B8h] [rbp+27h]
  __int64 v31; // [rsp+C0h] [rbp+2Fh]

  v17 = -2LL;
  v2 = a1[4];
  v3 = a1[3];
  v4 = _Mtx_lock((_Mtx_t)(v3 + 32));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(char **)(v3 + 16);
  v6 = *(char **)(v3 + 8);
  if ( v6 != v5 )
  {
    do
    {
      if ( *(_QWORD *)v6 == v2 )
        break;
      v6 += 8;
    }
    while ( v6 != v5 );
    if ( v6 != v5 )
    {
      memmove(v6, v6 + 8, v5 - (v6 + 8));
      *(_QWORD *)(v3 + 16) -= 8LL;
    }
  }
  v7 = _Mtx_unlock((_Mtx_t)(v3 + 32));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (PVOID **)a1[2];
  if ( v8 )
  {
    v12 = Pdcv2ActivationClientDeactivate(v8);
    a1[2] = 0LL;
    v10 = *((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v9,
                        lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
          + 1);
    if ( *(_DWORD *)v10 > 4u )
    {
      v13 = (CVADServer *)a1[4];
      v24 = &v13;
      v25 = 8LL;
      v11 = *((_DWORD *)v13 + 16);
      v26 = &v11;
      v27 = 4LL;
      UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v13);
      p_UniqueStreamIdentifier = &UniqueStreamIdentifier;
      v29 = 8LL;
      v30 = &v12;
      v31 = 4LL;
      v15[0] = ((unsigned int)&unk_180147146 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v15[1] = 4;
      v16 = 0LL;
      v18 = *(unsigned __int16 **)(v10 + 8);
      v19 = *v18;
      v20 = 2;
      v21 = &unk_180147151;
      v22 = 76;
      v23 = 1;
      EtwEventWriteTransfer(*(_QWORD *)(v10 + 32), v15, 0LL, 0LL, 6, &v18);
    }
  }
}
