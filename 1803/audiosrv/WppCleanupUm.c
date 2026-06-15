/*
 * XREFs of WppCleanupUm @ 0x1800E6638
 * Callers:
 *     DllMain @ 0x1800632DC (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 WppCleanupUm()
{
  CAudioSessionManager *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    while ( v0 )
    {
      v1 = *((_QWORD *)v0 + 1);
      if ( v1 )
      {
        result = EtwUnregisterTraceGuids(v1);
        *((_QWORD *)v0 + 1) = 0LL;
      }
      v0 = *(CAudioSessionManager **)v0;
    }
    WPP_GLOBAL_Control = (CAudioSessionManager *)&WPP_GLOBAL_Control;
  }
  return result;
}
