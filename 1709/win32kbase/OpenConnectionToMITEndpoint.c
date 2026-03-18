/*
 * XREFs of OpenConnectionToMITEndpoint @ 0x1C0087D60
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0087C60 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     Broadcast @ 0x1C0061734 (Broadcast.c)
 *     CoreMsgOpenConnection @ 0x1C0087E20 (CoreMsgOpenConnection.c)
 */

__int64 __fastcall OpenConnectionToMITEndpoint(int a1)
{
  HANDLE *v2; // r8
  struct CInpPushLock *v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx

  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v2 = &gInputDeliveryConnectionHandle;
        break;
      case 2:
        v2 = &gInputFocusConnectionHandle;
        break;
      case 3:
        v2 = &gInputAttemptedConnectionHandle;
        break;
      case 4:
        v2 = &gInputInteropISMConnectionHandle;
        break;
      case 5:
        v2 = &gFireViewHitTestConnectionHandle;
        break;
      case 6:
        v2 = &gInputConfigConnectionHandle;
        break;
      case 7:
        v2 = &gInputInteropMTConnectionHandle;
        break;
      default:
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    v2 = &gCursorManagementConnectionHandle;
  }
  if ( *v2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v5 = CoreMsgOpenConnection(0LL);
    if ( v5 >= 0 && a1 == 6 )
      Broadcast(v4, v3);
  }
  return (unsigned int)v5;
}
