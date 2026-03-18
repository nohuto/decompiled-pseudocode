/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C0093588
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C009A540 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C01004A0 (RIMAddInputOfType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     ApiSetIsRemoteConnection @ 0x1C0051DB0 (ApiSetIsRemoteConnection.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     rimFindReferencedPrimaryRimObj @ 0x1C008E7AC (rimFindReferencedPrimaryRimObj.c)
 *     rimPassivateSecondaryRims @ 0x1C00930C4 (rimPassivateSecondaryRims.c)
 *     DeviceTypeToRimInputType @ 0x1C0093CB0 (DeviceTypeToRimInputType.c)
 *     rimScheduleSecondaryRimPnpNotifications @ 0x1C0110B8C (rimScheduleSecondaryRimPnpNotifications.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(char *Object)
{
  int ReferencedPrimaryRimObj; // ebp
  __int64 v3; // rdi
  bool v4; // bl
  __int64 v5; // rbx
  PVOID *v6; // r15
  _QWORD *v7; // rdi
  int v8; // edx
  int v10; // ecx
  PVOID v11; // rbx
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
    if ( *((_DWORD *)Object + 245) )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xAu,
        (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids,
        Object);
      v10 = *((_DWORD *)Object + 19);
      Objecta = 0LL;
      ReferencedPrimaryRimObj = rimFindReferencedPrimaryRimObj(v10, (struct _LIST_ENTRY **)&Objecta);
      if ( ReferencedPrimaryRimObj < 0 )
      {
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0xCu,
          (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids,
          Object);
      }
      else
      {
        v11 = Objecta;
        WPP_RECORDER_SF_qq(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0xBu,
          (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids,
          Object,
          Objecta);
        *((_DWORD *)Object + 250) = 1;
        rimScheduleSecondaryRimPnpNotifications(v11);
        ObfDereferenceObject(v11);
      }
      return (unsigned int)ReferencedPrimaryRimObj;
    }
    if ( *((_DWORD *)Object + 244) && (*((_DWORD *)Object + 19) & 0x20) != 0 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xDu,
        (__int64)&WPP_909fd94d85043525880c3e78184aac30_Traceguids,
        Object);
      rimPassivateSecondaryRims((struct _LIST_ENTRY *)Object);
    }
  }
  v5 = 0LL;
  v6 = (PVOID *)(Object + 120);
  v7 = Object + 360;
  do
  {
    if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)v5) & *((_DWORD *)Object + 19)) != 0 )
    {
      if ( *v7 )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
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
                                      *v6,
                                      *((PDRIVER_OBJECT *)Object + 14),
                                      RIMDeviceClassNotify,
                                      &Object[16 * (unsigned int)v5 + 384],
                                      (PVOID *)&Object[8 * v5 + 360]);
          if ( ReferencedPrimaryRimObj < 0 )
            ObfDereferenceObject(Object);
        }
      }
    }
    v5 = (unsigned int)(v5 + 1);
    ++v7;
    v6 += 10;
  }
  while ( (unsigned int)v5 <= 2 );
  return (unsigned int)ReferencedPrimaryRimObj;
}
