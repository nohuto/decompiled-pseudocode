/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801967C4
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180196D74 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180196E48 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x180196ED0 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x180196F30 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x180193680 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180193928 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x180197178 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, unsigned int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // r9d
  unsigned int v6; // esi
  __int64 *v7; // r15
  unsigned int i; // r14d
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  int v14; // edx
  __int64 v15; // rax
  int v16; // eax
  float v17; // xmm3_4
  unsigned int v18; // [rsp+30h] [rbp-59h] BYREF
  int v19; // [rsp+38h] [rbp-51h] BYREF
  __int64 v20; // [rsp+40h] [rbp-49h] BYREF
  __int64 v21; // [rsp+48h] [rbp-41h] BYREF
  __int64 v22; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  int *v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+98h] [rbp+Fh]
  int v29; // [rsp+9Ch] [rbp+13h]
  unsigned int *v30; // [rsp+A0h] [rbp+17h]
  int v31; // [rsp+A8h] [rbp+1Fh]
  int v32; // [rsp+ACh] [rbp+23h]

  if ( *(_DWORD *)(a1 + 152) != a2 )
  {
    if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v24 = &v20;
      v27 = &v19;
      v30 = &v18;
      v20 = a1;
      v25 = 8;
      v19 = v5;
      v28 = 4;
      v18 = a2;
      v31 = 4;
      TlgWrite(v4, &unk_1802A85E5, 0LL, 0LL, 5u, &pData);
    }
    *(_DWORD *)(a1 + 152) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v20 = *(_QWORD *)(a1 + 488);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v20);
      v21 = *(_QWORD *)(a1 + 496);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v21);
      v22 = *(_QWORD *)(a1 + 480);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v22);
      v6 = v18;
      v7 = &v20;
      for ( i = 0; i < 3; ++i )
      {
        v9 = *v7;
        v18 = a2;
        v10 = *(unsigned int *)(v9 + 376);
        v11 = v10 + 1;
        if ( (int)v10 + 1 >= (unsigned int)v10 )
          v6 = v10 + 1;
        if ( v11 < (unsigned int)v10 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11 < (unsigned int)v10 ? 0x80070216 : 0, 0xB5u);
        }
        else if ( v6 > *(_DWORD *)(v9 + 372) )
        {
          v12 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 352, 4u, 1, &v18);
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC0u);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(v9 + 352) + 4 * v10) = a2;
          *(_DWORD *)(v9 + 376) = v6;
        }
        ++v7;
      }
      `vector destructor iterator'(
        (char *)&v20,
        8LL,
        3LL,
        (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<CScrollAnimation>::~ComPtr<CScrollAnimation>);
    }
    if ( a2 )
    {
      v13 = a2 - 1;
      if ( v13 )
      {
        if ( v13 != 2 || (*(_BYTE *)(a1 + 676) & 0x40) != 0 )
          goto LABEL_25;
        v14 = 3;
      }
      else
      {
        v14 = 1;
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 552LL) + 96LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 552LL));
      (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v15 + 128LL))(
        v15,
        CInteractionTracker::s_OnIdleAtFrameBegin,
        a1,
        4LL);
      v14 = 0;
    }
    v16 = *(_DWORD *)(a1 + 72);
    v17 = *(float *)(a1 + 112);
    v20 = *(_QWORD *)(a1 + 64);
    LODWORD(v21) = v16;
    CInteractionTracker::AddPendingStateChange(a1, v14, &v20, v17);
LABEL_25:
    CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
  }
}
