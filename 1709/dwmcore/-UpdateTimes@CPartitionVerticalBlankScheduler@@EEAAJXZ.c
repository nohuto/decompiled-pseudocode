/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180011750 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180011CE8 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180014230 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180015304 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x18002AF50 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180126338 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1801263B4 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x18012A134 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(CPartitionVerticalBlankScheduler *this)
{
  char v1; // al
  char *v3; // rbx
  unsigned int i; // edi
  unsigned int v5; // edx
  unsigned int j; // edi
  unsigned int k; // edi
  __int64 v8; // rdi
  unsigned __int64 *v9; // r14
  __int64 v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ebx
  int v22; // edi
  int v23; // r8d
  unsigned int m; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  char v28; // al
  int v30; // eax
  int v31; // eax
  int v32; // eax
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v33; // rcx
  unsigned int v34; // edx
  int v35; // r8d
  __int64 v36; // rcx
  _QWORD *v37; // r15
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rtt
  unsigned __int64 v40; // rtt
  bool v41; // [rsp+110h] [rbp-118h] BYREF
  int v42; // [rsp+114h] [rbp-114h]
  CPartitionVerticalBlankScheduler *v43; // [rsp+118h] [rbp-110h]
  __int64 v44; // [rsp+120h] [rbp-108h]
  unsigned __int64 v45; // [rsp+128h] [rbp-100h]
  unsigned __int64 v46; // [rsp+130h] [rbp-F8h]
  unsigned __int64 v47; // [rsp+138h] [rbp-F0h]
  unsigned __int64 v48; // [rsp+140h] [rbp-E8h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+150h] [rbp-D8h] BYREF

  v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  v43 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
    v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( !*((_BYTE *)this + 21340) || !*((_BYTE *)this + 21341) )
    goto LABEL_4;
  if ( (v1 & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Start);
  v31 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
  v42 = v31;
  v22 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xA56u);
  }
  else
  {
    CCrossThreadComposition::Reset(*((CCrossThreadComposition **)this + 9));
    v32 = CPartitionVerticalBlankScheduler::Reinitialize(this);
    *((_BYTE *)this + 21342) = 1;
    v22 = v32;
    v42 = v32;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Stop);
  }
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x4EAu);
  }
  else
  {
LABEL_4:
    v3 = (char *)this + 1304 * *((unsigned int *)this + 5246);
    memset_0(v3 + 120, 0, 0x498uLL);
    for ( i = 0; i < *((_DWORD *)v3 + 330); ++i )
      WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)v3 + 162) + 8LL * i));
    *((_DWORD *)v3 + 330) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 1296, 8LL);
    for ( j = 0; j < *((_DWORD *)v3 + 338); ++j )
    {
      v33 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v3 + 166) + 8LL * j);
      if ( v33 )
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v33, v5);
    }
    *((_DWORD *)v3 + 338) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 1328, 8LL);
    for ( k = 0; k < *((_DWORD *)v3 + 346); ++k )
      CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v3 + 170) + 8LL * k));
    *((_DWORD *)v3 + 346) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 1360, 8LL);
    CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
    v8 = *((_QWORD *)this + 3690);
    v9 = (unsigned __int64 *)((char *)this + 29536);
    v10 = *((_QWORD *)this + 3692);
    if ( (v8 ^ (((unsigned __int64)this + 29536) | (((_QWORD)this + 29536) << 32))) != v10 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304320;
      pExceptionRecord.NumberParameters = 4;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v8);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v8;
      pExceptionRecord.ExceptionInformation[2] = (int)((v10 ^ ((unsigned __int64)v9 | (((_QWORD)this + 29536) << 32))) >> 32);
      pExceptionRecord.ExceptionInformation[3] = (unsigned int)v10 ^ (unsigned int)v9;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    *((_QWORD *)this + 3691) = *((_QWORD *)this + 3690);
    QueryPerformanceCounter((LARGE_INTEGER *)this + 3690);
    v11 = *((_QWORD *)this + 3690);
    v12 = *((_QWORD *)this + 3691);
    if ( v11 < v12 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304293;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v11);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v11;
      pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v12);
      pExceptionRecord.ExceptionInformation[3] = (unsigned int)v12;
      pExceptionRecord.ExceptionInformation[4] = g_qpcFrequency.HighPart;
      pExceptionRecord.ExceptionInformation[5] = g_qpcFrequency.LowPart;
      pExceptionRecord.NumberParameters = 8;
      pExceptionRecord.ExceptionInformation[6] = (int)((1000 * (v12 - v11) / g_qpcFrequency.QuadPart) >> 32);
      pExceptionRecord.ExceptionInformation[7] = (unsigned int)(1000 * (v12 - v11) / g_qpcFrequency.QuadPart);
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v13 = *((_QWORD *)this + 3690);
    *v9 = v13 ^ ((unsigned __int64)v9 | ((_QWORD)v9 << 32));
    *(_QWORD *)(*((_QWORD *)this + 2625) + 240LL) = v13;
    v14 = *((_QWORD *)this + 2625);
    v15 = *((_QWORD *)this + 11);
    if ( !*(_BYTE *)(v14 + 632) || *(_BYTE *)(v14 + 1296) )
    {
      CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(this);
    }
    else
    {
      *(_QWORD *)(v14 + 232) = *(_QWORD *)(v14 + 672);
      *(_DWORD *)(*((_QWORD *)this + 2625) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 2625) + 664LL);
    }
    v16 = *((_QWORD *)this + 2626);
    v17 = *(_QWORD *)(v16 + 232);
    if ( v17 )
      *((_QWORD *)this + 2627) = ((v15 >> 4) + *(_QWORD *)(*((_QWORD *)this + 2625) + 232LL) - v17) / v15;
    else
      *((_QWORD *)this + 2627) = 1LL;
    v18 = *((_QWORD *)this + 2625);
    v19 = *(_QWORD *)(v18 + 240);
    if ( *(_QWORD *)(v18 + 232) > v19 || *(_BYTE *)(v18 + 632) && *(_QWORD *)(v18 + 672) < *(_QWORD *)(v16 + 240) )
      *(_QWORD *)(v18 + 232) = v19;
    v20 = *((_QWORD *)this + 2626);
    v21 = -1;
    v22 = 0;
    v42 = 0;
    *(_QWORD *)(*((_QWORD *)this + 2625) + 88LL) = *((_QWORD *)this + 2627) + *(_QWORD *)(v20 + 88);
    v23 = *((_DWORD *)this + 5249);
    if ( v23 == -1 )
    {
      v34 = *((_DWORD *)this + 5248);
      if ( v34 != -1 )
      {
        v35 = ((_BYTE)v34 + 1) & 0xF;
        while ( v34 != v35 )
        {
          v36 = 1304LL * v34;
          if ( *((_BYTE *)this + v36 + 392) )
            break;
          if ( *((_BYTE *)this + v36 + 377) )
            v21 = v34;
          v34 = ((_BYTE)v34 - 1) & 0xF;
        }
      }
    }
    else
    {
      for ( m = ((_BYTE)v23 + 1) & 0xF; m != v23; m = ((_BYTE)m + 1) & 0xF )
      {
        if ( v21 != -1 )
          goto LABEL_36;
        v25 = 1304LL * m;
        if ( *((_BYTE *)this + v25 + 377) && !*((_BYTE *)this + v25 + 392) )
          v21 = m;
      }
    }
    if ( v21 != -1 )
    {
LABEL_36:
      while ( 1 )
      {
        v30 = CPartitionVerticalBlankScheduler::RetireFrame(
                this,
                (CPartitionVerticalBlankScheduler *)((char *)this + 1304 * v21 + 120),
                v21,
                &v41,
                0);
        v42 = v30;
        v22 = v30;
        if ( v30 < 0 )
          break;
        v21 = ((_BYTE)v21 + 1) & 0xF;
        if ( !v41 || v21 == *((_DWORD *)this + 5246) )
          goto LABEL_27;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x71Bu);
    }
