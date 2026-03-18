/*
 * XREFs of ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x180014704
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18000B0A8 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x1800182C0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180019AA0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18007E70C (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800B0560 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x18011D194 (-UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INF.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x18011D1D4 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0qN16 @ 0x1801269E4 (McTemplateU0qN16.c)
 *     McTemplateU0xxxxq @ 0x180126E60 (McTemplateU0xxxxq.c)
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x180128D9C (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::PresentFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3)
{
  __int64 v3; // r12
  CPartitionVerticalBlankScheduler *v5; // r14
  int v6; // ebx
  CComposition *v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  char v11; // al
  __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int v14; // r14d
  __int64 v15; // rbx
  _QWORD *v16; // rdi
  __int64 (__fastcall *v17)(_QWORD *, __int64); // rax
  char v18; // al
  CHwndRenderTarget *v19; // rcx
  unsigned int *v20; // rdx
  __int64 (__fastcall *v21)(CHwndRenderTarget *__hidden, unsigned int *); // rax
  int LastPresentCount; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // r9d
  __int64 v26; // rdi
  unsigned int i; // edi
  __int64 v28; // r13
  __int64 v29; // rax
  CConnection **v30; // rax
  int v31; // eax
  unsigned __int64 v32; // rtt
  char v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  int v36; // [rsp+58h] [rbp-39h] BYREF
  __int64 v37; // [rsp+5Ch] [rbp-35h]
  __int64 v38; // [rsp+64h] [rbp-2Dh]
  __int64 v39; // [rsp+6Ch] [rbp-25h]
  _QWORD v40[3]; // [rsp+78h] [rbp-19h] BYREF
  int v41; // [rsp+90h] [rbp-1h]
  char v42; // [rsp+94h] [rbp+3h]
  char v43; // [rsp+95h] [rbp+4h]
  void *lpMem[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+17h]
  unsigned int v46; // [rsp+B0h] [rbp+1Fh]
  int v48; // [rsp+100h] [rbp+6Fh]
  CMILRefCountBase *v49; // [rsp+100h] [rbp+6Fh]
  unsigned int v51; // [rsp+110h] [rbp+7Fh]

  v3 = 0LL;
  v5 = this;
  v6 = 0;
  if ( !*((_BYTE *)a2 + 256) || *((_BYTE *)a2 + 257) )
  {
    if ( *((_BYTE *)this + 21343) )
    {
      v33 = *((_BYTE *)this + 21340);
      v45 = 0LL;
      *(_OWORD *)lpMem = 0LL;
      v46 = 0;
      CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(this, a2, v33, (struct FRAME_TIME_INFO *)v40);
      v35 = CComposition::PresentFollowUp(*(CComposition **)(v34 + 72), (const struct FRAME_TIME_INFO *)v40);
      v6 = v35;
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x329u);
      if ( v6 == 142213130 )
      {
        v6 = 0;
        *((_BYTE *)v5 + 21343) = 1;
      }
      else
      {
        *((_BYTE *)v5 + 21343) = 0;
      }
      FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)v40);
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v32 = *((_QWORD *)this + 3690);
      McTemplateU0xxxxq(
        g_qpcFrequency.LowPart,
        10000000 * (v32 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart,
        10000000 * (v32 / g_qpcFrequency.QuadPart)
      + 10000000 * (v32 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart,
        10000000 * (*((_QWORD *)a2 + 160) / g_qpcFrequency.QuadPart - *((_QWORD *)this + 11) / g_qpcFrequency.QuadPart)
      + (unsigned __int64)(10000000 * (*((_QWORD *)a2 + 160) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
      - (unsigned __int64)(10000000 * (*((_QWORD *)this + 11) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart,
        *((_QWORD *)a2 + 11),
        *((_BYTE *)a2 + 80) - 1);
    }
    v45 = 0LL;
    *(_OWORD *)lpMem = 0LL;
    v46 = 0;
    if ( *((_BYTE *)v5 + 21340) )
      *((_DWORD *)a2 + 24) = 0;
    v8 = (CComposition *)*((_QWORD *)v5 + 9);
    v40[1] = (char *)v5 + 80;
    v40[0] = a2;
    v40[2] = (char *)v5 + 21024;
    v42 = *((_BYTE *)v5 + 21340);
    v43 = *((_BYTE *)v5 + 21342);
    v41 = 1;
    v9 = CComposition::Present(v8, (struct FRAME_TIME_INFO *)v40);
    v48 = v9;
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2E0u);
    if ( v6 == 142213130 )
    {
      v6 = 0;
      *((_BYTE *)v5 + 21343) = 1;
      v48 = 0;
    }
    else
    {
      *((_BYTE *)v5 + 21343) = 0;
    }
    *((_DWORD *)a2 + 292) = v6;
    v11 = v42;
    *((_DWORD *)a2 + 293) = *(_DWORD *)(*((_QWORD *)v5 + 9) + 344LL);
    *((_BYTE *)v5 + 21340) |= v11;
    if ( v6 >= 0 )
    {
      *((_BYTE *)a2 + 257) = 1;
      ++*((_DWORD *)v5 + 6194);
      if ( *((_BYTE *)a2 + 257) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
        v12 = *((_QWORD *)v5 + 9);
        v13 = 0;
        v51 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v12 + 72) + 48LL) )
        {
          v14 = 0;
          v15 = *(_QWORD *)(v12 + 72);
          do
          {
            if ( v13 >= 0x10 )
              break;
            v16 = *(_QWORD **)(*(_QWORD *)(v15 + 24) + 8LL * v14);
            v17 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v16 + 48LL);
            v18 = (char *)v17 == (char *)CHwndRenderTarget::IsOfType
                ? CHwndRenderTarget::IsOfType(v16, 70LL)
                : v17(v16, 70LL);
            if ( !v18 || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v16 + 192LL))(v16) )
            {
              v13 = v51;
            }
            else
            {
              v19 = (CHwndRenderTarget *)(v16 + 8);
              v20 = (unsigned int *)((char *)a2 + 4 * v51 + 16);
              v21 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, unsigned int *))(v16[8] + 104LL);
              if ( v21 == CHwndRenderTarget::GetLastPresentCount )
                LastPresentCount = CHwndRenderTarget::GetLastPresentCount(v19, v20);
              else
                LastPresentCount = v21(v19, v20);
              if ( LastPresentCount < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, LastPresentCount, 0x47Eu);
              v13 = ++v51;
            }
            ++v14;
          }
          while ( v14 < *(_DWORD *)(v15 + 48) );
          v5 = this;
          v6 = v48;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, -2003304307, 0xC62u);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0qN16(v24, v23, v13, v25, (__int64)a2 + 16);
        v3 = 0LL;
      }
      *((_DWORD *)v5 + 5248) = a3;
      *((_QWORD *)a2 + 33) = *((_QWORD *)v5 + 3690);
      v26 = *((_QWORD *)v5 + 9);
      if ( !*(_QWORD *)(*(_QWORD *)(v26 + 80) + 376LL) )
      {
        if ( *(_DWORD *)(v26 + 400) )
        {
          v28 = *(unsigned int *)(v26 + 400);
          do
          {
            v29 = *(_QWORD *)(v26 + 376);
            v36 = 1;
            v37 = 0LL;
            v38 = 0LL;
            v30 = *(CConnection ***)(v3 + v29);
            v39 = 0LL;
            v49 = (CMILRefCountBase *)v30;
            v31 = CChannelContext::PostMessageToChannel(v30, (const struct MIL_MESSAGE *)&v36, v10);
            if ( v31 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x77u);
            CMILRefCountBase::Release(v49);
            v3 += 8LL;
            --v28;
          }
          while ( v28 );
        }
        *(_DWORD *)(v26 + 400) = 0;
        DynArrayImpl<1>::ShrinkToSize(v26 + 376, 8LL);
      }
      ++*((_QWORD *)v5 + 3688);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PRESENT_Stop);
    }
    for ( i = 0; i < v46; ++i )
      WPF::ProcessHeapImpl::Free(*((void **)lpMem[0] + i));
    v46 = 0;
    DynArrayImpl<0>::ShrinkToSize(lpMem, 8LL);
    if ( lpMem[0] != lpMem[1] )
      WPF::ProcessHeapImpl::Free(lpMem[0]);
  }
  return (unsigned int)v6;
}
