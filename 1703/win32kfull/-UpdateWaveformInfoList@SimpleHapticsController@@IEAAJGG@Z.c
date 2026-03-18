/*
 * XREFs of ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C0223FF8
 * Callers:
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C0222B5C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::UpdateWaveformInfoList(
        SimpleHapticsController *this,
        __int16 a2,
        __int16 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rcx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+7h] BYREF
  __int16 *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  __int16 *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  __int16 v17; // [rsp+B8h] [rbp+6Fh] BYREF
  __int16 v18; // [rsp+C0h] [rbp+77h] BYREF

  v18 = a3;
  v17 = a2;
  v3 = *((_DWORD *)this + 22);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = *((_QWORD *)this + 10);
    while ( *(_WORD *)(v5 + 8 * v4) != a2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        goto LABEL_5;
    }
    *(_WORD *)(v5 + 8 * v4 + 2) = a3;
    return 0LL;
  }
  else
  {
LABEL_5:
    if ( (unsigned int)dword_1C0324150 > 4 )
    {
      TlgCreateSz(&pDesc, "SimpleHapticsController::UpdateWaveformInfoList Ordinal not found");
      v13 = 0;
      v16 = 0;
      v11 = &v17;
      v12 = 2;
      v15 = 2;
      v14 = &v18;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECB7F, v6, v7, 5u, &pData);
    }
    return 3221226021LL;
  }
}
