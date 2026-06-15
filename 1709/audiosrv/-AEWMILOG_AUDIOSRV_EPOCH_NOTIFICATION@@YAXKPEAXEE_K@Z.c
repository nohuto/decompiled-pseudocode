/*
 * XREFs of ?AEWMILOG_AUDIOSRV_EPOCH_NOTIFICATION@@YAXKPEAXEE_K@Z @ 0x1800612CC
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x180062310 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 */

void __fastcall AEWMILOG_AUDIOSRV_EPOCH_NOTIFICATION(__int64 a1, void *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v5, 0, 0x40uLL);
    v5[6] = 0LL;
    LODWORD(v5[7]) = 0;
    LOWORD(v5[0]) = 72;
    v5[8] = a5;
    HIDWORD(v5[5]) = 0x20000;
    *(_OWORD *)&v5[3] = AEWMIGUID_AUDIOSRV;
    WORD2(v5[0]) = 1027;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v5);
  }
}
