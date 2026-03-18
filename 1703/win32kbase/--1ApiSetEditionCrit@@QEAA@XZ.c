/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0051E4C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( *(_DWORD *)this && !*((_DWORD *)this + 1) && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
}
