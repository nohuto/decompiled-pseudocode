/*
 * XREFs of ?MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800513A4
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCInputTarget@@0@Z @ 0x180050B54 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCInputTarget@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DMouse_(ISMTracing *this, const bool *a2)
{
  __int64 v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const bool *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v3 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    v7 = 0;
    v5 = a2;
    v6 = 1;
    TlgWrite((TraceLoggingHProvider)v3, &unk_18010E0A3, 0LL, 0LL, 3u, &pData);
  }
}
