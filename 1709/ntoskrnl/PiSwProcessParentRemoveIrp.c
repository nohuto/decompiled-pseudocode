/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x14055E648
 * Callers:
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PiSwFindChildren @ 0x140553A24 (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x14055E718 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x14055E74C (PiSwFindSwDevice.c)
 *     PiSwFindPdoAssociation @ 0x1405E3F10 (PiSwFindPdoAssociation.c)
 *     PiSwDestroyDeviceObject @ 0x1406CDAA0 (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x1406CE2EC (PiSwProcessRemove.c)
 */

_QWORD *__fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *result; // rax
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  __int64 v7; // r8
  _QWORD *v8; // r14
  __int64 SwDevice; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rcx
  __int64 PdoAssociation; // rax
  struct _DEVICE_OBJECT *v13; // rbp

  if ( a1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v2 = 0LL;
  result = (_QWORD *)(v2 + 40);
  v4 = (v2 + 40) & -(__int64)(v2 != 0);
  if ( *(_QWORD *)(v4 + 8) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    Children = (_QWORD **)PiSwFindChildren();
    v8 = Children;
    if ( Children )
    {
      v10 = *Children;
      while ( v10 != v8 )
      {
        v11 = v10 - 12;
        LOBYTE(v7) = 1;
        v10 = (_QWORD *)*v10;
        PdoAssociation = PiSwFindPdoAssociation(v11, a1, v7);
        if ( PdoAssociation )
        {
          v13 = *(struct _DEVICE_OBJECT **)(PdoAssociation + 24);
          if ( (*((_DWORD *)v13->DeviceExtension + 2) & 0x20) == 0 )
            PiSwProcessRemove(v13, 0LL);
          PiSwDestroyDeviceObject(v13);
        }
      }
    }
    SwDevice = PiSwFindSwDevice(*(NTSTRSAFE_PCWSTR *)(v4 + 8));
    if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
      PiSwCloseDescendants(v4);
    ExReleaseResourceLite(&PiSwLockObj);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
