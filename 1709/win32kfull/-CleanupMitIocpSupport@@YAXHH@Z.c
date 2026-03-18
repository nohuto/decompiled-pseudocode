/*
 * XREFs of ?CleanupMitIocpSupport@@YAXHH@Z @ 0x1C00FDB64
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C00FD450 (EditionDeactivateMitInput.c)
 *     ?InitMitIocpSupport@@YAJHPEAX0@Z @ 0x1C00FD804 (-InitMitIocpSupport@@YAJHPEAX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupMitIocpSupport(int a1, int a2)
{
  if ( !a1 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
    {
      ZwClose(*(HANDLE *)&WPP_MAIN_CB.ActiveThreadCount);
      *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
    }
    if ( WPP_MAIN_CB.SecurityDescriptor )
    {
      ZwClose(WPP_MAIN_CB.SecurityDescriptor);
      WPP_MAIN_CB.SecurityDescriptor = 0LL;
    }
    IOCPDispatcher::Close(gpIOCPDispatcher, a2 != 0);
    IOCPDispatcher_Destroy();
  }
}
