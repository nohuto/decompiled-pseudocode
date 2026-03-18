/*
 * XREFs of VidSchiHandleControlEvent @ 0x1C00B33A8
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C006EB80 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C007D5AC (VidSchiSetSchedulerStatus.c)
 *     VidSchiResume @ 0x1C00B38E0 (VidSchiResume.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00B5480 (VidSchTerminateAdapter.c)
 */

LONG __fastcall VidSchiHandleControlEvent(__int64 a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  LONG result; // eax

  v1 = *(_DWORD *)(a1 + 276);
  if ( *(_DWORD *)(a1 + 272) != v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          *(_DWORD *)(a1 + 2836) = 3;
          VidSchFlushAdapter((struct _VIDSCH_GLOBAL *)a1);
          return VidSchiSetSchedulerStatus(a1, 3, 1);
        }
      }
      else
      {
        return VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)a1);
      }
    }
    else
    {
      return VidSchiResume();
    }
  }
  return result;
}
