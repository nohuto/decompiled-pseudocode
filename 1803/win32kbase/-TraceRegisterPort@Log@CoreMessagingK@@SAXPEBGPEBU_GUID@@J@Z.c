/*
 * XREFs of ?TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z @ 0x1C0166008
 * Callers:
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C0165D94 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceRegisterPort(const unsigned __int16 *a1, const struct _GUID *a2, int a3)
{
  __int64 v3; // r10
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]
  int v13; // [rsp+B0h] [rbp+18h] BYREF

  v13 = a3;
  if ( dword_1C019A350 > 5u )
  {
    TlgCreateWsz(&pDesc, L"Kernel\\MIT\\InputPort");
    v9 = 0;
    v12 = 0;
    v10 = &v13;
    v7 = v3;
    v8 = 16;
    v11 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A562, 0LL, v4, 5u, &pData);
  }
}
