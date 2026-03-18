/*
 * XREFs of ?TraceRegisterAlpcPort@Log@CoreMessagingK@@SAXPEBU_GUID@@PEBGJ@Z @ 0x1C0165F64
 * Callers:
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0165CD0 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceRegisterAlpcPort(const struct _GUID *a1, const unsigned __int16 *a2, int a3)
{
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const struct _GUID *v5; // [rsp+50h] [rbp-48h]
  int v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+5Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]
  int v12; // [rsp+B0h] [rbp+18h] BYREF

  v12 = a3;
  if ( dword_1C019A350 > 5u )
  {
    v7 = 0;
    v5 = a1;
    v6 = 16;
    TlgCreateWsz(&pDesc, a2);
    v11 = 0;
    v9 = &v12;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A5D0, 0LL, v3, 5u, &pData);
  }
}
