/*
 * XREFs of ??$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@@SAXAEAM000@Z @ 0x1800DB658
 * Callers:
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1800D4910 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009E2C0 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_SetPositioningAnchorRect<float &,float &,float &,float &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v8; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  __int64 v11; // [rsp+58h] [rbp+7h]
  __int64 v12; // [rsp+60h] [rbp+Fh]
  __int64 v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  __int64 v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  __int64 v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v8 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v11 = a1;
    v12 = 4LL;
    v13 = a2;
    v14 = 4LL;
    v15 = a3;
    v16 = 4LL;
    v17 = a4;
    v18 = 4LL;
    LODWORD(v8) = TlgWrite(v8, &unk_18025D9FF, 0LL, 0LL, 6u, &pData);
  }
  return (int)v8;
}
