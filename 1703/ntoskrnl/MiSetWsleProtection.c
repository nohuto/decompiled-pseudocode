/*
 * XREFs of MiSetWsleProtection @ 0x14006D394
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 */

__int64 __fastcall MiSetWsleProtection(__int64 a1, __int64 a2)
{
  char WsleContents; // al
  char v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r10

  WsleContents = MiGetWsleContents(a1, a2);
  LOBYTE(v4) = (16 * (v3 & 7)) | WsleContents & 0x8F;
  return MiWriteWsle(v5, v6, v4);
}
