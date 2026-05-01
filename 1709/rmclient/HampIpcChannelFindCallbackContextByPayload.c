/*
 * XREFs of HampIpcChannelFindCallbackContextByPayload @ 0x18000D970
 * Callers:
 *     HamIpcChannelObjectMakeZombie @ 0x18000D90C (HamIpcChannelObjectMakeZombie.c)
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180005B00 (HampIpcChannelObjectComparePayloadForTree.c)
 */

__int64 __fastcall HampIpcChannelFindCallbackContextByPayload(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_BYTE *)(a1 + 32) & 1;
  while ( v3 )
  {
    v5 = HampIpcChannelObjectComparePayloadForTree(a2, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        return v3;
      v6 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v3;
    }
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
  }
  return v3;
}
