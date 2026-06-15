/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140010C00
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FE20 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015368 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDeviceGraph::InitializePump(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        char a4)
{
  __int64 v8; // rbx
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+10h] BYREF

  v16 = -2LL;
  v15 = 0LL;
  v14 = 0LL;
  pv = 0LL;
  v8 = **(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((char *)a2 + 16)
                   + 32LL);
  v15 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))(
         *((_QWORD *)this + 14),
         &GUID_8c03925f_1468_45a1_8278_5cc94bc4c6cc,
         &v14);
  if ( v9 < 0 )
    goto LABEL_20;
  v10 = 1;
  if ( !*((_DWORD *)this + 27) )
    v10 = 2;
  if ( a4 )
  {
    v11 = 4;
    v12 = 12;
  }
  else
  {
    v11 = 0;
    v12 = 8;
  }
  if ( *((_DWORD *)a3 + 25) != 2 )
    v12 = v11;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 15) + 24LL))(
         *((_QWORD *)this + 15),
         v12 | (unsigned int)v10,
         *((unsigned int *)this + 24),
         v14,
         v8);
  if ( v9 < 0
    || (mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)a2 + 23), &pv),
        v17 = *((_OWORD *)this + 21),
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, LPVOID))(**((_QWORD **)this + 15) + 80LL))(
               *((_QWORD *)this + 15),
               &v17,
               pv),
        v9 < 0) )
  {
LABEL_20:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        57LL,
        &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
        (unsigned int)v9);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::InitializePump", 0x564u, v9);
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v9;
}
