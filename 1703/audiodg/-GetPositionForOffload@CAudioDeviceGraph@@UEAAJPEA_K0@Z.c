/*
 * XREFs of ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x1400411F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015368 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ii @ 0x14003BA08 (WPP_SF_ii.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetPositionForOffload(
        CAudioDeviceGraph *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // ebx
  __int64 Tail; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned __int16 v11; // dx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v7 = -2005139437;
    goto LABEL_19;
  }
  Tail = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 16) + 16LL);
  v9 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
         **(_QWORD **)(*(_QWORD *)Tail + 32LL),
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v14);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
           v14,
           &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
           &v13);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v13 + 32LL))(
             v13,
             a2,
             a3);
      if ( v7 >= 0 )
      {
        v7 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_ii(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x1Cu,
            (__int64)&WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
            *a2,
            *a3);
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
        v11 = 27;
        goto LABEL_8;
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
      v11 = 26;
LABEL_8:
      WPP_SF_D(v10[2], v11, (__int64)&WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids, v9);
    }
  }
LABEL_19:
  LeaveCriticalSection(v3);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetPositionForOffload", 0x1DBu, v7);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v7;
}
