/*
 * XREFs of NewObjOwner @ 0x1C00134CC
 * Callers:
 *     InitializeNativeNamespace @ 0x1C0012064 (InitializeNativeNamespace.c)
 *     ParseLoad @ 0x1C0013100 (ParseLoad.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C005C770 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C005D640 (NotifyObjectDestruction.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall NewObjOwner(__int64 a1, struct _EX_RUNDOWN_REF **a2)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v4; // rax
  KIRQL v5; // al
  struct _EX_RUNDOWN_REF **v6; // rcx
  struct _EX_RUNDOWN_REF *v7; // rax

  v3 = 0;
  v4 = (struct _EX_RUNDOWN_REF *)HeapAlloc(a1, 1314344776, 0x40u);
  *a2 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    LODWORD((*a2)[2].Count) = 1380865871;
    ExInitializeRundownProtection(*a2 + 4);
    KeInitializeSpinLock(&(*a2)[5].Count);
    v5 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v6 = (struct _EX_RUNDOWN_REF **)off_1C00763B0;
    byte_1C0079CF0 = v5;
    v7 = *a2;
    if ( *off_1C00763B0 != (_UNKNOWN *)&glistObjOwners )
      __fastfail(3u);
    v7[1].Count = (unsigned __int64)off_1C00763B0;
    v7->Count = (unsigned __int64)&glistObjOwners;
    *v6 = v7;
    off_1C00763B0 = (_UNKNOWN **)v7;
    KeReleaseSpinLock(&gmutOwnerList, byte_1C0079CF0);
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v3;
}
