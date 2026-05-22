/*
 * XREFs of ?OnSystemContextNotification@ISMHeatFrameworkHost@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180039F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISMHeatFrameworkHost::OnSystemContextNotification(
        ISMHeatFrameworkHost *this,
        struct SystemContextMessage *a2)
{
  if ( *(_DWORD *)a2 == 1 )
    return ISMHeatFrameworkHost::BroadcastInputConfigMessage((ISMHeatFrameworkHost *)((char *)this - 8), a2, 0LL);
  else
    return 2147942487LL;
}
