/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800E456C
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x1800E24D0 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x1800E23BC (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x1800E2450 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1800E50FC (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx @ 0x1800E607C (McTemplateU0pxx.c)
 *     WPP_SF_qdDdigi @ 0x1800E624C (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x18011D0C4 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x18011D164 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rdi
  _QWORD *v2; // r12
  int v3; // esi
  double v4; // xmm6_8
  int *v5; // r15
  unsigned __int8 v6; // r8
  __int64 v7; // r8
  double v8; // xmm0_8
  __int64 v9; // rax
  double v10; // xmm1_8
  unsigned int v11; // ecx
  unsigned __int8 v12; // r8
  int v13; // ecx
  ATL::CAtlException *v14; // rbx
  unsigned __int64 v15; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v16; // [rsp+38h] [rbp-C0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-A8h] BYREF
  char v18; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v19; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-90h] BYREF
  int v21; // [rsp+70h] [rbp-88h] BYREF
  int *v22; // [rsp+78h] [rbp-80h] BYREF
  _QWORD *v23; // [rsp+80h] [rbp-78h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-70h] BYREF
  ATL::CAtlException *v25; // [rsp+98h] [rbp-60h] BYREF
  CMonitor *v26; // [rsp+100h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+108h] [rbp+10h] BYREF
  unsigned __int64 v28; // [rsp+110h] [rbp+18h] BYREF
  int v29; // [rsp+118h] [rbp+20h] BYREF

  v26 = this;
  Src[1] = (void *)-2LL;
  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 392);
  v18 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)((char *)v1 + 80);
  v23 = (_QWORD *)((char *)v1 + 80);
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v29);
  if ( v3 >= 0 )
  {
    v4 = DOUBLE_1_844674407370955e19;
    while ( v29 )
    {
      if ( !*((_QWORD *)v1 + 39) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x22u,
            (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
            v29);
        }
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **, CMonitor **, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10) + 24LL))(
               *((_QWORD *)v1 + 10),
               &v23,
               &v26,
               &v27,
               &v19,
               &v28);
        if ( v3 >= 0 )
        {
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
                 *((_QWORD *)v1 + 10),
                 (unsigned int)v26);
          if ( v3 >= 0 )
          {
            AEWMILOG_GLITCH(v11, v1, v12, 0xCu, v19, v28, v15, v16);
            if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
              McTemplateU0pxx(v13, (unsigned int)&EVT_GLITCH_CM_CAPTURE, (_DWORD)v1, v19, v28);
            ShipAssert(90113LL, 1LL);
          }
        }
        break;
      }
      v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 9) + 48LL))(*((_QWORD *)v1 + 9), &v21);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)*v2 + 24LL))(
               *v2,
               Src,
               &v27,
               &v28);
        if ( v3 >= 0 )
        {
          v5 = (int *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 296);
          v22 = v5;
          AEWMILOG_POSITION(*v5, v1, v6, 5u, (unsigned __int64)&v20, *v5, v20, (unsigned int)v27);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            v16 = v20;
            LODWORD(v15) = v21;
            WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, v7, v5, v27, v28);
          }
          v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 11) + 32LL))(
                 *((_QWORD *)v1 + 11),
                 &v20,
                 &v19);
          if ( v3 >= 0 )
          {
            v8 = (double)(int)v20;
            if ( (v20 & 0x8000000000000000uLL) != 0LL )
              v8 = v8 + v4;
            v9 = *((_QWORD *)v1 + 16);
            v10 = (double)(int)v9;
            if ( v9 < 0 )
              v10 = v10 + v4;
            *((double *)v5 + 2) = v8 / v10;
            memcpy_0(*((void **)v5 + 3), Src[0], (unsigned int)v27 * *((_QWORD *)v1 + 55));
            v5[3] = v27;
            v5[1] = v28;
            try
            {
              ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
                (__int64 *)v1 + 43,
                (__int64)&v22);
            }
            catch ( ATL::CAtlException *v25 )
            {
              v14 = v25;
              if ( *(_DWORD *)v25 == -1073741571 )
                o__resetstkoflw_0();
              LODWORD(v22) = *(_DWORD *)v14;
              v3 = (int)v22;
              if ( (int)v22 < 0 )
              {
                if ( v18 )
                  LeaveCriticalSection(lpCriticalSection);
                v1 = v26;
                goto LABEL_39;
              }
              v1 = v26;
              v4 = DOUBLE_1_844674407370955e19;
              v2 = v23;
            }
            v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
                   *((_QWORD *)v1 + 10),
                   (unsigned int)v27);
            if ( v3 >= 0 )
            {
              v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(
                     *((_QWORD *)v1 + 10),
                     &v29);
              if ( v3 >= 0 )
                continue;
            }
          }
        }
      }
      break;
    }
    if ( v18 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else if ( v18 )
  {
    LeaveCriticalSection(lpCriticalSection);
  }
LABEL_39:
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x23u,
        (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
        v3);
    }
    CMonitor::AbortMonitor(v1);
  }
}
