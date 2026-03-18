/*
 * XREFs of ?TraceUnregisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z @ 0x1C01660B8
 * Callers:
 *     ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C0166144 (-UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceUnregisterAlpcPort(
        const struct _GUID *a1,
        int a2,
        __int64 a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+98h] [rbp+10h] BYREF

  v11 = a2;
  if ( dword_1C019A350 > 5u )
  {
    v5 = a1;
    v7 = 0;
    v6 = 16;
    v8 = &v11;
    v10 = 0;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A59C, 0LL, a4, 4u, &v4);
  }
}
