/*
 * XREFs of ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140042070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x1400059FC (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::ResetEndpoint(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  int v3; // ebx
  __int64 Tail; // rax
  int v5; // eax
  _QWORD *v6; // rcx
  unsigned __int16 v7; // dx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v9 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v3 = -2005139437;
    goto LABEL_19;
  }
  Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 16) + 16LL);
  v5 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
         **(_QWORD **)(*(_QWORD *)Tail + 32LL),
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v10);
  v3 = v5;
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
           v10,
           &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
           &v9);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      if ( v3 >= 0 )
      {
        (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 152LL))(this);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 88LL))(*((_QWORD *)this + 15));
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
        }
      }
    }
    else
    {
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v7 = 35;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v7 = 34;
LABEL_8:
      WPP_SF_D(v6[2], v7, (__int64)&WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids, v5);
    }
  }
LABEL_19:
  LeaveCriticalSection(v1);
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x25u,
        (__int64)&WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
        v3);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::ResetEndpoint", 0x284u, v3);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v3;
}
