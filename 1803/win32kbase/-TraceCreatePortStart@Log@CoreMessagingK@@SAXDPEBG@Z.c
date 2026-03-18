/*
 * XREFs of ?TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z @ 0x1C0164FD8
 * Callers:
 *     CoreMsgCreatePort @ 0x1C01652B4 (CoreMsgCreatePort.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::Log::TraceCreatePortStart(__int64 a1, const unsigned __int16 *a2)
{
  LPCGUID v2; // r9
  UINT32 cData; // r10d
  int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C019A350 > 5u )
  {
    v4 = 0;
    v6 = &v4;
    v7 = 4;
    v8 = 0;
    TlgCreateWsz(&v9, L"Kernel\\MIT\\InputPort");
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A3BC, 0LL, v2, cData, &pData);
  }
}
