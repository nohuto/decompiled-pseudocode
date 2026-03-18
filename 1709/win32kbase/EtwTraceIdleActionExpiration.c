/*
 * XREFs of EtwTraceIdleActionExpiration @ 0x1C009B4A0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0011560 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqh @ 0x1C00E378C (McTemplateK0qqqqh.c)
 */

void __fastcall EtwTraceIdleActionExpiration(char a1, char a2)
{
  char v4; // bl
  char LastInputTime; // al
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d

  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x2000000000008000LL) != 0
    && (qword_1C0188D98 & 0x2000000000008000LL) == qword_1C0188D98 )
  {
    v4 = gProtocolType == 0;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      LastInputTime = CInputGlobals::GetLastInputTime(gpInputGlobals);
      McTemplateK0qqqqh(v7, v6, v8, v9, a1, a2, LastInputTime, v4);
    }
  }
}
