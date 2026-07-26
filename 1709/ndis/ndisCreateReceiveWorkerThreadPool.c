/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C00C7DDC
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C0010DD4 (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     NdisGroupActiveProcessorCount @ 0x1C001EB50 (NdisGroupActiveProcessorCount.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ndisCreateThread @ 0x1C00C7E60 (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00E3954 (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG active; // esi

  Thread = 0;
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_(0x4Eu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  v1 = 0LL;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  if ( active )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(v2, (unsigned int)v1, (unsigned int)dword_1C0097F08, (char *)qword_1C0097F48 + 8 * v1);
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
    if ( (unsigned __int8)byte_1C0098753 >= 4u )
      WPP_SF_(0x4Fu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  }
  return (unsigned int)Thread;
}
