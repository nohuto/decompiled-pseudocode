/*
 * XREFs of ProcLibTraceInvalidPowerCurve @ 0x1C00365E8
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C0035264 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     memmove @ 0x1C0004CC0 (memmove.c)
 *     _TlgKeywordOn @ 0x1C00076F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007720 (_TlgWrite.c)
 */

BOOLEAN __fastcall ProcLibTraceInvalidPowerCurve(const struct _TlgProvider_t *a1, unsigned int a2, const void *a3)
{
  unsigned __int16 v3; // bx
  BOOLEAN result; // al
  char v5; // di
  const GUID *v6; // r8
  const GUID *v7; // r9
  char v8; // [rsp+30h] [rbp-49h] BYREF
  char v9; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int16 v10; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  char *v12; // [rsp+60h] [rbp-19h]
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  char *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  __int16 *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  _BYTE *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  _BYTE v24[32]; // [rsp+A0h] [rbp+27h] BYREF

  v3 = a2;
  result = (unsigned __int8)a3;
  v5 = (char)a1;
  if ( a2 )
    result = (unsigned __int8)memmove(v24, a3, 4LL * a2);
  if ( (unsigned int)dword_1C0014060 > 5 )
  {
    result = TlgKeywordOn(a1, 0x400000000000uLL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = &v8;
      v15 = &v9;
      v18 = (__int16 *)&v10;
      v21 = v24;
      v23 = 0;
      v22 = 4 * v3;
      v8 = v5;
      v9 = v3;
      v10 = v3;
      v13 = 1;
      v16 = 1;
      v19 = 2;
      return TlgWrite((TraceLoggingHProvider)1, &unk_1C00101A9, v6, v7, 6u, &pData);
    }
  }
  return result;
}
