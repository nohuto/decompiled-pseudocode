/*
 * XREFs of ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x140041920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x1400059FC (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFrequencyForOffload(CAudioDeviceGraph *this, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // ebx
  __int64 Tail; // rax
  int v7; // eax
  _QWORD *v8; // rcx
  unsigned __int16 v9; // dx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v5 = -2005139437;
    goto LABEL_19;
  }
  Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 16) + 16LL);
  v7 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
         **(_QWORD **)(*(_QWORD *)Tail + 32LL),
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v12);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
           v12,
           &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
           &v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v11 + 24LL))(v11, a2);
      if ( v5 >= 0 )
      {
        v5 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x20u,
            (__int64)&WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
            *a2);
        }
      }
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v9 = 31;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v9 = 30;
LABEL_8:
      WPP_SF_D(v8[2], v9, (__int64)&WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids, v7);
    }
  }
LABEL_19:
  LeaveCriticalSection(v2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x21u,
        (__int64)&WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
        v5);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetFrequencyForOffload", 0x22Fu, v5);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v5;
}
