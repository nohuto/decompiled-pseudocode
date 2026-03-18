/*
 * XREFs of NewObjOwner @ 0x1C00472E8
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0045160 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     InitializeNativeNamespace @ 0x1C0045510 (InitializeNativeNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x1C00457B8 (AMLIAddNamespaceOverride.c)
 *     NotifyObjectDestruction @ 0x1C00473D8 (NotifyObjectDestruction.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseLoad @ 0x1C0055700 (ParseLoad.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
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
    v6 = (struct _EX_RUNDOWN_REF **)off_1C0065E18;
    byte_1C0068668 = v5;
    v7 = *a2;
    if ( *off_1C0065E18 != (_UNKNOWN *)&glistObjOwners )
      __fastfail(3u);
    v7[1].Count = (unsigned __int64)off_1C0065E18;
    v7->Count = (unsigned __int64)&glistObjOwners;
    *v6 = v7;
    off_1C0065E18 = (_UNKNOWN **)v7;
    KeReleaseSpinLock(&gmutOwnerList, byte_1C0068668);
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v3;
}
