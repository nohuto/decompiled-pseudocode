/*
 * XREFs of PopFxRegisterDevice @ 0x1405BE594
 * Callers:
 *     PoFxRegisterDevice @ 0x1405BE400 (PoFxRegisterDevice.c)
 *     PoFxEnableDStateReporting @ 0x1406C7370 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterPrimaryDevice @ 0x1406C74D0 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetAttachedDeviceReference @ 0x140091AB0 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     PopFxInsertDevice @ 0x14015EBA8 (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x14015EC40 (PopFxAssignDeviceToDevNode.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 *     PopFxTraceDeviceRegistration @ 0x140453DB0 (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 */

__int64 __fastcall PopFxRegisterDevice(
        struct _DEVICE_OBJECT *Object,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v7; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r14
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  __int64 DeviceNode; // rsi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+50h] [rbp-38h] BYREF

  v7 = 0LL;
  v19 = 0LL;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Object);
  if ( DeviceAttachmentBaseRef )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(Object);
    if ( AttachedDeviceReference )
    {
      DeviceNode = (__int64)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        if ( (*(_DWORD *)(DeviceNode + 296) & 1) != 0 )
        {
          v15 = PopFxRegisterDeviceWorker(
                  *(_QWORD *)(DeviceNode + 128),
                  (int)DeviceNode + 280,
                  a2,
                  a3,
                  a4,
                  a5,
                  AttachedDeviceReference->StackSize + 1,
                  a6,
                  (__int64)&v19);
          if ( v15 >= 0 )
          {
            v7 = v19;
            v19[6] = DeviceNode;
            if ( *(_QWORD *)(DeviceNode + 80) )
              PopFxBugCheck(0x600uLL, *(_QWORD *)(DeviceNode + 32), 0LL, 0LL);
            PopFxAssignDeviceToDevNode(DeviceNode, (__int64)v7);
            ObfReferenceObject(Object);
            v7[12] = Object;
            v7[13] = AttachedDeviceReference;
            PopFxTraceDeviceRegistration((__int64)v7, 0);
            PopFxInsertDevice(v17, v16, v7);
            AttachedDeviceReference = 0LL;
            DeviceAttachmentBaseRef = 0LL;
            v15 = 0;
          }
        }
        else
        {
          v15 = -1073741661;
        }
      }
      else
      {
        v15 = -1073741811;
      }
      if ( AttachedDeviceReference )
        ObfDereferenceObject(AttachedDeviceReference);
    }
    else
    {
      v15 = -1073741811;
    }
    if ( DeviceAttachmentBaseRef )
      ObfDereferenceObject(DeviceAttachmentBaseRef);
  }
  else
  {
    v15 = -1073741811;
  }
  *a7 = v7;
  return (unsigned int)v15;
}
