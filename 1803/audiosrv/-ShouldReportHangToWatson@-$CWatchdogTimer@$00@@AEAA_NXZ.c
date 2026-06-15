/*
 * XREFs of ?ShouldReportHangToWatson@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x18009FAA8
 * Callers:
 *     ?OnHang@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x18009F38C (-OnHang@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x18009F60C (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 */

bool __fastcall CWatchdogTimer<1>::ShouldReportHangToWatson(__int64 a1)
{
  signed __int32 v3; // r9d
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  BOOL v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  bool v13; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+34h] [rbp-25h] BYREF
  BOOL v15; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp+17h] BYREF
  BOOL *v21; // [rsp+90h] [rbp+37h]
  int v22; // [rsp+98h] [rbp+3Fh]
  int v23; // [rsp+9Ch] [rbp+43h]

  v13 = 0;
  if ( (int)CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(a1, &v13) < 0 || !v13 )
    return 0;
  v3 = _InterlockedExchangeAdd(&`CWatchdogTimer<1>::ShouldReportHangToWatson'::`2'::hangsCaught, 1u);
  v4 = *(const struct _TlgProvider_t **)(a1 + 8);
  LODWORD(v5) = v3 + 1;
  v14 = (int)v5;
  if ( *(_DWORD *)v4 > 5u && TlgKeywordOn(v4, 1uLL) )
  {
    v19 = 0;
    v17 = &v14;
    v18 = 4;
    TlgWrite(v6, &unk_180144F8A, v7, v5, 3u, &pData);
    LODWORD(v5) = v14;
  }
  if ( (_DWORD)v5 != 1 )
    return 0;
  v8 = IsDebuggerPresent();
  v9 = *(const struct _TlgProvider_t **)(a1 + 8);
  LODWORD(v10) = v8;
  v15 = v8;
  if ( *(_DWORD *)v9 > 5u )
  {
    if ( TlgKeywordOn(v9, 1uLL) )
    {
      v23 = 0;
      v21 = &v15;
      v22 = 4;
      TlgWrite(v11, &unk_180144F55, v12, v10, 3u, &v20);
      LODWORD(v10) = v15;
    }
  }
  return (_DWORD)v10 == 0;
}
