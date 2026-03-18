/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180084800
 * Callers:
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x180083C30 (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800845D0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180084C5C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180084C7C (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?LogShaderStats@CComposition@@QEAAXPEAVCChannelContext@@IIIMMM@Z @ 0x1800AA81C (-LogShaderStats@CComposition@@QEAAXPEAVCChannelContext@@IIIMMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  CNotificationResource *v4; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r10d
  signed int v8; // eax
  __int64 v9; // rsi
  struct _TP_WORK *v10; // rcx
  __int64 v11; // rax
  struct CChannelContext *v12; // rdx
  CComposition *v13; // rcx
  __m128 v14; // xmm2
  CNotificationResource *v15; // rcx
  __int64 ChannelCallbackId; // rcx
  __int64 v17; // rax
  unsigned int v18; // r10d
  signed int v19; // eax
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]
  float v22[4]; // [rsp+50h] [rbp-18h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1288LL) + 56LL);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) == 2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v15);
      v17 = *((unsigned int *)this + 14);
      v20 = ChannelCallbackId;
      v21 = v17;
      v19 = CoreUICallSend(v3, &v20, v18, 3LL, 1, &unk_1801F051B);
      v2 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x98u);
    }
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) == 3 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      v6 = CNotificationResource::GetChannelCallbackId(v4);
      v21 = *((unsigned int *)this + 14);
      v20 = v6;
      v8 = CoreUICallSend(v3, &v20, v7, 3LL, 0, &unk_1801F0519);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x7Bu);
        return v2;
      }
      v9 = *((_QWORD *)this + 9);
      v10 = *(struct _TP_WORK **)(v9 + 56);
      if ( v10 )
      {
        WaitForThreadpoolWorkCallbacks(v10, 0);
        CloseThreadpoolWork(*(PTP_WORK *)(v9 + 56));
        *(_QWORD *)(v9 + 56) = 0LL;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v9 + 72) + 24LL) + 80LL))(*(_QWORD *)(*(_QWORD *)(v9 + 72) + 24LL));
      v12 = (struct CChannelContext *)*((_QWORD *)this + 6);
      v13 = (CComposition *)*((_QWORD *)this + 2);
      v14 = *(__m128 *)v11;
      *(_QWORD *)v22 = *(_QWORD *)(v11 + 16);
      CComposition::LogShaderStats(
        v13,
        v12,
        _mm_cvtsi128_si32((__m128i)v14),
        v14.m128_u32[1],
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v14, 8)),
        _mm_shuffle_ps(v14, v14, 255).m128_f32[0],
        v22[0],
        v22[1]);
    }
    (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  return v2;
}
