/*
 * XREFs of ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x14003F990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140007F14 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFrequencyForOffload(CAudioDeviceGraph *this, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // ebx
  _UNKNOWN **v6; // rcx
  __int64 Tail; // rax
  int v9; // eax
  unsigned __int16 v10; // dx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL);
    v9 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
           **(_QWORD **)(*(_QWORD *)Tail + 32LL),
           &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
           &v12);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
             v12,
             &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
             &v11);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v11 + 24LL))(v11, a2);
        if ( v5 < 0 )
          goto LABEL_3;
        v5 = 0;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        {
          goto LABEL_9;
        }
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x17u,
          (__int64)&WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids,
          *a2);
        goto LABEL_32;
      }
      v6 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v10 = 22;
        goto LABEL_21;
      }
    }
    else
    {
      v6 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v10 = 21;
LABEL_21:
        WPP_SF_D((__int64)v6[2], v10, (__int64)&WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids, v9);
LABEL_32:
        v6 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
    }
    if ( v5 >= 0 )
      goto LABEL_9;
    goto LABEL_4;
  }
  v5 = -2005139437;
LABEL_3:
  v6 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_4:
  if ( v6 != &WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x20000) != 0 && *((_BYTE *)v6 + 25) >= 2u )
    WPP_SF_D((__int64)v6[2], 0x18u, (__int64)&WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids, v5);
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetFrequencyForOffload", 0x20Eu, v5);
LABEL_9:
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v5;
}
