/*
 * XREFs of ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800A9FD8
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x1800A787C (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_qdd @ 0x180077200 (WPP_SF_qdd.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x1800A7768 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x1800A77FC (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?GetHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAAEAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1800A7A48 (-GetHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x1800A8BA0 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1800AA68C (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx @ 0x1800AB5EC (McTemplateU0pxx.c)
 *     WPP_SF_qdDdigi @ 0x1800AB7BC (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1800F0084 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x1800F0124 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::ProcessRenderBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rsi
  int v2; // r15d
  unsigned __int8 v3; // r8
  unsigned int v4; // ecx
  int v5; // ecx
  double v6; // xmm7_8
  unsigned int v7; // r13d
  int *v8; // rbx
  unsigned __int8 v9; // r8
  double v10; // xmm6_8
  __int64 v11; // rax
  double v12; // xmm0_8
  double v13; // xmm6_8
  double v14; // xmm8_8
  double v15; // xmm0_8
  __int64 v16; // rax
  double v17; // xmm1_8
  __int64 v18; // r8
  int v19; // edi
  _QWORD *Head; // rax
  ATL::CAtlException *v21; // rbx
  unsigned __int64 v22; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v23; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v25; // [rsp+38h] [rbp-C0h]
  __int64 v26; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A0h] BYREF
  void *v28[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v29[8]; // [rsp+70h] [rbp-88h] BYREF
  ATL::CAtlException *v30; // [rsp+78h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-78h] BYREF
  char v32; // [rsp+88h] [rbp-70h]
  int v34; // [rsp+108h] [rbp+10h] BYREF
  unsigned __int64 v35; // [rsp+110h] [rbp+18h] BYREF
  unsigned __int64 v36; // [rsp+118h] [rbp+20h] BYREF

  v28[1] = (void *)-2LL;
  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 392);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 22) + 48LL))(*((_QWORD *)v1 + 22), &v34);
  if ( v2 < 0 )
  {
LABEL_2:
    if ( v32 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_51;
  }
  if ( !*((_QWORD *)v1 + 45) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 24) + 32LL))(
           *((_QWORD *)v1 + 24),
           &v36,
           &v35);
    if ( v2 < 0 )
      goto LABEL_2;
    v4 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
    }
    AEWMILOG_GLITCH(v4, v1, v3, 0xDu, v36, v35, v24, v25);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      McTemplateU0pxx(v5, (unsigned int)&EVT_GLITCH_CM_RENDER, (_DWORD)v1, v36, v35);
    ShipAssert(90113LL, 0LL);
  }
  v6 = DOUBLE_1_844674407370955e19;
  while ( *((_QWORD *)v1 + 45) )
  {
    v7 = *((_DWORD *)v1 + 60) - v34;
    if ( *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 43)
                   + 12LL) > v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v19 = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 43)
                        + 12LL);
        Head = (_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 43);
        LODWORD(v23) = v7;
        LODWORD(v22) = v19;
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x26u,
          (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          *Head,
          v22,
          v23);
      }
      break;
    }
    v8 = (int *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 344);
    v35 = (unsigned __int64)v8;
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**((_QWORD **)v1 + 24) + 32LL))(
           *((_QWORD *)v1 + 24),
           &v36,
           &v27);
    if ( v2 < 0 )
      break;
    v10 = (double)(int)v36;
    if ( (v36 & 0x8000000000000000uLL) != 0LL )
      v10 = v10 + v6;
    v11 = *((_QWORD *)v1 + 31);
    v12 = (double)(int)v11;
    if ( v11 < 0 )
      v12 = v12 + v6;
    v13 = v10 / v12;
    v14 = (double)*(int *)(*((_QWORD *)v1 + 12) + 4LL) * v13;
    if ( *((double *)v1 + 58) == 0.0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)v1 + 11) + 32LL))(
             *((_QWORD *)v1 + 11),
             &v26,
             v29);
      if ( v2 < 0 )
        break;
      v15 = (double)(int)v26;
      if ( v26 < 0 )
        v15 = v15 + v6;
      v16 = *((_QWORD *)v1 + 16);
      v17 = (double)(int)v16;
      if ( v16 < 0 )
        v17 = v17 + v6;
      *((double *)v1 + 58) = v15 / v17 - *((double *)v8 + 2);
    }
    AEWMILOG_POSITION((int)v14, v1, v9, 6u, v22, *v8, (unsigned int)(int)v14, v7);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, v18, v8, v8[3], v8[1]);
    }
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(int)GetTickCount() - (double)*((int *)v1 + 114)) & _xmm) > 30000.0 )
    {
      *((_DWORD *)v1 + 114) = GetTickCount();
      CMonitor::MeasureClockDrift(v1, *((double *)v8 + 2), v13);
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)v1 + 23) + 24LL))(
           *((_QWORD *)v1 + 23),
           (unsigned int)v8[3],
           v28);
    if ( v2 >= 0 )
    {
      memcpy_0(v28[0], *((const void **)v8 + 3), (unsigned int)v8[3] * *((_QWORD *)v1 + 55));
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v1 + 23) + 32LL))(
             *((_QWORD *)v1 + 23),
             (unsigned int)v8[3],
             v8[1] & 2);
      if ( v2 >= 0 )
      {
        try
        {
          ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
            (__int64 *)v1 + 37,
            (__int64)&v35);
        }
        catch ( ATL::CAtlException *v30 )
        {
          v21 = v30;
          if ( *(_DWORD *)v30 == -1073741571 )
            o__resetstkoflw_0();
          LODWORD(v35) = *(_DWORD *)v21;
          v2 = v35;
          if ( (v35 & 0x80000000) != 0LL )
          {
            if ( v32 )
              LeaveCriticalSection(lpCriticalSection);
            v1 = this;
            goto LABEL_51;
          }
          v1 = this;
          v6 = DOUBLE_1_844674407370955e19;
        }
        v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 22) + 48LL))(*((_QWORD *)v1 + 22), &v34);
        if ( v2 >= 0 )
          continue;
      }
    }
    break;
  }
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_51:
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
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
