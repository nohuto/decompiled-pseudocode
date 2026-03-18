/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x180120A88
 * Callers:
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180120490 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@EEAA@XZ @ 0x18012065C (--1CConnection@@EEAA@XZ.c)
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1801207A8 (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x18018DDAC (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this)
{
  if ( *((_BYTE *)this + 168) )
  {
    *((_BYTE *)this + 168) = 0;
    SetEvent(*(HANDLE *)(*((_QWORD *)this + 12) + 8LL));
    WaitForSingleObject(*((HANDLE *)this + 22), 0xFFFFFFFF);
  }
  if ( _InterlockedExchangeAdd(&dword_18026EEC8, 0xFFFFFFFF) == 1 )
    CDisplayManager::CheckInUse(this);
}
