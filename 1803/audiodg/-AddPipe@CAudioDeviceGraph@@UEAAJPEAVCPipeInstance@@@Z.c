/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DBF0
 * Callers:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DE60 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140009D30 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?GetLatency@CProcessNode@@UEAAJPEA_J@Z @ 0x14000D2D0 (-GetLatency@CProcessNode@@UEAAJPEA_J@Z.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000F5F0 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     TraceLoggingRegisterEx @ 0x14001B074 (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     atexit @ 0x14001C2EC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  _QWORD *v10; // rbx
  unsigned int v11; // r14d
  CProcessNode *v12; // rdi
  __int64 (__fastcall *v13)(CProcessNode *, __int64 *); // rax
  CProcessNode *v14; // rcx
  int Latency; // eax
  __int64 v16; // rcx
  int v17; // esi
  int v18; // eax
  __int64 v19; // rdi
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  TLG_PENABLECALLBACK v25; // rdx
  PVOID v26; // r8
  __int64 v27; // rdi
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r9
  UINT32 cData; // [rsp+20h] [rbp-A9h]
  WINBOOL fPending; // [rsp+30h] [rbp-99h] BYREF
  int v32; // [rsp+34h] [rbp-95h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-91h] BYREF
  __int64 v34; // [rsp+40h] [rbp-89h] BYREF
  double v35; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v36[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v37; // [rsp+58h] [rbp-71h]
  unsigned __int16 *v38; // [rsp+60h] [rbp-69h] BYREF
  int v39; // [rsp+68h] [rbp-61h]
  int v40; // [rsp+6Ch] [rbp-5Dh]
  void *v41; // [rsp+70h] [rbp-59h]
  int v42; // [rsp+78h] [rbp-51h]
  int v43; // [rsp+7Ch] [rbp-4Dh]
  __int64 v44; // [rsp+80h] [rbp-49h]
  __int64 v45; // [rsp+88h] [rbp-41h]
  double *v46; // [rsp+90h] [rbp-39h]
  __int64 v47; // [rsp+98h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-9h]
  __int64 v50; // [rsp+C8h] [rbp-1h]
  int *v51; // [rsp+D0h] [rbp+7h]
  __int64 v52; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = *((_QWORD *)this + 16);
  v6 = (_QWORD *)((char *)a2 + 144);
  if ( *((_QWORD *)a2 + 18) )
  {
    v8 = -2005139410;
    v24 = 1897LL;
    v23 = 2289827886LL;
    goto LABEL_34;
  }
  if ( v5 && a2 != (struct CPipeInstance *)-144LL )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 16));
    if ( *v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
    *v6 = v5;
  }
  v7 = CPipeInstance::AddConnectionsAndActivateAPOs(
         a2,
         *((struct Windows::Media::Devices::IAudioDeviceModulesManager **)this + 50));
  v8 = v7;
  if ( v7 < 0 )
  {
    v23 = (unsigned int)v7;
    v24 = 1898LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v23,
      cData);
    v11 = v8;
    goto LABEL_17;
  }
  v9 = CAudioDeviceGraph::RegisterSpatialPipe((CAudioDeviceGraph *)((char *)this - 16), a2, 1);
  v8 = v9;
  if ( v9 < 0 )
  {
    v23 = (unsigned int)v9;
    v24 = 1899LL;
    goto LABEL_34;
  }
  v10 = (_QWORD *)*((_QWORD *)a2 + 2);
  v11 = 0;
  while ( v10 )
  {
    v12 = (CProcessNode *)v10[2];
    v10 = (_QWORD *)*v10;
    v13 = *(__int64 (__fastcall **)(CProcessNode *, __int64 *))(*(_QWORD *)v12 + 56LL);
    if ( v13 == CAPOProcessNode::GetLatency )
    {
      v14 = *(CProcessNode **)(*((_QWORD *)v12 + 4) + 40LL);
      v13 = *(__int64 (__fastcall **)(CProcessNode *, __int64 *))(*(_QWORD *)v14 + 32LL);
    }
    else
    {
      v14 = v12;
      if ( v13 == CProcessNode::GetLatency )
      {
        Latency = CProcessNode::GetLatency(v12, &v34);
        goto LABEL_13;
      }
    }
    Latency = v13(v14, &v34);
LABEL_13:
    v17 = Latency;
    v18 = *((_DWORD *)v12 + 10);
    if ( v17 < 0 )
    {
      if ( v18 == 2 )
      {
        v27 = *((_QWORD *)v12 + 4);
        if ( *(_DWORD *)(v27 + 4) )
        {
          v28 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                                 v16,
                                                 lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
          if ( *(_DWORD *)v28 > 2u )
          {
            v50 = 16LL;
            v49 = v27 + 8;
            v51 = &v32;
            v32 = v17;
            v52 = 4LL;
            TlgWrite(v28, &unk_14006FDEC, 0LL, v29, 4u, &pData);
          }
        }
      }
    }
    else if ( v18 == 2 )
    {
      v19 = *((_QWORD *)v12 + 4);
      if ( *(_DWORD *)(v19 + 4) )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = &qword_140088168;
          qword_140088168 = (__int64)&AudioDgTelemetryProvider::`vftable';
          qword_140088180 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
          qword_140088170 = (__int64)qword_140088180;
          byte_140088178 = 1;
          TraceLoggingRegisterEx(qword_140088180, v25, v26);
          dword_14008817C = 1;
          (*(void (__fastcall **)(__int64 *))(qword_140088168 + 8))(&qword_140088168);
          InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140088168);
        }
        v21 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v21 > 4u )
        {
          v45 = 16LL;
          v47 = 8LL;
          v44 = v19 + 8;
          v46 = &v35;
          v35 = (double)(int)v34 / 10000000.0;
          v36[1] = 4;
          v38 = *(unsigned __int16 **)(v21 + 8);
          v36[0] = ((unsigned int)&unk_14006FDBB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v22 = *(_QWORD *)(v21 + 32);
          v37 = 0LL;
          v39 = *v38;
          v41 = &unk_14006FDC6;
          v40 = 2;
          v42 = 37;
          v43 = 1;
          EtwEventWriteTransfer(v22, v36, 0LL, 0LL, 4, &v38);
        }
      }
    }
  }
LABEL_17:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v11;
}
