/*
 * XREFs of PoThermalCounterSetCallback @ 0x1406CBA30
 * Callers:
 *     <none>
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcspbrk @ 0x14016C530 (wcspbrk.c)
 *     PcwAddInstance @ 0x140548F20 (PcwAddInstance.c)
 *     PopThermalReadCounters @ 0x1406CBCC0 (PopThermalReadCounters.c)
 */

__int64 __fastcall PoThermalCounterSetCallback(int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS Counters; // ebp
  char v4; // r15
  struct _PCW_BUFFER *v7; // r13
  __int64 i; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v10; // rdi
  char *DeviceNode; // rsi
  unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  int v15; // eax
  ULONG v16; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  Counters = 0;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  if ( a1 == 2 )
  {
    v7 = (struct _PCW_BUFFER *)a2[3];
LABEL_6:
    v4 = 1;
    goto LABEL_7;
  }
  if ( a1 != 3 )
    goto LABEL_27;
  v7 = (struct _PCW_BUFFER *)a2[3];
  if ( wcspbrk(*(const wchar_t **)(a2[1] + 8LL), L"*?") )
    goto LABEL_6;
LABEL_7:
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 65) & 2) != 0 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(i + 48));
      v10 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      if ( DeviceNode )
      {
        if ( v4 )
          goto LABEL_19;
        v12 = *(unsigned __int16 **)(a2[1] + 8LL);
        v13 = *((_QWORD *)DeviceNode + 36) - (_QWORD)v12;
        do
        {
          v14 = *(unsigned __int16 *)((char *)v12 + v13);
          v15 = *v12 - v14;
          if ( v15 )
            break;
          ++v12;
        }
        while ( v14 );
        if ( !v15 )
        {
LABEL_19:
          v19[0] = 0LL;
          v19[1] = 0LL;
          if ( a1 == 3 )
          {
            Counters = PopThermalReadCounters(i, *a2, v19);
            if ( Counters < 0 )
            {
              ObfDereferenceObject(v10);
              break;
            }
          }
          v16 = *(_DWORD *)(i + 496);
          Data.Data = v19;
          Data.Size = 16;
          Counters = PcwAddInstance(v7, (PCUNICODE_STRING)(DeviceNode + 280), v16, 1u, &Data);
        }
        ObfDereferenceObject(v10);
        if ( Counters < 0 )
          break;
      }
      else
      {
        ObfDereferenceObject(DeviceAttachmentBaseRef);
      }
    }
  }
LABEL_27:
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  return (unsigned int)Counters;
}
