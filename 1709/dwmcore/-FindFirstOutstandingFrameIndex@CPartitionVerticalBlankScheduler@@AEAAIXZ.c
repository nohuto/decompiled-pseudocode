/*
 * XREFs of ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x180011594
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180011CE8 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(
        CPartitionVerticalBlankScheduler *this)
{
  int v2; // ecx
  unsigned int v3; // r8d
  char i; // dl
  unsigned int v5; // edx
  __int64 v6; // r10
  unsigned int v8; // ecx
  int v9; // edx
  __int64 v10; // r10

  v2 = *((_DWORD *)this + 5249);
  v3 = -1;
  if ( v2 == -1 )
  {
    v8 = *((_DWORD *)this + 5248);
    if ( v8 != -1 )
    {
      v9 = ((_BYTE)v8 + 1) & 0xF;
      while ( v8 != v9 )
      {
        v10 = 1304LL * v8;
        if ( *((_BYTE *)this + v10 + 392) )
          break;
        if ( *((_BYTE *)this + v10 + 377) )
          v3 = v8;
        v8 = ((_BYTE)v8 - 1) & 0xF;
      }
    }
  }
  else
  {
    for ( i = v2 + 1; ; i = v5 + 1 )
    {
      v5 = i & 0xF;
      if ( v5 == v2 || v3 != -1 )
        break;
      v6 = 1304LL * v5;
      if ( *((_BYTE *)this + v6 + 377) )
      {
        if ( !*((_BYTE *)this + v6 + 392) )
          v3 = v5;
      }
    }
  }
  return v3;
}
