/*
 * XREFs of ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x180063830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

void __fastcall CAudioSrv::ServiceStart(CAudioSrv *this)
{
  HANDLE v1; // rax

  v1 = g_hCanAcceptMMCClientEvent;
  if ( g_hCanAcceptMMCClientEvent )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids);
      v1 = g_hCanAcceptMMCClientEvent;
    }
    SetEvent(v1);
  }
}
