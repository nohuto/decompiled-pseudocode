/*
 * XREFs of ?CleanupMitIocpSupport@@YAXHH@Z @ 0x1C0109C50
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C0108D50 (EditionDeactivateMitInput.c)
 *     ?InitMitIocpSupport@@YAJHPEAX0@Z @ 0x1C01090D8 (-InitMitIocpSupport@@YAJHPEAX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupMitIocpSupport(int a1, int a2)
{
  if ( !a1 )
  {
    if ( ghDITEventWcp )
    {
      ZwClose(ghDITEventWcp);
      ghDITEventWcp = 0LL;
    }
    if ( ghDITRITEventWcp )
    {
      ZwClose(ghDITRITEventWcp);
      ghDITRITEventWcp = 0LL;
    }
    IOCPDispatcher::Close(gpIOCPDispatcher, a2 != 0);
    IOCPDispatcher_Destroy();
  }
}
