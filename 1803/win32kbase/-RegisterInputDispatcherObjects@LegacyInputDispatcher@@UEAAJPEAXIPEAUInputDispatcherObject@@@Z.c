/*
 * XREFs of ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C01243F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0030A3C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     ?GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ @ 0x1C0122950 (-GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::RegisterInputDispatcherObjects(
        LegacyInputDispatcher *this,
        __int64 a2,
        unsigned int a3,
        struct InputDispatcherObject *a4)
{
  int v9; // eax
  unsigned int i; // r9d
  __int64 v11; // rcx
  __int64 v12; // rdx

  if ( a3 + *((_DWORD *)this + 13) <= *((_DWORD *)this + 11) )
  {
    if ( !*((_QWORD *)this + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v9 = LegacyInputDispatcher::GetDispatcherObjectCallbackIdexForWrite(this, a2);
    for ( i = 0; i < a3; *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v12 + 8) = a2 )
    {
      v11 = *(_QWORD *)a4;
      a4 = (struct InputDispatcherObject *)((char *)a4 + 24);
      *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * (i + *((_DWORD *)this + 13))) = v11;
      v12 = 2LL * (i + v9);
      ++i;
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v12) = *((_QWORD *)a4 - 1);
    }
    if ( !LegacyInputDispatcher::HasInputDispatcherObjects(this) )
      *((_DWORD *)this + 10) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 13) += a3;
    return 0LL;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    return 3221225485LL;
  }
}
