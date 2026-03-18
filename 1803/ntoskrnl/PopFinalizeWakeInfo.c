/*
 * XREFs of PopFinalizeWakeInfo @ 0x1405EDF50
 * Callers:
 *     PopTimeoutWakeTracking @ 0x140154DF4 (PopTimeoutWakeTracking.c)
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

LONG __fastcall PopFinalizeWakeInfo(__int64 a1)
{
  LONG result; // eax
  __int64 **v3; // rdi
  __int64 *i; // rbx
  void *v5; // rcx
  void *v6; // rcx

  result = KeSetEvent(&PopWakeSourceAvailable, 0, 0);
  v3 = (__int64 **)(a1 + 24);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( !*((_DWORD *)i + 4) )
    {
      v5 = (void *)i[6];
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0x206D654Du);
        result = 0;
        i[5] = 0LL;
        i[6] = 0LL;
      }
      v6 = (void *)i[8];
      if ( v6 )
      {
        ExFreePoolWithTag(v6, 0x206D654Du);
        result = 0;
        i[7] = 0LL;
        i[8] = 0LL;
      }
    }
  }
  return result;
}
