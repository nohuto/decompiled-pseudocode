/*
 * XREFs of ?StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x18019F8CC
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180199B24 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18019FB4C (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgR.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801A1334 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::StartActivity(
        TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *this,
        int a2)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rdi
  __int64 v5; // r8
  const GUID *v6; // r9
  char *v7; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  int *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]
  int v17; // [rsp+A8h] [rbp+10h] BYREF

  v17 = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v4 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0 )
  {
    v3 = *((_QWORD *)v4 + 3) & 0x400000000000LL;
    if ( v3 == *((_QWORD *)v4 + 3) )
    {
      v13 = 0;
      v16 = 0;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v14 = &v17;
      v12 = 4;
      v15 = 4;
      v5 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v5 + 4)
        || (v6 = (const GUID *)(v5 + 24), !*(_DWORD *)(v5 + 24))
        && !*(_DWORD *)(v5 + 28)
        && !*(_DWORD *)(v5 + 32)
        && !*(_DWORD *)(v5 + 36) )
      {
        v6 = 0LL;
      }
      TlgWrite(v4, &unk_180267417, (LPCGUID)(v5 + 8), v6, 4u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v7 = (char *)this + 8;
    if ( *((_DWORD *)v7 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v3,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v7 = Local;
    if ( Local )
    {
      *((_QWORD *)v7 + 2) = *Local;
      *Local = v7;
      *((_DWORD *)v7 + 6) = GetCurrentThreadId();
    }
  }
}
