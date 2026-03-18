/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0131120
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C012DD00 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C008B9B8 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0131A8C (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  int v4; // eax
  __int64 v5; // xmm1_8
  struct _KEVENT *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v8[3]; // [rsp+38h] [rbp-38h] BYREF

  RIMLockExclusive((__int64)this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    v2 = *(_OWORD *)((char *)this + 56);
    v8[0] = *(_OWORD *)((char *)this + 40);
    v3 = *(_OWORD *)((char *)this + 72);
    v8[1] = v2;
    v8[2] = v3;
    v4 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v8, v7);
    if ( v4 != 2 )
    {
      *(_DWORD *)v7 = v4;
      memset(&v7[4], 0, 20);
    }
    v5 = *(_QWORD *)&v7[16];
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)v7;
    *((_QWORD *)this + 13) = v5;
  }
  v6 = (struct _KEVENT *)*((_QWORD *)this + 14);
  if ( v6 )
    KeSetEvent(v6, 1, 0);
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
