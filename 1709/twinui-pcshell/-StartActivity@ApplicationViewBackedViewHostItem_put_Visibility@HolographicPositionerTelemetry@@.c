/*
 * XREFs of ?StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAAXIPEBGW4FRAMEWORK_VIEW_TYPE@@_N@Z @ 0x18010C774
 * Callers:
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18010D490 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180101C78 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflect.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::StartActivity(
        __int64 a1,
        int a2,
        const WCHAR *a3,
        int a4,
        unsigned __int8 a5)
{
  const struct _TlgProvider_t *Local; // rax
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rsi
  const WCHAR *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  const GUID *v14; // r9
  __int64 v15; // rbx
  const struct _TlgProvider_t *v16; // rcx
  int v18; // [rsp+30h] [rbp-61h] BYREF
  int v19; // [rsp+34h] [rbp-5Dh] BYREF
  int v20; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-51h] BYREF
  int *v22; // [rsp+60h] [rbp-31h]
  __int64 v23; // [rsp+68h] [rbp-29h]
  const WCHAR *v24; // [rsp+70h] [rbp-21h]
  int v25; // [rsp+78h] [rbp-19h]
  int v26; // [rsp+7Ch] [rbp-15h]
  int *v27; // [rsp+80h] [rbp-11h]
  __int64 v28; // [rsp+88h] [rbp-9h]
  int *v29; // [rsp+90h] [rbp-1h]
  __int64 v30; // [rsp+98h] [rbp+7h]
  int *v31; // [rsp+A0h] [rbp+Fh]
  __int64 v32; // [rsp+A8h] [rbp+17h]
  int v33; // [rsp+F8h] [rbp+67h] BYREF

  v33 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  Local = HolographicPositionerProvider::Provider();
  v10 = Local;
  if ( *(_DWORD *)Local > 5u )
  {
    LODWORD(Local) = 0;
    if ( (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0 )
    {
      v9 = *((_QWORD *)v10 + 3) & 0x200000000000LL;
      if ( v9 == *((_QWORD *)v10 + 3) )
      {
        LODWORD(v12) = GetCurrentThreadId();
        v23 = 4LL;
        v11 = &word_18021F3A8;
        v18 = v12;
        v22 = &v18;
        LODWORD(v12) = 0;
        if ( a3 )
        {
          v11 = a3;
          v12 = -1LL;
          do
            ++v12;
          while ( a3[v12] );
        }
        v24 = v11;
        v25 = 2 * v12 + 2;
        v27 = &v33;
        v29 = &v19;
        v20 = a5;
        v31 = &v20;
        v26 = 0;
        v28 = 4LL;
        v19 = a4;
        v30 = 4LL;
        v32 = 4LL;
        v13 = *(_QWORD *)(a1 + 48);
        if ( !*(_BYTE *)(v13 + 4)
          || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
          && !*(_DWORD *)(v13 + 28)
          && !*(_DWORD *)(v13 + 32)
          && !*(_DWORD *)(v13 + 36) )
        {
          v14 = 0LL;
        }
        LODWORD(Local) = TlgWrite(v10, &unk_18025FCD4, (LPCGUID)(v13 + 8), v14, 7u, &pData);
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v15 = a1 + 8;
    if ( *(_DWORD *)(v15 + 24) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v9,
                                               1);
      v16 = Local;
    }
    else
    {
      v16 = 0LL;
    }
    *(_QWORD *)v15 = v16;
    if ( v16 )
    {
      *(_QWORD *)(v15 + 16) = *(_QWORD *)v16;
      *(_QWORD *)v16 = v15;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(v15 + 24) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
