/*
 * XREFs of ??0CConnection@@AEAA@PEAUIDWMCoRenderEngine@@@Z @ 0x18005E4E8
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800C9A50 (-MilCompositionEngine_Initialize@@YAJHPEAUIDWMCoRenderEngine@@PEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CConnection *__fastcall CConnection::CConnection(CConnection *this, struct IDWMCoRenderEngine *a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CConnection::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = &CChannelTable::`vftable';
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 6) = 24;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *((_DWORD *)this + 12) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  *((_QWORD *)this + 20) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDWMCoRenderEngine *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
