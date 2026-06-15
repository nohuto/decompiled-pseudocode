/*
 * XREFs of ?LogWnfApplicationInfoUpdate@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1800C62EC
 * Callers:
 *     ?SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z @ 0x1800C7184 (-SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogWnfApplicationInfoUpdate(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]
  int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  if ( (unsigned int)dword_18014A370 > 4 )
  {
    v5 = &v8;
    v7 = 0;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_18011143D, a3, a4, 3u, &v4);
  }
}
