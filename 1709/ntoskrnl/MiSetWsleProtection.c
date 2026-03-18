/*
 * XREFs of MiSetWsleProtection @ 0x1400E5A4C
 * Callers:
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiWriteWsle @ 0x1400E6D40 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
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
