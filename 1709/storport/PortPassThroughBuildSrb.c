/*
 * XREFs of PortPassThroughBuildSrb @ 0x1C00697A0
 * Callers:
 *     PortPassThroughSendAsync @ 0x1C006A0A4 (PortPassThroughSendAsync.c)
 * Callees:
 *     PortPassThroughSrbInitialize @ 0x1C006A348 (PortPassThroughSrbInitialize.c)
 */

PVOID __fastcall PortPassThroughBuildSrb(__int64 a1, int a2)
{
  PVOID v4; // rdi
  PVOID PoolWithTag; // rbx
  int v6; // r8d
  unsigned __int8 v7; // al

  v4 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x69506C50u);
  if ( PoolWithTag )
  {
    v7 = *(_BYTE *)(a1 + 7);
    if ( !v7 || (v4 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7, 0x69506C50u)) != 0LL )
    {
      PortPassThroughSrbInitialize((_DWORD)PoolWithTag, a1, v6, a2, (__int64)v4);
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
      return 0LL;
    }
  }
  return PoolWithTag;
}
