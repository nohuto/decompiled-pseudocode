/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x180143824
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800C9A50 (-MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180143580 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@EEAA@XZ @ 0x1801435D0 (--1CConnection@@EEAA@XZ.c)
 * Callees:
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x1801C5A5C (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this)
{
  if ( *((_BYTE *)this + 168) )
  {
    *((_BYTE *)this + 168) = 0;
    SetEvent(*(HANDLE *)(*((_QWORD *)this + 12) + 8LL));
    WaitForSingleObject(*((HANDLE *)this + 22), 0xFFFFFFFF);
  }
  if ( _InterlockedExchangeAdd(&dword_1802D6448, 0xFFFFFFFF) == 1 )
    CDisplayManager::CheckInUse(this);
}
