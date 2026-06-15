/*
 * XREFs of ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800473E4
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x180002AC0 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18007AB98 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18007ABFC (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18007D1A0 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18007D1D0 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     ?GetHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAAEAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18007D214 (-GetHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_qdd @ 0x180090C54 (WPP_SF_qdd.c)
 *     Template_pxx @ 0x1800B848C (Template_pxx.c)
 *     WPP_SF_qdDdigi @ 0x1800B8660 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x1800D9000 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1800D9168 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::ProcessRenderBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rsi
  int v2; // r15d
  unsigned __int8 v3; // r8
  unsigned int v4; // ecx
  int v5; // ecx
  unsigned int v6; // r13d
  int *v7; // rbx
  unsigned __int8 v8; // r8
  double v9; // xmm6_8
  __int64 v10; // rax
  double v11; // xmm0_8
  double v12; // xmm6_8
  double v13; // xmm8_8
  double v14; // xmm0_8
  __int64 v15; // rax
  double v16; // xmm1_8
  __int64 v17; // r8
  int v18; // edi
  _QWORD *Head; // rax
  ATL::CAtlException *v20; // rbx
  double v21; // xmm7_8
  unsigned __int64 v22; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v23; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v24; // [rsp+38h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A0h] BYREF
  void *v27[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-88h] BYREF
  ATL::CAtlException *v29; // [rsp+78h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-78h] BYREF
  char v31; // [rsp+88h] [rbp-70h]
  int v33; // [rsp+108h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+110h] [rbp+18h] BYREF
  unsigned __int64 v35; // [rsp+118h] [rbp+20h] BYREF

  v27[1] = (void *)-2LL;
  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 392);
  v31 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 22) + 48LL))(*((_QWORD *)v1 + 22), &v33);
  if ( v2 < 0 )
  {
LABEL_2:
    if ( v31 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_7;
  }
  if ( !*((_QWORD *)v1 + 45) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 24) + 32LL))(
           *((_QWORD *)v1 + 24),
           &v35,
           &v34);
    if ( v2 < 0 )
      goto LABEL_2;
    v4 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
    }
    AEWMILOG_GLITCH(v4, v1, v3, 0xDu, v35, v34, v23, v24);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pxx(v5, (unsigned int)&EVT_GLITCH_CM_RENDER, (_DWORD)v1, v35, v34);
    ShipAssert(90113LL, 0LL);
  }
  v21 = DOUBLE_1_844674407370955e19;
  while ( *((_QWORD *)v1 + 45) )
  {
    v6 = *((_DWORD *)v1 + 60) - v33;
    if ( *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((char *)v1 + 344)
                   + 12LL) > v6 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v18 = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((char *)v1 + 344)
                        + 12LL);
        Head = (_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((char *)v1 + 344);
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          38LL,
          &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          *Head,
          v18,
          v6);
      }
      break;
    }
    v7 = (int *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 344);
    v34 = (unsigned __int64)v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**((_QWORD **)v1 + 24) + 32LL))(
           *((_QWORD *)v1 + 24),
           &v35,
           &v26);
    if ( v2 < 0 )
      break;
    v9 = (double)(int)v35;
    if ( (v35 & 0x8000000000000000uLL) != 0LL )
      v9 = v9 + v21;
    v10 = *((_QWORD *)v1 + 31);
    v11 = (double)(int)v10;
    if ( v10 < 0 )
      v11 = v11 + v21;
    v12 = v9 / v11;
    v13 = (double)*(int *)(*((_QWORD *)v1 + 12) + 4LL) * v12;
    if ( *((double *)v1 + 58) == 0.0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)v1 + 11) + 32LL))(
             *((_QWORD *)v1 + 11),
             &v25,
             v28);
      if ( v2 < 0 )
        break;
      v14 = (double)(int)v25;
      if ( v25 < 0 )
        v14 = v14 + v21;
      v15 = *((_QWORD *)v1 + 16);
      v16 = (double)(int)v15;
      if ( v15 < 0 )
        v16 = v16 + v21;
      *((double *)v1 + 58) = v14 / v16 - *((double *)v7 + 2);
    }
    AEWMILOG_POSITION((int)v13, v1, v8, 6u, v22, *v7, (unsigned int)(int)v13, v6);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      LODWORD(v22) = v7[3];
      WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, v17, v7);
    }
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(int)GetTickCount() - (double)*((int *)v1 + 114)) & _xmm) > 30000.0 )
    {
      *((_DWORD *)v1 + 114) = GetTickCount();
      CMonitor::MeasureClockDrift(v1, *((double *)v7 + 2), v12);
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)v1 + 23) + 24LL))(
           *((_QWORD *)v1 + 23),
           (unsigned int)v7[3],
           v27);
    if ( v2 >= 0 )
    {
      memcpy_0(v27[0], *((const void **)v7 + 3), (unsigned int)v7[3] * *((_QWORD *)v1 + 55));
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v1 + 23) + 32LL))(
             *((_QWORD *)v1 + 23),
             (unsigned int)v7[3],
             v7[1] & 2);
      if ( v2 >= 0 )
      {
        try
        {
          ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
            (char *)v1 + 296,
            &v34);
        }
        catch ( ATL::CAtlException *v29 )
        {
          v20 = v29;
          if ( *(_DWORD *)v29 == -1073741571 )
            o__resetstkoflw_0();
          LODWORD(v34) = *(_DWORD *)v20;
          v2 = v34;
          if ( (v34 & 0x80000000) != 0LL )
          {
            if ( v31 )
              LeaveCriticalSection(lpCriticalSection);
            v1 = this;
            goto LABEL_7;
          }
          v1 = this;
          v21 = DOUBLE_1_844674407370955e19;
        }
        v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 22) + 48LL))(*((_QWORD *)v1 + 22), &v33);
        if ( v2 >= 0 )
          continue;
      }
    }
    break;
  }
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_7:
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x27u,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        v2);
    }
    CMonitor::AbortMonitor(v1);
  }
}
