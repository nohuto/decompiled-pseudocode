/*
 * XREFs of ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180146034
 * Callers:
 *     ?HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z @ 0x18013E2B0 (-HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180145CB4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180145DEC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180145EE0 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180145FCC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
        __int64 *a1,
        _DWORD *a2,
        int *a3)
{
  const struct _TlgProvider_t *v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v11; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  int *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  int *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a1;
    v13 = &v11;
    v15 = &v9;
    v10 = *a3;
    v11 = v7;
    LODWORD(v7) = *a2;
    v17 = &v10;
    v14 = 8LL;
    v9 = v7;
    v16 = 4LL;
    v18 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_1802645BA, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
