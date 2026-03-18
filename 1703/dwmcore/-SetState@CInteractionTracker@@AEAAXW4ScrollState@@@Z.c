/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E3E0
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016E9A8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18016C20C (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // r10d
  unsigned int v8; // r14d
  __int64 *v9; // r15
  unsigned int i; // esi
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // eax
  float v17; // xmm3_4
  int v18; // [rsp+30h] [rbp-69h] BYREF
  int v19; // [rsp+38h] [rbp-61h] BYREF
  __int64 v20; // [rsp+40h] [rbp-59h] BYREF
  __int64 v21; // [rsp+48h] [rbp-51h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+8Ch] [rbp-Dh]
  int *v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  int *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]

  if ( *(_DWORD *)(a1 + 140) != a2 )
  {
    if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v24 = &v20;
      v27 = &v19;
      v30 = &v18;
      v20 = a1;
      v25 = 8;
      v19 = (int)v6;
      v28 = v7;
      v18 = a2;
      v31 = v7;
      TlgWrite(v4, &unk_1801F76B8, v5, v6, 5u, &pData);
    }
    *(_DWORD *)(a1 + 140) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v20 = *(_QWORD *)(a1 + 376);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v20);
      v21 = *(_QWORD *)(a1 + 384);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v21);
      v22 = *(_QWORD *)(a1 + 368);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v22);
      v8 = v18;
      v9 = &v20;
      for ( i = 0; i < 3; ++i )
      {
        v11 = *v9;
        v18 = a2;
        v12 = *(unsigned int *)(v11 + 304);
        v13 = v12 + 1;
        if ( (int)v12 + 1 >= (unsigned int)v12 )
          v8 = v12 + 1;
        if ( v13 < (unsigned int)v12 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13 < (unsigned int)v12 ? 0x80070216 : 0, 0xB5u);
        }
        else if ( v8 > *(_DWORD *)(v11 + 300) )
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet(v11 + 280, 4u, 1, &v18);
          if ( v14 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(v11 + 280) + 4 * v12) = a2;
          *(_DWORD *)(v11 + 304) = v8;
        }
        ++v9;
      }
      `vector destructor iterator'(
        (char *)&v20,
        8LL,
        3LL,
        (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
    }
    if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        v15 = a2;
        goto LABEL_23;
      }
      if ( a2 == 3 && (*(_BYTE *)(a1 + 592) & 0x10) == 0 )
      {
        v15 = 3;
LABEL_23:
        v16 = *(_DWORD *)(a1 + 72);
        v17 = *(float *)(a1 + 112);
        v20 = *(_QWORD *)(a1 + 64);
        LODWORD(v21) = v16;
        CInteractionTracker::AddPendingStateChange(a1, v15, &v20, v17);
      }
    }
  }
}
