/*
 * XREFs of AMLIFinalizeObject @ 0x1C0043734
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C0028364 (ACPIInitDeleteDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C003B510 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     AMLIRestartContext @ 0x1C00442C0 (AMLIRestartContext.c)
 *     SetObjectsFlag @ 0x1C004A8E4 (SetObjectsFlag.c)
 */

void __fastcall AMLIFinalizeObject(_QWORD *a1, char a2)
{
  KIRQL v3; // al
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rbx
  KIRQL v8; // al
  bool v9; // di

  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( a2 )
  {
    ExAcquireSpinLockShared(&ACPINamespaceLock);
    v3 = SetObjectsFlag(*a1, 64LL);
    v6 = *(_QWORD *)(v5 + 136);
    if ( v6 )
      v3 = SetObjectsFlag(v6, v4);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
  }
  v7 = *(_QWORD *)(*a1 + 48LL);
  if ( v7 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 40));
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 48), 0xFFFFFFFF) == 1 && *(_QWORD *)(v7 + 56);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 40), v8);
    if ( v9 )
      AMLIRestartContext(*(_QWORD *)(v7 + 56));
  }
}
