/*
 * XREFs of FreeOwnedObjects @ 0x1C005D608
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C005BC58 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     ParseUnload @ 0x1C0062A70 (ParseUnload.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 */

void __fastcall FreeOwnedObjects(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  KIRQL v4; // al
  __int64 v5; // rbx
  __int64 v6; // rdi

  byte_1C00779A0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v2 = *a1;
  v3 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseSpinLock(&gmutOwnerList, byte_1C00779A0);
  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = a1[3];
  if ( v5 )
  {
    do
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
      v6 = *(_QWORD *)(v5 + 56);
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx((volatile signed __int32 *)(v5 + 120), 0LL);
      else
        FreeNameSpaceObjects((_QWORD *)v5);
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v5 = v6;
    }
    while ( v6 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
