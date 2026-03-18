/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0134C7C
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C012DE10 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C0134D64 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0136118 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // xmm1_8
  struct _KEVENT *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v15[3]; // [rsp+38h] [rbp-38h] BYREF

  RIMLockExclusive((__int64)this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 8) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    v4 = *(_OWORD *)((char *)this + 56);
    v15[0] = *(_OWORD *)((char *)this + 40);
    v5 = *(_OWORD *)((char *)this + 72);
    v15[1] = v4;
    v15[2] = v5;
    v6 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v15, v14);
    v9 = v6;
    if ( v6 != 2 )
    {
      if ( v6 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
      *(_DWORD *)v14 = v9;
      memset(&v14[4], 0, 20);
    }
    v10 = *(_QWORD *)&v14[16];
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)v14;
    *((_QWORD *)this + 13) = v10;
  }
  v11 = (struct _KEVENT *)*((_QWORD *)this + 14);
  if ( v11 )
  {
    if ( KeReadStateEvent(v11) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    KeSetEvent(*((PRKEVENT *)this + 14), 1, 0);
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
