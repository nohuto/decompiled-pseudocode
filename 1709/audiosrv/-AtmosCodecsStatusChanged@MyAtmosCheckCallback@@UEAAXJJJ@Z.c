/*
 * XREFs of ?AtmosCodecsStatusChanged@MyAtmosCheckCallback@@UEAAXJJJ@Z @ 0x1800CE170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MyAtmosCheckCallback::AtmosCodecsStatusChanged(MyAtmosCheckCallback *this)
{
  void (*v1)(void); // rbx
  void (*v2)(void); // [rsp+20h] [rbp-18h]

  if ( MyAtmosCheckCallback::m_pCallback )
  {
    EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
    v1 = v2;
    if ( CSpatialAudioTech::s_spAtmosCheck )
      v1 = (void (*)(void))MyAtmosCheckCallback::m_pCallback;
    LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
    if ( v1 )
      v1();
  }
}
