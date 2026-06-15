/*
 * XREFs of ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x1400415C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x1400059FC (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_Dg @ 0x14004247C (WPP_SF_Dg.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetEndpointBufferSize(CAudioDeviceGraph *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  int v7; // ebx
  __int64 Tail; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned __int16 v11; // dx
  __int64 v12; // rdx
  __int64 v13; // r8
  float v14; // xmm0_4
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v18 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v7 = -2005139437;
    goto LABEL_22;
  }
  if ( !a2 || !a3 )
  {
    v7 = -2147467261;
    goto LABEL_22;
  }
  Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 16) + 16LL);
  v9 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
         **(_QWORD **)(*(_QWORD *)Tail + 32LL),
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v16);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
           v16,
           &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
           &v18);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 32LL))(v18, &v17);
      if ( v7 >= 0 )
      {
        v7 = 0;
        *a2 = v17;
        v14 = *((float *)this + 26);
        *a3 = v14;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Dg(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v13, *a2, v14);
        }
      }
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v11 = 23;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v11 = 22;
LABEL_11:
      WPP_SF_D(v10[2], v11, (__int64)&WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids, v9);
    }
  }
LABEL_22:
  LeaveCriticalSection(v3);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetEndpointBufferSize", 0x188u, v7);
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v7;
}
