/*
 * XREFs of ?LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x1800C6DEC
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJK@Z @ 0x1800C38F0 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogSubscribe(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  int v4; // [rsp+30h] [rbp-29h] BYREF
  BOOL v5; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  BOOL *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+D8h] [rbp+7Fh] BYREF

  v13 = (int)a4;
  if ( (unsigned int)dword_18012A220 > 5 )
  {
    v4 = a2;
    v7 = &v4;
    v8 = 4LL;
    v10 = 4LL;
    v12 = 4LL;
    v5 = (_BYTE)a3 != 0;
    v9 = &v5;
    v11 = &v13;
    TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FAE4F, a3, a4, 5u, &pData);
  }
}
