/*
 * XREFs of ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x1800357F0
 * Callers:
 *     ServiceStart @ 0x180034DA8 (ServiceStart.c)
 * Callees:
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

void __fastcall CAudioSrv::ServiceStart(CAudioSrv *this)
{
  HANDLE v1; // rax

  v1 = g_hCanAcceptMMCClientEvent;
  if ( g_hCanAcceptMMCClientEvent )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
      v1 = g_hCanAcceptMMCClientEvent;
    }
    SetEvent(v1);
  }
}
