/*
 * XREFs of ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C774
 * Callers:
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14005BB34 (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 *     ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005BBFC (-CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005C490 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005C5BC (-GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14005D800 (-ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ.c)
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14005E040 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetEmptyBufferCount@CSpatialCrossProcessBaseEndpoint@@IEAAIXZ @ 0x14005EE90 (-GetEmptyBufferCount@CSpatialCrossProcessBaseEndpoint@@IEAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PingPongState::GetState(__int64 a1)
{
  volatile signed __int32 *v1; // rdx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 136);
  result = 16LL;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(v1, 0, 0);
    if ( (unsigned int)result > 0x10 )
    {
      _InterlockedExchange(*(volatile __int32 **)(a1 + 136), 16);
      return 16LL;
    }
  }
  return result;
}
