/*
 * XREFs of ?GetInterruptPeriodicity@CSubmixImpl@@UEAA_JXZ @ 0x140012240
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140010890 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::GetInterruptPeriodicity(CSubmixImpl *this)
{
  return *((_QWORD *)this + 24);
}
