/*
 * XREFs of ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00FE58C
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00FE4C0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C00FE60C (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C011FF64 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 */

__int64 UmfdCallSessionInitialize(void)
{
  int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // rsi
  struct CMultipleConsumerWorkQueue *v3; // rax
  __int64 v5; // rsi
  void *v6; // rcx

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  while ( v0 >= 0 )
  {
    v3 = CMultipleConsumerWorkQueue::Create();
    if ( v3 )
    {
      g_pUmfdServerPort[v2] = v3;
      v0 = 0;
      g_pUmfdClientPort[v2] = v3;
    }
    else
    {
      v0 = -1073741801;
    }
    v1 = (unsigned int)(v1 + 1);
    ++v2;
    if ( (unsigned int)v1 >= 4 )
    {
      if ( v0 >= 0 )
        return (unsigned int)v0;
      break;
    }
  }
  if ( (_DWORD)v1 )
  {
    v5 = 0LL;
    do
    {
      v6 = (void *)g_pUmfdServerPort[v5];
      g_pUmfdClientPort[v5] = 0LL;
      CMultipleConsumerWorkQueue::Destroy(v6);
      g_pUmfdServerPort[v5++] = 0LL;
      --v1;
    }
    while ( v1 );
  }
  return (unsigned int)v0;
}
