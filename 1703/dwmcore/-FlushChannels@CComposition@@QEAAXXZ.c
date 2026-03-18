/*
 * XREFs of ?FlushChannels@CComposition@@QEAAXXZ @ 0x180131A38
 * Callers:
 *     ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C (-PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 *     ?Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18013D984 (-Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18007E104 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800B32D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 */

void __fastcall CComposition::FlushChannels(CComposition *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  CConnection **v8; // rbp
  int v9; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+3Ch] [rbp-1Ch]
  __int64 v13; // [rsp+44h] [rbp-14h]

  if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 376LL) )
  {
    v4 = *((_DWORD *)this + 112);
    if ( v4 )
    {
      v5 = 0LL;
      v6 = v4;
      do
      {
        v7 = *((_QWORD *)this + 53);
        v10 = 1;
        v8 = *(CConnection ***)(v5 + v7);
        v11 = 0LL;
        v12 = 0LL;
        v13 = 0LL;
        v9 = CChannelContext::PostMessageToChannel(v8, (const struct MIL_MESSAGE *)&v10, a3);
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Du);
        CMILRefCountBase::Release((CMILRefCountBase *)v8);
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
    *((_DWORD *)this + 112) = 0;
    DynArrayImpl<1>::ShrinkToSize((__int64)this + 424);
  }
}
