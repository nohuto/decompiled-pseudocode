/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E588
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016EBD8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EC8C (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016ED74 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18016AD90 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18016F178 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // r15d
  __int64 *v8; // r14
  unsigned int i; // esi
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  signed int v14; // eax
  int v15; // edi
  int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  float v19; // xmm3_4
  int v20; // [rsp+30h] [rbp-59h] BYREF
  int v21; // [rsp+38h] [rbp-51h] BYREF
  __int64 v22; // [rsp+40h] [rbp-49h] BYREF
  __int64 v23; // [rsp+48h] [rbp-41h] BYREF
  __int64 v24; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v26; // [rsp+80h] [rbp-9h]
  int v27; // [rsp+88h] [rbp-1h]
  int v28; // [rsp+8Ch] [rbp+3h]
  int *v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+98h] [rbp+Fh]
  int v31; // [rsp+9Ch] [rbp+13h]
  int *v32; // [rsp+A0h] [rbp+17h]
  int v33; // [rsp+A8h] [rbp+1Fh]
  int v34; // [rsp+ACh] [rbp+23h]

  if ( *(_DWORD *)(a1 + 152) != a2 )
  {
    if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v26 = &v22;
      v29 = &v21;
      v32 = &v20;
      v22 = a1;
      v27 = 8;
      v21 = (int)v6;
      v30 = 4;
      v20 = a2;
      v33 = 4;
      TlgWrite(v4, &unk_1802139E9, v5, v6, 5u, &pData);
    }
    *(_DWORD *)(a1 + 152) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v22 = *(_QWORD *)(a1 + 392);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v22);
      v23 = *(_QWORD *)(a1 + 400);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v23);
      v24 = *(_QWORD *)(a1 + 384);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v24);
      v7 = v20;
      v8 = &v22;
      for ( i = 0; i < 3; ++i )
      {
        v10 = *v8;
        v20 = a2;
        v11 = *(unsigned int *)(v10 + 360);
        v12 = v11 + 1;
        v13 = v11 + 1;
        if ( (int)v11 + 1 < (unsigned int)v11 )
          v13 = v7;
        v7 = v13;
        if ( v12 < (unsigned int)v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12 < (unsigned int)v11 ? 0x80070216 : 0, 0xB5u);
        }
        else if ( v13 > *(_DWORD *)(v10 + 356) )
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 336, 4u, 1, &v20);
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xC0u);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(v10 + 336) + 4 * v11) = a2;
          *(_DWORD *)(v10 + 360) = v13;
        }
        ++v8;
      }
      `vector destructor iterator'(
        (char *)&v22,
        8LL,
        3LL,
        (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<ID3D11InputLayout>::~ComPtr<ID3D11InputLayout>);
    }
    if ( a2 )
    {
      v15 = a2 - 1;
      if ( v15 )
      {
        if ( v15 != 2 || (*(_BYTE *)(a1 + 620) & 0x40) != 0 )
          goto LABEL_25;
        v16 = 3;
      }
      else
      {
        v16 = 1;
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 528LL) + 96LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 528LL));
      (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v17 + 128LL))(
        v17,
        CInteractionTracker::s_OnIdleAtFrameBegin,
        a1,
        4LL);
      v16 = 0;
    }
    v18 = *(_DWORD *)(a1 + 72);
    v19 = *(float *)(a1 + 112);
    v22 = *(_QWORD *)(a1 + 64);
    LODWORD(v23) = v18;
    CInteractionTracker::AddPendingStateChange(a1, v16, &v22, v19);
LABEL_25:
    CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
  }
}
