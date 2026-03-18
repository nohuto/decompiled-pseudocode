/*
 * XREFs of ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0019610
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C00197F0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     RIMDirectStartStopDeviceRead @ 0x1C0018DA0 (RIMDirectStartStopDeviceRead.c)
 *     ApiSetIsRemoteConnection @ 0x1C0018FD4 (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C001ADD0 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 */

__int64 __fastcall CHidInput::OnDirectStartStopReadNotification(CHidInput *this)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v4, 1, 0);
  if ( !(unsigned int)ApiSetIsRemoteConnection() )
  {
    v2 = *((_QWORD *)this + 1);
    if ( v2 != -1 )
      RIMDirectStartStopDeviceRead(v2);
  }
  if ( !v5 && v4 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return 0LL;
}
