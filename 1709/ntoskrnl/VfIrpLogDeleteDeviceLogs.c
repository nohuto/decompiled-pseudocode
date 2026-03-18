/*
 * XREFs of VfIrpLogDeleteDeviceLogs @ 0x1407C0D60
 * Callers:
 *     VfIoDeleteDevice @ 0x1407B4248 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ViIrpLogDatabaseFindPointer @ 0x1407C13F8 (ViIrpLogDatabaseFindPointer.c)
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
      if ( *(_QWORD **)(v5 + 8) != v4 + 1 || (v6 = (_QWORD *)v4[2], (_QWORD *)*v6 != v4 + 1) )
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
