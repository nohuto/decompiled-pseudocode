/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x14000FA30
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000EB40 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140007F14 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDeviceGraph::InitializePump(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        unsigned __int8 a4)
{
  __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+50h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+38h] BYREF

  v14 = -2LL;
  v13 = 0LL;
  v12 = 0LL;
  pv = 0LL;
  v8 = **(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((__int64)a2 + 16)
                   + 32LL);
  v13 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_1b8969bf_17f7_48d1_89bc_fccafb532af5,
         &v12);
  if ( v9 < 0 )
    goto LABEL_15;
  v10 = 8;
  if ( *((_DWORD *)a3 + 25) != 2 )
    v10 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 19) + 24LL))(
         *((_QWORD *)this + 19),
         (4 * a4) | v10 | ((unsigned int)(*((_DWORD *)this + 35) == 0) + 1),
         *((unsigned int *)this + 32),
         v12,
         v8);
  if ( v9 < 0
    || (mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)a2 + 23), &pv),
        v15 = *((_OWORD *)this + 23),
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, LPVOID))(**((_QWORD **)this + 19) + 80LL))(
               *((_QWORD *)this + 19),
               &v15,
               pv),
        v9 < 0) )
  {
LABEL_15:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        41LL,
        &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids,
        (unsigned int)v9);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::InitializePump", 0x549u, v9);
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v9;
}
