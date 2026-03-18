/*
 * XREFs of ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000F238
 * Callers:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C000F294 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C00FB2E8 (DpiMiracastQueryMiracastSupportForFDO.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 */

void __fastcall AUTO_PNPPOWER_LOCK::Acquire(AUTO_PNPPOWER_LOCK *this)
{
  if ( !*((_BYTE *)this + 10) )
  {
    if ( *((_BYTE *)this + 8) )
    {
      if ( *((_BYTE *)this + 9) )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(*(_QWORD *)this + 483LL) )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 64LL)
                                                          + 3912LL));
      }
      else
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(*(_QWORD *)this + 483LL) )
          DpiCheckForOutstandingD3Requests();
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)this + 168LL), 1u);
    }
    else
    {
      if ( *((_BYTE *)this + 9) )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(*(_QWORD *)this + 483LL) )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 64LL)
                                                          + 3912LL));
      }
      else
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(*(_QWORD *)this + 483LL) )
          DpiCheckForOutstandingD3Requests();
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)this + 168LL), 1u);
    }
    *((_BYTE *)this + 10) = 1;
  }
}
