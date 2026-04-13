/*
 * XREFs of ?StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180051C90
 * Callers:
 *     _lambda_507b8746d9d21652e67ea22c8df447bd_::operator() @ 0x180053DC8 (_lambda_507b8746d9d21652e67ea22c8df447bd_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180045408 (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // r8
  const GUID *v17; // r9
  _QWORD *v18; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-19h]
  __int64 v23; // [rsp+68h] [rbp-11h]
  const unsigned __int16 *v24; // [rsp+70h] [rbp-9h]
  int v25; // [rsp+78h] [rbp-1h]
  int v26; // [rsp+7Ch] [rbp+3h]
  const unsigned __int16 *v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+88h] [rbp+Fh]
  int v29; // [rsp+8Ch] [rbp+13h]
  const unsigned __int16 *v30; // [rsp+90h] [rbp+17h]
  int v31; // [rsp+98h] [rbp+1Fh]
  int v32; // [rsp+9Ch] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v9 > 5u && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0 )
  {
    v8 = *((_QWORD *)v9 + 3) & 0x200000000000LL;
    if ( v8 == *((_QWORD *)v9 + 3) )
    {
      v23 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      LODWORD(v10) = 0;
      if ( a2 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( a2[v10] );
      }
      v26 = 0;
      v25 = 2 * v10 + 2;
      if ( !a2 )
        a2 = &Src;
      LODWORD(v11) = 0;
      v24 = a2;
      v12 = a3 == 0LL;
      if ( a3 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( a3[v11] );
        v12 = a3 == 0LL;
      }
      v13 = 2 * v11 + 2;
      v29 = 0;
      if ( v12 )
        a3 = &Src;
      v28 = v13;
      v27 = a3;
      LODWORD(v14) = 0;
      v15 = a4 == 0LL;
      if ( a4 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( a4[v14] );
        v15 = a4 == 0LL;
      }
      if ( v15 )
        a4 = &Src;
      v32 = 0;
      v30 = a4;
      v31 = 2 * v14 + 2;
      v16 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v16 + 4)
        || (v17 = (const GUID *)(v16 + 24), !*(_DWORD *)(v16 + 24))
        && !*(_DWORD *)(v16 + 28)
        && !*(_DWORD *)(v16 + 32)
        && !*(_DWORD *)(v16 + 36) )
      {
        v17 = 0LL;
      }
      TlgWrite(v9, &unk_180156EF4, (LPCGUID)(v16 + 8), v17, 6u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v18 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v8,
                          1);
    else
      Local = 0LL;
    *v18 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v18;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
