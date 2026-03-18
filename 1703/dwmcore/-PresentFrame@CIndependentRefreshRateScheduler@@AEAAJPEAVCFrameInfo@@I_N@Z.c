/*
 * XREFs of ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C
 * Callers:
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180065118 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x180131A38 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x180134114 (-UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INF.c)
 *     ?NeedsPresent@CFrameInfo@@QEAA_NXZ @ 0x180134324 (-NeedsPresent@CFrameInfo@@QEAA_NXZ.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x180134500 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     Template_xxxxq @ 0x18013BFB4 (Template_xxxxq.c)
 *     ?GetPresentCount@CIndependentRefreshRateScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x18013CD34 (-GetPresentCount@CIndependentRefreshRateScheduler@@AEAAXPEAVCFrameInfo@@@Z.c)
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x18013F944 (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::PresentFrame(
        CIndependentRefreshRateScheduler *this,
        struct CFrameInfo *a2,
        int a3)
{
  int v6; // edi
  struct CFrameInfo *v7; // rdx
  __int64 v8; // rcx
  char v9; // r8
  int v10; // eax
  char v11; // r8
  int v12; // eax
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  _BYTE v19[32]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]
  int v23; // [rsp+78h] [rbp-8h]

  v6 = 0;
  if ( CFrameInfo::NeedsPresent(a2) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xxxxq(
        v8,
        (__int64)v7,
        *((_QWORD *)this + 2),
        *((_QWORD *)v7 + 163) - *((_QWORD *)this + 18),
        *((_QWORD *)v7 + 11),
        *((_QWORD *)v7 + 10) - 1LL);
    v11 = *((_BYTE *)this + 21824);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v20 = 0LL;
    CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(this, a2, v11, (struct FRAME_TIME_INFO *)v19);
    v12 = CComposition::Present(*((CComposition **)this + 16), (struct FRAME_TIME_INFO *)v19);
    v6 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2BFu);
    if ( v6 == 142213130 )
    {
      v6 = 0;
      *((_BYTE *)this + 21827) = 1;
    }
    else
    {
      *((_BYTE *)this + 21827) = 0;
    }
    *((_DWORD *)a2 + 296) = v6;
    v13 = v19[28];
    *((_DWORD *)a2 + 297) = *(_DWORD *)(*((_QWORD *)this + 16) + 384LL);
    *((_BYTE *)this + 21824) |= v13;
    if ( v6 >= 0 )
    {
      *((_BYTE *)a2 + 273) = 1;
      ++*((_DWORD *)this + 6364);
      CIndependentRefreshRateScheduler::GetPresentCount(this, a2);
      v14 = *((_QWORD *)this + 5);
      *((_DWORD *)this + 5368) = a3;
      *((_QWORD *)a2 + 35) = v14;
      CComposition::FlushChannels(*((CComposition **)this + 16), v15, v16);
      ++*((_QWORD *)this + 3);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v17, &EVTDESC_SCHEDULE_PRESENT_Stop);
    }
    goto LABEL_18;
  }
  if ( *((_BYTE *)this + 21827) )
  {
    v9 = *((_BYTE *)this + 21824);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v20 = 0LL;
    CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(this, v7, v9, (struct FRAME_TIME_INFO *)v19);
    v10 = CComposition::PresentFollowUp(*((CComposition **)this + 16), (const struct FRAME_TIME_INFO *)v19);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x308u);
    if ( v6 == 142213130 )
    {
      v6 = 0;
      *((_BYTE *)this + 21827) = 1;
    }
    else
    {
      *((_BYTE *)this + 21827) = 0;
    }
LABEL_18:
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v19);
  }
  return (unsigned int)v6;
}
