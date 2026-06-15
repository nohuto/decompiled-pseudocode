/*
 * XREFs of ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x18005C440
 * Callers:
 *     ServiceStart @ 0x18005A5FC (ServiceStart.c)
 * Callees:
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 */

void __fastcall CAudioSrv::ServiceStart(CAudioSrv *this)
{
  HANDLE v1; // rax

  v1 = g_hCanAcceptMMCClientEvent;
  if ( g_hCanAcceptMMCClientEvent )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_50e5db73954a39d05dfaedbce4ea5db2_Traceguids);
      v1 = g_hCanAcceptMMCClientEvent;
    }
    SetEvent(v1);
  }
}
