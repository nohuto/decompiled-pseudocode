/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C00C8718
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C00050B0 (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     NdisGroupActiveProcessorCount @ 0x1C00227D0 (NdisGroupActiveProcessorCount.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     ndisCreateThread @ 0x1C00C879C (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00E50B4 (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG active; // esi

  Thread = 0;
  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_(0x4Eu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
  v1 = 0LL;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  if ( active )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(v2, (unsigned int)v1, (unsigned int)dword_1C0098DC8, (char *)P + 8 * v1);
      if ( Thread < 0 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= active )
        goto LABEL_6;
    }
    ndisKillReceiveWorkerThreadPool();
  }
  else
  {
LABEL_6:
    if ( (unsigned __int8)byte_1C0099613 >= 4u )
      WPP_SF_(0x4Fu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
  }
  return (unsigned int)Thread;
}
