/*
 * XREFs of WppCleanupUm @ 0x1800B8AF0
 * Callers:
 *     DllMain @ 0x18004B674 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 WppCleanupUm()
{
  CVolumeStrip *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control )
  {
    while ( v0 )
    {
      v1 = *((_QWORD *)v0 + 1);
      if ( v1 )
      {
        result = EtwUnregisterTraceGuids(v1);
        *((_QWORD *)v0 + 1) = 0LL;
      }
      v0 = *(CVolumeStrip **)v0;
    }
    WPP_GLOBAL_Control = (CVolumeStrip *)&WPP_GLOBAL_Control;
  }
  return result;
}
