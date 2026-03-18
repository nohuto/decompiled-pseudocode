/*
 * XREFs of VidSchiHandleControlEvent @ 0x1C00AAA90
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C006AE70 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiResume @ 0x1C00AAFCC (VidSchiResume.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 */

LONG __fastcall VidSchiHandleControlEvent(struct _VIDSCH_GLOBAL *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  LONG result; // eax

  v1 = *((_DWORD *)a1 + 67);
  if ( *((_DWORD *)a1 + 66) != v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          *((_DWORD *)a1 + 705) = 3;
          VidSchFlushAdapter(a1);
          return VidSchiSetSchedulerStatus((__int64)a1, 3, 1);
        }
      }
      else
      {
        return VidSchTerminateAdapter(a1);
      }
    }
    else
    {
      return VidSchiResume();
    }
  }
  return result;
}
