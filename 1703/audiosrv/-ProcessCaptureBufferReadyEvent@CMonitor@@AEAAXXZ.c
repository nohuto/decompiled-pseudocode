/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18004792C
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x180002AC0 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18007AB98 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18007D1A0 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18007D1D0 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     Template_pxx @ 0x1800B848C (Template_pxx.c)
 *     WPP_SF_qdDdigi @ 0x1800B8660 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x1800D9000 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1800D9168 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rdi
  int v2; // esi
  double v3; // xmm6_8
  int *v4; // r15
  unsigned __int8 v5; // r8
  __int64 v6; // r8
  double v7; // xmm0_8
  __int64 v8; // rax
  double v9; // xmm1_8
  unsigned int v10; // ecx
  unsigned __int8 v11; // r8
  int v12; // ecx
  ATL::CAtlException *v13; // rbx
  unsigned __int64 v14; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v15; // [rsp+38h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-98h] BYREF
  char v17; // [rsp+58h] [rbp-90h]
  unsigned __int64 v18; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-80h] BYREF
  int v20; // [rsp+70h] [rbp-78h] BYREF
  int *v21; // [rsp+78h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-68h] BYREF
  ATL::CAtlException *v23; // [rsp+90h] [rbp-58h] BYREF
  CMonitor *v24; // [rsp+F0h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v26; // [rsp+100h] [rbp+18h] BYREF
  int v27; // [rsp+108h] [rbp+20h] BYREF

  v24 = this;
  Src[1] = (void *)-2LL;
  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 392);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v27);
  if ( v2 >= 0 )
  {
    v3 = DOUBLE_1_844674407370955e19;
    while ( 1 )
    {
      if ( !v27 )
        goto LABEL_4;
      if ( !*((_QWORD *)v1 + 39) )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x22u,
            (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
            v27);
        }
        v2 = (*(__int64 (__fastcall **)(_QWORD, void **, CMonitor **, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10) + 24LL))(
               *((_QWORD *)v1 + 10),
               Src,
               &v24,
               &v25,
               &v18,
               &v26);
        if ( v2 >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
                 *((_QWORD *)v1 + 10),
                 (unsigned int)v24);
          if ( v2 >= 0 )
          {
            AEWMILOG_GLITCH(v10, v1, v11, 0xCu, v18, v26, v14, v15);
            if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
              Template_pxx(v12, (unsigned int)"\x1B", (_DWORD)v1, v18, v26);
            ShipAssert(90113LL, 1LL);
          }
        }
LABEL_4:
        if ( v17 )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_6;
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 9) + 48LL))(*((_QWORD *)v1 + 9), &v20);
      if ( v2 < 0 )
        goto LABEL_4;
      v2 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10)
                                                                                              + 24LL))(
             *((_QWORD *)v1 + 10),
             Src,
             &v25,
             &v26);
      if ( v2 < 0 )
        goto LABEL_4;
      v4 = (int *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 296);
      v21 = v4;
      AEWMILOG_POSITION(*v4, v1, v5, 5u, (unsigned __int64)&v19, *v4, v19, (unsigned int)v25);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v15 = v19;
        LODWORD(v14) = v20;
        WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, v6, v4);
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 11) + 32LL))(
             *((_QWORD *)v1 + 11),
             &v19,
             &v18);
      if ( v2 < 0 )
        goto LABEL_4;
      v7 = (double)(int)v19;
      if ( (v19 & 0x8000000000000000uLL) != 0LL )
        v7 = v7 + v3;
      v8 = *((_QWORD *)v1 + 16);
      v9 = (double)(int)v8;
      if ( v8 < 0 )
        v9 = v9 + v3;
      *((double *)v4 + 2) = v7 / v9;
      memcpy_0(*((void **)v4 + 3), Src[0], (unsigned int)v25 * *((_QWORD *)v1 + 55));
      v4[3] = v25;
      v4[1] = v26;
      try
      {
        ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
          (char *)v1 + 344,
          &v21);
      }
      catch ( ATL::CAtlException *v23 )
      {
        v13 = v23;
        if ( *(_DWORD *)v23 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v21) = *(_DWORD *)v13;
        v2 = (int)v21;
        if ( (int)v21 < 0 )
        {
          if ( v17 )
            LeaveCriticalSection(lpCriticalSection);
          v1 = v24;
          goto LABEL_6;
        }
        v1 = v24;
        v3 = DOUBLE_1_844674407370955e19;
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
             *((_QWORD *)v1 + 10),
             (unsigned int)v25);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v27);
        if ( v2 >= 0 )
          continue;
      }
      goto LABEL_4;
    }
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_6:
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x23u,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        v2);
    }
    CMonitor::AbortMonitor(v1);
  }
}
