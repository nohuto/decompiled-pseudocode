/*
 * XREFs of ?LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z @ 0x1800C6CC4
 * Callers:
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1800C35B0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogRequestDynamicObjects(
        CSpatialAudioResourceManagerTraceLogger *this,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-19h] BYREF
  __int64 *v5; // [rsp+58h] [rbp+7h]
  __int64 v6; // [rsp+60h] [rbp+Fh]
  int *v7; // [rsp+68h] [rbp+17h]
  __int64 v8; // [rsp+70h] [rbp+1Fh]
  int *v9; // [rsp+78h] [rbp+27h]
  __int64 v10; // [rsp+80h] [rbp+2Fh]
  __int64 v11; // [rsp+C0h] [rbp+6Fh] BYREF
  int v12; // [rsp+C8h] [rbp+77h] BYREF
  int v13; // [rsp+D0h] [rbp+7Fh] BYREF

  v13 = (int)a4;
  v12 = (int)a3;
  v11 = a2;
  if ( (unsigned int)dword_18012A220 > 4 )
  {
    v6 = 8LL;
    v5 = &v11;
    v7 = &v12;
    v9 = &v13;
    v8 = 4LL;
    v10 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FADD5, a3, a4, 5u, &v4);
  }
}
