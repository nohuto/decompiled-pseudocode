/*
 * XREFs of ?WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013EBD4
 * Callers:
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FrameStopped@CDebugFrameCounter@@QEAAXXZ @ 0x180130D08 (-FrameStopped@CDebugFrameCounter@@QEAAXXZ.c)
 *     ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x18013B4D4 (-Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z.c)
 *     Template_qqqqq @ 0x18013BD74 (Template_qqqqq.c)
 */

void __fastcall CIndependentRefreshRateScheduler::WaitForWork(CIndependentRefreshRateScheduler *this)
{
  int v2; // eax
  struct CDXGIEnumeration *v3; // rsi
  __int64 v4; // rbp
  HANDLE *v5; // r14
  CoRenderHost *v6; // rcx
  void *const *v7; // r8
  unsigned int v8; // edi
  DWORD v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  DWORD v14; // [rsp+60h] [rbp+8h] BYREF
  struct CDXGIEnumeration *v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_WFW_Start);
  CDebugFrameCounter::FrameStopped((CIndependentRefreshRateScheduler *)((char *)this + 25480));
  v2 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v15);
  v3 = v15;
  if ( v2 < 0 )
    *((_QWORD *)this + 11) = 0LL;
  else
    *((_QWORD *)this + 11) = *((_QWORD *)v15 + 12);
  v4 = *((_QWORD *)this + 11);
  v5 = (HANDLE *)((char *)this + 64);
  v6 = (CoRenderHost *)*((_QWORD *)this + 15);
  v7 = (void *const *)((char *)this + 64);
  v8 = (v4 != 0) + 3;
  if ( v6 )
  {
    v9 = CoRenderHost::Wait(v6, v8, v7);
    v10 = v9;
    v14 = v9;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *const *, _QWORD, _DWORD, DWORD *))(**((_QWORD **)this + 26)
                                                                                            + 56LL))(
            *((_QWORD *)this + 26),
            v8,
            v7,
            *((unsigned int *)this + 5455),
            0,
            &v14);
    v10 = v14;
    if ( v11 < 0 )
      v10 = 0xFFFFFFFFLL;
    v14 = v10;
  }
  if ( (_DWORD)v10 == 3 && v4 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v10, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
  v12 = 0;
  do
  {
    v14 = WaitForSingleObject(*v5, 0);
    if ( !v14 && v12 == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
    ++v12;
    ++v5;
  }
  while ( v12 < v8 );
  if ( v3 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_qqqqq(v13, &EVTDESC_SCHEDULE_WFW_Stop, 0, 0, 0, 0, 0);
}