LABEL_27:
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x505u);
    else
      *(_DWORD *)(*((_QWORD *)this + 2625) + 16LL) = *(_DWORD *)(*((_QWORD *)this + 2626) + 16LL) + 1;
  }
  v26 = *(_QWORD *)(*((_QWORD *)this + 2626) + 232LL);
  if ( v26 )
    v27 = *(_QWORD *)(*((_QWORD *)this + 2625) + 232LL) - v26;
  else
    v27 = *((_QWORD *)this + 11);
  v28 = Microsoft_Windows_Dwm_CoreEnableBits;
  v44 = v27;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v37 = (_QWORD *)*((_QWORD *)this + 2625);
    v38 = v37[29];
    v39 = v37[31];
    v45 = (unsigned __int64)(10000000 * (v37[30] % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
        + 10000000 * (v37[30] / g_qpcFrequency.QuadPart);
    v46 = 10000000 * (v39 / g_qpcFrequency.QuadPart)
        + 10000000 * (v39 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v40 = v37[160];
    v47 = 10000000 * (v38 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
        + 10000000 * (v38 / g_qpcFrequency.QuadPart);
    v48 = 10000000 * (v40 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
        + 10000000 * (v40 / g_qpcFrequency.QuadPart);
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      (_DWORD)v43,
      *(_DWORD *)(*((_QWORD *)v43 + 2625) + 16LL),
      *((_DWORD *)v43 + 5246),
      **((_QWORD **)v43 + 2625),
      *(_DWORD *)(*((_QWORD *)v43 + 2625) + 16LL),
      v48,
      *(_QWORD *)(*((_QWORD *)v43 + 2625) + 1280LL),
      *(_DWORD *)(*((_QWORD *)v43 + 2625) + 164LL));
    v28 = Microsoft_Windows_Dwm_CoreEnableBits;
    v22 = v42;
  }
  if ( (v28 & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return (unsigned int)v22;
}
