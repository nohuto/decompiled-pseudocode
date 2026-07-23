/*
 * XREFs of sub_1800FF2CC @ 0x1800FF2CC
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall sub_1800FF2CC(HANDLE Handle)
{
  HANDLE InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  char v5; // [rsp+3Ch] [rbp-1Ch]
  __int64 v6; // [rsp+40h] [rbp-18h]

  InputBuffer = Handle;
  v4 = 3;
  v5 = 0;
  v6 = 0LL;
  ZwPowerInformation(PowerRequestAction, &InputBuffer, 0x18u, 0LL, 0);
  return ZwClose(Handle);
}
