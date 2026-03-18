/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C0009818
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00A5880 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C01008E0 (RIMAddInputOfType.c)
 * Callees:
 *     rimPassivateSecondaryRims @ 0x1C0009354 (rimPassivateSecondaryRims.c)
 *     DeviceTypeToRimInputType @ 0x1C0009F40 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ApiSetIsRemoteConnection @ 0x1C0018FD4 (ApiSetIsRemoteConnection.c)
 *     rimFindReferencedPrimaryRimObj @ 0x1C0095BD0 (rimFindReferencedPrimaryRimObj.c)
 *     rimScheduleSecondaryRimPnpNotifications @ 0x1C010F624 (rimScheduleSecondaryRimPnpNotifications.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(unsigned int *Object)
{
  NTSTATUS ReferencedPrimaryRimObj; // ebp
  __int64 v3; // rdi
  bool v4; // bl
  int v5; // edx
  __int64 v6; // rbx
  PVOID *v7; // r15
  _QWORD *v8; // rdi
  int v9; // edx
  __int64 v11; // rcx
  int v12; // edx
  PVOID v13; // rbx
  PVOID Objecta; // [rsp+68h] [rbp+10h] BYREF

  ReferencedPrimaryRimObj = -1073741811;
  if ( (unsigned int)ApiSetIsRemoteConnection() || !*((_QWORD *)Object + 14) )
    return 0;
  v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v4 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v3 + 40);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    if ( Object[245] )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        19,
        10,
        (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids,
        (char)Object);
      v11 = Object[19];
      Objecta = 0LL;
      ReferencedPrimaryRimObj = rimFindReferencedPrimaryRimObj(v11, &Objecta);
      if ( ReferencedPrimaryRimObj < 0 )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          19,
          12,
          (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids,
          (char)Object);
      }
      else
      {
        v13 = Objecta;
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_qq(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          19,
          11,
          (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids,
          (char)Object,
          (char)Objecta);
        Object[250] = 1;
        rimScheduleSecondaryRimPnpNotifications(v13);
        ObfDereferenceObject(v13);
      }
      return (unsigned int)ReferencedPrimaryRimObj;
    }
    if ( Object[244] && (Object[19] & 0x20) != 0 )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        19,
        13,
        (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids,
        (char)Object);
      rimPassivateSecondaryRims((struct _LIST_ENTRY *)Object);
    }
  }
  v6 = 0LL;
  v7 = (PVOID *)(Object + 30);
  v8 = Object + 90;
  do
  {
    if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)v6) & Object[19]) != 0 )
    {
      if ( *v8 )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          18,
          14,
          (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids);
      }
      else
      {
        ReferencedPrimaryRimObj = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
        if ( ReferencedPrimaryRimObj >= 0 )
        {
          ReferencedPrimaryRimObj = IoRegisterPlugPlayNotification(
                                      EventCategoryDeviceInterfaceChange,
                                      1u,
                                      *v7,
                                      *((PDRIVER_OBJECT *)Object + 14),
                                      RIMDeviceClassNotify,
                                      &Object[4 * (unsigned int)v6 + 96],
                                      (PVOID *)&Object[2 * v6 + 90]);
          if ( ReferencedPrimaryRimObj < 0 )
            ObfDereferenceObject(Object);
        }
      }
    }
    v6 = (unsigned int)(v6 + 1);
    ++v8;
    v7 += 10;
  }
  while ( (unsigned int)v6 <= 2 );
  return (unsigned int)ReferencedPrimaryRimObj;
}
