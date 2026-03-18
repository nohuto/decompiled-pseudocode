/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x140570C2C
 * Callers:
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PiSwFindChildren @ 0x140450FE0 (PiSwFindChildren.c)
 *     PiSwFindPdoAssociation @ 0x14045A1C0 (PiSwFindPdoAssociation.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x14056D64C (PiSwDestroyDeviceObject.c)
 *     PiSwCloseDescendants @ 0x140570CFC (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x140570D30 (PiSwFindSwDevice.c)
 */

__int64 __fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  _QWORD *v7; // r14
  __int64 SwDevice; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 PdoAssociation; // rax
  struct _DEVICE_OBJECT *v12; // rbp

  if ( a1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v2 = 0LL;
  result = v2 + 40;
  v4 = (v2 + 40) & -(__int64)(v2 != 0);
  if ( *(_QWORD *)(v4 + 8) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    Children = (_QWORD **)PiSwFindChildren();
    v7 = Children;
    if ( Children )
    {
      v9 = *Children;
      while ( v9 != v7 )
      {
        v10 = (__int64)(v9 - 12);
        v9 = (_QWORD *)*v9;
        PdoAssociation = PiSwFindPdoAssociation(v10, a1, 1);
        if ( PdoAssociation )
        {
          v12 = *(struct _DEVICE_OBJECT **)(PdoAssociation + 24);
          if ( (*((_DWORD *)v12->DeviceExtension + 2) & 0x20) == 0 )
            PiSwProcessRemove((__int64)v12, 0);
          PiSwDestroyDeviceObject(v12);
        }
      }
    }
    SwDevice = PiSwFindSwDevice(*(NTSTRSAFE_PCWSTR *)(v4 + 8));
    if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
      PiSwCloseDescendants(v4);
    ExReleaseResourceLite(&PiSwLockObj);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
