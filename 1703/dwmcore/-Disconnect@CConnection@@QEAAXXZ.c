/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x180138A50
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800CB680 (-MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1801387C0 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@EEAA@XZ @ 0x180138810 (--1CConnection@@EEAA@XZ.c)
 * Callees:
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180185CA8 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this)
{
  if ( *((_BYTE *)this + 168) )
  {
    *((_BYTE *)this + 168) = 0;
    SetEvent(*(HANDLE *)(*((_QWORD *)this + 12) + 8LL));
    WaitForSingleObject(*((HANDLE *)this + 22), 0xFFFFFFFF);
  }
  if ( _InterlockedExchangeAdd(&dword_18023E548, 0xFFFFFFFF) == 1 )
    CDisplayManager::CheckInUse(this);
}
