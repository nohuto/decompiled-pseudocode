/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BDA0
 * Callers:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000C080 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140007950 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?GetLatency@CProcessNode@@UEAAJPEA_J@Z @ 0x14000B3E0 (-GetLatency@CProcessNode@@UEAAJPEA_J@Z.c)
 *     ?GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000BAC0 (-GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000D790 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x14000EC10 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x14001BFBC (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  __int64 v4; // rdi
  int v5; // r14d
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(CAudioDeviceGraph *, struct Windows::Media::Devices::IAudioDeviceModulesManager **); // rax
  int v8; // eax
  _QWORD *v9; // rbx
  CProcessNode *v10; // rdi
  __int64 (__fastcall *v11)(CProcessNode *, __int64 *); // rax
  CProcessNode *v12; // rcx
  int Latency; // eax
  int v14; // esi
  __int64 v15; // rdi
  unsigned int (__fastcall *v16)(Windows::Media::Devices::AudioDeviceModulesManager *__hidden); // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  TLG_PENABLECALLBACK v20; // rdx
  PVOID v21; // r8
  __int64 v22; // rdi
  const GUID *v23; // r8
  const GUID *v24; // r9
  TLG_PENABLECALLBACK v25; // rdx
  PVOID v26; // r8
  const struct _TlgProvider_t *v27; // rcx
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v28; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v34; // [rsp+58h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A0h] BYREF
  char v36; // [rsp+68h] [rbp-98h]
  double v37; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v38[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v40; // [rsp+90h] [rbp-70h] BYREF
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  void *v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  double *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  int *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]

  v36 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *((_QWORD *)this + 12);
  v28 = 0LL;
  if ( *((_QWORD *)a2 + 18) )
  {
    v5 = -2005139410;
  }
  else
  {
    v5 = 0;
    if ( *((_QWORD *)a2 + 18) != v4 )
    {
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v6 = *((_QWORD *)a2 + 18);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      *((_QWORD *)a2 + 18) = v4;
    }
  }
  if ( v5 >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct Windows::Media::Devices::IAudioDeviceModulesManager **))(*(_QWORD *)this + 80LL);
    v8 = v7 == CAudioDeviceGraph::GetAudioDeviceModulesManager
       ? CAudioDeviceGraph::GetAudioDeviceModulesManager(this, &v28)
       : v7(this, &v28);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v5 = CPipeInstance::AddConnectionsAndActivateAPOs(a2, v28);
      if ( v5 >= 0 )
        v5 = CAudioDeviceGraph::RegisterSpatialPipe((CAudioDeviceGraph *)((char *)this - 16), a2, 1);
    }
  }
  v9 = (_QWORD *)*((_QWORD *)a2 + 2);
  while ( v9 )
  {
    v10 = (CProcessNode *)v9[2];
    v9 = (_QWORD *)*v9;
    v11 = *(__int64 (__fastcall **)(CProcessNode *, __int64 *))(*(_QWORD *)v10 + 56LL);
    if ( v11 == CAPOProcessNode::GetLatency )
    {
      v12 = *(CProcessNode **)(*((_QWORD *)v10 + 4) + 40LL);
      v11 = *(__int64 (__fastcall **)(CProcessNode *, __int64 *))(*(_QWORD *)v12 + 32LL);
    }
    else
    {
      v12 = v10;
      if ( v11 == CProcessNode::GetLatency )
      {
        Latency = CProcessNode::GetLatency(v10, &v32);
        goto LABEL_18;
      }
    }
    Latency = v11(v12, &v32);
LABEL_18:
    v14 = Latency;
    if ( Latency < 0 )
    {
      if ( *((_DWORD *)v10 + 10) == 2 )
      {
        v22 = *((_QWORD *)v10 + 4);
        if ( *(_DWORD *)(v22 + 4) )
        {
          InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v30, &v34);
          if ( v30 )
          {
            v34 = &qword_14008A158;
            qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
            qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
            qword_14008A160 = (__int64)qword_14008A170;
            byte_14008A168 = 1;
            TraceLoggingRegisterEx(qword_14008A170, v25, v26);
            dword_14008A16C = 1;
            (*(void (__fastcall **)(__int64 *))(qword_14008A158 + 8))(&qword_14008A158);
            InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_14008A158);
          }
          v27 = (const struct _TlgProvider_t *)*((_QWORD *)v34 + 1);
          if ( *(_DWORD *)v27 > 2u )
          {
            v52 = 16LL;
            v51 = v22 + 8;
            v53 = &v31;
            v31 = v14;
            v54 = 4LL;
            TlgWrite(v27, &unk_140072466, v23, v24, 4u, &pData);
          }
        }
      }
    }
    else if ( *((_DWORD *)v10 + 10) == 2 )
    {
      v15 = *((_QWORD *)v10 + 4);
      if ( *(_DWORD *)(v15 + 4) )
      {
        InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
        if ( fPending )
        {
          Context = &qword_14008A158;
          qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
          qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
          qword_14008A160 = (__int64)qword_14008A170;
          byte_14008A168 = 1;
          TraceLoggingRegisterEx(qword_14008A170, v20, v21);
          dword_14008A16C = 1;
          (*(void (__fastcall **)(__int64 *))(qword_14008A158 + 8))(&qword_14008A158);
          InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_14008A158);
        }
        v18 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v18 > 4u )
        {
          v47 = 16LL;
          v49 = 8LL;
          v46 = v15 + 8;
          v48 = &v37;
          v37 = (double)(int)v32 / 10000000.0;
          v38[1] = 4;
          v40 = *(unsigned __int16 **)(v18 + 8);
          v38[0] = ((unsigned int)&unk_140072435 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v19 = *(_QWORD *)(v18 + 32);
          v39 = 0LL;
          v41 = *v40;
          v43 = &unk_140072440;
          v42 = 2;
          v44 = 37;
          v45 = 1;
          EtwEventWriteTransfer(v19, v38, 0LL, 0LL, 4, &v40);
        }
      }
    }
  }
  if ( v28 )
  {
    v16 = *(unsigned int (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *__hidden))(*(_QWORD *)v28 + 16LL);
    if ( v16 == Windows::Media::Devices::AudioDeviceModulesManager::Release )
      Windows::Media::Devices::AudioDeviceModulesManager::Release(v28);
    else
      v16(v28);
  }
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
