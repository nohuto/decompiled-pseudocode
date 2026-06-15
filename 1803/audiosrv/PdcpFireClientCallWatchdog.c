/*
 * XREFs of PdcpFireClientCallWatchdog @ 0x18010D0C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

void __fastcall PdcpFireClientCallWatchdog(PTP_CALLBACK_INSTANCE Instance, _BYTE *Context, PTP_TIMER Timer)
{
  HANDLE CurrentProcess; // rax
  int v5; // eax
  const CHAR *v6; // rdx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  DWORD dwSize; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int InputBuffer; // [rsp+50h] [rbp-B0h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-A8h]
  WCHAR ExeName[64]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+E0h] [rbp-20h]
  int v18; // [rsp+E8h] [rbp-18h]
  int v19; // [rsp+ECh] [rbp-14h]
  int v20; // [rsp+F0h] [rbp-10h]
  int v21; // [rsp+F4h] [rbp-Ch]
  int v22; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v24; // [rsp+130h] [rbp+30h]
  int v25; // [rsp+138h] [rbp+38h]
  int v26; // [rsp+13Ch] [rbp+3Ch]
  int *v27; // [rsp+140h] [rbp+40h]
  int v28; // [rsp+148h] [rbp+48h]
  int v29; // [rsp+14Ch] [rbp+4Ch]
  int *v30; // [rsp+150h] [rbp+50h]
  int v31; // [rsp+158h] [rbp+58h]
  int v32; // [rsp+15Ch] [rbp+5Ch]
  int *v33; // [rsp+160h] [rbp+60h]
  int v34; // [rsp+168h] [rbp+68h]
  int v35; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+180h] [rbp+80h] BYREF

  Context[8] = 1;
  memset_0(&InputBuffer, 0, 0xC0uLL);
  v21 = 0;
  v15 = L"PdcCallWdog";
  v17 = *((_QWORD *)Context + 2);
  v18 = *((_DWORD *)Context + 6);
  v19 = *((_DWORD *)Context + 7);
  v20 = *((_DWORD *)Context + 8);
  v22 = *((_DWORD *)Context + 3);
  InputBuffer = 33;
  dwSize = 64;
  CurrentProcess = GetCurrentProcess();
  QueryFullProcessImageNameW(CurrentProcess, 0, ExeName, &dwSize);
  NtPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xC0u, 0LL, 0);
  if ( dword_180188510 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180188510, 0x400000000000uLL) )
    {
      v5 = *((_DWORD *)Context + 8);
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v10 = v5;
      v11 = *((_DWORD *)Context + 6);
      v12 = *((_DWORD *)Context + 7);
      v13 = *((_DWORD *)Context + 3);
      v24 = &v10;
      v27 = &v11;
      v30 = &v12;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v6 = (const CHAR *)*((_QWORD *)Context + 2);
      v33 = &v13;
      TlgCreateSz(&pDesc, v6);
      TlgCreateWsz(&v37, ExeName);
      TlgWrite((TraceLoggingHProvider)&dword_180188510, &unk_180149A2B, v7, v8, 8u, &pData);
    }
  }
}
