/*
 * XREFs of ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x1800CD87C
 * Callers:
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CB29C (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800C98BC (-Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  const struct _TlgProvider_t *v6; // rax
  __int128 v7; // xmm0
  __int128 v9; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+1Fh]
  __int64 v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+80h] [rbp+2Fh]
  __int128 *v15; // [rsp+88h] [rbp+37h]
  __int64 v16; // [rsp+90h] [rbp+3Fh]

  v6 = TouchpadControllerExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
  {
    v7 = *a3;
    v11 = a1;
    v12 = 4LL;
    v9 = v7;
    v13 = a2;
    v14 = 4LL;
    v15 = &v9;
    v16 = 16LL;
    LODWORD(v6) = TlgWrite(v6, &unk_18025D77B, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
