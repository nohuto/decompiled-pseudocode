/*
 * XREFs of ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C0194F88
 * Callers:
 *     ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0194EA0 (-CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_I.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0022264 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C01967A8 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(DXGGLOBAL *this, char a2, __int64 a3, __int64 a4)
{
  char v6; // r15
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGGLOBAL *v11; // r14
  DXGGLOBAL *v12; // rbx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // rsi
  LARGE_INTEGER v16; // rax
  LARGE_INTEGER v17; // r8
  LARGE_INTEGER v18; // r9
  __int64 v19; // rcx
  LONGLONG v20; // rdx
  char v21; // dl
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-C8h] BYREF
  LONGLONG v28; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h]
  _BYTE v31[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v32[32]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v33[40]; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  int *v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-14h]
  LONGLONG *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 364, 1, 0) && *((_BYTE *)this + 1288) != a2 )
  {
    *((_BYTE *)this + 1288) = a2;
    v6 = 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (DXGGLOBAL *)((char *)this + 400), a3, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    v11 = (DXGGLOBAL *)*((_QWORD *)this + 55);
    while ( v11 != (DXGGLOBAL *)((char *)this + 440) && v11 )
    {
      v12 = v11;
      v11 = *(DXGGLOBAL **)v11;
      if ( *((_QWORD *)v12 + 286) && *((_DWORD *)v12 + 619) && *((_DWORD *)v12 + 616) )
      {
        _m_prefetchw((char *)v12 + 24);
        v13 = *((_QWORD *)v12 + 3);
        while ( v13 )
        {
          v8 = v13 + 1;
          v14 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 3, v13 + 1, v13);
          if ( v14 == v13 )
          {
            LOBYTE(v13) = 1;
            break;
          }
        }
        if ( (_BYTE)v13 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v12, 0LL);
          DXGADAPTER::ReleaseReference(v12);
          v15 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
          PerformanceFrequency.QuadPart = 0LL;
          v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v25 = *((_DWORD *)v12 + 69);
          v19 = *((unsigned int *)v12 + 70);
          v20 = 1000000 * (v16.QuadPart - a3) % PerformanceFrequency.QuadPart;
          v28 = 1000000 * (v16.QuadPart - a3) / PerformanceFrequency.QuadPart;
          v26 = v19;
          if ( dword_1C006E810 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C006E810, 0x400000000004uLL) )
          {
            v37 = 0;
            v40 = 0;
            v43 = 0;
            v35 = &v25;
            v38 = &v26;
            v41 = &v28;
            v36 = 4;
            v39 = 4;
            v42 = 8;
            TlgWrite((TraceLoggingHProvider)&dword_1C006E810, &unk_1C0051389, 0LL, (LPCGUID)v18.QuadPart, 5u, &pData);
          }
          if ( (int)v15 < 0 )
          {
            v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
                    v19,
                    v20,
                    (LARGE_INTEGER)v17.QuadPart,
                    (LARGE_INTEGER)v18.QuadPart);
            *(_QWORD *)(v23 + 24) = v12;
            *(_QWORD *)(v23 + 32) = v15;
            WdLogEvent5_WdWarning(v23);
          }
          else
          {
            v21 = 0;
            v22 = 0;
            if ( *((_DWORD *)v12 + 616) )
            {
              do
              {
                if ( !*(_DWORD *)(520LL * v22 + *((_QWORD *)v12 + 290) + 208) )
                {
                  DXGADAPTER::SetPowerComponentActiveCBInternal(v12, v22, 1u, 0);
                  v21 = 1;
                }
                ++v22;
              }
              while ( v22 < *((_DWORD *)v12 + 616) );
              if ( v21 )
              {
                v6 = 1;
                _InterlockedAdd((volatile signed __int32 *)v12 + 750, 1u);
              }
            }
          }
          COREACCESS::~COREACCESS((COREACCESS *)v33);
          COREACCESS::~COREACCESS((COREACCESS *)v32);
        }
        else
        {
          v24 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
          *(_QWORD *)(v24 + 24) = v12;
          WdLogEvent5_WdWarning(v24);
        }
      }
    }
    if ( v6 )
    {
      v30 = -10000000LL;
      if ( KeSetTimer((PKTIMER)((char *)this + 1296), (LARGE_INTEGER)-10000000LL, (PKDPC)((char *)this + 1360)) )
        DXGGLOBAL::ReleaseComponentReferencesHelper(this);
    }
    _InterlockedExchange((volatile __int32 *)this + 364, 0);
    if ( v29[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v7, v9, v10);
  }
}
