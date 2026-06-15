/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000C9D0
 * Callers:
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x14000EF60 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 * Callees:
 *     ?GetLatency@CProcessNode@@UEAAJPEA_J@Z @ 0x14000B3E0 (-GetLatency@CProcessNode@@UEAAJPEA_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x14001BFBC (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14002FFFC (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, _QWORD *a2, __int64 *a3)
{
  int v4; // r15d
  __int64 v7; // r13
  _QWORD *v8; // rcx
  _QWORD *v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // r14
  CProcessNode *v12; // rbx
  __int64 (__fastcall *v13)(CProcessNode *, __int64 *); // rax
  CProcessNode *v14; // rcx
  int Latency; // eax
  int v16; // esi
  __int64 v17; // rbx
  __int64 v19; // r10
  __int64 v20; // rcx
  TLG_PENABLECALLBACK v21; // rdx
  PVOID v22; // r8
  __int64 v23; // rbx
  const GUID *v24; // r8
  const GUID *v25; // r9
  TLG_PENABLECALLBACK v26; // rdx
  PVOID v27; // r8
  const struct _TlgProvider_t *v28; // rcx
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v34; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION v35; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+60h] [rbp-A0h]
  double v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v38; // [rsp+70h] [rbp-90h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-88h]
  _DWORD v40[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v42; // [rsp+90h] [rbp-70h] BYREF
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  void *v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  double *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  int *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]

  v38 = a3;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 232);
  v4 = 0;
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v4 = -2005139437;
    goto LABEL_16;
  }
  if ( !a3 )
  {
    v4 = -2147467261;
    goto LABEL_16;
  }
  v36 = 0;
  v35 = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v35);
  v8 = (_QWORD *)*((_QWORD *)this + 17);
  if ( !v8 )
  {
LABEL_24:
    if ( v36 )
      LeaveCriticalSection(v35);
LABEL_26:
    v4 = -2005139430;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v9 = (_QWORD *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( v9 == a2 )
      break;
    if ( !v8 )
      goto LABEL_24;
  }
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v35);
  if ( !v9 )
    goto LABEL_26;
  do
  {
    v10 = (_QWORD *)v9[2];
    v11 = 0LL;
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
          Latency = CProcessNode::GetLatency(v12, &v29);
          goto LABEL_10;
        }
      }
      Latency = v13(v14, &v29);
LABEL_10:
      v16 = Latency;
      if ( Latency < 0 )
      {
        if ( *((_DWORD *)v12 + 10) == 2 )
        {
          v23 = *((_QWORD *)v12 + 4);
          if ( *(_DWORD *)(v23 + 4) )
          {
            InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v31, &v34);
            if ( v31 )
            {
              v34 = &qword_14008A158;
              qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
              qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
              qword_14008A160 = (__int64)qword_14008A170;
              byte_14008A168 = 1;
              TraceLoggingRegisterEx(qword_14008A170, v26, v27);
              dword_14008A16C = 1;
              (*(void (__fastcall **)(__int64 *))(qword_14008A158 + 8))(&qword_14008A158);
              InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_14008A158);
            }
            v28 = (const struct _TlgProvider_t *)*((_QWORD *)v34 + 1);
            if ( *(_DWORD *)v28 > 2u )
            {
              v54 = 16LL;
              v53 = v23 + 8;
              v55 = &v32;
              v32 = v16;
              v56 = 4LL;
              TlgWrite(v28, &unk_140072466, v24, v25, 4u, &pData);
            }
          }
        }
      }
      else
      {
        v11 += v29;
        if ( *((_DWORD *)v12 + 10) == 2 )
        {
          v17 = *((_QWORD *)v12 + 4);
          if ( *(_DWORD *)(v17 + 4) )
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
              TraceLoggingRegisterEx(qword_14008A170, v21, v22);
              dword_14008A16C = 1;
              (*(void (__fastcall **)(__int64 *))(qword_14008A158 + 8))(&qword_14008A158);
              InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_14008A158);
            }
            v19 = *((_QWORD *)Context + 1);
            if ( *(_DWORD *)v19 > 4u )
            {
              v49 = 16LL;
              v51 = 8LL;
              v48 = v17 + 8;
              v50 = &v37;
              v37 = (double)(int)v29 / 10000000.0;
              v40[1] = 4;
              v42 = *(unsigned __int16 **)(v19 + 8);
              v40[0] = ((unsigned int)&unk_140072435 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
              v20 = *(_QWORD *)(v19 + 32);
              v41 = 0LL;
              v43 = *v42;
              v45 = &unk_140072440;
              v44 = 2;
              v46 = 37;
              v47 = 1;
              EtwEventWriteTransfer(v20, v40, 0LL, 0LL, 4, &v42);
            }
          }
        }
      }
    }
    v9 = (_QWORD *)*v9;
    v7 += v11;
  }
  while ( v9 );
  *v38 = v7;
LABEL_16:
  LeaveCriticalSection(lpCriticalSection);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
        (unsigned int)v4);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetLatency", 0x2CBu, v4);
  }
  return (unsigned int)v4;
}
