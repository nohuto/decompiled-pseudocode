/*
 * XREFs of PdcpFireClientCallWatchdog @ 0x1800DFC70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
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
  _QWORD InputBuffer[24]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v16; // [rsp+130h] [rbp+30h]
  int v17; // [rsp+138h] [rbp+38h]
  int v18; // [rsp+13Ch] [rbp+3Ch]
  int *v19; // [rsp+140h] [rbp+40h]
  int v20; // [rsp+148h] [rbp+48h]
  int v21; // [rsp+14Ch] [rbp+4Ch]
  int *v22; // [rsp+150h] [rbp+50h]
  int v23; // [rsp+158h] [rbp+58h]
  int v24; // [rsp+15Ch] [rbp+5Ch]
  int *v25; // [rsp+160h] [rbp+60h]
  int v26; // [rsp+168h] [rbp+68h]
  int v27; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+180h] [rbp+80h] BYREF

  Context[8] = 1;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  HIDWORD(InputBuffer[20]) = 0;
  InputBuffer[1] = L"PdcCallWdog";
  InputBuffer[18] = *((_QWORD *)Context + 2);
  InputBuffer[19] = *((_QWORD *)Context + 3);
  LODWORD(InputBuffer[20]) = *((_DWORD *)Context + 8);
  LODWORD(InputBuffer[23]) = *((_DWORD *)Context + 3);
  LODWORD(InputBuffer[0]) = 33;
  dwSize = 64;
  CurrentProcess = GetCurrentProcess();
  QueryFullProcessImageNameW(CurrentProcess, 0, (LPWSTR)&InputBuffer[2], &dwSize);
  NtPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xC0u, 0LL, 0);
  if ( (unsigned int)dword_18014A430 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18014A430, 0x400000000000uLL) )
    {
      v5 = *((_DWORD *)Context + 8);
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v10 = v5;
      v11 = *((_DWORD *)Context + 6);
      v12 = *((_DWORD *)Context + 7);
      v13 = *((_DWORD *)Context + 3);
      v16 = &v10;
      v19 = &v11;
      v22 = &v12;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v6 = (const CHAR *)*((_QWORD *)Context + 2);
      v25 = &v13;
      TlgCreateSz(&pDesc, v6);
      TlgCreateWsz(&v29, (LPCWSTR)&InputBuffer[2]);
      TlgWrite((TraceLoggingHProvider)&dword_18014A430, &unk_1801127BF, v7, v8, 8u, &pData);
    }
  }
}
