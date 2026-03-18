/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005D88C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A364 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x18005A738 (-EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005B120 (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005FB40 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x180060AE0 (-GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x180060B90 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1801515FC (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(
        CPartitionVerticalBlankScheduler *this,
        char a2)
{
  __int64 v2; // r15
  DWORD v5; // ebx
  unsigned __int8 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rax
  signed int v14; // edi
  _QWORD *v15; // r12
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  char v19; // al
  _QWORD *v20; // r14
  __int64 v21; // rax
  int (*v22)(CHwndRenderTarget *__hidden, void **); // rax
  CHwndRenderTarget *v23; // rcx
  __int64 v24; // rax
  int (*v25)(CHwndRenderTarget *__hidden, unsigned int); // rax
  CHwndRenderTarget *v26; // rcx
  int refreshed; // eax
  char v28; // al
  unsigned __int64 VSync; // rbx
  unsigned __int64 v31; // rcx
  void *v32; // [rsp+30h] [rbp-38h]
  HANDLE Handles[6]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+48h]
  void *v35; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v36; // [rsp+C8h] [rbp+60h]

  v2 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Start);
  v7 = *((_QWORD *)this + 3231);
  if ( v7 && !*(_BYTE *)(v7 + 1058) && *(_BYTE *)(v7 + 1060) )
  {
    v8 = *((_QWORD *)this + 3230);
    v9 = *(__m128i *)(v7 + 496);
    *(_OWORD *)Handles = *(_OWORD *)(v8 + 480);
    v10 = *(_OWORD *)(v7 + 480);
    v11 = *(_DWORD *)(v8 + 496) + 1;
    *(_OWORD *)Handles = v10;
    v12 = _mm_cvtsi128_si32(v9) + 1;
    if ( v12 <= v11 )
      v12 = v11;
    v34 = v12;
  }
  else
  {
    v34 = 0;
  }
  if ( a2 )
    v32 = 0LL;
  else
    v32 = (void *)*((_QWORD *)this + 5);
  v13 = *((_QWORD *)this + 9);
  v14 = -2003304307;
  v15 = 0LL;
  LODWORD(v35) = 0;
  v16 = *(_QWORD *)(v13 + 72);
  v36 = *(_DWORD *)(v16 + 48);
  if ( v36 )
  {
    do
    {
      v17 = *(_QWORD *)(v2 + *(_QWORD *)(v16 + 24));
      v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 48LL);
      if ( v18 == CHwndRenderTarget::IsOfType )
        v19 = CHwndRenderTarget::IsOfType(v17, 76LL);
      else
        v19 = v18(v17, 76LL);
      if ( v19 )
      {
        v20 = *(_QWORD **)(v2 + *(_QWORD *)(v16 + 24));
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v20 + 216LL))(v20) )
        {
          v21 = v20[21];
          if ( *(_BYTE *)(v21 + 324) )
          {
            if ( *(_BYTE *)(v21 + 325) )
              goto LABEL_18;
          }
        }
      }
      else if ( !v15
             && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + *(_QWORD *)(v16 + 24)) + 48LL))(
                  *(_QWORD *)(v2 + *(_QWORD *)(v16 + 24)),
                  70LL) )
      {
        v15 = *(_QWORD **)(v2 + *(_QWORD *)(v16 + 24));
      }
      v2 += 8LL;
      LODWORD(v35) = (_DWORD)v35 + 1;
    }
    while ( (unsigned int)v35 < v36 );
    if ( v15 )
    {
      v20 = v15;
LABEL_18:
      if ( v20 )
      {
        v35 = 0LL;
        v22 = *(int (**)(CHwndRenderTarget *__hidden, void **))(v20[8] + 80LL);
        v23 = (CHwndRenderTarget *)(v20 + 8);
        if ( v22 == CHwndRenderTarget::GetVBlankEvent )
          CHwndRenderTarget::GetVBlankEvent(v23, &v35);
        else
          ((void (__fastcall *)(CHwndRenderTarget *, void **))v22)(v23, &v35);
        v24 = v20[8];
        if ( v35 )
        {
          v25 = *(int (**)(CHwndRenderTarget *__hidden, unsigned int))(v24 + 88);
          v26 = (CHwndRenderTarget *)(v20 + 8);
          if ( v25 == CHwndRenderTarget::SetSyncRefreshCountWaitTarget )
            refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTarget(v26, v34);
          else
            refreshed = ((__int64 (__fastcall *)(CHwndRenderTarget *, _QWORD))v25)(v26, v34);
          v14 = refreshed;
          if ( refreshed < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, refreshed, 0x4C6u);
          if ( v14 < 0 || v14 == 142213121 )
          {
            v6 = 0;
          }
          else
          {
            Handles[0] = v35;
            Handles[1] = v32;
            v14 = WaitForMultipleObjects((v32 != 0LL) + 1, Handles, 0, 0x64u);
            v6 = 0;
            if ( !v14 )
              byte_1802D5EA8 = 1;
          }
          goto LABEL_30;
        }
        v14 = (*(__int64 (__fastcall **)(_QWORD *, void *))(v24 + 96))(v20 + 8, v32);
      }
    }
    v6 = 0;
  }
LABEL_30:
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v14, 0x1D3u);
  if ( !*((_BYTE *)this + 26180) || (v28 = 1, v14 < 0) )
    v28 = 0;
  *((_BYTE *)this + 26181) = v28;
  if ( v14 < 0 || v14 == 142213121 )
  {
    v6 = 1;
    if ( ((v14 + 0x80000000) & 0x80000000) == 0 && v14 != -2003304307 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v14, 0x1E0u);
    VSync = CPartitionVerticalBlankScheduler::EstimateNextVSync(this);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    CPartitionVerticalBlankScheduler::TraceTime(this);
    v31 = *((_QWORD *)this + 4412);
    if ( v31 >= VSync )
      VSync = *(_QWORD *)(*((_QWORD *)this + 3230) + 1464LL)
            + v31
            - v31 % *(_QWORD *)(*((_QWORD *)this + 3230) + 1464LL);
    v5 = 1000 * (VSync - v31) / g_qpcFrequency.QuadPart + 1;
    Sleep(v5);
    v14 = 0;
    *(_BYTE *)(*((_QWORD *)this + 3230) + 1200LL) = 1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Stop, v6, v5);
  if ( *((_BYTE *)this + 30600) )
  {
    *(_WORD *)((char *)this + 30601) = 1;
    *((_QWORD *)this + 3828) = 0LL;
    *((_QWORD *)this + 3827) = 0LL;
    *((_QWORD *)this + 3827) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 30576));
  }
  return (unsigned int)v14;
}
