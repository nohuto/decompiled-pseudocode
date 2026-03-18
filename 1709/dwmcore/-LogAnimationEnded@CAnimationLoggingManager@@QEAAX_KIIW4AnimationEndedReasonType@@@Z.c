/*
 * XREFs of ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z @ 0x180156F58
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A2E74 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x180157D18 (-ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIO.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x180156C24 (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 */

BOOLEAN __fastcall CAnimationLoggingManager::LogAnimationEnded(
        CAnimationLoggingManager *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5)
{
  const WCHAR *v5; // rbx
  BOOLEAN result; // al
  LPCWSTR v7; // r10
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  unsigned int v10; // [rsp+30h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-21h]
  int v13; // [rsp+68h] [rbp-19h]
  int v14; // [rsp+6Ch] [rbp-15h]
  unsigned int *v15; // [rsp+70h] [rbp-11h]
  int v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+7Ch] [rbp-5h]
  int *v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+8Ch] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+A0h] [rbp+1Fh] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+57h]
  __int64 v24; // [rsp+E8h] [rbp+67h] BYREF
  int v25; // [rsp+F8h] [rbp+77h] BYREF

  v25 = a4;
  v24 = a2;
  v10 = a3;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v5 = L"Animation disconnected due to direct property set (API)";
        break;
      case 2:
        v5 = L"Animation disconnected because the target was destroyed";
        break;
      case 3:
        v5 = L"Animation was stopped (StopAnimation)";
        break;
      default:
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
  }
  else
  {
    v5 = L"Animation completed";
  }
  result = (unsigned __int8)CAnimationLoggingManager::GetCommentForObject(a1, a3);
  if ( dword_18026D7B0 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = &v24;
      v15 = &v10;
      v16 = 4;
      v19 = 4;
      v18 = &v25;
      v13 = 8;
      TlgCreateWsz(&pDesc, v5);
      TlgCreateWsz(&v22, v7);
      return TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180212B2F, v8, v9, 7u, &pData);
    }
  }
  return result;
}
