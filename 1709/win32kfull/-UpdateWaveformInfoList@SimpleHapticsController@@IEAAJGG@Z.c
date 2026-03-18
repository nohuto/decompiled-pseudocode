/*
 * XREFs of ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C02254B0
 * Callers:
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C022400C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::UpdateWaveformInfoList(
        SimpleHapticsController *this,
        __int16 a2,
        const GUID *a3)
{
  unsigned int v3; // r10d
  const GUID *v4; // r9
  unsigned int v5; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  const char *v8; // [rsp+50h] [rbp+17h]
  __int64 v9; // [rsp+58h] [rbp+1Fh]
  __int16 *v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+68h] [rbp+2Fh]
  __int16 *v12; // [rsp+70h] [rbp+37h]
  __int64 v13; // [rsp+78h] [rbp+3Fh]
  __int16 v14; // [rsp+A8h] [rbp+6Fh] BYREF
  __int16 v15; // [rsp+B0h] [rbp+77h] BYREF

  v15 = (__int16)a3;
  v14 = a2;
  v3 = *((_DWORD *)this + 22);
  v4 = (const GUID *)(unsigned __int16)a3;
  v5 = 0;
  if ( v3 )
  {
    a3 = (const GUID *)*((_QWORD *)this + 10);
    while ( *((_WORD *)&a3->Data1 + 4 * v5) != a2 )
    {
      if ( ++v5 >= v3 )
        goto LABEL_5;
    }
    *((_WORD *)&a3->Data1 + 4 * v5 + 1) = (_WORD)v4;
    return 0LL;
  }
  else
  {
LABEL_5:
    if ( (unsigned int)dword_1C0320150 > 4 )
    {
      v9 = 66LL;
      v8 = "SimpleHapticsController::UpdateWaveformInfoList Ordinal not found";
      v10 = &v14;
      v12 = &v15;
      v11 = 2LL;
      v13 = 2LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97A9, a3, v4, 5u, &pData);
    }
    return 3221226021LL;
  }
}
