/*
 * XREFs of ?InitMitIocpSupport@@YAJHPEAX0@Z @ 0x1C01090D8
 * Callers:
 *     EditionActivateMitInput @ 0x1C0108F20 (EditionActivateMitInput.c)
 * Callees:
 *     ?CleanupMitIocpSupport@@YAXHH@Z @ 0x1C0109C50 (-CleanupMitIocpSupport@@YAXHH@Z.c)
 */

__int64 __fastcall InitMitIocpSupport(int a1, void *a2, void *a3)
{
  HANDLE v3; // rbx

  v3 = ghDITRITEvent;
  if ( a1 )
    return 0LL;
  ghDITEventWcp = IOCPDispatcher::PrepareNonSenserHandleForIOCP(gpIOCPDispatcher, ghDITEvent);
  if ( ghDITEventWcp )
  {
    ghDITRITEventWcp = IOCPDispatcher::PrepareNonSenserHandleForIOCP(gpIOCPDispatcher, v3);
    if ( ghDITRITEventWcp )
      return 0LL;
  }
  CleanupMitIocpSupport(0, 0);
  return 3221225473LL;
}
