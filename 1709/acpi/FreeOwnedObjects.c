/*
 * XREFs of FreeOwnedObjects @ 0x1C005D408
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C005C770 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     ParseUnload @ 0x1C0063C40 (ParseUnload.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 */

void __fastcall FreeOwnedObjects(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  KIRQL v4; // al
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi

  byte_1C0079CF0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseSpinLock(&gmutOwnerList, byte_1C0079CF0);
  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = (_QWORD *)a1[3];
  if ( v5 )
  {
    do
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
      v6 = (_QWORD *)v5[7];
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx((__int64)(v5 + 15));
      else
        FreeNameSpaceObjects(v5);
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v5 = v6;
    }
    while ( v6 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
