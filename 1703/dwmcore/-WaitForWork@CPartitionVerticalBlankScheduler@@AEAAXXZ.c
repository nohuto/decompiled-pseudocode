/*
 * XREFs of ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180068B90
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C89A0 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x18013B4D4 (-Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z.c)
 *     Template_qqqqq @ 0x18013BD74 (Template_qqqqq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180143C48 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180143E0C (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(CoRenderHost **this)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebx
  int v4; // r12d
  char v5; // r14
  CD3DModuleLoaderInternal *v6; // rcx
  CDXGIEnumeration *v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rcx
  CMILRefCountBase *v10; // r14
  CoRenderHost *v11; // rcx
  HANDLE *v12; // rsi
  __int64 v13; // r9
  void *const *v14; // r8
  __int64 v15; // rcx
  DWORD *v16; // rdi
  DWORD v17; // eax
  __int64 v18; // rcx
  unsigned int (__fastcall *v19)(CMILRefCountBase *__hidden); // rax
  unsigned __int64 v20; // rax
  CoRenderHost **v21; // rcx
  int v22; // ecx
  CoRenderHost *v23; // r8
  int v24; // ecx
  unsigned int v25; // eax
  CoRenderHost **v26; // rdx
  int v27; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h] BYREF
  __int64 v30; // [rsp+58h] [rbp-40h]

  v29 = 0LL;
  v30 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_WFW_Start);
  v2 = -1;
  v3 = 0;
  if ( *((_BYTE *)this + 25504) && *((_BYTE *)this + 25505) )
  {
    v20 = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)(this + 3185));
    v28 = v20;
    if ( *((_BYTE *)this + 25506) )
    {
      if ( *((_DWORD *)this + 6374) == -1 )
        this[3187] = 0LL;
      this[3191] = (CoRenderHost *)v20;
      *(_OWORD *)&this[2 * *((unsigned int *)this + 6375) + 3192] = *((_OWORD *)this + 1595);
      if ( *((_DWORD *)this + 6374) != *((_DWORD *)this + 6375) )
      {
        do
        {
          v21 = &this[2 * *((unsigned int *)this + 6374) + 3185];
          if ( v21[7] >= (CoRenderHost *)((char *)this[3191] - 10000000) )
            break;
          this[3189] = (CoRenderHost *)((char *)this[3189] + v21[7] - v21[8]);
          v21[8] = 0LL;
          v21[7] = 0LL;
          v22 = (unsigned __int8)(*((_BYTE *)this + 25496) + 1);
          *((_DWORD *)this + 6374) = v22;
        }
        while ( v22 != *((_DWORD *)this + 6375) );
      }
      v23 = (CoRenderHost *)((char *)this[3189]
                           + this[2 * *((unsigned int *)this + 6375) + 3193]
                           - this[2 * *((unsigned int *)this + 6375) + 3192]);
      v24 = (unsigned __int8)(*((_DWORD *)this + 6375) + 1);
      v25 = *((_DWORD *)this + 6374);
      this[3189] = v23;
      *((_DWORD *)this + 6375) = v24;
      if ( v25 == v24 )
      {
        v26 = &this[2 * v25 + 3185];
        this[3189] = (CoRenderHost *)((char *)v23 + v26[7] - v26[8]);
        v26[8] = 0LL;
        v26[7] = 0LL;
        *((_DWORD *)this + 6374) = (unsigned __int8)(*((_DWORD *)this + 6374) + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CDebugFrameCounter *)(this + 3185), &v28);
  }
  v4 = 0;
  v5 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v7 = qword_18023E530;
  v8 = 4;
  if ( !qword_18023E530 )
    goto LABEL_32;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18023E530 + 2) + 104LL))(*((_QWORD *)qword_18023E530
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness(v9) != *((_DWORD *)v7 + 14)
    || qword_18023E530 != v7 )
  {
    ReleaseInterface<ClipPlaneInfoRef>(&qword_18023E530);
    v5 = 1;
  }
  if ( !qword_18023E530 )
  {
LABEL_32:
    LODWORD(v28) = CD3DModuleLoaderInternal::CreateD3DObjects(v6, &qword_18023E530);
    TranslateDXGIorD3DErrorInContext((unsigned int)v28, 4LL, &v28);
    v4 = v28;
    if ( (v28 & 0x80000000) != 0LL )
      MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, v28, 0x12Bu);
  }
  if ( v5 && qword_18023E540 )
    CSurfaceManager::ResetTokenThread(qword_18023E540);
  v10 = qword_18023E530;
  if ( qword_18023E530 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18023E530)(qword_18023E530);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v4 < 0 )
    this[11] = 0LL;
  else
    this[11] = (CoRenderHost *)*((_QWORD *)v10 + 12);
  if ( !this[11] )
    v8 = 3;
  v11 = this[15];
  v12 = (HANDLE *)(this + 8);
  v13 = *((unsigned int *)this + 5455);
  v14 = (void *const *)(this + 8);
  if ( v11 )
  {
    v2 = CoRenderHost::Wait(v11, v8, v14, v13);
    v27 = v2;
  }
  else if ( (*(int (__fastcall **)(CoRenderHost *, _QWORD, void *const *, __int64, _DWORD, int *))(*(_QWORD *)this[26]
                                                                                                 + 56LL))(
              this[26],
              v8,
              v14,
              v13,
              0,
              &v27) < 0 )
  {
    v27 = -1;
  }
  else
  {
    v2 = v27;
  }
  if ( v2 == 3 && v8 == 4 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
  v16 = (DWORD *)&v29;
  do
  {
    v17 = WaitForSingleObject(*v12, 0);
    v27 = v17;
    *v16 = v17;
    if ( !v17 && v3 == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v18, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
    ++v3;
    ++v12;
    ++v16;
  }
  while ( v3 < v8 );
  if ( v10 )
  {
    v19 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v10 + 8LL);
    if ( v19 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v10);
    else
      v19(v10);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_qqqqq(v18, (unsigned int)&EVTDESC_SCHEDULE_WFW_Stop, v2, v29, SBYTE4(v29), v30, SBYTE4(v30));
}
