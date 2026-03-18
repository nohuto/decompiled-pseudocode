/*
 * XREFs of ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z @ 0x18017FEF8
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C8AC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x180180F50 (-ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIO.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x18017FD5C (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 */

BOOLEAN __fastcall CAnimationLoggingManager::LogAnimationEnded(
        LPCWSTR *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5)
{
  const WCHAR *v6; // rbx
  BOOLEAN result; // al
  int v8; // edx
  LPCWSTR v9; // r10
  UINT32 cData; // r11d
  unsigned int v11; // [rsp+30h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-51h] BYREF
  __int64 *v13; // [rsp+60h] [rbp-31h]
  int v14; // [rsp+68h] [rbp-29h]
  int v15; // [rsp+6Ch] [rbp-25h]
  unsigned int *v16; // [rsp+70h] [rbp-21h]
  int v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+7Ch] [rbp-15h]
  int *v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+88h] [rbp-9h]
  int v21; // [rsp+8Ch] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+B0h] [rbp+1Fh] BYREF
  const void *retaddr; // [rsp+E8h] [rbp+57h]
  __int64 v26; // [rsp+F8h] [rbp+67h] BYREF
  int v27; // [rsp+108h] [rbp+77h] BYREF

  v27 = a4;
  v26 = a2;
  v11 = a3;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v6 = L"Animation disconnected due to direct property set (API)";
        break;
      case 2:
        v6 = L"Animation disconnected because the target was destroyed";
        break;
      case 3:
        v6 = L"Animation was stopped (StopAnimation)";
        break;
      default:
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
  }
  else
  {
    v6 = L"Animation completed";
  }
  result = (unsigned __int8)CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, a3);
  if ( dword_1802D3FE0 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL);
    if ( result )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = &v26;
      v17 = v8 + 3;
      v16 = &v11;
      v20 = v8 + 3;
      v19 = &v27;
      v14 = v8 + 7;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateWsz(&v23, a1[19]);
      TlgCreateWsz(&v24, v9);
      return TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A74E1, 0LL, 0LL, cData, &pData);
    }
  }
  return result;
}
