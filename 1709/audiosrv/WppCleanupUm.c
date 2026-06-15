/*
 * XREFs of WppCleanupUm @ 0x1800AC358
 * Callers:
 *     DllMain @ 0x18003541C (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 WppCleanupUm()
{
  CAudioDGProcess *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
  {
    while ( v0 )
    {
      v1 = *((_QWORD *)v0 + 1);
      if ( v1 )
      {
        result = EtwUnregisterTraceGuids(v1);
        *((_QWORD *)v0 + 1) = 0LL;
      }
      v0 = *(CAudioDGProcess **)v0;
    }
    WPP_GLOBAL_Control = (CAudioDGProcess *)&WPP_GLOBAL_Control;
  }
  return result;
}
