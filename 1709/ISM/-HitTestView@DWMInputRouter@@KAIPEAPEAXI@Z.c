/*
 * XREFs of ?HitTestView@DWMInputRouter@@KAIPEAPEAXI@Z @ 0x18001BB4C
 * Callers:
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x18001BD48 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::HitTestView(void **a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    return 0LL;
  while ( 1 )
  {
    if ( (int)NtQueryCompositionInputSinkViewId(*a1, &v6) >= 0 )
    {
      result = v6;
      if ( v6 )
        break;
    }
    ++v2;
    ++a1;
    if ( v2 >= a2 )
      return 0LL;
  }
  return result;
}
