/*
 * XREFs of ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18001BC20
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800C6EC0 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x180157D20 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDisplay::HasDDAChanged(CDisplay *this)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    LOBYTE(v2) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 0;
    LOBYTE(v2) = *((unsigned __int8 *)this + 328) != v2;
  }
  return v2;
}
