/*
 * XREFs of PoStartPartitionReplace @ 0x1406FC9F4
 * Callers:
 *     PnprQuiesceDevices @ 0x14042CC58 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPartitionReplace(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  *(_DWORD *)(a1 + 16) = 10;
  PopDispatchStateCallout(a1, &v4);
  *(_DWORD *)(a1 + 16) = 9;
  return PopDispatchStateCallout(a1, 0LL);
}
