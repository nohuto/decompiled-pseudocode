/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000E870
 * Callers:
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x140011F50 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetLatency@CProcessNode@@UEAAJPEA_J@Z @ 0x14000D2D0 (-GetLatency@CProcessNode@@UEAAJPEA_J@Z.c)
 *     TraceLoggingRegisterEx @ 0x14001B074 (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     atexit @ 0x14001C2EC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14002EFB8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, _QWORD *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r13
  unsigned int v5; // r15d
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // r14
  CProcessNode *v13; // rbx
  __int64 (__fastcall *v14)(CProcessNode *, __int64 *); // rax
  CProcessNode *v15; // rcx
  int Latency; // eax
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rbx
  __int64 v21; // r10
  __int64 v22; // rcx
  TLG_PENABLECALLBACK v23; // rdx
  PVOID v24; // r8
  __int64 v25; // rbx
  const struct _TlgProvider_t *v26; // rcx
  const GUID *v27; // r9
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B0h] BYREF
  char v34; // [rsp+58h] [rbp-A8h]
  double v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v36; // [rsp+68h] [rbp-98h]
  _DWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v39; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+8Ch] [rbp-74h]
  void *v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  double *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  int *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v36 = a3;
  v5 = 0;
  v32 = 0LL;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    if ( a3 )
    {
      v34 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v9 = (_QWORD *)*((_QWORD *)this + 21);
      if ( v9 )
      {
        while ( 1 )
        {
          v10 = (_QWORD *)v9[2];
          v9 = (_QWORD *)*v9;
          if ( v10 == a2 )
            break;
          if ( !v9 )
            goto LABEL_27;
        }
        ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
        if ( v10 )
        {
LABEL_6:
          v11 = (_QWORD *)v10[2];
          v12 = 0LL;
          if ( !v11 )
            goto LABEL_15;
          while ( 1 )
          {
            v13 = (CProcessNode *)v11[2];
            v11 = (_QWORD *)*v11;
            v14 = *(__int64 (__fastcall **)(CProcessNode *, __int64 *))(*(_QWORD *)v13 + 56LL);
            if ( v14 == CAPOProcessNode::GetLatency )
            {
              v15 = *(CProcessNode **)(*((_QWORD *)v13 + 4) + 40LL);
              v14 = *(__int64 (__fastcall **)(CProcessNode *, __int64 *))(*(_QWORD *)v15 + 32LL);
            }
            else
            {
              v15 = v13;
              if ( v14 == CProcessNode::GetLatency )
              {
                Latency = CProcessNode::GetLatency(v13, &v28);
                goto LABEL_10;
              }
            }
            Latency = v14(v15, &v28);
LABEL_10:
            v18 = Latency;
            if ( Latency < 0 )
            {
              if ( *((_DWORD *)v13 + 10) == 2 )
              {
                v25 = *((_QWORD *)v13 + 4);
                if ( *(_DWORD *)(v25 + 4) )
                {
                  v26 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                                         v17,
                                                         lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
                  if ( *(_DWORD *)v26 > 2u )
                  {
                    v51 = 16LL;
                    v50 = v25 + 8;
                    v52 = &v30;
                    v30 = v18;
                    v53 = 4LL;
                    TlgWrite(v26, &unk_14006FDEC, 0LL, v27, 4u, &pData);
                  }
                }
              }
            }
            else
            {
              v12 += v28;
              if ( *((_DWORD *)v13 + 10) == 2 )
              {
                v19 = *((_QWORD *)v13 + 4);
                if ( *(_DWORD *)(v19 + 4) )
                {
                  Context = 0LL;
                  if ( InitOnceBeginInitialize(
                         &`AudioDgTelemetryProvider::Instance'::`2'::wrapper,
                         0,
                         &fPending,
                         &Context)
                    && fPending )
                  {
                    Context = &qword_140088168;
                    qword_140088168 = (__int64)&AudioDgTelemetryProvider::`vftable';
                    qword_140088180 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
                    qword_140088170 = (__int64)qword_140088180;
                    byte_140088178 = 1;
                    TraceLoggingRegisterEx(qword_140088180, v23, v24);
                    dword_14008817C = 1;
                    (*(void (__fastcall **)(__int64 *))(qword_140088168 + 8))(&qword_140088168);
                    InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140088168);
                  }
                  v21 = *((_QWORD *)Context + 1);
                  if ( *(_DWORD *)v21 > 4u )
                  {
                    v46 = 16LL;
                    v48 = 8LL;
                    v45 = v19 + 8;
                    v47 = &v35;
                    v35 = (double)(int)v28 / 10000000.0;
                    v37[1] = 4;
                    v39 = *(unsigned __int16 **)(v21 + 8);
                    v37[0] = ((unsigned int)&unk_14006FDBB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                    v22 = *(_QWORD *)(v21 + 32);
                    v38 = 0LL;
                    v40 = *v39;
                    v42 = &unk_14006FDC6;
                    v41 = 2;
                    v43 = 37;
                    v44 = 1;
                    EtwEventWriteTransfer(v22, v37, 0LL, 0LL, 4, &v39);
                  }
                }
              }
            }
            if ( !v11 )
            {
              v8 = v32;
LABEL_15:
              v10 = (_QWORD *)*v10;
              v8 += v12;
              v32 = v8;
              if ( !v10 )
              {
                *v36 = v8;
                goto LABEL_17;
              }
              goto LABEL_6;
            }
          }
        }
      }
      else
      {
LABEL_27:
        if ( v34 )
          LeaveCriticalSection(lpCriticalSection);
      }
      v5 = -2005139430;
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids, v5);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetLatency", 0x2A7u, v5);
LABEL_17:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v5;
}
