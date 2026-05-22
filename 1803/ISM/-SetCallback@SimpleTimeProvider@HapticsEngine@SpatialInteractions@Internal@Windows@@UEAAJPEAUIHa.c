/*
 * XREFs of ?SetCallback@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJPEAUIHapticsTimerCallback@345@@Z @ 0x1800D4D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::SetCallback(
        Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *this,
        struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback *v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = (struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback *)*((_QWORD *)this + 9);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = (struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback *)*((_QWORD *)this + 9);
    }
    *((_QWORD *)this + 9) = a2;
    if ( v5 )
      (*(void (__fastcall **)(struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
