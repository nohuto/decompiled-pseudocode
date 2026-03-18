/*
 * XREFs of VfIrpLogDeleteDeviceLogs @ 0x14077ED90
 * Callers:
 *     VfIoDeleteDevice @ 0x140772498 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ViIrpLogDatabaseFindPointer @ 0x14077F41C (ViIrpLogDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpLogDeleteDeviceLogs(__int64 a1)
{
  KIRQL v2; // di
  __int64 Pointer; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 result; // rax
  _DWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  Pointer = ViIrpLogDatabaseFindPointer(a1, &v8);
  v4 = (_QWORD *)Pointer;
  if ( Pointer )
  {
    if ( *v8 )
    {
      *(_DWORD *)(Pointer + 24) |= 4u;
    }
    else
    {
      ObfDereferenceObject(*(PVOID *)Pointer);
      v5 = v4[1];
      v6 = (_QWORD *)v4[2];
      if ( *(_QWORD **)(v5 + 8) != v4 + 1 || (_QWORD *)*v6 != v4 + 1 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0);
    }
  }
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  result = v2;
  __writecr8(v2);
  return result;
}
