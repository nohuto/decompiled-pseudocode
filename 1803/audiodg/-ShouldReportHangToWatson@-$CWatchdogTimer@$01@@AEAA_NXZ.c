/*
 * XREFs of ?ShouldReportHangToWatson@?$CWatchdogTimer@$01@@AEAA_NXZ @ 0x14003A23C
 * Callers:
 *     ?OnHang@?$CWatchdogTimer@$01@@AEAAXXZ @ 0x1400398E8 (-OnHang@-$CWatchdogTimer@$01@@AEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$01@@AEAAJPEA_N@Z @ 0x140039BA8 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$01@@AEAAJPEA_N@Z.c)
 */

bool __fastcall CWatchdogTimer<2>::ShouldReportHangToWatson(__int64 a1)
{
  signed __int32 v3; // r9d
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  BOOL v7; // eax
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r9
  const struct _TlgProvider_t *v10; // rcx
  bool v11; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+34h] [rbp-25h] BYREF
  BOOL v13; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+6Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp+17h] BYREF
  BOOL *v19; // [rsp+90h] [rbp+37h]
  int v20; // [rsp+98h] [rbp+3Fh]
  int v21; // [rsp+9Ch] [rbp+43h]

  v11 = 0;
  if ( (int)CWatchdogTimer<2>::ProcessHasBeenRunningLongEnough(a1, &v11) < 0 || !v11 )
    return 0;
  v3 = _InterlockedExchangeAdd(&`CWatchdogTimer<2>::ShouldReportHangToWatson'::`2'::hangsCaught, 1u);
  v4 = *(const struct _TlgProvider_t **)(a1 + 8);
  LODWORD(v5) = v3 + 1;
  v12 = (int)v5;
  if ( *(_DWORD *)v4 > 5u && TlgKeywordOn(v4, 2uLL) )
  {
    v17 = 0;
    v15 = &v12;
    v16 = 4;
    TlgWrite(v6, &unk_14006FCA4, 0LL, v5, 3u, &pData);
    LODWORD(v5) = v12;
  }
  if ( (_DWORD)v5 != 1 )
    return 0;
  v7 = IsDebuggerPresent();
  v8 = *(const struct _TlgProvider_t **)(a1 + 8);
  LODWORD(v9) = v7;
  v13 = v7;
  if ( *(_DWORD *)v8 > 5u )
  {
    if ( TlgKeywordOn(v8, 2uLL) )
    {
      v21 = 0;
      v19 = &v13;
      v20 = 4;
      TlgWrite(v10, &unk_14006FCCA, 0LL, v9, 3u, &v18);
      LODWORD(v9) = v13;
    }
  }
  return (_DWORD)v9 == 0;
}
