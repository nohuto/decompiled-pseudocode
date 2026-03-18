/*
 * XREFs of FreeOwnedObjects @ 0x1C0046A88
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0045160 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x1C00457B8 (AMLIAddNamespaceOverride.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseUnload @ 0x1C0056C30 (ParseUnload.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     FreeNameSpaceObjects @ 0x1C004A020 (FreeNameSpaceObjects.c)
 */

void __fastcall FreeOwnedObjects(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  KIRQL v4; // al
  __int64 v5; // rbx
  __int64 v6; // rdi

  byte_1C0068668 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseSpinLock(&gmutOwnerList, byte_1C0068668);
  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = a1[3];
  if ( v5 )
  {
    do
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
      v6 = *(_QWORD *)(v5 + 56);
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx((volatile signed __int32 *)(v5 + 120));
      else
        FreeNameSpaceObjects(v5);
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v5 = v6;
    }
    while ( v6 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
